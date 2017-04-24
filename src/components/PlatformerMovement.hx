package components;

import luxe.Component;
import components.ConnectInput;

import components.Physics;
import luxe.components.sprite.SpriteAnimation;

import luxe.Sprite;

import luxe.Input;

import C;
import Util;

class PlatformerMovement extends Component {
	public var speed = 6;

	var physicsComponent : Physics;
	var animationComponent : SpriteAnimation;

	var keepAttackAnimation : Float = 0;

	var sprite : Sprite;

	public function new() {
		super({
			name: 'PlatformerMovement'
		});
	}

	override function onadded() {
		sprite = cast entity;
	}

	override function init() {
		add(new ConnectInput());
		physicsComponent = cast get('Physics');
		animationComponent = cast get('SpriteAnimation');
	}

	override function update(dt:Float) {
		physicsComponent.velocity.x = 0;
		if(Luxe.input.inputdown('left')) {
			physicsComponent.velocity.x -= speed;
			sprite.flipx = true;
		}else if(Luxe.input.inputdown('right')) {
			physicsComponent.velocity.x += speed;
			sprite.flipx = false;
		}

		if(Luxe.input.inputdown('jump') && physicsComponent.touchingGround) {
			physicsComponent.velocity.y = -15;
		}

		if(physicsComponent.velocity.x == 0) {
			if(animationComponent.animation != 'idle') {
				animationComponent.animation = 'idle';
			}
		} else {
			if(animationComponent.animation != 'walk') {
				animationComponent.animation = 'walk';
			}
		}

		if(physicsComponent.velocity.y < 0) {
			if(animationComponent.animation != 'jump') {
				animationComponent.animation = 'jump';
			}
		} else if(physicsComponent.velocity.y > 0) {
			if(animationComponent.animation != 'fall') {
				animationComponent.animation = 'fall';
			}
		}

		if(Luxe.input.inputpressed('attack') && keepAttackAnimation < -0.1) {
			keepAttackAnimation = 0.210;
			for(enemy in C.enemies) {
				if(Util.AABBCheckWithBroadphaseBox(physicsComponent, { pos: enemy.pos, size: enemy.size })) {
					if(sprite.flipx) {
						if(enemy.pos.x < sprite.pos.x) {
							enemy.wound();
						}
					} else {
						if(enemy.pos.x > sprite.pos.x) {
							enemy.wound();
						}
					}
				}
			}
		}

		if(keepAttackAnimation > 0) {
			animationComponent.animation = 'jump';
		}
		keepAttackAnimation -= dt;

		// Wrap 
		if(pos.x > 1024) {
			pos.x -= 2048;
			Luxe.camera.center.x -= 2048;
		} else if(pos.x < -1024) {
			pos.x += 2048;
			Luxe.camera.center.x += 2048;
		}

		if((pos.x + 32) < 400 && (pos.x + 32) > -400) {
			Luxe.camera.center.x -= Luxe.camera.center.x / 30;
		} else {
			Luxe.camera.center.x += ((pos.x + 32) - Luxe.camera.center.x) / 20;
		}
	}
}