package;

import components.Physics;
import entities.Enemy;

// Gameplay Constants
class C {
	// public static var ___ : ___ = ___;

	public static var space : Array<Physics> = [];
	public static var enemies : Array<Enemy> = [];
	public static var gravity : Float = 1.0;

	public static var currentWave = 1;

	public static var disableSpawning = false;
	public static var enemyTypes : Array<String> = ['businessman', 'woman', 'oldman'];
	public static var bosses : Array<String> = ['boss'];
	public static var enemyHealth = {
		// BASIC ENEMIES
		'businessman': 1,
		'woman': 1,
		'oldman': 1,
		'businessman2': 2,
		'woman2': 2,
		'oldman2': 2,
		'businessman3': 3,
		'woman3': 3,
		'oldman3': 3,

		// BOSSES
		'boss': 5,
	}
	public static var enemySpeed = {
		// BASIC ENEMIES
		'businessman': 2.5,
		'woman': 2,
		'oldman': 1.5,
		'businessman2': 2.5,
		'woman2': 2,
		'oldman2': 1.5,
		'businessman3': 2.5,
		'woman3': 2,
		'oldman3': 1.5,

		// BOSSES
		'boss': 1.5,
	}
}