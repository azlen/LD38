package components;

import luxe.Component;
import components.ConnectInput;
import components.Physics;

class PlatformerMovement extends Component {
	public var speed = 4;
	public var physicsComponent:Physics;

	public function new() {
		super({
			name: 'PlatformerMovement'
		});
	}

	override function init() {
		add(new ConnectInput());
		physicsComponent = cast get('Physics');
	}

	override function update(dt:Float) {
		physicsComponent.velocity.x = 0;
		if(Luxe.input.inputdown('left')) {
			physicsComponent.velocity.x -= speed;
		}
		if(Luxe.input.inputdown('right')) {
			physicsComponent.velocity.x += speed;
		}
	}
}