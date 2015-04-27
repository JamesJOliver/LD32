package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/tilemap", "assets/data/tilemap");
			type.set ("assets/data/tilemap", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/bigButton.png", "assets/images/bigButton.png");
			type.set ("assets/images/bigButton.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/button.png", "assets/images/button.png");
			type.set ("assets/images/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/tiles.png", "assets/images/tiles.png");
			type.set ("assets/images/tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tiles.pyxel", "assets/images/tiles.pyxel");
			type.set ("assets/images/tiles.pyxel", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/tilesMKI.png", "assets/images/tilesMKI.png");
			type.set ("assets/images/tilesMKI.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tilesMKI.pyxel", "assets/images/tilesMKI.pyxel");
			type.set ("assets/images/tilesMKI.pyxel", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/titleBackgroud.png", "assets/images/titleBackgroud.png");
			type.set ("assets/images/titleBackgroud.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/titleBackgroud.pyxel", "assets/images/titleBackgroud.pyxel");
			type.set ("assets/images/titleBackgroud.pyxel", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/levels/LD32.oep", "assets/levels/LD32.oep");
			type.set ("assets/levels/LD32.oep", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/level01.oel", "assets/levels/level01.oel");
			type.set ("assets/levels/level01.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/level02.oel", "assets/levels/level02.oel");
			type.set ("assets/levels/level02.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/level1.oel", "assets/levels/level1.oel");
			type.set ("assets/levels/level1.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/level.ceol", "assets/music/level.ceol");
			type.set ("assets/music/level.ceol", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/somelevel.ceol", "assets/music/somelevel.ceol");
			type.set ("assets/music/somelevel.ceol", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/Pickup_Coin.wav", "assets/sounds/Pickup_Coin.wav");
			type.set ("assets/sounds/Pickup_Coin.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Select.wav", "assets/sounds/Select.wav");
			type.set ("assets/sounds/Select.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
