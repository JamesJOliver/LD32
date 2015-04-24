#include <hxcpp.h>

#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Player_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",18,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(33)
	this->_timesJumped = (int)0;
	HX_STACK_LINE(32)
	this->_jumpTime = (int)-1;
	HX_STACK_LINE(40)
	super::__construct(X,Y,null());
	HX_STACK_LINE(42)
	this->makeGraphic((int)32,(int)32,(int)-65536,null(),null());
	HX_STACK_LINE(43)
	this->setSize((int)28,(int)28);
	HX_STACK_LINE(44)
	this->offset->set((int)4,(int)4);
	HX_STACK_LINE(46)
	this->drag->set((int)1200,(int)1200);
	HX_STACK_LINE(47)
	this->maxVelocity->set((int)150,(int)250);
	HX_STACK_LINE(48)
	this->acceleration->set_y((int)620);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",53,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		this->jump();
		HX_STACK_LINE(55)
		this->movement();
		HX_STACK_LINE(56)
		this->super::update();
	}
return null();
}


Void Player_obj::jump( ){
{
		HX_STACK_FRAME("Player","jump",0x1abc40fb,"Player.jump","Player.hx",60,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		bool _jump = false;		HX_STACK_VAR(_jump,"_jump");
		HX_STACK_LINE(62)
		bool _g = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("UP")).Add(HX_CSTRING("W")).Add(HX_CSTRING("SPACE")),(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		_jump = _g;
		HX_STACK_LINE(64)
		if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("UP")).Add(HX_CSTRING("W")).Add(HX_CSTRING("SPACE")),(int)2))){
			HX_STACK_LINE(66)
			if (((bool((this->velocity->y == (int)0)) || bool((this->_timesJumped < (int)2))))){
				HX_STACK_LINE(68)
				(this->_timesJumped)++;
				HX_STACK_LINE(69)
				this->_jumpTime = (int)0;
			}
		}
		HX_STACK_LINE(74)
		if (((  ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("UP")).Add(HX_CSTRING("W")).Add(HX_CSTRING("SPACE")),(int)1))) ? bool((this->_jumpTime >= (int)0)) : bool(false) ))){
			HX_STACK_LINE(76)
			hx::AddEq(this->_jumpTime,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(79)
			if (((this->_jumpTime > 0.25))){
				HX_STACK_LINE(81)
				this->_jumpTime = (int)-1;
			}
			else{
				HX_STACK_LINE(83)
				if (((this->_jumpTime > (int)0))){
					HX_STACK_LINE(85)
					this->velocity->set_y((-0.73 * this->maxVelocity->y));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,jump,(void))

Void Player_obj::movement( ){
{
		HX_STACK_FRAME("Player","movement",0x91ad8bbc,"Player.movement","Player.hx",92,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		this->acceleration->set_x((int)0);
		HX_STACK_LINE(95)
		if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("LEFT")).Add(HX_CSTRING("A")),(int)1))){
			HX_STACK_LINE(97)
			this->set_flipX(true);
			HX_STACK_LINE(98)
			this->acceleration->set_x(-(this->drag->x));
		}
		else{
			HX_STACK_LINE(100)
			if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("RIGHT")).Add(HX_CSTRING("D")),(int)1))){
				HX_STACK_LINE(102)
				this->set_flipX(false);
				HX_STACK_LINE(103)
				this->acceleration->set_x(this->drag->x);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,movement,(void))

