package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxAngle;
import flixel.util.FlxMath;
import flixel.tile.FlxTileblock;

/**
 * @author James Oliver - jamesjo.co.uk
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	private var _player:Player;
	private var _floor:FlxTileblock;
	private var _platform:FlxTileblock;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		_floor = new FlxTileblock(125, 125, 300, 15);
		_floor.makeGraphic(300, 15, 0xff689c16);
		add(_floor);
		
		_player = new Player(20, 20);
		add(_player);
		
		super.create();
	}
	
	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		FlxG.collide(_player, _floor);
		
		super.update();
	}	
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

}