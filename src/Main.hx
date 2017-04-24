package;

import luxe.Vector;
import luxe.Color;
import luxe.States;

// import snow.api.Promise;
import luxe.Parcel;
import luxe.ParcelProgress;

import states.Play;
import states.GameOver;

class Main extends luxe.Game {

	var initialState : String = 'play';

	public static var state: States;

	override function config(config : luxe.GameConfig) {

		config.window.title = 'LD38';
        config.window.width = 960;
        config.window.height = 640;
        config.window.fullscreen = false;
        
		return config;
	}

	// Scale camera's viewport accordingly when game is scaled, common and suitable for most games
	/*override function onwindowsized( e:WindowEvent ) {
		Luxe.camera.viewport = new luxe.Rectangle( 0, 0, e.event.x, e.event.y);
	}*/

	override function ready() {

		trace('READY');

		var parcel = new Parcel({  
			jsons : [
				{ id:'assets/json/playerAnimation.json' },

				{ id:'assets/json/businessmanAnimation.json' },
				{ id:'assets/json/oldmanAnimation.json' },
				{ id:'assets/json/womanAnimation.json' },

				{ id:'assets/json/bossAnimation.json' },
			],
			textures : [
			    { id: 'assets/images/player.png' },
			    { id: 'assets/images/tiles.png' },

			    { id: 'assets/images/businessman.png' },
			    { id: 'assets/images/oldman.png' },
			    { id: 'assets/images/woman.png' },
			    { id: 'assets/images/businessman2.png' },
			    { id: 'assets/images/oldman2.png' },
			    { id: 'assets/images/woman2.png' },
			    { id: 'assets/images/businessman3.png' },
			    { id: 'assets/images/oldman3.png' },
			    { id: 'assets/images/woman3.png' },

			    { id: 'assets/images/boss.png' },

			    { id: 'assets/images/gameover.png' },
			    { id: 'assets/images/youwin.png' },
			],
		});

		new ParcelProgress({  
			parcel      : parcel,
			background  : new Color(1,1,1,0.85),
			oncomplete  : assets_loaded
		});

		parcel.load(); 

		/*var list = [  
		    Luxe.resources.load_texture('assets/images/player.png'),
		    Luxe.resources.load_json('assets/json/playerAnimation.json'),
		];

		var load = Promise.all(list);

		load.then(function() {
			assets_loaded();
		}).error(function(error:PromiseError) {
			if(error) {
				trace(error);
			}
		});*/

		//assets_loaded();
	}

	function assets_loaded(_) {
		trace('ASSETS_LOADED');

		// Create a state machine
		state = new States( { name: 'states' } );

		// Add states to the state machine
		state.add (new Play( { name: 'play' } ));
		state.add (new GameOver( { name: 'gameover' } ));

		// Run the inital state upon running the game
		state.set(initialState);
	}
}