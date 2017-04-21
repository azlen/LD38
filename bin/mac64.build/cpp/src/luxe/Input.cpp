#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_GamepadEvent
#include <luxe/GamepadEvent.h>
#endif
#ifndef INCLUDED_luxe_GamepadEventType
#include <luxe/GamepadEventType.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_InputEvent
#include <luxe/InputEvent.h>
#endif
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_MouseEvent
#include <luxe/MouseEvent.h>
#endif
#ifndef INCLUDED_luxe_TextEvent
#include <luxe/TextEvent.h>
#endif
#ifndef INCLUDED_luxe_TextEventType
#include <luxe/TextEventType.h>
#endif
#ifndef INCLUDED_luxe_TouchEvent
#include <luxe/TouchEvent.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_systems_input_Input
#include <snow/systems/input/Input.h>
#endif
#ifndef INCLUDED_snow_types_ModState
#include <snow/types/ModState.h>
#endif
namespace luxe{

Void Input_obj::__construct(::luxe::Engine _core)
{
HX_STACK_FRAME("luxe.Input","new",0xd5d5d724,"luxe.Input.new","luxe/Input.hx",28,0x19edc1cd)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(30)
	this->core = _core;
	HX_STACK_LINE(32)
	::luxe::KeyEvent tmp = ::luxe::KeyEvent_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	this->key_event = tmp;
	HX_STACK_LINE(33)
	::luxe::TextEvent tmp1 = ::luxe::TextEvent_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	this->text_event = tmp1;
	HX_STACK_LINE(34)
	::luxe::MouseEvent tmp2 = ::luxe::MouseEvent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	this->mouse_event = tmp2;
	HX_STACK_LINE(35)
	::luxe::TouchEvent tmp3 = ::luxe::TouchEvent_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	this->touch_event = tmp3;
	HX_STACK_LINE(36)
	::luxe::GamepadEvent tmp4 = ::luxe::GamepadEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	this->gamepad_event = tmp4;
	HX_STACK_LINE(37)
	::luxe::InputEvent tmp5 = ::luxe::InputEvent_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	this->input_event = tmp5;
}
;
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new(::luxe::Engine _core)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(_core);
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Input_obj::inputpressed( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputpressed",0x66d30494,"luxe.Input.inputpressed","luxe/Input.hx",45,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(46)
	::haxe::ds::StringMap tmp = this->_named_input_pressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	::String tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputpressed,return )

bool Input_obj::inputreleased( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputreleased",0x98a70a8b,"luxe.Input.inputreleased","luxe/Input.hx",50,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(51)
	::haxe::ds::StringMap tmp = this->_named_input_released;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	::String tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputreleased,return )

bool Input_obj::inputdown( ::String _event){
	HX_STACK_FRAME("luxe.Input","inputdown",0x58f8fb30,"luxe.Input.inputdown","luxe/Input.hx",55,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(56)
	::haxe::ds::StringMap tmp = this->_named_input_down;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::String tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,inputdown,return )

bool Input_obj::keypressed( int _code){
	HX_STACK_FRAME("luxe.Input","keypressed",0x9327649f,"luxe.Input.keypressed","luxe/Input.hx",62,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(63)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	bool tmp3 = tmp1->keypressed(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keypressed,return )

bool Input_obj::keyreleased( int _code){
	HX_STACK_FRAME("luxe.Input","keyreleased",0x3626b420,"luxe.Input.keyreleased","luxe/Input.hx",67,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(68)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	bool tmp3 = tmp1->keyreleased(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyreleased,return )

bool Input_obj::keydown( int _code){
	HX_STACK_FRAME("luxe.Input","keydown",0xb1f4f645,"luxe.Input.keydown","luxe/Input.hx",72,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(73)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	bool tmp3 = tmp1->keydown(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keydown,return )

bool Input_obj::scanpressed( int _code){
	HX_STACK_FRAME("luxe.Input","scanpressed",0x4c8f9989,"luxe.Input.scanpressed","luxe/Input.hx",78,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(79)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	bool tmp3 = tmp1->scanpressed(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanpressed,return )

bool Input_obj::scanreleased( int _code){
	HX_STACK_FRAME("luxe.Input","scanreleased",0xb7eccbf6,"luxe.Input.scanreleased","luxe/Input.hx",83,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(84)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	bool tmp3 = tmp1->scanreleased(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanreleased,return )

bool Input_obj::scandown( int _code){
	HX_STACK_FRAME("luxe.Input","scandown",0x9cf0eb1b,"luxe.Input.scandown","luxe/Input.hx",88,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(89)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	int tmp2 = _code;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	bool tmp3 = tmp1->scandown(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scandown,return )

bool Input_obj::mousepressed( int _button){
	HX_STACK_FRAME("luxe.Input","mousepressed",0xb04bfbd9,"luxe.Input.mousepressed","luxe/Input.hx",95,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(96)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	int tmp2 = _button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	bool tmp3 = tmp1->mousepressed(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousepressed,return )

bool Input_obj::mousereleased( int _button){
	HX_STACK_FRAME("luxe.Input","mousereleased",0x99066fa6,"luxe.Input.mousereleased","luxe/Input.hx",100,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(101)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	int tmp2 = _button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	bool tmp3 = tmp1->mousereleased(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousereleased,return )

bool Input_obj::mousedown( int _button){
	HX_STACK_FRAME("luxe.Input","mousedown",0x3e22f6cb,"luxe.Input.mousedown","luxe/Input.hx",105,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(106)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	int tmp2 = _button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	bool tmp3 = tmp1->mousedown(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousedown,return )

bool Input_obj::gamepadpressed( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepadpressed",0x00765fdd,"luxe.Input.gamepadpressed","luxe/Input.hx",112,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(113)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	int tmp3 = _button;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	bool tmp4 = tmp1->gamepadpressed(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadpressed,return )

bool Input_obj::gamepadreleased( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepadreleased",0x6df38f22,"luxe.Input.gamepadreleased","luxe/Input.hx",117,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(118)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	int tmp3 = _button;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	bool tmp4 = tmp1->gamepadreleased(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(118)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadreleased,return )

bool Input_obj::gamepaddown( int _gamepad,int _button){
	HX_STACK_FRAME("luxe.Input","gamepaddown",0x38b3a847,"luxe.Input.gamepaddown","luxe/Input.hx",122,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(123)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	int tmp3 = _button;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	bool tmp4 = tmp1->gamepaddown(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(123)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepaddown,return )

Float Input_obj::gamepadaxis( int _gamepad,int _axis){
	HX_STACK_FRAME("luxe.Input","gamepadaxis",0x36becc86,"luxe.Input.gamepadaxis","luxe/Input.hx",127,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_axis,"_axis")
	HX_STACK_LINE(128)
	::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	::snow::systems::input::Input tmp1 = tmp->app->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	int tmp2 = _gamepad;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	int tmp3 = _axis;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(128)
	Float tmp4 = tmp1->gamepadaxis(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(128)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadaxis,return )

Void Input_obj::bind_key( ::String _name,int _key){
{
		HX_STACK_FRAME("luxe.Input","bind_key",0x3768d999,"luxe.Input.bind_key","luxe/Input.hx",135,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_key,"_key")
		HX_STACK_LINE(137)
		::haxe::ds::StringMap tmp = this->key_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		if ((tmp3)){
			HX_STACK_LINE(138)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(138)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(138)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(138)
			::haxe::ds::IntMap value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(138)
			::haxe::ds::StringMap tmp5 = this->key_bindings;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			::haxe::ds::IntMap tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(141)
		::haxe::ds::StringMap tmp4 = this->key_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(141)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(141)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(141)
		::haxe::ds::IntMap _kb = tmp6;		HX_STACK_VAR(_kb,"_kb");
		HX_STACK_LINE(142)
		int tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(142)
		_kb->set(tmp7,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,bind_key,(void))

Void Input_obj::unbind_key( ::String _name,int _key){
{
		HX_STACK_FRAME("luxe.Input","unbind_key",0xffdbe7f2,"luxe.Input.unbind_key","luxe/Input.hx",147,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_key,"_key")
		HX_STACK_LINE(149)
		::haxe::ds::StringMap tmp = this->key_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		if ((tmp3)){
			HX_STACK_LINE(149)
			return null();
		}
		HX_STACK_LINE(151)
		::haxe::ds::StringMap tmp4 = this->key_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		::haxe::ds::IntMap _kb = tmp6;		HX_STACK_VAR(_kb,"_kb");
		HX_STACK_LINE(152)
		int tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(152)
		_kb->remove(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,unbind_key,(void))

Void Input_obj::bind_mouse( ::String _name,int _button){
{
		HX_STACK_FRAME("luxe.Input","bind_mouse",0xb3ebd89f,"luxe.Input.bind_mouse","luxe/Input.hx",157,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_LINE(159)
		::haxe::ds::StringMap tmp = this->mouse_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		if ((tmp3)){
			HX_STACK_LINE(160)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(160)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(160)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(160)
			::haxe::ds::IntMap value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(160)
			::haxe::ds::StringMap tmp5 = this->mouse_bindings;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			::haxe::ds::IntMap tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(163)
		::haxe::ds::StringMap tmp4 = this->mouse_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(163)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(163)
		::haxe::ds::IntMap _mb = tmp6;		HX_STACK_VAR(_mb,"_mb");
		HX_STACK_LINE(164)
		int tmp7 = _button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		_mb->set(tmp7,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,bind_mouse,(void))

Void Input_obj::unbind_mouse( ::String _name,int _button){
{
		HX_STACK_FRAME("luxe.Input","unbind_mouse",0xca01ef38,"luxe.Input.unbind_mouse","luxe/Input.hx",169,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_LINE(171)
		::haxe::ds::StringMap tmp = this->mouse_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		if ((tmp3)){
			HX_STACK_LINE(171)
			return null();
		}
		HX_STACK_LINE(173)
		::haxe::ds::StringMap tmp4 = this->mouse_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		::haxe::ds::IntMap _mb = tmp6;		HX_STACK_VAR(_mb,"_mb");
		HX_STACK_LINE(174)
		int tmp7 = _button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		_mb->remove(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,unbind_mouse,(void))

Void Input_obj::bind_gamepad( ::String _name,int _gamepad_button,Dynamic _gamepad_id){
{
		HX_STACK_FRAME("luxe.Input","bind_gamepad",0x321db59b,"luxe.Input.bind_gamepad","luxe/Input.hx",179,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_gamepad_button,"_gamepad_button")
		HX_STACK_ARG(_gamepad_id,"_gamepad_id")
		HX_STACK_LINE(181)
		::haxe::ds::StringMap tmp = this->gamepad_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		if ((tmp3)){
			HX_STACK_LINE(182)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(182)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(182)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(182)
			::haxe::ds::IntMap value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(182)
			::haxe::ds::StringMap tmp5 = this->gamepad_bindings;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(182)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(182)
			::haxe::ds::IntMap tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(185)
		::haxe::ds::StringMap tmp4 = this->gamepad_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		::haxe::ds::IntMap _gp = tmp6;		HX_STACK_VAR(_gp,"_gp");
		HX_STACK_LINE(186)
		int tmp7 = _gamepad_button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(186)
		Dynamic tmp8 = _gamepad_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(186)
		_gp->set(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,bind_gamepad,(void))

Void Input_obj::unbind_gamepad( ::String _name,int _button){
{
		HX_STACK_FRAME("luxe.Input","unbind_gamepad",0x8ad96474,"luxe.Input.unbind_gamepad","luxe/Input.hx",191,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_LINE(193)
		::haxe::ds::StringMap tmp = this->gamepad_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(193)
			return null();
		}
		HX_STACK_LINE(195)
		::haxe::ds::StringMap tmp4 = this->gamepad_bindings;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(195)
		::haxe::ds::IntMap _gp = tmp6;		HX_STACK_VAR(_gp,"_gp");
		HX_STACK_LINE(196)
		int tmp7 = _button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		_gp->remove(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,unbind_gamepad,(void))

Void Input_obj::init( ){
{
		HX_STACK_FRAME("luxe.Input","init",0x41ff1fcc,"luxe.Input.init","luxe/Input.hx",202,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(204)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(204)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(204)
			tmp = tmp2;
		}
		HX_STACK_LINE(204)
		this->key_bindings = tmp;
		HX_STACK_LINE(205)
		::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(205)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(205)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(205)
		this->mouse_bindings = tmp1;
		HX_STACK_LINE(206)
		::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(206)
		this->gamepad_bindings = tmp2;
		HX_STACK_LINE(208)
		::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		{
			HX_STACK_LINE(208)
			::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(208)
			tmp3 = tmp5;
		}
		HX_STACK_LINE(208)
		this->_named_input_down = tmp3;
		HX_STACK_LINE(209)
		::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(209)
			tmp4 = tmp6;
		}
		HX_STACK_LINE(209)
		this->_named_input_pressed = tmp4;
		HX_STACK_LINE(210)
		::haxe::ds::StringMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			::haxe::ds::StringMap tmp6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(210)
			::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(210)
			tmp5 = tmp7;
		}
		HX_STACK_LINE(210)
		this->_named_input_released = tmp5;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,init,(void))

Void Input_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Input","destroy",0x250ce5be,"luxe.Input.destroy","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,destroy,(void))

Void Input_obj::process( ){
{
		HX_STACK_FRAME("luxe.Input","process",0xf1d15b33,"luxe.Input.process","luxe/Input.hx",222,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(228)
		::haxe::ds::StringMap tmp = this->_named_input_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _event = __it->next();
			{
				HX_STACK_LINE(230)
				::haxe::ds::StringMap tmp2 = this->_named_input_pressed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(230)
				::String tmp3 = _event;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(230)
				Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(230)
				Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(230)
				if ((tmp5)){
					HX_STACK_LINE(231)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(231)
					::String tmp7 = _event;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(231)
					tmp6->remove(tmp7);
				}
				else{
					HX_STACK_LINE(233)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(233)
					::String tmp7 = _event;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(233)
					tmp6->set(tmp7,true);
				}
			}
;
		}
		HX_STACK_LINE(241)
		::haxe::ds::StringMap tmp2 = this->_named_input_released;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(241)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
			::String _event = __it->next();
			{
				HX_STACK_LINE(243)
				::haxe::ds::StringMap tmp4 = this->_named_input_released;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(243)
				::String tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(243)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(243)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(243)
				if ((tmp7)){
					HX_STACK_LINE(244)
					::haxe::ds::StringMap tmp8 = this->_named_input_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(244)
					::String tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(244)
					tmp8->remove(tmp9);
				}
				else{
					HX_STACK_LINE(246)
					::haxe::ds::StringMap tmp8 = this->_named_input_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(246)
					::String tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(246)
					tmp8->set(tmp9,true);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,process,(void))

Void Input_obj::onmousedown( int _x,int _y,int _button,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onmousedown",0xd525f2cc,"luxe.Input.onmousedown","luxe/Input.hx",257,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(259)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		if ((tmp1)){
			HX_STACK_LINE(259)
			return null();
		}
		HX_STACK_LINE(261)
		::luxe::MouseEvent tmp2 = this->mouse_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		int tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		int tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(261)
		int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(261)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(261)
		int tmp7 = _window_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(261)
		tmp2->set_press(tmp3,tmp4,tmp5,::luxe::InteractState_obj::down,tmp6,tmp7);
		HX_STACK_LINE(263)
		::luxe::MouseEvent tmp8 = this->mouse_event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(263)
		this->check_named_mouse(tmp8,true);
		HX_STACK_LINE(265)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(265)
		::luxe::MouseEvent tmp10 = this->mouse_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(265)
		tmp9->emitter->emit((int)17,tmp10);
		HX_STACK_LINE(267)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(267)
		::luxe::MouseEvent tmp12 = this->mouse_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(267)
		tmp11->game->onmousedown(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,onmousedown,(void))

Void Input_obj::onmouseup( int _x,int _y,int _button,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onmouseup",0x05061245,"luxe.Input.onmouseup","luxe/Input.hx",271,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(273)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		if ((tmp1)){
			HX_STACK_LINE(273)
			return null();
		}
		HX_STACK_LINE(275)
		::luxe::MouseEvent tmp2 = this->mouse_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		int tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		int tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(275)
		int tmp7 = _window_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(275)
		tmp2->set_press(tmp3,tmp4,tmp5,::luxe::InteractState_obj::up,tmp6,tmp7);
		HX_STACK_LINE(277)
		::luxe::MouseEvent tmp8 = this->mouse_event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(277)
		this->check_named_mouse(tmp8,null());
		HX_STACK_LINE(279)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(279)
		::luxe::MouseEvent tmp10 = this->mouse_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(279)
		tmp9->emitter->emit((int)18,tmp10);
		HX_STACK_LINE(281)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(281)
		::luxe::MouseEvent tmp12 = this->mouse_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(281)
		tmp11->game->onmouseup(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,onmouseup,(void))

Void Input_obj::onmousemove( int _x,int _y,int _x_rel,int _y_rel,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onmousemove",0xdb18dd7b,"luxe.Input.onmousemove","luxe/Input.hx",285,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_x_rel,"_x_rel")
		HX_STACK_ARG(_y_rel,"_y_rel")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(287)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		if ((tmp1)){
			HX_STACK_LINE(287)
			return null();
		}
		HX_STACK_LINE(289)
		::luxe::MouseEvent tmp2 = this->mouse_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		int tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(289)
		int tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(289)
		int tmp5 = _x_rel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(289)
		int tmp6 = _y_rel;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(289)
		Float tmp7 = _timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(289)
		int tmp8 = _window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(289)
		tmp2->set_move(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(291)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(291)
		::luxe::MouseEvent tmp10 = this->mouse_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(291)
		tmp9->emitter->emit((int)19,tmp10);
		HX_STACK_LINE(293)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(293)
		::luxe::MouseEvent tmp12 = this->mouse_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(293)
		tmp11->game->onmousemove(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,onmousemove,(void))

Void Input_obj::onmousewheel( Float _x,Float _y,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onmousewheel",0x97fd56f1,"luxe.Input.onmousewheel","luxe/Input.hx",297,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(299)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		if ((tmp1)){
			HX_STACK_LINE(299)
			return null();
		}
		HX_STACK_LINE(301)
		::luxe::MouseEvent tmp2 = this->mouse_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(301)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(301)
		Float tmp5 = _timestamp;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(301)
		int tmp6 = _window_id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(301)
		tmp2->set_wheel(tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(303)
		::luxe::MouseEvent tmp7 = this->mouse_event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(303)
		this->check_named_mouse(tmp7,false);
		HX_STACK_LINE(305)
		::luxe::Engine tmp8 = this->core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(305)
		::luxe::MouseEvent tmp9 = this->mouse_event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(305)
		tmp8->emitter->emit((int)20,tmp9);
		HX_STACK_LINE(307)
		::luxe::Engine tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(307)
		::luxe::MouseEvent tmp11 = this->mouse_event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(307)
		tmp10->game->onmousewheel(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,onmousewheel,(void))

Void Input_obj::onkeydown( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onkeydown",0xf6014006,"luxe.Input.onkeydown","luxe/Input.hx",313,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_keycode,"_keycode")
		HX_STACK_ARG(_scancode,"_scancode")
		HX_STACK_ARG(_repeat,"_repeat")
		HX_STACK_ARG(_mod,"_mod")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(315)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		if ((tmp1)){
			HX_STACK_LINE(315)
			return null();
		}
		HX_STACK_LINE(317)
		::luxe::KeyEvent tmp2 = this->key_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		int tmp3 = _keycode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(317)
		int tmp4 = _scancode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(317)
		bool tmp5 = _repeat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(317)
		::snow::types::ModState tmp6 = _mod;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(317)
		Float tmp7 = _timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		int tmp8 = _window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(317)
		tmp2->set(tmp3,tmp4,tmp5,tmp6,::luxe::InteractState_obj::down,tmp7,tmp8);
		HX_STACK_LINE(319)
		::luxe::KeyEvent tmp9 = this->key_event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(319)
		this->check_named_keys(tmp9,true);
		HX_STACK_LINE(321)
		::luxe::Engine tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(321)
		::luxe::KeyEvent tmp11 = this->key_event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(321)
		tmp10->emitter->emit((int)12,tmp11);
		HX_STACK_LINE(323)
		::luxe::Engine tmp12 = this->core;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(323)
		::luxe::KeyEvent tmp13 = this->key_event;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(323)
		tmp12->game->onkeydown(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,onkeydown,(void))

Void Input_obj::onkeyup( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","onkeyup",0xe295bcff,"luxe.Input.onkeyup","luxe/Input.hx",327,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_keycode,"_keycode")
		HX_STACK_ARG(_scancode,"_scancode")
		HX_STACK_ARG(_repeat,"_repeat")
		HX_STACK_ARG(_mod,"_mod")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(329)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(329)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		if ((tmp1)){
			HX_STACK_LINE(329)
			return null();
		}
		HX_STACK_LINE(331)
		::luxe::KeyEvent tmp2 = this->key_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		int tmp3 = _keycode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(331)
		int tmp4 = _scancode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(331)
		bool tmp5 = _repeat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(331)
		::snow::types::ModState tmp6 = _mod;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(331)
		Float tmp7 = _timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(331)
		int tmp8 = _window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(331)
		tmp2->set(tmp3,tmp4,tmp5,tmp6,::luxe::InteractState_obj::up,tmp7,tmp8);
		HX_STACK_LINE(333)
		::luxe::KeyEvent tmp9 = this->key_event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(333)
		this->check_named_keys(tmp9,null());
		HX_STACK_LINE(335)
		::luxe::Engine tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(335)
		::luxe::KeyEvent tmp11 = this->key_event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(335)
		tmp10->emitter->emit((int)13,tmp11);
		HX_STACK_LINE(337)
		::luxe::Engine tmp12 = this->core;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(337)
		::luxe::KeyEvent tmp13 = this->key_event;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(337)
		tmp12->game->onkeyup(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,onkeyup,(void))

Void Input_obj::ontextinput( ::String _text,int _start,int _length,int _etype,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Input","ontextinput",0x951a5202,"luxe.Input.ontextinput","luxe/Input.hx",341,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_text,"_text")
		HX_STACK_ARG(_start,"_start")
		HX_STACK_ARG(_length,"_length")
		HX_STACK_ARG(_etype,"_etype")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(343)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(343)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		if ((tmp1)){
			HX_STACK_LINE(343)
			return null();
		}
		HX_STACK_LINE(345)
		int tmp2 = _etype;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		::luxe::TextEventType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(345)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(346)
				tmp3 = ::luxe::TextEventType_obj::edit;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(347)
				tmp3 = ::luxe::TextEventType_obj::input;
			}
			;break;
			default: {
				HX_STACK_LINE(348)
				return null();
			}
		}
		HX_STACK_LINE(345)
		::luxe::TextEventType _type = tmp3;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(351)
		::luxe::TextEvent tmp4 = this->text_event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(351)
		::String tmp5 = _text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(351)
		int tmp6 = _start;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(351)
		int tmp7 = _length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(351)
		::luxe::TextEventType tmp8 = _type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(351)
		Float tmp9 = _timestamp;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(351)
		int tmp10 = _window_id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(351)
		tmp4->set(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);
		HX_STACK_LINE(353)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(353)
		::luxe::TextEvent tmp12 = this->text_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(353)
		tmp11->emitter->emit((int)14,tmp12);
		HX_STACK_LINE(355)
		::luxe::Engine tmp13 = this->core;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(355)
		::luxe::TextEvent tmp14 = this->text_event;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(355)
		tmp13->game->ontextinput(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,ontextinput,(void))

Void Input_obj::ontouchdown( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ontouchdown",0xee3dc966,"luxe.Input.ontouchdown","luxe/Input.hx",361,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_dx,"_dx")
		HX_STACK_ARG(_dy,"_dy")
		HX_STACK_ARG(_touch_id,"_touch_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(363)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(363)
		if ((tmp1)){
			HX_STACK_LINE(363)
			return null();
		}
		HX_STACK_LINE(365)
		::luxe::TouchEvent tmp2 = this->touch_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(365)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(365)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(365)
		Float tmp5 = _dx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(365)
		Float tmp6 = _dy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(365)
		int tmp7 = _touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(365)
		Float tmp8 = _timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(365)
		tmp2->set(tmp3,tmp4,tmp5,tmp6,tmp7,::luxe::InteractState_obj::down,tmp8);
		HX_STACK_LINE(367)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(367)
		::luxe::TouchEvent tmp10 = this->touch_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(367)
		tmp9->emitter->emit((int)21,tmp10);
		HX_STACK_LINE(369)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(369)
		::luxe::TouchEvent tmp12 = this->touch_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(369)
		tmp11->game->ontouchdown(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,ontouchdown,(void))

Void Input_obj::ontouchup( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ontouchup",0x1d8b2e5f,"luxe.Input.ontouchup","luxe/Input.hx",373,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_dx,"_dx")
		HX_STACK_ARG(_dy,"_dy")
		HX_STACK_ARG(_touch_id,"_touch_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(375)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		if ((tmp1)){
			HX_STACK_LINE(375)
			return null();
		}
		HX_STACK_LINE(377)
		::luxe::TouchEvent tmp2 = this->touch_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(377)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(377)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(377)
		Float tmp5 = _dx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(377)
		Float tmp6 = _dy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(377)
		int tmp7 = _touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(377)
		Float tmp8 = _timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(377)
		tmp2->set(tmp3,tmp4,tmp5,tmp6,tmp7,::luxe::InteractState_obj::up,tmp8);
		HX_STACK_LINE(379)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(379)
		::luxe::TouchEvent tmp10 = this->touch_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(379)
		tmp9->emitter->emit((int)22,tmp10);
		HX_STACK_LINE(381)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(381)
		::luxe::TouchEvent tmp12 = this->touch_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(381)
		tmp11->game->ontouchup(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,ontouchup,(void))

Void Input_obj::ontouchmove( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ontouchmove",0xf430b415,"luxe.Input.ontouchmove","luxe/Input.hx",385,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_dx,"_dx")
		HX_STACK_ARG(_dy,"_dy")
		HX_STACK_ARG(_touch_id,"_touch_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(387)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(387)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(387)
		if ((tmp1)){
			HX_STACK_LINE(387)
			return null();
		}
		HX_STACK_LINE(389)
		::luxe::TouchEvent tmp2 = this->touch_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(389)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(389)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(389)
		Float tmp5 = _dx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(389)
		Float tmp6 = _dy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(389)
		int tmp7 = _touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(389)
		Float tmp8 = _timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(389)
		tmp2->set(tmp3,tmp4,tmp5,tmp6,tmp7,::luxe::InteractState_obj::move,tmp8);
		HX_STACK_LINE(391)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(391)
		::luxe::TouchEvent tmp10 = this->touch_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(391)
		tmp9->emitter->emit((int)23,tmp10);
		HX_STACK_LINE(393)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(393)
		::luxe::TouchEvent tmp12 = this->touch_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(393)
		tmp11->game->ontouchmove(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,ontouchmove,(void))

Void Input_obj::ongamepadaxis( int _gamepad,int _axis,Float _value,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ongamepadaxis",0xd1798ac7,"luxe.Input.ongamepadaxis","luxe/Input.hx",399,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_axis,"_axis")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(401)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(401)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(401)
		if ((tmp1)){
			HX_STACK_LINE(401)
			return null();
		}
		HX_STACK_LINE(403)
		::luxe::GamepadEvent tmp2 = this->gamepad_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(403)
		int tmp3 = _gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(403)
		int tmp4 = _axis;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(403)
		Float tmp5 = _value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(403)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(403)
		tmp2->set_axis(tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(405)
		::luxe::Engine tmp7 = this->core;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(405)
		::luxe::GamepadEvent tmp8 = this->gamepad_event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(405)
		tmp7->emitter->emit((int)24,tmp8);
		HX_STACK_LINE(407)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(407)
		::luxe::GamepadEvent tmp10 = this->gamepad_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(407)
		tmp9->game->ongamepadaxis(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,ongamepadaxis,(void))

Void Input_obj::ongamepaddown( int _gamepad,int _button,Float _value,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ongamepaddown",0xd36e6688,"luxe.Input.ongamepaddown","luxe/Input.hx",411,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(413)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(413)
		if ((tmp1)){
			HX_STACK_LINE(413)
			return null();
		}
		HX_STACK_LINE(415)
		::luxe::GamepadEvent tmp2 = this->gamepad_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(415)
		int tmp3 = _gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(415)
		int tmp4 = _button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(415)
		Float tmp5 = _value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(415)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(415)
		tmp2->set_button(tmp3,tmp4,tmp5,::luxe::InteractState_obj::down,tmp6);
		HX_STACK_LINE(417)
		::luxe::GamepadEvent tmp7 = this->gamepad_event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(417)
		this->check_named_gamepad_buttons(tmp7,true);
		HX_STACK_LINE(419)
		::luxe::Engine tmp8 = this->core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(419)
		::luxe::GamepadEvent tmp9 = this->gamepad_event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(419)
		tmp8->emitter->emit((int)25,tmp9);
		HX_STACK_LINE(421)
		::luxe::Engine tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(421)
		::luxe::GamepadEvent tmp11 = this->gamepad_event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(421)
		tmp10->game->ongamepaddown(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,ongamepaddown,(void))

Void Input_obj::ongamepadup( int _gamepad,int _button,Float _value,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ongamepadup",0x3074df01,"luxe.Input.ongamepadup","luxe/Input.hx",425,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(427)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(427)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(427)
		if ((tmp1)){
			HX_STACK_LINE(427)
			return null();
		}
		HX_STACK_LINE(429)
		::luxe::GamepadEvent tmp2 = this->gamepad_event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(429)
		int tmp3 = _gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(429)
		int tmp4 = _button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(429)
		Float tmp5 = _value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(429)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(429)
		tmp2->set_button(tmp3,tmp4,tmp5,::luxe::InteractState_obj::up,tmp6);
		HX_STACK_LINE(431)
		::luxe::GamepadEvent tmp7 = this->gamepad_event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(431)
		this->check_named_gamepad_buttons(tmp7,false);
		HX_STACK_LINE(433)
		::luxe::Engine tmp8 = this->core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(433)
		::luxe::GamepadEvent tmp9 = this->gamepad_event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(433)
		tmp8->emitter->emit((int)26,tmp9);
		HX_STACK_LINE(435)
		::luxe::Engine tmp10 = this->core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(435)
		::luxe::GamepadEvent tmp11 = this->gamepad_event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(435)
		tmp10->game->ongamepadup(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,ongamepadup,(void))

Void Input_obj::ongamepaddevice( int _gamepad,::String _id,int _etype,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Input","ongamepaddevice",0x960ca03c,"luxe.Input.ongamepaddevice","luxe/Input.hx",439,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_etype,"_etype")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(441)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(441)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(441)
		if ((tmp1)){
			HX_STACK_LINE(441)
			return null();
		}
		HX_STACK_LINE(443)
		int tmp2 = _etype;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(443)
		::luxe::GamepadEventType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(444)
				tmp3 = ::luxe::GamepadEventType_obj::device_added;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(445)
				tmp3 = ::luxe::GamepadEventType_obj::device_removed;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(446)
				tmp3 = ::luxe::GamepadEventType_obj::device_remapped;
			}
			;break;
			default: {
				HX_STACK_LINE(447)
				tmp3 = ::luxe::GamepadEventType_obj::unknown;
			}
		}
		HX_STACK_LINE(443)
		::luxe::GamepadEventType _type = tmp3;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(450)
		::luxe::GamepadEvent tmp4 = this->gamepad_event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(450)
		int tmp5 = _gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(450)
		::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(450)
		::luxe::GamepadEventType tmp7 = _type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(450)
		Float tmp8 = _timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(450)
		tmp4->set_device(tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(452)
		::luxe::Engine tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(452)
		::luxe::GamepadEvent tmp10 = this->gamepad_event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(452)
		tmp9->emitter->emit((int)27,tmp10);
		HX_STACK_LINE(454)
		::luxe::Engine tmp11 = this->core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(454)
		::luxe::GamepadEvent tmp12 = this->gamepad_event;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(454)
		tmp11->game->ongamepaddevice(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,ongamepaddevice,(void))

Void Input_obj::oninputdown( ::String _name,::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event){
{
		HX_STACK_FRAME("luxe.Input","oninputdown",0xeffbf731,"luxe.Input.oninputdown","luxe/Input.hx",460,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_key_event,"_key_event")
		HX_STACK_ARG(_mouse_event,"_mouse_event")
		HX_STACK_ARG(_touch_event,"_touch_event")
		HX_STACK_ARG(_gamepad_event,"_gamepad_event")
		HX_STACK_LINE(462)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(462)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(462)
		if ((tmp1)){
			HX_STACK_LINE(462)
			return null();
		}
		HX_STACK_LINE(464)
		bool tmp2 = (_key_event != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(464)
		if ((tmp2)){
			HX_STACK_LINE(465)
			::luxe::InputEvent tmp3 = this->input_event;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(465)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(465)
			::luxe::KeyEvent tmp5 = _key_event;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(465)
			tmp3->set_key(tmp4,::luxe::InteractState_obj::down,tmp5);
		}
		else{
			HX_STACK_LINE(467)
			bool tmp3 = (_mouse_event != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(467)
			if ((tmp3)){
				HX_STACK_LINE(468)
				::luxe::InputEvent tmp4 = this->input_event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(468)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(468)
				::luxe::MouseEvent tmp6 = _mouse_event;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(468)
				tmp4->set_mouse(tmp5,::luxe::InteractState_obj::down,tmp6);
			}
			else{
				HX_STACK_LINE(470)
				bool tmp4 = (_touch_event != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(470)
				if ((tmp4)){
					HX_STACK_LINE(471)
					::luxe::InputEvent tmp5 = this->input_event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(471)
					::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(471)
					::luxe::TouchEvent tmp7 = _touch_event;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(471)
					tmp5->set_touch(tmp6,::luxe::InteractState_obj::down,tmp7);
				}
				else{
					HX_STACK_LINE(473)
					bool tmp5 = (_gamepad_event != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(473)
					if ((tmp5)){
						HX_STACK_LINE(474)
						::luxe::InputEvent tmp6 = this->input_event;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(474)
						::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(474)
						::luxe::GamepadEvent tmp8 = _gamepad_event;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(474)
						tmp6->set_gamepad(tmp7,::luxe::InteractState_obj::down,tmp8);
					}
					else{
						HX_STACK_LINE(477)
						::luxe::InputEvent tmp6 = this->input_event;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(477)
						::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(477)
						tmp6->set_unknown(tmp7,::luxe::InteractState_obj::down);
					}
				}
			}
		}
		HX_STACK_LINE(480)
		::luxe::Engine tmp3 = this->core;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		::luxe::InputEvent tmp4 = this->input_event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(480)
		tmp3->emitter->emit((int)15,tmp4);
		HX_STACK_LINE(482)
		::luxe::Engine tmp5 = this->core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(482)
		::luxe::InputEvent tmp6 = this->input_event;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(482)
		tmp5->game->oninputdown(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,oninputdown,(void))

Void Input_obj::oninputup( ::String _name,::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event){
{
		HX_STACK_FRAME("luxe.Input","oninputup",0x18b1c36a,"luxe.Input.oninputup","luxe/Input.hx",486,0x19edc1cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_key_event,"_key_event")
		HX_STACK_ARG(_mouse_event,"_mouse_event")
		HX_STACK_ARG(_touch_event,"_touch_event")
		HX_STACK_ARG(_gamepad_event,"_gamepad_event")
		HX_STACK_LINE(488)
		::luxe::Engine tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		bool tmp1 = tmp->shutting_down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(488)
		if ((tmp1)){
			HX_STACK_LINE(488)
			return null();
		}
		HX_STACK_LINE(490)
		bool tmp2 = (_key_event != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(490)
		if ((tmp2)){
			HX_STACK_LINE(491)
			::luxe::InputEvent tmp3 = this->input_event;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(491)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(491)
			::luxe::KeyEvent tmp5 = _key_event;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(491)
			tmp3->set_key(tmp4,::luxe::InteractState_obj::up,tmp5);
		}
		else{
			HX_STACK_LINE(493)
			bool tmp3 = (_mouse_event != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(493)
			if ((tmp3)){
				HX_STACK_LINE(494)
				::luxe::InputEvent tmp4 = this->input_event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(494)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(494)
				::luxe::MouseEvent tmp6 = _mouse_event;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(494)
				tmp4->set_mouse(tmp5,::luxe::InteractState_obj::up,tmp6);
			}
			else{
				HX_STACK_LINE(496)
				bool tmp4 = (_touch_event != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(496)
				if ((tmp4)){
					HX_STACK_LINE(497)
					::luxe::InputEvent tmp5 = this->input_event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(497)
					::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(497)
					::luxe::TouchEvent tmp7 = _touch_event;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(497)
					tmp5->set_touch(tmp6,::luxe::InteractState_obj::up,tmp7);
				}
				else{
					HX_STACK_LINE(499)
					bool tmp5 = (_gamepad_event != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(499)
					if ((tmp5)){
						HX_STACK_LINE(500)
						::luxe::InputEvent tmp6 = this->input_event;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(500)
						::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(500)
						::luxe::GamepadEvent tmp8 = _gamepad_event;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(500)
						tmp6->set_gamepad(tmp7,::luxe::InteractState_obj::up,tmp8);
					}
					else{
						HX_STACK_LINE(503)
						::luxe::InputEvent tmp6 = this->input_event;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(503)
						::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(503)
						tmp6->set_unknown(tmp7,::luxe::InteractState_obj::up);
					}
				}
			}
		}
		HX_STACK_LINE(506)
		::luxe::Engine tmp3 = this->core;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(506)
		::luxe::InputEvent tmp4 = this->input_event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(506)
		tmp3->emitter->emit((int)16,tmp4);
		HX_STACK_LINE(508)
		::luxe::Engine tmp5 = this->core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(508)
		::luxe::InputEvent tmp6 = this->input_event;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(508)
		tmp5->game->oninputup(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,oninputup,(void))

Void Input_obj::check_named_keys( ::luxe::KeyEvent e,hx::Null< bool >  __o__down){
bool _down = __o__down.Default(false);
	HX_STACK_FRAME("luxe.Input","check_named_keys",0x66d0b78d,"luxe.Input.check_named_keys","luxe/Input.hx",514,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_down,"_down")
{
		HX_STACK_LINE(516)
		Array< ::String > _fired = Array_obj< ::String >::__new();		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(517)
		::haxe::ds::StringMap tmp = this->key_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(517)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(517)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(519)
				::haxe::ds::StringMap tmp2 = this->key_bindings;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(519)
				::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(519)
				::haxe::ds::IntMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(519)
				::haxe::ds::IntMap _b = tmp4;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(520)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(520)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(520)
				if ((tmp5)){
					HX_STACK_LINE(520)
					tmp6 = e->repeat;
				}
				else{
					HX_STACK_LINE(520)
					tmp6 = false;
				}
				HX_STACK_LINE(520)
				bool _is_down_repeat = tmp6;		HX_STACK_VAR(_is_down_repeat,"_is_down_repeat");
				HX_STACK_LINE(521)
				int tmp7 = e->keycode;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(521)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(521)
				bool tmp9 = _b->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(521)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(521)
				if ((tmp9)){
					HX_STACK_LINE(521)
					bool tmp11 = _is_down_repeat;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(521)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(521)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(521)
					tmp10 = false;
				}
				HX_STACK_LINE(521)
				if ((tmp10)){
					HX_STACK_LINE(522)
					::String tmp11 = _name;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(522)
					bool tmp12 = ::Lambda_obj::has(_fired,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(522)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(522)
					if ((tmp13)){
						HX_STACK_LINE(523)
						::String tmp14 = _name;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(523)
						_fired->push(tmp14);
					}
				}
			}
;
		}
		HX_STACK_LINE(529)
		{
			HX_STACK_LINE(529)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(529)
			while((true)){
				HX_STACK_LINE(529)
				bool tmp2 = (_g < _fired->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(529)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(529)
				if ((tmp3)){
					HX_STACK_LINE(529)
					break;
				}
				HX_STACK_LINE(529)
				::String tmp4 = _fired->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(529)
				::String _f = tmp4;		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(529)
				++(_g);
				HX_STACK_LINE(530)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(530)
				if ((tmp5)){
					HX_STACK_LINE(533)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(533)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(533)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(535)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(535)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(535)
					tmp8->set(tmp9,true);
					HX_STACK_LINE(537)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(537)
					::luxe::KeyEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(537)
					this->oninputdown(tmp10,tmp11,null(),null(),null());
				}
				else{
					HX_STACK_LINE(542)
					::haxe::ds::StringMap tmp6 = this->_named_input_released;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(542)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(542)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(544)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(544)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(544)
					tmp8->remove(tmp9);
					HX_STACK_LINE(546)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(546)
					::luxe::KeyEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(546)
					this->oninputup(tmp10,tmp11,null(),null(),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,check_named_keys,(void))

Void Input_obj::check_named_mouse( ::luxe::MouseEvent e,hx::Null< bool >  __o__down){
bool _down = __o__down.Default(false);
	HX_STACK_FRAME("luxe.Input","check_named_mouse",0xbd36266c,"luxe.Input.check_named_mouse","luxe/Input.hx",553,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_down,"_down")
{
		HX_STACK_LINE(555)
		Array< ::String > _fired = Array_obj< ::String >::__new();		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(556)
		::haxe::ds::StringMap tmp = this->mouse_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(556)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(556)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(558)
				::haxe::ds::StringMap tmp2 = this->mouse_bindings;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(558)
				::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(558)
				::haxe::ds::IntMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(558)
				::haxe::ds::IntMap _b = tmp4;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(559)
				int tmp5 = e->button;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(559)
				bool tmp6 = _b->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(559)
				if ((tmp6)){
					HX_STACK_LINE(560)
					::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(560)
					bool tmp8 = ::Lambda_obj::has(_fired,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(560)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(560)
					if ((tmp9)){
						HX_STACK_LINE(561)
						::String tmp10 = _name;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(561)
						_fired->push(tmp10);
					}
				}
			}
;
		}
		HX_STACK_LINE(567)
		{
			HX_STACK_LINE(567)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(567)
			while((true)){
				HX_STACK_LINE(567)
				bool tmp2 = (_g < _fired->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(567)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(567)
				if ((tmp3)){
					HX_STACK_LINE(567)
					break;
				}
				HX_STACK_LINE(567)
				::String tmp4 = _fired->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(567)
				::String _f = tmp4;		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(567)
				++(_g);
				HX_STACK_LINE(568)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(568)
				if ((tmp5)){
					HX_STACK_LINE(571)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(571)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(571)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(573)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(573)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(573)
					tmp8->set(tmp9,true);
					HX_STACK_LINE(575)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(575)
					::luxe::MouseEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(575)
					this->oninputdown(tmp10,null(),tmp11,null(),null());
				}
				else{
					HX_STACK_LINE(580)
					::haxe::ds::StringMap tmp6 = this->_named_input_released;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(580)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(580)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(582)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(582)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(582)
					tmp8->remove(tmp9);
					HX_STACK_LINE(584)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(584)
					::luxe::MouseEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(584)
					this->oninputup(tmp10,null(),tmp11,null(),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,check_named_mouse,(void))

Void Input_obj::check_named_gamepad_buttons( ::luxe::GamepadEvent e,hx::Null< bool >  __o__down){
bool _down = __o__down.Default(false);
	HX_STACK_FRAME("luxe.Input","check_named_gamepad_buttons",0xe4db646a,"luxe.Input.check_named_gamepad_buttons","luxe/Input.hx",591,0x19edc1cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_down,"_down")
{
		HX_STACK_LINE(593)
		Array< ::String > _fired = Array_obj< ::String >::__new();		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(594)
		::haxe::ds::StringMap tmp = this->gamepad_bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(594)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(594)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(596)
				::haxe::ds::StringMap tmp2 = this->gamepad_bindings;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(596)
				::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(596)
				::haxe::ds::IntMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(596)
				::haxe::ds::IntMap _b = tmp4;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(597)
				int tmp5 = e->button;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(597)
				bool tmp6 = _b->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(597)
				if ((tmp6)){
					HX_STACK_LINE(598)
					int tmp7 = e->button;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(598)
					Dynamic tmp8 = _b->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(598)
					Dynamic _kb = tmp8;		HX_STACK_VAR(_kb,"_kb");
					HX_STACK_LINE(599)
					bool tmp9 = (_kb == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(599)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(599)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(599)
					if ((tmp10)){
						HX_STACK_LINE(599)
						tmp11 = (_kb == e->gamepad);
					}
					else{
						HX_STACK_LINE(599)
						tmp11 = true;
					}
					HX_STACK_LINE(599)
					bool _accepted_gamepad = tmp11;		HX_STACK_VAR(_accepted_gamepad,"_accepted_gamepad");
					HX_STACK_LINE(600)
					::String tmp12 = _name;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(600)
					bool tmp13 = ::Lambda_obj::has(_fired,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(600)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(600)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(600)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(600)
					if ((tmp15)){
						HX_STACK_LINE(600)
						tmp16 = _accepted_gamepad;
					}
					else{
						HX_STACK_LINE(600)
						tmp16 = false;
					}
					HX_STACK_LINE(600)
					if ((tmp16)){
						HX_STACK_LINE(601)
						::String tmp17 = _name;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(601)
						_fired->push(tmp17);
					}
				}
			}
;
		}
		HX_STACK_LINE(606)
		{
			HX_STACK_LINE(606)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(606)
			while((true)){
				HX_STACK_LINE(606)
				bool tmp2 = (_g < _fired->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(606)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(606)
				if ((tmp3)){
					HX_STACK_LINE(606)
					break;
				}
				HX_STACK_LINE(606)
				::String tmp4 = _fired->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(606)
				::String _f = tmp4;		HX_STACK_VAR(_f,"_f");
				HX_STACK_LINE(606)
				++(_g);
				HX_STACK_LINE(607)
				bool tmp5 = _down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(607)
				if ((tmp5)){
					HX_STACK_LINE(610)
					::haxe::ds::StringMap tmp6 = this->_named_input_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(610)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(610)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(612)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(612)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(612)
					tmp8->set(tmp9,true);
					HX_STACK_LINE(614)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(614)
					::luxe::GamepadEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(614)
					this->oninputdown(tmp10,null(),null(),null(),tmp11);
				}
				else{
					HX_STACK_LINE(619)
					::haxe::ds::StringMap tmp6 = this->_named_input_released;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(619)
					::String tmp7 = _f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(619)
					tmp6->set(tmp7,false);
					HX_STACK_LINE(621)
					::haxe::ds::StringMap tmp8 = this->_named_input_down;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(621)
					::String tmp9 = _f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(621)
					tmp8->remove(tmp9);
					HX_STACK_LINE(623)
					::String tmp10 = _f;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(623)
					::luxe::GamepadEvent tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(623)
					this->oninputup(tmp10,null(),null(),null(),tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,check_named_gamepad_buttons,(void))


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(key_bindings,"key_bindings");
	HX_MARK_MEMBER_NAME(mouse_bindings,"mouse_bindings");
	HX_MARK_MEMBER_NAME(gamepad_bindings,"gamepad_bindings");
	HX_MARK_MEMBER_NAME(_named_input_released,"_named_input_released");
	HX_MARK_MEMBER_NAME(_named_input_pressed,"_named_input_pressed");
	HX_MARK_MEMBER_NAME(_named_input_down,"_named_input_down");
	HX_MARK_MEMBER_NAME(key_event,"key_event");
	HX_MARK_MEMBER_NAME(text_event,"text_event");
	HX_MARK_MEMBER_NAME(mouse_event,"mouse_event");
	HX_MARK_MEMBER_NAME(touch_event,"touch_event");
	HX_MARK_MEMBER_NAME(gamepad_event,"gamepad_event");
	HX_MARK_MEMBER_NAME(input_event,"input_event");
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(key_bindings,"key_bindings");
	HX_VISIT_MEMBER_NAME(mouse_bindings,"mouse_bindings");
	HX_VISIT_MEMBER_NAME(gamepad_bindings,"gamepad_bindings");
	HX_VISIT_MEMBER_NAME(_named_input_released,"_named_input_released");
	HX_VISIT_MEMBER_NAME(_named_input_pressed,"_named_input_pressed");
	HX_VISIT_MEMBER_NAME(_named_input_down,"_named_input_down");
	HX_VISIT_MEMBER_NAME(key_event,"key_event");
	HX_VISIT_MEMBER_NAME(text_event,"text_event");
	HX_VISIT_MEMBER_NAME(mouse_event,"mouse_event");
	HX_VISIT_MEMBER_NAME(touch_event,"touch_event");
	HX_VISIT_MEMBER_NAME(gamepad_event,"gamepad_event");
	HX_VISIT_MEMBER_NAME(input_event,"input_event");
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scandown") ) { return scandown_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_key") ) { return bind_key_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"key_event") ) { return key_event; }
		if (HX_FIELD_EQ(inName,"inputdown") ) { return inputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"text_event") ) { return text_event; }
		if (HX_FIELD_EQ(inName,"keypressed") ) { return keypressed_dyn(); }
		if (HX_FIELD_EQ(inName,"unbind_key") ) { return unbind_key_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_mouse") ) { return bind_mouse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouse_event") ) { return mouse_event; }
		if (HX_FIELD_EQ(inName,"touch_event") ) { return touch_event; }
		if (HX_FIELD_EQ(inName,"input_event") ) { return input_event; }
		if (HX_FIELD_EQ(inName,"keyreleased") ) { return keyreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"scanpressed") ) { return scanpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"key_bindings") ) { return key_bindings; }
		if (HX_FIELD_EQ(inName,"inputpressed") ) { return inputpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"scanreleased") ) { return scanreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"mousepressed") ) { return mousepressed_dyn(); }
		if (HX_FIELD_EQ(inName,"unbind_mouse") ) { return unbind_mouse_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_gamepad") ) { return bind_gamepad_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepad_event") ) { return gamepad_event; }
		if (HX_FIELD_EQ(inName,"inputreleased") ) { return inputreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"mousereleased") ) { return mousereleased_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouse_bindings") ) { return mouse_bindings; }
		if (HX_FIELD_EQ(inName,"gamepadpressed") ) { return gamepadpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"unbind_gamepad") ) { return unbind_gamepad_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"gamepadreleased") ) { return gamepadreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepad_bindings") ) { return gamepad_bindings; }
		if (HX_FIELD_EQ(inName,"check_named_keys") ) { return check_named_keys_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_named_input_down") ) { return _named_input_down; }
		if (HX_FIELD_EQ(inName,"check_named_mouse") ) { return check_named_mouse_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_named_input_pressed") ) { return _named_input_pressed; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_named_input_released") ) { return _named_input_released; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"check_named_gamepad_buttons") ) { return check_named_gamepad_buttons_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Engine >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"key_event") ) { key_event=inValue.Cast< ::luxe::KeyEvent >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"text_event") ) { text_event=inValue.Cast< ::luxe::TextEvent >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouse_event") ) { mouse_event=inValue.Cast< ::luxe::MouseEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touch_event") ) { touch_event=inValue.Cast< ::luxe::TouchEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input_event") ) { input_event=inValue.Cast< ::luxe::InputEvent >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"key_bindings") ) { key_bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepad_event") ) { gamepad_event=inValue.Cast< ::luxe::GamepadEvent >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouse_bindings") ) { mouse_bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepad_bindings") ) { gamepad_bindings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_named_input_down") ) { _named_input_down=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_named_input_pressed") ) { _named_input_pressed=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_named_input_released") ) { _named_input_released=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("key_bindings","\x6e","\x13","\x38","\x46"));
	outFields->push(HX_HCSTRING("mouse_bindings","\x28","\xc6","\x4d","\x00"));
	outFields->push(HX_HCSTRING("gamepad_bindings","\x2c","\xcc","\xd5","\xc5"));
	outFields->push(HX_HCSTRING("_named_input_released","\xb7","\x45","\x2d","\x4a"));
	outFields->push(HX_HCSTRING("_named_input_pressed","\xe8","\x52","\xd1","\x13"));
	outFields->push(HX_HCSTRING("_named_input_down","\x5c","\x30","\x1f","\x6d"));
	outFields->push(HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5"));
	outFields->push(HX_HCSTRING("text_event","\xc8","\x1b","\x08","\x74"));
	outFields->push(HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32"));
	outFields->push(HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2"));
	outFields->push(HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b"));
	outFields->push(HX_HCSTRING("input_event","\xe5","\x76","\x4b","\x32"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Engine*/ ,(int)offsetof(Input_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,key_bindings),HX_HCSTRING("key_bindings","\x6e","\x13","\x38","\x46")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,mouse_bindings),HX_HCSTRING("mouse_bindings","\x28","\xc6","\x4d","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,gamepad_bindings),HX_HCSTRING("gamepad_bindings","\x2c","\xcc","\xd5","\xc5")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_released),HX_HCSTRING("_named_input_released","\xb7","\x45","\x2d","\x4a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_pressed),HX_HCSTRING("_named_input_pressed","\xe8","\x52","\xd1","\x13")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Input_obj,_named_input_down),HX_HCSTRING("_named_input_down","\x5c","\x30","\x1f","\x6d")},
	{hx::fsObject /*::luxe::KeyEvent*/ ,(int)offsetof(Input_obj,key_event),HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5")},
	{hx::fsObject /*::luxe::TextEvent*/ ,(int)offsetof(Input_obj,text_event),HX_HCSTRING("text_event","\xc8","\x1b","\x08","\x74")},
	{hx::fsObject /*::luxe::MouseEvent*/ ,(int)offsetof(Input_obj,mouse_event),HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32")},
	{hx::fsObject /*::luxe::TouchEvent*/ ,(int)offsetof(Input_obj,touch_event),HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2")},
	{hx::fsObject /*::luxe::GamepadEvent*/ ,(int)offsetof(Input_obj,gamepad_event),HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b")},
	{hx::fsObject /*::luxe::InputEvent*/ ,(int)offsetof(Input_obj,input_event),HX_HCSTRING("input_event","\xe5","\x76","\x4b","\x32")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("key_bindings","\x6e","\x13","\x38","\x46"),
	HX_HCSTRING("mouse_bindings","\x28","\xc6","\x4d","\x00"),
	HX_HCSTRING("gamepad_bindings","\x2c","\xcc","\xd5","\xc5"),
	HX_HCSTRING("_named_input_released","\xb7","\x45","\x2d","\x4a"),
	HX_HCSTRING("_named_input_pressed","\xe8","\x52","\xd1","\x13"),
	HX_HCSTRING("_named_input_down","\x5c","\x30","\x1f","\x6d"),
	HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5"),
	HX_HCSTRING("text_event","\xc8","\x1b","\x08","\x74"),
	HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32"),
	HX_HCSTRING("touch_event","\x5a","\x00","\x4e","\xa2"),
	HX_HCSTRING("gamepad_event","\xbc","\x9e","\xd9","\x5b"),
	HX_HCSTRING("input_event","\xe5","\x76","\x4b","\x32"),
	HX_HCSTRING("inputpressed","\xd8","\x03","\xc2","\x04"),
	HX_HCSTRING("inputreleased","\xc7","\x66","\xd7","\x2b"),
	HX_HCSTRING("inputdown","\x6c","\x89","\xbf","\x1e"),
	HX_HCSTRING("keypressed","\xe3","\x4a","\x1d","\xdb"),
	HX_HCSTRING("keyreleased","\x5c","\x49","\x5a","\xe5"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("scanpressed","\xc5","\x2e","\xc3","\xfb"),
	HX_HCSTRING("scanreleased","\x3a","\xcb","\xdb","\x55"),
	HX_HCSTRING("scandown","\x5f","\xf8","\x95","\x27"),
	HX_HCSTRING("mousepressed","\x1d","\xfb","\x3a","\x4e"),
	HX_HCSTRING("mousereleased","\xe2","\xcb","\x36","\x2c"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("gamepadpressed","\x21","\xb8","\x96","\x37"),
	HX_HCSTRING("gamepadreleased","\x5e","\x72","\x20","\x73"),
	HX_HCSTRING("gamepaddown","\x83","\x3d","\xe7","\xe7"),
	HX_HCSTRING("gamepadaxis","\xc2","\x61","\xf2","\xe5"),
	HX_HCSTRING("bind_key","\xdd","\xe6","\x0d","\xc2"),
	HX_HCSTRING("unbind_key","\x36","\xce","\xd1","\x47"),
	HX_HCSTRING("bind_mouse","\xe3","\xbe","\xe1","\xfb"),
	HX_HCSTRING("unbind_mouse","\x7c","\xee","\xf0","\x67"),
	HX_HCSTRING("bind_gamepad","\xdf","\xb4","\x0c","\xd0"),
	HX_HCSTRING("unbind_gamepad","\xb8","\xbc","\xf9","\xc1"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"),
	HX_HCSTRING("ontouchdown","\xa2","\x5e","\x71","\x9d"),
	HX_HCSTRING("ontouchup","\x9b","\xbc","\x51","\xe3"),
	HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"),
	HX_HCSTRING("ongamepadaxis","\x03","\xe7","\xa9","\x64"),
	HX_HCSTRING("ongamepaddown","\xc4","\xc2","\x9e","\x66"),
	HX_HCSTRING("ongamepadup","\x3d","\x74","\xa8","\xdf"),
	HX_HCSTRING("ongamepaddevice","\x78","\x83","\x39","\x9b"),
	HX_HCSTRING("oninputdown","\x6d","\x8c","\x2f","\x9f"),
	HX_HCSTRING("oninputup","\xa6","\x51","\x78","\xde"),
	HX_HCSTRING("check_named_keys","\xd1","\xa8","\xea","\xe8"),
	HX_HCSTRING("check_named_mouse","\xa8","\x50","\xcf","\x11"),
	HX_HCSTRING("check_named_gamepad_buttons","\xa6","\x31","\x6e","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Input","\x32","\xb5","\x12","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
