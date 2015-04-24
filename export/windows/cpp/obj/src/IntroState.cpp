#include <hxcpp.h>

#ifndef INCLUDED_IntroState
#include <IntroState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void IntroState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("IntroState","new",0xc292ef97,"IntroState.new","IntroState.hx",15,0xd9d74fb9)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(15)
	super::__construct(MaxSize);
}
;
	return null();
}

//IntroState_obj::~IntroState_obj() { }

Dynamic IntroState_obj::__CreateEmpty() { return  new IntroState_obj; }
hx::ObjectPtr< IntroState_obj > IntroState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< IntroState_obj > result = new IntroState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic IntroState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntroState_obj > result = new IntroState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void IntroState_obj::create( ){
{
		HX_STACK_FRAME("IntroState","create",0x0d286425,"IntroState.create","IntroState.hx",24,0xd9d74fb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)0,(int)10,(int)500,null(),(int)14,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		this->_introText = _g;
		HX_STACK_LINE(26)
		this->_introText->set_text(HX_CSTRING("In the year 2057 the impossible happened. The Earth was invaded. These invaders were like nothing seen before and completely immune to all we could throw at them - even the entire world's nuclear arsenal. Now occupied, Earth is a mining planet run by the invaders using its old inhabitants as a slave workforce."));
		HX_STACK_LINE(27)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_introText,true,false);
		HX_STACK_LINE(28)
		this->add(this->_introText);
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton _g1 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_CSTRING("Begin!"),this->playGame_dyn());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		this->_playButton = _g1;
		HX_STACK_LINE(31)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_playButton,null(),null());
		HX_STACK_LINE(32)
		this->add(this->_playButton);
		HX_STACK_LINE(34)
		this->super::create();
	}
return null();
}


Void IntroState_obj::update( ){
{
		HX_STACK_FRAME("IntroState","update",0x181e8332,"IntroState.update","IntroState.hx",42,0xd9d74fb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->super::update();
	}
return null();
}


Void IntroState_obj::destroy( ){
{
		HX_STACK_FRAME("IntroState","destroy",0x894ab3b1,"IntroState.destroy","IntroState.hx",50,0xd9d74fb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->super::destroy();
		HX_STACK_LINE(52)
		::flixel::text::FlxText _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_introText);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		this->_introText = _g;
		HX_STACK_LINE(53)
		::flixel::ui::FlxButton _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_playButton);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		this->_playButton = _g1;
	}
return null();
}


Void IntroState_obj::playGame( ){
{
		HX_STACK_FRAME("IntroState","playGame",0xfba3b16f,"IntroState.playGame","IntroState.hx",58,0xd9d74fb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(58)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntroState_obj,playGame,(void))


IntroState_obj::IntroState_obj()
{
}

void IntroState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntroState);
	HX_MARK_MEMBER_NAME(_introText,"_introText");
	HX_MARK_MEMBER_NAME(_playButton,"_playButton");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IntroState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_introText,"_introText");
	HX_VISIT_MEMBER_NAME(_playButton,"_playButton");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic IntroState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playGame") ) { return playGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_introText") ) { return _introText; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_playButton") ) { return _playButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntroState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_introText") ) { _introText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_playButton") ) { _playButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntroState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_introText"));
	outFields->push(HX_CSTRING("_playButton"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(IntroState_obj,_introText),HX_CSTRING("_introText")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(IntroState_obj,_playButton),HX_CSTRING("_playButton")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_introText"),
	HX_CSTRING("_playButton"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("playGame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntroState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntroState_obj::__mClass,"__mClass");
};

#endif

Class IntroState_obj::__mClass;

void IntroState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("IntroState"), hx::TCanCast< IntroState_obj> ,sStaticFields,sMemberFields,
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

void IntroState_obj::__boot()
{
}

