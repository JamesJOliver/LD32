package ;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.system.FlxSound;
import flixel.ui.FlxButton;
import flixel.util.FlxAngle;
import flixel.util.FlxColor;
import flixel.util.FlxPoint;


/**
 * Class for the player
 * @author James Oliver - jamesjo.co.uk
 */
class Player extends FlxSprite
{
	
	public static inline var RUN_SPEED:Int = 150;
	public static inline var GRAVITY:Int = 620;
	public static inline var JUMP_SPEED:Int = 250;
	public static inline var JUMPS_ALLOWED:Int = 2;
	public static inline var BULLET_SPEED:Int = 200;
	public static inline var GUN_DELAY:Float = 0.4;
	
	private var _maxHeath:Int;
	private var _jumpTime:Float = -1;
	private var _timesJumped:Int = 0;
	private var _restart:Float;
	private var _spwanPos:FlxPoint;
	
	
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);
		
		makeGraphic(32, 32, FlxColor.RED);
		
		drag.set(RUN_SPEED * 8, RUN_SPEED * 8);
		maxVelocity.set(RUN_SPEED, JUMP_SPEED);
		acceleration.y = GRAVITY;
	}
	
	public function jump():Void
	{
		var _jump:Bool = false;
		_jump = FlxG.keys.anyPressed(["UP", "W", "SPACE"]);
		
		if (FlxG.keys.anyJustPressed(["UP", "W", "SPACE"]))
		{
			if ((velocity.y == 0) || (_timesJumped < JUMPS_ALLOWED)) // Only allow two jumps
			{
				_timesJumped++;
				_jumpTime = 0;
			}
		}
		
		// You can also use space or any other key you want
		if ((FlxG.keys.anyPressed(["UP", "W", "SPACE"])) && (_jumpTime >= 0)) 
		{
			_jumpTime += FlxG.elapsed;
			
			// You can't jump for more than 0.25 seconds
			if (_jumpTime > 0.25)
			{
				_jumpTime = -1;
			}
			else if (_jumpTime > 0)
			{
				velocity.y = - 0.6 * maxVelocity.y;
			}
		}
		
	}
	
	public function movement():Void
	{
		acceleration.x = 0;
		
		if (FlxG.keys.anyPressed(["LEFT", "A"]))
		{
			flipX = true;
			acceleration.x = -drag.x;
		}
		else if (FlxG.keys.anyPressed(["RIGHT", "D"]))
		{
			flipX = false;
			acceleration.x = drag.x;				
		}		
	}
	
	override public function update():Void
	{
		jump();
		movement();
		super.update();
	}
	
}