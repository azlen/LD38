package entities;

import luxe.Sprite;

import luxe.Vector;
import luxe.Rectangle;

import phoenix.Texture;

class Plant extends Sprite {

	public function new() {
		var image = Luxe.resources.texture('assets/images/tiles.png');
	        //keep pixels crisp when scaling them, for pixel art
	    image.filter_min = image.filter_mag = FilterType.nearest;

		super({
			name: 'Plant',
			pos: new Vector(0-32, 500-64),
			texture: image,
			uv: new Rectangle(5*16, 1*16, 16, 16),
			size: new Vector(64, 64)
		});

		centered = false;
	}
}