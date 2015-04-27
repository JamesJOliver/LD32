#include <hxcpp.h>

#ifndef INCLUDED_Bullet
#include <Bullet.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Bullet_obj::__construct()
{
HX_STACK_FRAME("Bullet","new",0xf3208054,"Bullet.new","Bullet.hx",16,0xb42ce59c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(19)
	this->makeGraphic((int)25,(int)25,(int)-16776961,false,null());
}
;
	return null();
}

//Bullet_obj::~Bullet_obj() { }

Dynamic Bullet_obj::__CreateEmpty() { return  new Bullet_obj; }
hx::ObjectPtr< Bullet_obj > Bullet_obj::__new()
{  hx::ObjectPtr< Bullet_obj > result = new Bullet_obj();
	result->__construct();
	return result;}

Dynamic Bullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bullet_obj > result = new Bullet_obj();
	result->__construct();
	return result;}

Void Bullet_obj::update( ){
{
		HX_STACK_FRAME("Bullet","update",0xa9584695,"Bullet.update","Bullet.hx",24,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		if (((bool((this->getScreenXY(null(),null())->x < (int)-64)) || bool((this->getScreenXY(null(),null())->x > (::flixel::FlxG_obj::width + (int)64)))))){
			HX_STACK_LINE(26)
			this->kill();
		}
		else{
			HX_STACK_LINE(28)
			if (((this->touching != (int)0))){
				HX_STACK_LINE(30)
				this->kill();
			}
			else{
				HX_STACK_LINE(34)
				this->super::update();
			}
		}
	}
return null();
}


Void Bullet_obj::shoot( int X,int Y,int VelocityX,int VelocityY){
{
		HX_STACK_FRAME("Bullet","shoot",0x3f7716d3,"Bullet.shoot","Bullet.hx",39,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_ARG(VelocityX,"VelocityX")
		HX_STACK_ARG(VelocityY,"VelocityY")
		HX_STACK_LINE(40)
		this->super::reset(X,Y);
		HX_STACK_LINE(42)
		this->set_solid(true);
		HX_STACK_LINE(43)
		this->velocity->set_x(VelocityX);
		HX_STACK_LINE(44)
		this->velocity->set_y(VelocityY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Bullet_obj,shoot,(void))

Void Bullet_obj::angledShoot( ){
{
		HX_STACK_FRAME("Bullet","angledShoot",0x9b582ee2,"Bullet.angledShoot","Bullet.hx",48,0xb42ce59c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,angledShoot,(void))


Bullet_obj::Bullet_obj()
{
}

Dynamic Bullet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angledShoot") ) { return angledShoot_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Bullet_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("shoot"),
	HX_CSTRING("angledShoot"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#endif

Class Bullet_obj::__mClass;

void Bullet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Bullet"), hx::TCanCast< Bullet_obj> ,sStaticFields,sMemberFields,
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

void Bullet_obj::__boot()
{
}

