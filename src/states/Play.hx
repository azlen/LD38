package states;
import luxe.Input;
import luxe.States;

import entities.Player;
import entities.Ground;
import entities.Plant;
import entities.EnemySpawner;
import components.Gradient;

import luxe.Vector;
import luxe.Color;

import luxe.Sprite;

class Play extends State {

	// This is your main gameplay state and should totally be in your control
	// All callbacks from luxe.Game are also available here

	var player: Player;
	var ground: Ground;

	var background: Sprite;

	var enemySpawner: EnemySpawner;

	var plant: Sprite;

	override public function onenter<T> (_:T) {
		background = new Sprite({
			pos: new Vector(0, 300),
			size: new Vector(4000, 1000)
		});
		background.add(new Gradient(
			new Color().rgb(0x45283c), // 76428a
			new Color().rgb(0x639bff)
		));

		player = new Player();
		ground = new Ground();
		plant = new Plant();

		enemySpawner = new EnemySpawner();
	}

	override public function update(dt: Float) {

	}

	override public function onleave<T> (_:T) {
		player.destroy();
		ground.destroy();
		plant.destroy();
		enemySpawner.destroy();
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