package ;

import flixel.effects.particles.FlxEmitter;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
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
	public static inline var SHOOT_DELAY:Float = 0.4;
	
	private var _player:FlxEmitter;
	private var _bullets:FlxGroup;
	private var _bullet:Bullet;
	private var _cooldown:Float;
	private var _maxHeath:Int;
	private var _jumpTime:Float = -1;
	private var _timesJumped:Int = 0;
	private var _restart:Float;
	private var _spwanPos:FlxPoint;
	
	
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);
		
		makeGraphic(16, 16, FlxColor.RED);
		//setSize(12, 16);
		//offset.set(3, 4);
		
		drag.set(RUN_SPEED * 8, RUN_SPEED * 8);
		maxVelocity.set(RUN_SPEED, JUMP_SPEED);
		acceleration.y = GRAVITY;
		
		
		
		
	}
	
	override public function update():Void
	{
		movement();		
		jump();
		shoot();
		super.update();
	}
	
	public function jump():Void
	{
		var _jump:Bool = false;
		_jump = FlxG.keys.anyPressed(["UP", "W", "SPACE"]);
		
		if (FlxG.keys.anyJustPressed(["UP", "W", "SPACE"]))
		{
			if ((velocity.y == 0) || (_timesJumped < JUMPS_ALLOWED))
			{
				_timesJumped++;
				_jumpTime = 0;
			}
		}
		
		if ((FlxG.keys.anyPressed(["UP", "W", "SPACE"])) && (_jumpTime >= 0)) 
		{
			_jumpTime += FlxG.elapsed;
			
			if (_jumpTime > 0.25)
			{
				_jumpTime = -1;
			}
			else if (_jumpTime > 0)
			{
				velocity.y = - 0.5 * maxVelocity.y;
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
	
	public function shoot():Void
	{
	//if (FlxG.keys.anyPressed(["X", "J"]) 
		{
			
		}
	}
	

	
}