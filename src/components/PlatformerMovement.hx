package components;

import luxe.Component;
import components.ConnectInput;
import components.Physics;

class PlatformerMovement extends Component {
	public var speed = 4;
	public var physicsComponent:Physics;

	public function new(phys) {
		super({
			name: 'PlatformerMovement'
		});
		// physicsComponent = cast entity.get('Physics');
		physicsComponent = phys;
	}

	override function init() {
		add(new ConnectInput());
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