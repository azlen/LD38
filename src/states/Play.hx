package states;
import luxe.Input;
import luxe.States;

import entities.Player;
import entities.Wall;

import luxe.Vector;
import luxe.Color;

import C;

class Play extends State {

	// This is your main gameplay state and should totally be in your control
	// All callbacks from luxe.Game are also available here

	var player: Player;

	override public function onenter<T> (_:T) {
		player = new Player();
		new Wall({
			pos: new Vector(0, 500),
			color: new Color().rgb(0x999999),
			size: new Vector(1000, 10)
		});
	}

	override public function update(dt: Float) {

	}

	override public function onleave<T> (_:T) {
		player.destroy();
	}

	override function onmousemove( event: MouseEvent) {
		
	}

	override function onkeyup( e:KeyEvent ) {
		//escape from the game at any time, mostly for debugging purpose
		if(e.keycode == Key.escape) {
			Luxe.shutdown();
		}
	}
}