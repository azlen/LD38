package components;

import luxe.Component;
import luxe.Vector;
import luxe.Sprite;

import C;

class Physics extends Component {

	public var collisionsEnabled = true;
	public var gravity = C.gravity;

	public var velocity = new Vector(0.0, 0.0);
	public var size : Vector;

	public var touchingGround = false;

	public var ignoreCollisionsWith: Array<String> = [];

	var sprite : Sprite;

	public function new() {
		super({
			name: 'Physics'
		});
	}

	override function onadded() {
		C.space.push(this);
		sprite = cast entity;
		size = sprite.size;
	}

	override function update(dt:Float) {
		if(collisionsEnabled) {
			var collisiontime:Float = 1.0;
			var normalx:Float = 0.0;
			var normaly:Float = 0.0;

			if(velocity.x != 0 || velocity.y != 0) {
				for(spr in C.space) {
					if(this == spr || ignoreCollisionsWith.indexOf(spr.entity.name) != -1) {
						continue;
					}
					var broadphasebox = Util.GetSweptBroadphaseBox(this);
					if(Util.AABBCheckWithBroadphaseBox(this, broadphasebox)) {
						// trace('COLLIDING immenent');
						var sweptAABB = Util.SweptAABB(this, spr);
						
						if(sweptAABB.time < collisiontime) {
							collisiontime = sweptAABB.time;
							normalx = sweptAABB.normalx;
							normaly = sweptAABB.normaly;
						}
					}
					
					
				}

				pos.x += velocity.x * collisiontime;
				pos.y += velocity.y * collisiontime;
			}

			if(normaly == -1.0) {
				touchingGround = true;
			}else if(velocity.y < 0) {
				touchingGround = false;
			}

			if(touchingGround == false) {
				velocity.y += gravity;
			}

			if(collisiontime != 1.0) {
				var remainingtime:Float = 1.0 - collisiontime;

				// slide
				var dotprod:Float = (velocity.x * normaly + velocity.y * normalx) * remainingtime;
			    velocity.x = dotprod * normaly;
			    velocity.y = dotprod * normalx;
			}
		} else if(C.space.indexOf(this) != -1) {
			C.space.remove(this);
		}
	}

	public function destroy() {
		if(C.space.indexOf(this) != -1) {
			C.space.remove(this);
		}
	}
}