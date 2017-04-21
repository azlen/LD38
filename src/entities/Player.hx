package entities;

import luxe.Sprite;
import luxe.Color;
import luxe.Vector;

import components.PlatformerMovement;
import components.Physics;

class Player extends Sprite {

	var physicsComponent:Physics;

	public function new() {
		super({
			pos: new Vector(200, 0),
			color: new Color().rgb(0xf94b04),
			size: new Vector(32, 64)
		});

		centered = false;

		physicsComponent = add(new Physics());
		add(new PlatformerMovement(physicsComponent));
	}

	override function init() {

	}
}