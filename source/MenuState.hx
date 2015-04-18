package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxDestroyUtil;
using flixel.util.FlxSpriteUtil;


/**
 * @author James Oliver - jamesjo.co.uk
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	private var _playIntroButton:FlxButton;
	
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		_playIntroButton = new FlxButton(0, 0, "Play!", playIntro);
		_playIntroButton.screenCenter();
		add(_playIntroButton);
		
		super.create();
	}
	
	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
		
		_playIntroButton = FlxDestroyUtil.destroy(_playIntroButton);
	}
	
	public function playIntro():Void
	{
		FlxG.switchState(new IntroState());
	}
}