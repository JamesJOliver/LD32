package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxDestroyUtil;
using flixel.util.FlxSpriteUtil;

/**
 * @author James Oliver - jamesjo.co.uk
 * A FlxState which is being used for the intro cut sceen thing
 */
class IntroState extends FlxState
{
	private var _introText:FlxText;
	private var _playButton:FlxButton;
	
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		_introText = new FlxText(0, 10, 500, 14, true);
		_introText.text = "In the year 2057 the impossible happened. The Earth was invaded. These invaders were like nothing seen before and completely immune to all we could throw at them - even the entire world's nuclear arsenal. Now occupied, Earth is a mining planet run by the invaders using its old inhibitors as a slave workforce.";
		_introText.screenCenter(true, false);
		add(_introText);
		
		_playButton = new FlxButton(0, 0, "Begin!", playGame);
		_playButton.screenCenter();
		add(_playButton);
		
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
		_introText = FlxDestroyUtil.destroy(_introText);
		_playButton = FlxDestroyUtil.destroy(_playButton);
	}
	
	public function playGame():Void
	{
		FlxG.switchState(new PlayState());
	}
	
}