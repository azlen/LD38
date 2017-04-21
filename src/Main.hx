package;

import luxe.Vector;
import luxe.Color;
import luxe.States;

import states.Play;

class Main extends luxe.Game {

	var initialState : String = 'play';

	public static var state: States;

	override function config(config : luxe.GameConfig) {
		// PRELOAD RESOURCES HERE

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

		// Optional, set a consistent scale camera mode for the entire game
		// this is a luxe's wip feature
		// Luxe.camera.size = new Vector(Main.w, Main.h);
		// Luxe.camera.size_mode = SizeMode.fit;

		// Optional, set customized background color
		// Luxe.renderer.clear_color = new Color().rgb(0xD7D7D7);

		// Actual codes that hide/show the cursor
		//Luxe.screen.cursor.visible = showCursor;

		// Create a state machine
		state = new States( { name: 'states' } );

		// Add states to the state machine
		state.add (new Play( { name: 'play' } ));

		// Run the inital state upon running the game
		state.set(initialState);

	}
}