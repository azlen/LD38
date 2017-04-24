package entities;

import luxe.Sprite;
import luxe.Color;
import luxe.Vector;

import components.PlatformerMovement;
import components.Physics;

import luxe.components.sprite.SpriteAnimation;

import phoenix.Texture;

class Player extends Sprite {

	var anim : SpriteAnimation;

	public function new() {
		var image = Luxe.resources.texture('assets/images/player.png');
	        //keep pixels crisp when scaling them, for pixel art
	    image.filter_min = image.filter_mag = FilterType.nearest;

		super({
			name: 'Player',
			pos: new Vector(200, 0),
			texture: image,
			size: new Vector(64, 64)
		});

		centered = false;

		add(new Physics());
		add(new PlatformerMovement());

		// Create Animation component and add it to sprite
		anim = add(new SpriteAnimation({ name: 'SpriteAnimation' }));
		// Create animation from previously loaded json
		var anim_data = Luxe.resources.json('assets/json/playerAnimation.json');
		anim.add_from_json_object( anim_data.asset.json );
		// Set idle animation to active
		anim.animation = 'idle';
		// 
		anim.play();
	}

	override function init() {

	}
}