package;

import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxButton;
import flixel.util.FlxAngle;
import flixel.util.FlxMath;
import flixel.tile.FlxTileblock;
import flixel.util.FlxPoint;
import flixel.FlxCamera;

/**
 * @author James Oliver - jamesjo.co.uk
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	
	//private var _floor:FlxTileblock;
	//private var _platform:FlxTileblock;
	
	private var _player:Player;
	
	private var _map:FlxOgmoLoader;
	private var _mapPlat:FlxTilemap;
	private var _mapFloor:FlxTilemap;
	private var _mapBack:FlxTilemap;
	
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		_map = new FlxOgmoLoader("assets/levels/level01.oel");
		_mapPlat = _map.loadTilemap("assets/images/tiles16.png", 16, 16, "platform");
		_mapFloor = _map.loadTilemap("assets/images/tiles16.png", 16, 16, "floor");
		_mapBack = _map.loadTilemap("assets/images/tiles16.png", 16, 16, "background");
		_mapPlat.setTileProperties(2, FlxObject.CEILING);
		_mapFloor.setTileProperties(3, FlxObject.ANY);
		_mapBack.setTileProperties(4, FlxObject.NONE);
		
		add(_mapPlat);
		add(_mapFloor);
		add(_mapBack);
		
		//_floor = new FlxTileblock(125, 125, 300, 15);
		//_floor.makeGraphic(300, 15, 0xff689c16);
		//add(_floor);
		
		_player = new Player();
		FlxG.camera.follow(_player, FlxCamera.STYLE_PLATFORMER);
		_map.loadEntities(placeEntities, "entities");
		
		add(_player);
		
		super.create();
	}
	
	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		FlxG.collide(_player, _mapPlat);
		FlxG.collide(_player, _mapFloor);
		
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
	
	private function placeEntities(entityName:String, entityData:Xml):Void
	{		
		if (entityName == "player") 
		{
			_player.x = Std.parseInt(entityData.get("x"));
			_player.y = Std.parseInt(entityData.get("y"));
		}
	}

}