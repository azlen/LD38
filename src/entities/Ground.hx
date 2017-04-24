package entities;

import luxe.Entity;
import luxe.Vector;

import luxe.Sprite;
import luxe.Color;

import entities.Wall;

import luxe.Rectangle;

import phoenix.Texture;

class Ground extends Entity {

	var length = 100;
	var y = 500;
	var tileSize = 64;

	/*public function new() {
		super()
	}*/

	override function init() {
		var image = Luxe.resources.texture('assets/images/tiles.png');
	        //keep pixels crisp when scaling them, for pixel art
	    image.filter_min = image.filter_mag = FilterType.nearest;

	    var collider = new Wall({
			pos: new Vector( -length/2 * tileSize, y ),
			size: new Vector( length * tileSize, 1000 ),
			color: new Color().rgb(0x222034)
		});
		collider.parent = this;

		for(i in 0...length) {
			var tile = new Sprite({
				pos: new Vector( (i-length/2) * tileSize, y ),
				size: new Vector(tileSize, tileSize),
				texture: image,
				uv: new Rectangle(7*16, 0, 16, 16)
			});
			tile.centered = false;
			tile.parent = this;
		}
	}
}