Void Player_obj::shoot( ){
{
		HX_STACK_FRAME("Player","shoot",0x70019132,"Player.shoot","Player.hx",108,0xa27fc9dd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,shoot,(void))

int Player_obj::RUN_SPEED;

int Player_obj::GRAVITY;

int Player_obj::JUMP_SPEED;

int Player_obj::JUMPS_ALLOWED;

int Player_obj::BULLET_SPEED;

Float Player_obj::SHOOT_DELAY;


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(_bullets,"_bullets");
	HX_MARK_MEMBER_NAME(_bullet,"_bullet");
	HX_MARK_MEMBER_NAME(_cooldown,"_cooldown");
	HX_MARK_MEMBER_NAME(_maxHeath,"_maxHeath");
	HX_MARK_MEMBER_NAME(_jumpTime,"_jumpTime");
	HX_MARK_MEMBER_NAME(_timesJumped,"_timesJumped");
	HX_MARK_MEMBER_NAME(_restart,"_restart");
	HX_MARK_MEMBER_NAME(_spwanPos,"_spwanPos");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bullets,"_bullets");
	HX_VISIT_MEMBER_NAME(_bullet,"_bullet");
	HX_VISIT_MEMBER_NAME(_cooldown,"_cooldown");
	HX_VISIT_MEMBER_NAME(_maxHeath,"_maxHeath");
	HX_VISIT_MEMBER_NAME(_jumpTime,"_jumpTime");
	HX_VISIT_MEMBER_NAME(_timesJumped,"_timesJumped");
	HX_VISIT_MEMBER_NAME(_restart,"_restart");
	HX_VISIT_MEMBER_NAME(_spwanPos,"_spwanPos");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bullet") ) { return _bullet; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_bullets") ) { return _bullets; }
		if (HX_FIELD_EQ(inName,"_restart") ) { return _restart; }
		if (HX_FIELD_EQ(inName,"movement") ) { return movement_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cooldown") ) { return _cooldown; }
		if (HX_FIELD_EQ(inName,"_maxHeath") ) { return _maxHeath; }
		if (HX_FIELD_EQ(inName,"_jumpTime") ) { return _jumpTime; }
		if (HX_FIELD_EQ(inName,"_spwanPos") ) { return _spwanPos; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_timesJumped") ) { return _timesJumped; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_bullet") ) { _bullet=inValue.Cast< ::Bullet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_bullets") ) { _bullets=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_restart") ) { _restart=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cooldown") ) { _cooldown=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxHeath") ) { _maxHeath=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jumpTime") ) { _jumpTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spwanPos") ) { _spwanPos=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_timesJumped") ) { _timesJumped=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_bullets"));
	outFields->push(HX_CSTRING("_bullet"));
	outFields->push(HX_CSTRING("_cooldown"));
	outFields->push(HX_CSTRING("_maxHeath"));
	outFields->push(HX_CSTRING("_jumpTime"));
	outFields->push(HX_CSTRING("_timesJumped"));
	outFields->push(HX_CSTRING("_restart"));
	outFields->push(HX_CSTRING("_spwanPos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RUN_SPEED"),
	HX_CSTRING("GRAVITY"),
	HX_CSTRING("JUMP_SPEED"),
	HX_CSTRING("JUMPS_ALLOWED"),
	HX_CSTRING("BULLET_SPEED"),
	HX_CSTRING("SHOOT_DELAY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(Player_obj,_bullets),HX_CSTRING("_bullets")},
	{hx::fsObject /*::Bullet*/ ,(int)offsetof(Player_obj,_bullet),HX_CSTRING("_bullet")},
	{hx::fsFloat,(int)offsetof(Player_obj,_cooldown),HX_CSTRING("_cooldown")},
	{hx::fsInt,(int)offsetof(Player_obj,_maxHeath),HX_CSTRING("_maxHeath")},
	{hx::fsFloat,(int)offsetof(Player_obj,_jumpTime),HX_CSTRING("_jumpTime")},
	{hx::fsInt,(int)offsetof(Player_obj,_timesJumped),HX_CSTRING("_timesJumped")},
	{hx::fsFloat,(int)offsetof(Player_obj,_restart),HX_CSTRING("_restart")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Player_obj,_spwanPos),HX_CSTRING("_spwanPos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_bullets"),
	HX_CSTRING("_bullet"),
	HX_CSTRING("_cooldown"),
	HX_CSTRING("_maxHeath"),
	HX_CSTRING("_jumpTime"),
	HX_CSTRING("_timesJumped"),
	HX_CSTRING("_restart"),
	HX_CSTRING("_spwanPos"),
	HX_CSTRING("update"),
	HX_CSTRING("jump"),
	HX_CSTRING("movement"),
	HX_CSTRING("shoot"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Player_obj::RUN_SPEED,"RUN_SPEED");
	HX_MARK_MEMBER_NAME(Player_obj::GRAVITY,"GRAVITY");
	HX_MARK_MEMBER_NAME(Player_obj::JUMP_SPEED,"JUMP_SPEED");
	HX_MARK_MEMBER_NAME(Player_obj::JUMPS_ALLOWED,"JUMPS_ALLOWED");
	HX_MARK_MEMBER_NAME(Player_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_MARK_MEMBER_NAME(Player_obj::SHOOT_DELAY,"SHOOT_DELAY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Player_obj::RUN_SPEED,"RUN_SPEED");
	HX_VISIT_MEMBER_NAME(Player_obj::GRAVITY,"GRAVITY");
	HX_VISIT_MEMBER_NAME(Player_obj::JUMP_SPEED,"JUMP_SPEED");
	HX_VISIT_MEMBER_NAME(Player_obj::JUMPS_ALLOWED,"JUMPS_ALLOWED");
	HX_VISIT_MEMBER_NAME(Player_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_VISIT_MEMBER_NAME(Player_obj::SHOOT_DELAY,"SHOOT_DELAY");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
	RUN_SPEED= (int)150;
	GRAVITY= (int)620;
	JUMP_SPEED= (int)250;
	JUMPS_ALLOWED= (int)2;
	BULLET_SPEED= (int)200;
	SHOOT_DELAY= 0.4;
}

