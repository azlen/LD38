package entities;

import luxe.Sprite;
import luxe.Vector;
import luxe.Color;

import components.Physics;

class Wall extends Sprite {

	override function init() {
		centered = false;

		var physics = add(new Physics());
		physics.gravity = 0;
	}

}
