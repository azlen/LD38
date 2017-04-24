package entities;

import luxe.Sprite;

import luxe.Vector;
import luxe.Color;

import components.Physics;

import luxe.components.sprite.SpriteAnimation;
import phoenix.Texture;

import C;

class Enemy extends Sprite {

	public var velocity = new Vector(0, 0);
	public var gravity = C.gravity;

	public var anim : SpriteAnimation;

	public var isDead = false;

	public var isBoss = false;

	var health : Int;
	var speed : Float;

	public function new(type:String, x:Int) {
		var image = Luxe.resources.texture('assets/images/'+ type +'.png');
	        //keep pixels crisp when scaling them, for pixel art
	    image.filter_min = image.filter_mag = FilterType.nearest;

	    var siz = 64;

	    if(C.bosses.indexOf(type) != -1) {
	    	trace('BOSS: ' + type);
	    	siz = 128;
	    	isBoss = true;
	    } 

		super({
			pos: new Vector(x, -siz),
			size: new Vector(siz, siz),
			texture: image
		});

		health = Reflect.field(C.enemyHealth, type);
		speed = Reflect.field(C.enemySpeed, type);

		centered = false;

		C.enemies.push(this);

		// Create Animation component and add it to sprite
		anim = add(new SpriteAnimation({ name: 'SpriteAnimation' }));
		// Create animation from previously loaded json

		var animType = type;
		if(Std.parseInt(animType.charAt(animType.length - 1)) != null) {
			animType = animType.substring(0, animType.length - 1);
		}
		var anim_data = Luxe.resources.json('assets/json/'+ animType +'Animation.json');
		anim.add_from_json_object( anim_data.asset.json );
		// Set idle animation to active
		anim.animation = 'idle';
		// 
		anim.play();

		// var physics = add(new Physics());
		// physics.ignoreCollisionsWith.push('Player');
	}

	override function update(dt:Float) {
		if(isDead) { return; }
		velocity.y += gravity;
		pos.y += velocity.y;
		if(pos.y > 500 - size.y) {
			pos.y = 500 - size.y;
			velocity.y = 0;
		}
		if((pos.x + size.x/2) < 0) {
			velocity.x = speed;
		} else if ((pos.x + size.x/2) > 0) {
			velocity.x = -speed;
		}
		pos.x += velocity.x;

		if(velocity.x < 0) {
			flipx = true;
		} else if (velocity.x > 0) {
			flipx = false;
		}

		if(velocity.x != 0) {
			if(anim.animation != 'walk') {
				anim.animation = 'walk';
			}
		} else {
			if(anim.animation != 'idle') {
				anim.animation = 'idle';
			}
		}
	}

	public function wound(?damage:Int) {
		if(damage == null) { damage = 1; }

		health -= damage;

		if(health <= 0) {
			// this.destroy();
			if(anim.animation != 'death') {
				anim.animation = 'death';
				isDead = true;

				if(isBoss) {
					C.disableSpawning = false;

					if(C.currentWave > C.bosses.length) {
						trace('YOU WIN!');
						// Win condition
					}
				}
			}
		} else {
			
		}
	}

	/*override function destroy(?_from_parent:Bool) {

	}*/
}