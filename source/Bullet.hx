package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxPoint;

/**
 * ...
 * @author James Oliver - jamesjo.co.uk
 */
class Bullet extends FlxSprite
{

	public function new() 
	{
		super();
		
		makeGraphic(25, 25, FlxColor.BLUE, false);
	}
	
	override public function update():Void
	{
		if (getScreenXY().x < -64 || getScreenXY().x > FlxG.width + 64) 
		{ 
			kill(); 
		} 
		else if (touching != 0)
		{
			kill(); 
		}
		else
		{
			super.update();
		}
	}
	
	public function shoot(X:Int, Y:Int, VelocityX:Int, VelocityY:Int):Void
	{
		super.reset(X, Y);
		
		solid = true;
		velocity.x = VelocityX;
		velocity.y = VelocityY;
	}
	
	public function angledShoot():Void
	{
		
	}
	
}