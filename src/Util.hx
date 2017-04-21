package;

import luxe.Vector;
import components.Physics;

class Util {

	public static function GetSweptBroadphaseBox(b:Physics) {
		var broadphasebox = {
			pos: new Vector(),
			size: new Vector(),
		}
	    broadphasebox.pos.x = b.velocity.x > 0 ? b.pos.x : b.pos.x + b.velocity.x;
	    broadphasebox.pos.y = b.velocity.y > 0 ? b.pos.y : b.pos.y + b.velocity.y;
	    broadphasebox.size.x = b.velocity.x > 0 ? b.velocity.x + b.size.x : b.size.x - b.velocity.x;
	    broadphasebox.size.y = b.velocity.y > 0 ? b.velocity.y + b.size.y : b.size.y - b.velocity.y;

	    return broadphasebox;
	}

	public static function AABBCheck(b1:Physics, b2:Physics) {
	    return !(b1.pos.x + b1.size.x < b2.pos.x || b1.pos.x > b2.pos.x + b2.size.x || b1.pos.y + b1.size.y < b2.pos.y || b1.pos.y > b2.pos.y + b2.size.y);
	}

	public static function AABBCheckWithBroadphaseBox(b1:Physics, b2) {
	    return !(b1.pos.x + b1.size.x < b2.pos.x || b1.pos.x > b2.pos.x + b2.size.x || b1.pos.y + b1.size.y < b2.pos.y || b1.pos.y > b2.pos.y + b2.size.y);
	}

	// All credit for SweptAABB function goes to:
	// https://www.gamedev.net/resources/_/technical/game-programming/swept-aabb-collision-detection-and-response-r3084
	public static function SweptAABB(b1:Physics, b2:Physics) {
		var xInvEntry:Float, yInvEntry:Float;
	    var xInvExit:Float, yInvExit:Float;

	    // find the distance between the objects on the near and far sides for both x and y
	    if (b1.velocity.x > 0.0) {
	        xInvEntry = b2.pos.x - (b1.pos.x + b1.size.x);
	        xInvExit = (b2.pos.x + b2.size.x) - b1.pos.x;
	    } else {
	        xInvEntry = (b2.pos.x + b2.size.x) - b1.pos.x;
	        xInvExit = b2.pos.x - (b1.pos.x + b1.size.x);
	    }

	    if (b1.velocity.y > 0.0) {
	        yInvEntry = b2.pos.y - (b1.pos.y + b1.size.y);
	        yInvExit = (b2.pos.y + b2.size.y) - b1.pos.y;
	    } else {
	        yInvEntry = (b2.pos.y + b2.size.y) - b1.pos.y;
	        yInvExit = b2.pos.y - (b1.pos.y + b1.size.y);
	    }

	    // find time of collision and time of leaving for each axis (if statement is to prevent divide by zero)
		var xEntry:Float, yEntry:Float;
		var xExit:Float, yExit:Float;

		if (b1.velocity.x == 0.0) {
		    xEntry = Math.NEGATIVE_INFINITY;
		    xExit = Math.POSITIVE_INFINITY;
		} else {
		    xEntry = xInvEntry / b1.velocity.x;
		    xExit = xInvExit / b1.velocity.x;
		}

		if (b1.velocity.y == 0.0) {
		    yEntry = Math.NEGATIVE_INFINITY;
		    yExit = Math.POSITIVE_INFINITY;
		} else {
		    yEntry = yInvEntry / b1.velocity.y;
		    yExit = yInvExit / b1.velocity.y;
		}

		// find the earliest/latest times of collision
	    var entryTime:Float = Math.max(xEntry, yEntry);
	    var exitTime:Float = Math.min(xExit, yExit);

	    var normalx:Float, normaly:Float;
	    // if there was no collision
	    if (entryTime > exitTime || xEntry < 0.0 && yEntry < 0.0 || xEntry > 1.0 || yEntry > 1.0) {
	        normalx = 0.0;
	        normaly = 0.0;
	        return {
	        	time: 1.0,
	        	normalx: normalx,
	        	normaly: normaly
	        };
	    } else { // if there was a collision        		
	        // calculate normal of collided surface
	        if (xEntry > yEntry) {
	            if (xInvEntry < 0.0) {
	                normalx = 1.0;
	                normaly = 0.0;
	            } else {
	                normalx = -1.0;
	                normaly = 0.0;
	            }
	        } else {
	            if (yInvEntry < 0.0) {
	                normalx = 0.0;
	                normaly = 1.0;
	            } else {
	                normalx = 0.0;
			        normaly = -1.0;
	            }
	        }

	        // return the time of collision
	        return {
	        	time: entryTime,
	        	normalx: normalx,
	        	normaly: normaly
	        };
	    }
	}
}