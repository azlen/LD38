package entities;

import luxe.Entity;
import entities.Enemy;

import C;

// import luxe.utils.Random;

class EnemySpawner extends Entity {

	var spawnPositions = [-800, 800];

	var spawnDelay = 2;
	var timeSinceLastSpawn:Float = 0.0;

	var spawnPerWave = 10;
	var spawnsLeft : Float;

	// var random : Random;

	override function init() {

		spawnsLeft = spawnPerWave;

		// random = new Random(Std.float(Date.now()));

	}

	override function update(dt:Float) {

		if(!C.disableSpawning && timeSinceLastSpawn <= 0) {
			var type = '';
			var position = spawnPositions[Std.random(spawnPositions.length)];

			if(spawnsLeft == 0) {
				type = C.bosses[C.currentWave-1];
				C.disableSpawning = true;
				C.currentWave += 1;

				if(C.currentWave > C.bosses.length) {
					spawnsLeft = Math.POSITIVE_INFINITY;
				} else {
					spawnsLeft = spawnPerWave;
				}
			} else {
				var difficultyLevels = [[''], ['','2'], ['','2','3']][C.currentWave - 1];
				var difficulty = difficultyLevels[Std.random(difficultyLevels.length)];

				trace(difficulty);
				
				type = C.enemyTypes[Std.random(C.enemyTypes.length)] + difficulty;

				timeSinceLastSpawn = spawnDelay;
				spawnsLeft -= 1;
			}

			trace(type);

			var enemy = new Enemy(type, position);
			enemy.parent = this;
		}

		timeSinceLastSpawn -= dt;

	}

}