package components;

import luxe.Component;
import luxe.Input;

class ConnectInput extends Component {
	
	override function init() {
		Luxe.input.bind_key('left', Key.left);
	    Luxe.input.bind_key('left', Key.key_a);

	    Luxe.input.bind_key('right', Key.right);
	    Luxe.input.bind_key('right', Key.key_d);

	    Luxe.input.bind_key('up', Key.up);
	    Luxe.input.bind_key('up', Key.key_w);

	    Luxe.input.bind_key('down', Key.down);
	    Luxe.input.bind_key('down', Key.key_s);

	    Luxe.input.bind_key('jump', Key.key_z);
	    Luxe.input.bind_key('jump', Key.space);

	    Luxe.input.bind_key('attack', Key.key_x);
	}

}