package entities;

import luxe.Sprite;
import luxe.Vector;
import luxe.Color;

import components.Physics;

class Wall extends Sprite {

	public function new(pref) {
		super(pref);

		centered = false;

		var physics = add(new Physics());
		physics.gravity = 0;
	}

}
