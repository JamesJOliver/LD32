#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmoLoader
#include <flixel/addons/editors/ogmo/FlxOgmoLoader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",21,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(21)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",38,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::flixel::addons::editors::ogmo::FlxOgmoLoader _g = ::flixel::addons::editors::ogmo::FlxOgmoLoader_obj::__new(HX_CSTRING("assets/levels/level02.oel"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		this->_map = _g;
		HX_STACK_LINE(40)
		::flixel::tile::FlxTilemap _g1 = this->_map->loadTilemap(HX_CSTRING("assets/images/tilesMKI.png"),(int)32,(int)32,HX_CSTRING("platform"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		this->_mapPlat = _g1;
		HX_STACK_LINE(41)
		::flixel::tile::FlxTilemap _g2 = this->_map->loadTilemap(HX_CSTRING("assets/images/tilesMKI.png"),(int)32,(int)32,HX_CSTRING("floor"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(41)
		this->_mapFloor = _g2;
		HX_STACK_LINE(42)
		::flixel::tile::FlxTilemap _g3 = this->_map->loadTilemap(HX_CSTRING("assets/images/tilesMKI.png"),(int)32,(int)32,HX_CSTRING("background"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(42)
		this->_mapBack = _g3;
		HX_STACK_LINE(43)
		this->_mapPlat->setTileProperties((int)1,(int)256,null(),null(),null());
		HX_STACK_LINE(44)
		this->_mapFloor->setTileProperties((int)2,(int)4369,null(),null(),null());
		HX_STACK_LINE(45)
		this->_mapBack->setTileProperties((int)3,(int)0,null(),null(),null());
		HX_STACK_LINE(47)
		this->add(this->_mapPlat);
		HX_STACK_LINE(48)
		this->add(this->_mapFloor);
		HX_STACK_LINE(49)
		this->add(this->_mapBack);
		HX_STACK_LINE(55)
		::Player _g4 = ::Player_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(55)
		this->_player = _g4;
		HX_STACK_LINE(56)
		::flixel::FlxG_obj::camera->follow(this->_player,(int)1,null(),null());
		HX_STACK_LINE(57)
		this->_map->loadEntities(this->placeEntities_dyn(),HX_CSTRING("entities"));
		HX_STACK_LINE(59)
		this->add(this->_player);
		HX_STACK_LINE(61)
		this->super::create();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",68,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		::flixel::FlxG_obj::overlap(this->_player,this->_mapPlat,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(70)
		::flixel::FlxG_obj::overlap(this->_player,this->_mapFloor,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(72)
		this->super::update();
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",81,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::placeEntities( ::String entityName,::Xml entityData){
{
		HX_STACK_FRAME("PlayState","placeEntities",0xcb21ad57,"PlayState.placeEntities","PlayState.hx",86,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(entityName,"entityName")
		HX_STACK_ARG(entityData,"entityData")
		HX_STACK_LINE(86)
		if (((entityName == HX_CSTRING("player")))){
			HX_STACK_LINE(88)
			::String _g = entityData->get(HX_CSTRING("x"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			Dynamic _g1 = ::Std_obj::parseInt(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(88)
			this->_player->set_x(_g1);
			HX_STACK_LINE(89)
			::String _g2 = entityData->get(HX_CSTRING("y"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(89)
			Dynamic _g3 = ::Std_obj::parseInt(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(89)
			this->_player->set_y(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,placeEntities,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_MEMBER_NAME(_mapPlat,"_mapPlat");
	HX_MARK_MEMBER_NAME(_mapFloor,"_mapFloor");
	HX_MARK_MEMBER_NAME(_mapBack,"_mapBack");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_map,"_map");
	HX_VISIT_MEMBER_NAME(_mapPlat,"_mapPlat");
	HX_VISIT_MEMBER_NAME(_mapFloor,"_mapFloor");
	HX_VISIT_MEMBER_NAME(_mapBack,"_mapBack");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return _map; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_mapPlat") ) { return _mapPlat; }
		if (HX_FIELD_EQ(inName,"_mapBack") ) { return _mapBack; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_mapFloor") ) { return _mapFloor; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"placeEntities") ) { return placeEntities_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< ::flixel::addons::editors::ogmo::FlxOgmoLoader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_mapPlat") ) { _mapPlat=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mapBack") ) { _mapBack=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_mapFloor") ) { _mapFloor=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_player"));
	outFields->push(HX_CSTRING("_map"));
	outFields->push(HX_CSTRING("_mapPlat"));
	outFields->push(HX_CSTRING("_mapFloor"));
	outFields->push(HX_CSTRING("_mapBack"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,_player),HX_CSTRING("_player")},
	{hx::fsObject /*::flixel::addons::editors::ogmo::FlxOgmoLoader*/ ,(int)offsetof(PlayState_obj,_map),HX_CSTRING("_map")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(PlayState_obj,_mapPlat),HX_CSTRING("_mapPlat")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(PlayState_obj,_mapFloor),HX_CSTRING("_mapFloor")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(PlayState_obj,_mapBack),HX_CSTRING("_mapBack")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_player"),
	HX_CSTRING("_map"),
	HX_CSTRING("_mapPlat"),
	HX_CSTRING("_mapFloor"),
	HX_CSTRING("_mapBack"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("placeEntities"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void PlayState_obj::__boot()
{
}

