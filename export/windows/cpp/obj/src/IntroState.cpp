#include <hxcpp.h>

#ifndef INCLUDED_IntroState
#include <IntroState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
		HX_STACK_FRAME("IntroState","create",0x0d286425,"IntroState.create","IntroState.hx",23,0xd9d74fb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)500,null(),(int)18,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		this->_introText = _g;
		HX_STACK_LINE(25)
		this->_introText->set_text(HX_CSTRING("In the year 2057 the impossible happened. The Earth was invaded. These invaders were like nothing seen before and completely immune to all we could throw at them - even the entire world's nuclear arsenal. Now occupied, Earth is a mining planet run by the invaders using its old inhibitors as a slave workforce."));
		HX_STACK_LINE(26)
		this->add(this->_introText);
		HX_STACK_LINE(28)
		this->super::create();
	}
return null();
}


Void IntroState_obj::update( ){
{
		HX_STACK_FRAME("IntroState","update",0x181e8332,"IntroState.update","IntroState.hx",36,0xd9d74fb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->super::update();
	}
return null();
}


Void IntroState_obj::destroy( ){
{
		HX_STACK_FRAME("IntroState","destroy",0x894ab3b1,"IntroState.destroy","IntroState.hx",45,0xd9d74fb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->super::destroy();
	}
return null();
}



IntroState_obj::IntroState_obj()
{
}

void IntroState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntroState);
	HX_MARK_MEMBER_NAME(_introText,"_introText");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IntroState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_introText,"_introText");
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
	case 10:
		if (HX_FIELD_EQ(inName,"_introText") ) { return _introText; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntroState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_introText") ) { _introText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntroState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_introText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(IntroState_obj,_introText),HX_CSTRING("_introText")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_introText"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
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

