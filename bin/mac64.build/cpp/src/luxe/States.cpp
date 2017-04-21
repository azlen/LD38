#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_luxe_GamepadEvent
#include <luxe/GamepadEvent.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_InputEvent
#include <luxe/InputEvent.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_MouseEvent
#include <luxe/MouseEvent.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_State
#include <luxe/State.h>
#endif
#ifndef INCLUDED_luxe_States
#include <luxe/States.h>
#endif
#ifndef INCLUDED_luxe_TextEvent
#include <luxe/TextEvent.h>
#endif
#ifndef INCLUDED_luxe_TouchEvent
#include <luxe/TouchEvent.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace luxe{

Void States_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.States","new",0xc752210c,"luxe.States.new","luxe/States.hx",109,0xdf083bc3)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(168)
	this->_state_count = (int)0;
	HX_STACK_LINE(116)
	this->active_count = (int)0;
	HX_STACK_LINE(120)
	::String _name = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_name,"_name");
	HX_STACK_LINE(122)
	bool tmp = (_options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	if ((tmp)){
		HX_STACK_LINE(122)
		tmp1 = (_options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != null());
	}
	else{
		HX_STACK_LINE(122)
		tmp1 = false;
	}
	HX_STACK_LINE(122)
	if ((tmp1)){
		HX_STACK_LINE(123)
		_name = _options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(126)
	bool tmp2 = (_name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	if ((tmp2)){
		HX_STACK_LINE(126)
		::luxe::utils::Utils tmp4 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		tmp3 = tmp4->uniqueid(null());
	}
	else{
		HX_STACK_LINE(126)
		tmp3 = _name;
	}
	HX_STACK_LINE(126)
	super::__construct(tmp3,null());
	HX_STACK_LINE(128)
	::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(128)
	this->_states = tmp4;
	HX_STACK_LINE(129)
	this->active_states = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		Dynamic tmp6 = this->init_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		tmp5->emitter->on((int)2,tmp6);
	}
	HX_STACK_LINE(132)
	{
		HX_STACK_LINE(132)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		Dynamic tmp6 = this->ondestroy_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		tmp5->emitter->on((int)8,tmp6);
	}
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		Dynamic tmp6 = this->update_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		tmp5->emitter->on((int)6,tmp6);
	}
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(135)
		Dynamic tmp6 = this->prerender_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		tmp5->emitter->on((int)9,tmp6);
	}
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		Dynamic tmp6 = this->postrender_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		tmp5->emitter->on((int)11,tmp6);
	}
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(137)
		Dynamic tmp6 = this->render_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(137)
		tmp5->emitter->on((int)10,tmp6);
	}
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		Dynamic tmp6 = this->keydown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		tmp5->emitter->on((int)12,tmp6);
	}
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		Dynamic tmp6 = this->keyup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		tmp5->emitter->on((int)13,tmp6);
	}
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(141)
		Dynamic tmp6 = this->textinput_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(141)
		tmp5->emitter->on((int)14,tmp6);
	}
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		Dynamic tmp6 = this->inputup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		tmp5->emitter->on((int)16,tmp6);
	}
	HX_STACK_LINE(144)
	{
		HX_STACK_LINE(144)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(144)
		Dynamic tmp6 = this->inputdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(144)
		tmp5->emitter->on((int)15,tmp6);
	}
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		Dynamic tmp6 = this->mouseup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(146)
		tmp5->emitter->on((int)18,tmp6);
	}
	HX_STACK_LINE(147)
	{
		HX_STACK_LINE(147)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		Dynamic tmp6 = this->mousedown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		tmp5->emitter->on((int)17,tmp6);
	}
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		Dynamic tmp6 = this->mousemove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		tmp5->emitter->on((int)19,tmp6);
	}
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		Dynamic tmp6 = this->mousewheel_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(149)
		tmp5->emitter->on((int)20,tmp6);
	}
	HX_STACK_LINE(151)
	{
		HX_STACK_LINE(151)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		Dynamic tmp6 = this->touchup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		tmp5->emitter->on((int)22,tmp6);
	}
	HX_STACK_LINE(152)
	{
		HX_STACK_LINE(152)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		Dynamic tmp6 = this->touchdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(152)
		tmp5->emitter->on((int)21,tmp6);
	}
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		Dynamic tmp6 = this->touchmove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		tmp5->emitter->on((int)23,tmp6);
	}
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		Dynamic tmp6 = this->gamepadup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(155)
		tmp5->emitter->on((int)26,tmp6);
	}
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		Dynamic tmp6 = this->gamepaddown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		tmp5->emitter->on((int)25,tmp6);
	}
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		Dynamic tmp6 = this->gamepadaxis_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		tmp5->emitter->on((int)24,tmp6);
	}
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(158)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(158)
		Dynamic tmp6 = this->gamepaddevice_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		tmp5->emitter->on((int)27,tmp6);
	}
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		Dynamic tmp6 = this->windowmoved_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		tmp5->emitter->on((int)29,tmp6);
	}
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		Dynamic tmp6 = this->windowresized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		tmp5->emitter->on((int)30,tmp6);
	}
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		Dynamic tmp6 = this->windowsized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		tmp5->emitter->on((int)31,tmp6);
	}
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		Dynamic tmp6 = this->windowminimized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(163)
		tmp5->emitter->on((int)32,tmp6);
	}
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		Dynamic tmp6 = this->windowrestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		tmp5->emitter->on((int)33,tmp6);
	}
}
;
	return null();
}

//States_obj::~States_obj() { }

Dynamic States_obj::__CreateEmpty() { return  new States_obj; }
hx::ObjectPtr< States_obj > States_obj::__new(Dynamic _options)
{  hx::ObjectPtr< States_obj > _result_ = new States_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic States_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< States_obj > _result_ = new States_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic States_obj::add( Dynamic _state){
	HX_STACK_FRAME("luxe.States","add",0xc74842cd,"luxe.States.add","luxe/States.hx",169,0xdf083bc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_state,"_state")
	HX_STACK_LINE(172)
	::haxe::ds::StringMap tmp = this->_states;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	::String tmp1 = _state->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	Dynamic tmp2 = _state;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	tmp->set(tmp1,tmp2);
	HX_STACK_LINE(173)
	(this->_state_count)++;
	HX_STACK_LINE(175)
	_state->__FieldRef(HX_HCSTRING("machine","\x87","\x3b","\xfb","\xc2")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(177)
	_state->__Field(HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"), hx::paccDynamic )();
	HX_STACK_LINE(181)
	::luxe::Engine tmp3 = ::Luxe_obj::core;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	bool tmp4 = tmp3->inited;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	if ((tmp4)){
		HX_STACK_LINE(182)
		bool tmp5 = _state->__Field(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		if ((tmp6)){
			HX_STACK_LINE(182)
			_state->__FieldRef(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")) = true;
			HX_STACK_LINE(182)
			_state->__Field(HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"), hx::paccDynamic )();
		}
	}
	HX_STACK_LINE(188)
	Dynamic tmp5 = _state;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(188)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,add,return )

Dynamic States_obj::remove( ::String _name,Dynamic _leave_with){
	HX_STACK_FRAME("luxe.States","remove",0x830cff18,"luxe.States.remove","luxe/States.hx",192,0xdf083bc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_leave_with,"_leave_with")
	HX_STACK_LINE(194)
	::haxe::ds::StringMap tmp = this->_states;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(194)
	if ((tmp2)){
		HX_STACK_LINE(196)
		::haxe::ds::StringMap tmp3 = this->_states;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		::luxe::State tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		Dynamic _state = ((Dynamic)(tmp5));		HX_STACK_VAR(_state,"_state");
		HX_STACK_LINE(198)
		bool tmp6 = (_state != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		if ((tmp6)){
			HX_STACK_LINE(201)
			bool tmp7 = _state->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(201)
			if ((tmp7)){
				HX_STACK_LINE(203)
				Dynamic tmp8 = _state;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(203)
				Dynamic tmp9 = _leave_with;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(203)
				this->leave(tmp8,tmp9);
				HX_STACK_LINE(205)
				Dynamic tmp10 = _state;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(205)
				::luxe::State tmp11 = this->current_state;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(205)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(205)
				if ((tmp12)){
					HX_STACK_LINE(206)
					this->current_state = null();
				}
			}
			HX_STACK_LINE(212)
			bool tmp8 = _state->__Field(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(212)
			if ((tmp8)){
				HX_STACK_LINE(213)
				::String tmp9 = _state->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(213)
				this->disable(tmp9,null());
			}
			HX_STACK_LINE(217)
			_state->__Field(HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"), hx::paccDynamic )();
			HX_STACK_LINE(220)
			::haxe::ds::StringMap tmp9 = this->_states;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(220)
			::String tmp10 = _name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(220)
			tmp9->remove(tmp10);
			HX_STACK_LINE(221)
			(this->_state_count)--;
		}
		HX_STACK_LINE(225)
		Dynamic tmp7 = _state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(225)
		return tmp7;
	}
	HX_STACK_LINE(229)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(States_obj,remove,return )

Void States_obj::kill( ::String _name){
{
		HX_STACK_FRAME("luxe.States","kill",0x9e922572,"luxe.States.kill","luxe/States.hx",233,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(235)
		int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		if ((tmp1)){
			HX_STACK_LINE(236)
			::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(236)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(236)
			bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			if ((tmp4)){
				HX_STACK_LINE(237)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(237)
				::luxe::State tmp6 = this->remove(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(237)
				::luxe::State _state = tmp6;		HX_STACK_VAR(_state,"_state");
				HX_STACK_LINE(238)
				bool tmp7 = (_state != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(238)
				if ((tmp7)){
					HX_STACK_LINE(239)
					_state->ondestroy();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,kill,(void))

bool States_obj::enabled( ::String _name){
	HX_STACK_FRAME("luxe.States","enabled",0xb3831b2d,"luxe.States.enabled","luxe/States.hx",246,0xdf083bc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(247)
	int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	if ((tmp1)){
		HX_STACK_LINE(247)
		return false;
	}
	HX_STACK_LINE(249)
	::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(249)
	::luxe::State tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(249)
	::luxe::State _state = tmp4;		HX_STACK_VAR(_state,"_state");
	HX_STACK_LINE(251)
	bool tmp5 = (_state != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(251)
	if ((tmp5)){
		HX_STACK_LINE(252)
		bool tmp6 = _state->enabled;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(252)
		return tmp6;
	}
	HX_STACK_LINE(255)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,enabled,return )

Void States_obj::enable( ::String _name,Dynamic _enable_with){
{
		HX_STACK_FRAME("luxe.States","enable",0x770c1157,"luxe.States.enable","luxe/States.hx",259,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_enable_with,"_enable_with")
		HX_STACK_LINE(260)
		int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		if ((tmp1)){
			HX_STACK_LINE(260)
			return null();
		}
		HX_STACK_LINE(262)
		::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		::luxe::State tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		::luxe::State _state = tmp4;		HX_STACK_VAR(_state,"_state");
		HX_STACK_LINE(263)
		bool tmp5 = (_state != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(263)
		if ((tmp5)){
			HX_STACK_LINE(265)
			Dynamic tmp6 = _enable_with;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(265)
			_state->onenabled(tmp6);
			HX_STACK_LINE(266)
			_state->active = true;
			HX_STACK_LINE(267)
			_state->enabled = true;
			HX_STACK_LINE(268)
			::luxe::State tmp7 = _state;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(268)
			this->active_states->push(tmp7);
			HX_STACK_LINE(269)
			(this->active_count)++;
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(States_obj,enable,(void))

Void States_obj::disable( ::String _name,Dynamic _disable_with){
{
		HX_STACK_FRAME("luxe.States","disable",0xe6aa8094,"luxe.States.disable","luxe/States.hx",274,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_disable_with,"_disable_with")
		HX_STACK_LINE(275)
		int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		if ((tmp1)){
			HX_STACK_LINE(275)
			return null();
		}
		HX_STACK_LINE(277)
		::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(277)
		::luxe::State tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		::luxe::State _state = tmp4;		HX_STACK_VAR(_state,"_state");
		HX_STACK_LINE(278)
		bool tmp5 = (_state != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(278)
		if ((tmp5)){
			HX_STACK_LINE(280)
			Dynamic tmp6 = _disable_with;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(280)
			_state->ondisabled(tmp6);
			HX_STACK_LINE(281)
			_state->active = false;
			HX_STACK_LINE(282)
			_state->enabled = false;
			HX_STACK_LINE(283)
			::luxe::State tmp7 = _state;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(283)
			this->active_states->remove(tmp7);
			HX_STACK_LINE(284)
			(this->active_count)--;
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(States_obj,disable,(void))

Void States_obj::enter( ::luxe::State _state,Dynamic _enter_with){
{
		HX_STACK_FRAME("luxe.States","enter",0xb03b40c4,"luxe.States.enter","luxe/States.hx",289,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_enter_with,"_enter_with")
		HX_STACK_LINE(292)
		Dynamic tmp = _enter_with;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		_state->onenter(tmp);
		HX_STACK_LINE(293)
		::luxe::State tmp1 = _state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		this->active_states->push(tmp1);
		HX_STACK_LINE(294)
		(this->active_count)++;
		HX_STACK_LINE(295)
		_state->active = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(States_obj,enter,(void))

Void States_obj::leave( ::luxe::State _state,Dynamic _leave_with){
{
		HX_STACK_FRAME("luxe.States","leave",0xb20808a3,"luxe.States.leave","luxe/States.hx",299,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_leave_with,"_leave_with")
		HX_STACK_LINE(302)
		_state->active = false;
		HX_STACK_LINE(303)
		::luxe::State tmp = _state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		this->active_states->remove(tmp);
		HX_STACK_LINE(304)
		(this->active_count)--;
		HX_STACK_LINE(305)
		Dynamic tmp1 = _leave_with;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		_state->onleave(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(States_obj,leave,(void))

bool States_obj::set( ::String name,Dynamic _enter_with,Dynamic _leave_with){
	HX_STACK_FRAME("luxe.States","set",0xc755ec4e,"luxe.States.set","luxe/States.hx",310,0xdf083bc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(_enter_with,"_enter_with")
	HX_STACK_ARG(_leave_with,"_leave_with")
	HX_STACK_LINE(317)
	::haxe::ds::StringMap tmp = this->_states;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(317)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(317)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(317)
	if ((tmp3)){
		HX_STACK_LINE(318)
		::String tmp4 = (HX_HCSTRING("cannot find state named ","\x60","\x80","\x5b","\xc4") + name);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(318)
		::String tmp5 = (tmp4 + HX_HCSTRING(", is it added to this state machine?","\x17","\xf5","\x92","\xe2"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(318)
		::String tmp6 = (HX_HCSTRING("   i / states / ","\xa7","\xaf","\x13","\xa5") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(318)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("States.hx","\x9c","\xfe","\xc7","\xe5"),318,HX_HCSTRING("luxe.States","\x1a","\xeb","\x59","\x65"),HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(318)
		::haxe::Log_obj::trace(tmp6,tmp7);
		HX_STACK_LINE(319)
		return false;
	}
	HX_STACK_LINE(324)
	Dynamic tmp4 = _leave_with;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(324)
	this->unset(tmp4);
	HX_STACK_LINE(330)
	::haxe::ds::StringMap tmp5 = this->_states;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(330)
	::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(330)
	::luxe::State tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(330)
	this->current_state = tmp7;
	HX_STACK_LINE(331)
	::luxe::State tmp8 = this->current_state;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(331)
	Dynamic tmp9 = _enter_with;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(331)
	this->enter(tmp8,tmp9);
	HX_STACK_LINE(335)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(States_obj,set,return )

Void States_obj::unset( Dynamic _leave_with){
{
		HX_STACK_FRAME("luxe.States","unset",0xe6a3c695,"luxe.States.unset","luxe/States.hx",340,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_leave_with,"_leave_with")
		HX_STACK_LINE(342)
		::luxe::State tmp = this->current_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		if ((tmp1)){
			HX_STACK_LINE(347)
			::luxe::State tmp2 = this->current_state;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(347)
			Dynamic tmp3 = _leave_with;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(347)
			this->leave(tmp2,tmp3);
			HX_STACK_LINE(351)
			this->current_state = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,unset,(void))

Void States_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.States","destroy",0x59d843a6,"luxe.States.destroy","luxe/States.hx",357,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(359)
		int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(359)
		if ((tmp1)){
			HX_STACK_LINE(360)
			::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			for(::cpp::FastIterator_obj< ::luxe::State > *__it = ::cpp::CreateFastIterator< ::luxe::State >(tmp3);  __it->hasNext(); ){
				::luxe::State state = __it->next();
				state->destroy();
			}
		}
		HX_STACK_LINE(365)
		::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(365)
		Dynamic tmp3 = this->init_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(365)
		tmp2->emitter->off((int)2,tmp3);
		HX_STACK_LINE(366)
		::luxe::Engine tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(366)
		Dynamic tmp5 = this->ondestroy_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(366)
		tmp4->emitter->off((int)8,tmp5);
		HX_STACK_LINE(367)
		::luxe::Engine tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(367)
		Dynamic tmp7 = this->update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(367)
		tmp6->emitter->off((int)6,tmp7);
		HX_STACK_LINE(369)
		::luxe::Engine tmp8 = ::Luxe_obj::core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(369)
		Dynamic tmp9 = this->prerender_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(369)
		tmp8->emitter->off((int)9,tmp9);
		HX_STACK_LINE(370)
		::luxe::Engine tmp10 = ::Luxe_obj::core;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(370)
		Dynamic tmp11 = this->postrender_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(370)
		tmp10->emitter->off((int)11,tmp11);
		HX_STACK_LINE(371)
		::luxe::Engine tmp12 = ::Luxe_obj::core;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(371)
		Dynamic tmp13 = this->render_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(371)
		tmp12->emitter->off((int)10,tmp13);
		HX_STACK_LINE(373)
		::luxe::Engine tmp14 = ::Luxe_obj::core;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(373)
		Dynamic tmp15 = this->keydown_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(373)
		tmp14->emitter->off((int)12,tmp15);
		HX_STACK_LINE(374)
		::luxe::Engine tmp16 = ::Luxe_obj::core;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(374)
		Dynamic tmp17 = this->keyup_dyn();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(374)
		tmp16->emitter->off((int)13,tmp17);
		HX_STACK_LINE(375)
		::luxe::Engine tmp18 = ::Luxe_obj::core;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(375)
		Dynamic tmp19 = this->textinput_dyn();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(375)
		tmp18->emitter->off((int)14,tmp19);
		HX_STACK_LINE(377)
		::luxe::Engine tmp20 = ::Luxe_obj::core;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(377)
		Dynamic tmp21 = this->inputup_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(377)
		tmp20->emitter->off((int)16,tmp21);
		HX_STACK_LINE(378)
		::luxe::Engine tmp22 = ::Luxe_obj::core;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(378)
		Dynamic tmp23 = this->inputdown_dyn();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(378)
		tmp22->emitter->off((int)15,tmp23);
		HX_STACK_LINE(380)
		::luxe::Engine tmp24 = ::Luxe_obj::core;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(380)
		Dynamic tmp25 = this->mouseup_dyn();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(380)
		tmp24->emitter->off((int)18,tmp25);
		HX_STACK_LINE(381)
		::luxe::Engine tmp26 = ::Luxe_obj::core;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(381)
		Dynamic tmp27 = this->mousedown_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(381)
		tmp26->emitter->off((int)17,tmp27);
		HX_STACK_LINE(382)
		::luxe::Engine tmp28 = ::Luxe_obj::core;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(382)
		Dynamic tmp29 = this->mousemove_dyn();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(382)
		tmp28->emitter->off((int)19,tmp29);
		HX_STACK_LINE(383)
		::luxe::Engine tmp30 = ::Luxe_obj::core;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(383)
		Dynamic tmp31 = this->mousewheel_dyn();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(383)
		tmp30->emitter->off((int)20,tmp31);
		HX_STACK_LINE(385)
		::luxe::Engine tmp32 = ::Luxe_obj::core;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(385)
		Dynamic tmp33 = this->touchup_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(385)
		tmp32->emitter->off((int)22,tmp33);
		HX_STACK_LINE(386)
		::luxe::Engine tmp34 = ::Luxe_obj::core;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(386)
		Dynamic tmp35 = this->touchdown_dyn();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(386)
		tmp34->emitter->off((int)21,tmp35);
		HX_STACK_LINE(387)
		::luxe::Engine tmp36 = ::Luxe_obj::core;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(387)
		Dynamic tmp37 = this->touchmove_dyn();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(387)
		tmp36->emitter->off((int)23,tmp37);
		HX_STACK_LINE(389)
		::luxe::Engine tmp38 = ::Luxe_obj::core;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(389)
		Dynamic tmp39 = this->gamepadup_dyn();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(389)
		tmp38->emitter->off((int)26,tmp39);
		HX_STACK_LINE(390)
		::luxe::Engine tmp40 = ::Luxe_obj::core;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(390)
		Dynamic tmp41 = this->gamepaddown_dyn();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(390)
		tmp40->emitter->off((int)25,tmp41);
		HX_STACK_LINE(391)
		::luxe::Engine tmp42 = ::Luxe_obj::core;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(391)
		Dynamic tmp43 = this->gamepadaxis_dyn();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(391)
		tmp42->emitter->off((int)24,tmp43);
		HX_STACK_LINE(392)
		::luxe::Engine tmp44 = ::Luxe_obj::core;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(392)
		Dynamic tmp45 = this->gamepaddevice_dyn();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(392)
		tmp44->emitter->off((int)27,tmp45);
		HX_STACK_LINE(394)
		::luxe::Engine tmp46 = ::Luxe_obj::core;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(394)
		Dynamic tmp47 = this->windowmoved_dyn();		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(394)
		tmp46->emitter->off((int)29,tmp47);
		HX_STACK_LINE(395)
		::luxe::Engine tmp48 = ::Luxe_obj::core;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(395)
		Dynamic tmp49 = this->windowresized_dyn();		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(395)
		tmp48->emitter->off((int)30,tmp49);
		HX_STACK_LINE(396)
		::luxe::Engine tmp50 = ::Luxe_obj::core;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(396)
		Dynamic tmp51 = this->windowsized_dyn();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(396)
		tmp50->emitter->off((int)31,tmp51);
		HX_STACK_LINE(397)
		::luxe::Engine tmp52 = ::Luxe_obj::core;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(397)
		Dynamic tmp53 = this->windowminimized_dyn();		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(397)
		tmp52->emitter->off((int)32,tmp53);
		HX_STACK_LINE(398)
		::luxe::Engine tmp54 = ::Luxe_obj::core;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(398)
		Dynamic tmp55 = this->windowrestored_dyn();		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(398)
		tmp54->emitter->off((int)33,tmp55);
		HX_STACK_LINE(400)
		this->emit((int)8,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(States_obj,destroy,(void))

Void States_obj::init( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","init",0x9d4380e4,"luxe.States.init","luxe/States.hx",405,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(406)
		int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(406)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(406)
		if ((tmp1)){
			HX_STACK_LINE(407)
			::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(407)
			Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(407)
			for(::cpp::FastIterator_obj< ::luxe::State > *__it = ::cpp::CreateFastIterator< ::luxe::State >(tmp3);  __it->hasNext(); ){
				::luxe::State state = __it->next();
				{
					HX_STACK_LINE(408)
					bool tmp4 = state->inited;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(408)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(408)
					if ((tmp5)){
						HX_STACK_LINE(408)
						state->inited = true;
						HX_STACK_LINE(408)
						state->init();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,init,(void))

Void States_obj::reset( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","reset",0x267d1d7b,"luxe.States.reset","luxe/States.hx",413,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(414)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(414)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(414)
		if ((tmp1)){
			HX_STACK_LINE(415)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(415)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(415)
			while((true)){
				HX_STACK_LINE(415)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(415)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(415)
				if ((tmp3)){
					HX_STACK_LINE(415)
					break;
				}
				HX_STACK_LINE(415)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(415)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(415)
				++(_g);
				HX_STACK_LINE(416)
				state->onreset();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,reset,(void))

Void States_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.States","update",0x0589e8dd,"luxe.States.update","luxe/States.hx",421,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(422)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(422)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(422)
		if ((tmp1)){
			HX_STACK_LINE(423)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(423)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(423)
			while((true)){
				HX_STACK_LINE(423)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(423)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(423)
				if ((tmp3)){
					HX_STACK_LINE(423)
					break;
				}
				HX_STACK_LINE(423)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(423)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(423)
				++(_g);
				HX_STACK_LINE(425)
				Float tmp5 = dt;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(425)
				state->update(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,update,(void))

Void States_obj::ondestroy( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","ondestroy",0xede5d767,"luxe.States.ondestroy","luxe/States.hx",432,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(432)
		this->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,ondestroy,(void))

Void States_obj::render( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","render",0x83adce2a,"luxe.States.render","luxe/States.hx",436,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(437)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(437)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(437)
		if ((tmp1)){
			HX_STACK_LINE(438)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(438)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(438)
			while((true)){
				HX_STACK_LINE(438)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(438)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(438)
				if ((tmp3)){
					HX_STACK_LINE(438)
					break;
				}
				HX_STACK_LINE(438)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(438)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(438)
				++(_g);
				HX_STACK_LINE(439)
				state->onrender();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,render,(void))

Void States_obj::prerender( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","prerender",0xee3c2165,"luxe.States.prerender","luxe/States.hx",444,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(445)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(445)
		if ((tmp1)){
			HX_STACK_LINE(446)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(446)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(446)
			while((true)){
				HX_STACK_LINE(446)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(446)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(446)
				if ((tmp3)){
					HX_STACK_LINE(446)
					break;
				}
				HX_STACK_LINE(446)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(446)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(446)
				++(_g);
				HX_STACK_LINE(447)
				state->onprerender();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,prerender,(void))

Void States_obj::postrender( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","postrender",0x8c1dd48a,"luxe.States.postrender","luxe/States.hx",452,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(453)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(453)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(453)
		if ((tmp1)){
			HX_STACK_LINE(454)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(454)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(454)
			while((true)){
				HX_STACK_LINE(454)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(454)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(454)
				if ((tmp3)){
					HX_STACK_LINE(454)
					break;
				}
				HX_STACK_LINE(454)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(454)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(454)
				++(_g);
				HX_STACK_LINE(455)
				state->onpostrender();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,postrender,(void))

Void States_obj::keydown( ::luxe::KeyEvent _event){
{
		HX_STACK_FRAME("luxe.States","keydown",0xe6c0542d,"luxe.States.keydown","luxe/States.hx",462,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(463)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(463)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(463)
		if ((tmp1)){
			HX_STACK_LINE(464)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(464)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(464)
			while((true)){
				HX_STACK_LINE(464)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(464)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(464)
				if ((tmp3)){
					HX_STACK_LINE(464)
					break;
				}
				HX_STACK_LINE(464)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(464)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(464)
				++(_g);
				HX_STACK_LINE(465)
				::luxe::KeyEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(465)
				state->onkeydown(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,keydown,(void))

Void States_obj::keyup( ::luxe::KeyEvent _event){
{
		HX_STACK_FRAME("luxe.States","keyup",0x1eb3a966,"luxe.States.keyup","luxe/States.hx",470,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(471)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(471)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		if ((tmp1)){
			HX_STACK_LINE(472)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(472)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(472)
			while((true)){
				HX_STACK_LINE(472)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(472)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(472)
				if ((tmp3)){
					HX_STACK_LINE(472)
					break;
				}
				HX_STACK_LINE(472)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(472)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(472)
				++(_g);
				HX_STACK_LINE(473)
				::luxe::KeyEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(473)
				state->onkeyup(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,keyup,(void))

Void States_obj::textinput( ::luxe::TextEvent _event){
{
		HX_STACK_FRAME("luxe.States","textinput",0x82e3fde9,"luxe.States.textinput","luxe/States.hx",478,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(479)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(479)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(479)
		if ((tmp1)){
			HX_STACK_LINE(480)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(480)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(480)
			while((true)){
				HX_STACK_LINE(480)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(480)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(480)
				if ((tmp3)){
					HX_STACK_LINE(480)
					break;
				}
				HX_STACK_LINE(480)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(480)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(480)
				++(_g);
				HX_STACK_LINE(481)
				::luxe::TextEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(481)
				state->ontextinput(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,textinput,(void))

Void States_obj::inputup( ::luxe::InputEvent _event){
{
		HX_STACK_FRAME("luxe.States","inputup",0x0970d791,"luxe.States.inputup","luxe/States.hx",488,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(489)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(489)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(489)
		if ((tmp1)){
			HX_STACK_LINE(490)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(490)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(490)
			while((true)){
				HX_STACK_LINE(490)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(490)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(490)
				if ((tmp3)){
					HX_STACK_LINE(490)
					break;
				}
				HX_STACK_LINE(490)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(490)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(490)
				++(_g);
				HX_STACK_LINE(491)
				::luxe::InputEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(491)
				state->oninputup(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,inputup,(void))

Void States_obj::inputdown( ::luxe::InputEvent _event){
{
		HX_STACK_FRAME("luxe.States","inputdown",0xddc5a318,"luxe.States.inputdown","luxe/States.hx",496,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(497)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(497)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(497)
		if ((tmp1)){
			HX_STACK_LINE(498)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(498)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(498)
			while((true)){
				HX_STACK_LINE(498)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(498)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(498)
				if ((tmp3)){
					HX_STACK_LINE(498)
					break;
				}
				HX_STACK_LINE(498)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(498)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(498)
				++(_g);
				HX_STACK_LINE(499)
				::luxe::InputEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(499)
				state->oninputdown(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,inputdown,(void))

Void States_obj::mousedown( ::luxe::MouseEvent _event){
{
		HX_STACK_FRAME("luxe.States","mousedown",0xc2ef9eb3,"luxe.States.mousedown","luxe/States.hx",506,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(507)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(507)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(507)
		if ((tmp1)){
			HX_STACK_LINE(508)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(508)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(508)
			while((true)){
				HX_STACK_LINE(508)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(508)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(508)
				if ((tmp3)){
					HX_STACK_LINE(508)
					break;
				}
				HX_STACK_LINE(508)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(508)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(508)
				++(_g);
				HX_STACK_LINE(509)
				::luxe::MouseEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(509)
				state->onmousedown(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,mousedown,(void))

Void States_obj::mousewheel( ::luxe::MouseEvent _event){
{
		HX_STACK_FRAME("luxe.States","mousewheel",0xbaaa152a,"luxe.States.mousewheel","luxe/States.hx",514,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(515)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(515)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(515)
		if ((tmp1)){
			HX_STACK_LINE(516)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(516)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(516)
			while((true)){
				HX_STACK_LINE(516)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(516)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(516)
				if ((tmp3)){
					HX_STACK_LINE(516)
					break;
				}
				HX_STACK_LINE(516)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(516)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(516)
				++(_g);
				HX_STACK_LINE(517)
				::luxe::MouseEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(517)
				state->onmousewheel(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,mousewheel,(void))

Void States_obj::mouseup( ::luxe::MouseEvent _event){
{
		HX_STACK_FRAME("luxe.States","mouseup",0xf5c5266c,"luxe.States.mouseup","luxe/States.hx",522,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(523)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(523)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(523)
		if ((tmp1)){
			HX_STACK_LINE(524)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(524)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(524)
			while((true)){
				HX_STACK_LINE(524)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(524)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(524)
				if ((tmp3)){
					HX_STACK_LINE(524)
					break;
				}
				HX_STACK_LINE(524)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(524)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(524)
				++(_g);
				HX_STACK_LINE(525)
				::luxe::MouseEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(525)
				state->onmouseup(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,mouseup,(void))

Void States_obj::mousemove( ::luxe::MouseEvent _event){
{
		HX_STACK_FRAME("luxe.States","mousemove",0xc8e28962,"luxe.States.mousemove","luxe/States.hx",530,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(531)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(531)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(531)
		if ((tmp1)){
			HX_STACK_LINE(532)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(532)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(532)
			while((true)){
				HX_STACK_LINE(532)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(532)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(532)
				if ((tmp3)){
					HX_STACK_LINE(532)
					break;
				}
				HX_STACK_LINE(532)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(532)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(532)
				++(_g);
				HX_STACK_LINE(533)
				::luxe::MouseEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(533)
				state->onmousemove(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,mousemove,(void))

Void States_obj::touchdown( ::luxe::TouchEvent _event){
{
		HX_STACK_FRAME("luxe.States","touchdown",0xdc07754d,"luxe.States.touchdown","luxe/States.hx",540,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(541)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(541)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(541)
		if ((tmp1)){
			HX_STACK_LINE(542)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(542)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(542)
			while((true)){
				HX_STACK_LINE(542)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(542)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(542)
				if ((tmp3)){
					HX_STACK_LINE(542)
					break;
				}
				HX_STACK_LINE(542)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(542)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(542)
				++(_g);
				HX_STACK_LINE(543)
				::luxe::TouchEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(543)
				state->ontouchdown(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,touchdown,(void))

Void States_obj::touchup( ::luxe::TouchEvent _event){
{
		HX_STACK_FRAME("luxe.States","touchup",0x0e4a4286,"luxe.States.touchup","luxe/States.hx",548,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(549)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(549)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		if ((tmp1)){
			HX_STACK_LINE(550)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(550)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(550)
			while((true)){
				HX_STACK_LINE(550)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(550)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(550)
				if ((tmp3)){
					HX_STACK_LINE(550)
					break;
				}
				HX_STACK_LINE(550)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(550)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(550)
				++(_g);
				HX_STACK_LINE(551)
				::luxe::TouchEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(551)
				state->ontouchup(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,touchup,(void))

Void States_obj::touchmove( ::luxe::TouchEvent _event){
{
		HX_STACK_FRAME("luxe.States","touchmove",0xe1fa5ffc,"luxe.States.touchmove","luxe/States.hx",556,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(557)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(557)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(557)
		if ((tmp1)){
			HX_STACK_LINE(558)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(558)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(558)
			while((true)){
				HX_STACK_LINE(558)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(558)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(558)
				if ((tmp3)){
					HX_STACK_LINE(558)
					break;
				}
				HX_STACK_LINE(558)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(558)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(558)
				++(_g);
				HX_STACK_LINE(559)
				::luxe::TouchEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(559)
				state->ontouchmove(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,touchmove,(void))

Void States_obj::gamepadaxis( ::luxe::GamepadEvent _event){
{
		HX_STACK_FRAME("luxe.States","gamepadaxis",0x05f33e6e,"luxe.States.gamepadaxis","luxe/States.hx",566,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(567)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(567)
		if ((tmp1)){
			HX_STACK_LINE(568)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(568)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(568)
			while((true)){
				HX_STACK_LINE(568)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(568)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(568)
				if ((tmp3)){
					HX_STACK_LINE(568)
					break;
				}
				HX_STACK_LINE(568)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(568)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(568)
				++(_g);
				HX_STACK_LINE(569)
				::luxe::GamepadEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(569)
				state->ongamepadaxis(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,gamepadaxis,(void))

Void States_obj::gamepadup( ::luxe::GamepadEvent _event){
{
		HX_STACK_FRAME("luxe.States","gamepadup",0x1e3e8ae8,"luxe.States.gamepadup","luxe/States.hx",574,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(575)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(575)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(575)
		if ((tmp1)){
			HX_STACK_LINE(576)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(576)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(576)
			while((true)){
				HX_STACK_LINE(576)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(576)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(576)
				if ((tmp3)){
					HX_STACK_LINE(576)
					break;
				}
				HX_STACK_LINE(576)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(576)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(576)
				++(_g);
				HX_STACK_LINE(577)
				::luxe::GamepadEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(577)
				state->ongamepadup(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,gamepadup,(void))

Void States_obj::gamepaddown( ::luxe::GamepadEvent _event){
{
		HX_STACK_FRAME("luxe.States","gamepaddown",0x07e81a2f,"luxe.States.gamepaddown","luxe/States.hx",582,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(583)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(583)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(583)
		if ((tmp1)){
			HX_STACK_LINE(584)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(584)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(584)
			while((true)){
				HX_STACK_LINE(584)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(584)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(584)
				if ((tmp3)){
					HX_STACK_LINE(584)
					break;
				}
				HX_STACK_LINE(584)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(584)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(584)
				++(_g);
				HX_STACK_LINE(585)
				::luxe::GamepadEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(585)
				state->ongamepaddown(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,gamepaddown,(void))

Void States_obj::gamepaddevice( ::luxe::GamepadEvent _event){
{
		HX_STACK_FRAME("luxe.States","gamepaddevice",0x2317cba3,"luxe.States.gamepaddevice","luxe/States.hx",590,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(591)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(591)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(591)
		if ((tmp1)){
			HX_STACK_LINE(592)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(592)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(592)
			while((true)){
				HX_STACK_LINE(592)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(592)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(592)
				if ((tmp3)){
					HX_STACK_LINE(592)
					break;
				}
				HX_STACK_LINE(592)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(592)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(592)
				++(_g);
				HX_STACK_LINE(593)
				::luxe::GamepadEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(593)
				state->ongamepaddevice(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,gamepaddevice,(void))

Void States_obj::windowmoved( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.States","windowmoved",0x8a0bceef,"luxe.States.windowmoved","luxe/States.hx",600,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(601)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(601)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(601)
		if ((tmp1)){
			HX_STACK_LINE(602)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(602)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(602)
			while((true)){
				HX_STACK_LINE(602)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(602)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(602)
				if ((tmp3)){
					HX_STACK_LINE(602)
					break;
				}
				HX_STACK_LINE(602)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(602)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(602)
				++(_g);
				HX_STACK_LINE(603)
				::snow::types::WindowEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(603)
				state->onwindowmoved(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,windowmoved,(void))

Void States_obj::windowresized( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.States","windowresized",0x18ac85ac,"luxe.States.windowresized","luxe/States.hx",608,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(609)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(609)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(609)
		if ((tmp1)){
			HX_STACK_LINE(610)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(610)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(610)
			while((true)){
				HX_STACK_LINE(610)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(610)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(610)
				if ((tmp3)){
					HX_STACK_LINE(610)
					break;
				}
				HX_STACK_LINE(610)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(610)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(610)
				++(_g);
				HX_STACK_LINE(611)
				::snow::types::WindowEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(611)
				state->onwindowresized(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,windowresized,(void))

Void States_obj::windowsized( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.States","windowsized",0xfa7f0b3f,"luxe.States.windowsized","luxe/States.hx",616,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(617)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(617)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(617)
		if ((tmp1)){
			HX_STACK_LINE(618)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(618)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(618)
			while((true)){
				HX_STACK_LINE(618)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(618)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(618)
				if ((tmp3)){
					HX_STACK_LINE(618)
					break;
				}
				HX_STACK_LINE(618)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(618)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(618)
				++(_g);
				HX_STACK_LINE(619)
				::snow::types::WindowEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(619)
				state->onwindowsized(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,windowsized,(void))

Void States_obj::windowminimized( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.States","windowminimized",0x7dc20c42,"luxe.States.windowminimized","luxe/States.hx",624,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(625)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(625)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(625)
		if ((tmp1)){
			HX_STACK_LINE(626)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(626)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(626)
			while((true)){
				HX_STACK_LINE(626)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(626)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(626)
				if ((tmp3)){
					HX_STACK_LINE(626)
					break;
				}
				HX_STACK_LINE(626)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(626)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(626)
				++(_g);
				HX_STACK_LINE(627)
				::snow::types::WindowEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(627)
				state->onwindowminimized(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,windowminimized,(void))

Void States_obj::windowrestored( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.States","windowrestored",0xcc75581a,"luxe.States.windowrestored","luxe/States.hx",632,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(633)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(633)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(633)
		if ((tmp1)){
			HX_STACK_LINE(634)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(634)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(634)
			while((true)){
				HX_STACK_LINE(634)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(634)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(634)
				if ((tmp3)){
					HX_STACK_LINE(634)
					break;
				}
				HX_STACK_LINE(634)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(634)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(634)
				++(_g);
				HX_STACK_LINE(635)
				::snow::types::WindowEvent tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(635)
				state->onwindowrestored(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,windowrestored,(void))


States_obj::States_obj()
{
}

void States_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(States);
	HX_MARK_MEMBER_NAME(_states,"_states");
	HX_MARK_MEMBER_NAME(active_states,"active_states");
	HX_MARK_MEMBER_NAME(current_state,"current_state");
	HX_MARK_MEMBER_NAME(active_count,"active_count");
	HX_MARK_MEMBER_NAME(_state_count,"_state_count");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void States_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_states,"_states");
	HX_VISIT_MEMBER_NAME(active_states,"active_states");
	HX_VISIT_MEMBER_NAME(current_state,"current_state");
	HX_VISIT_MEMBER_NAME(active_count,"active_count");
	HX_VISIT_MEMBER_NAME(_state_count,"_state_count");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic States_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { return enter_dyn(); }
		if (HX_FIELD_EQ(inName,"leave") ) { return leave_dyn(); }
		if (HX_FIELD_EQ(inName,"unset") ) { return unset_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { return _states; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"inputup") ) { return inputup_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"touchup") ) { return touchup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"prerender") ) { return prerender_dyn(); }
		if (HX_FIELD_EQ(inName,"textinput") ) { return textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"inputdown") ) { return inputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"touchdown") ) { return touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"touchmove") ) { return touchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadup") ) { return gamepadup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postrender") ) { return postrender_dyn(); }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"windowmoved") ) { return windowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"windowsized") ) { return windowsized_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"active_count") ) { return active_count; }
		if (HX_FIELD_EQ(inName,"_state_count") ) { return _state_count; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"active_states") ) { return active_states; }
		if (HX_FIELD_EQ(inName,"current_state") ) { return current_state; }
		if (HX_FIELD_EQ(inName,"gamepaddevice") ) { return gamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"windowresized") ) { return windowresized_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"windowrestored") ) { return windowrestored_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"windowminimized") ) { return windowminimized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic States_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { _states=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"active_count") ) { active_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_state_count") ) { _state_count=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"active_states") ) { active_states=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current_state") ) { current_state=inValue.Cast< ::luxe::State >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void States_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_states","\xe1","\xea","\x72","\x74"));
	outFields->push(HX_HCSTRING("active_states","\xdb","\x0d","\xeb","\x5e"));
	outFields->push(HX_HCSTRING("current_state","\x4b","\xca","\xba","\x2e"));
	outFields->push(HX_HCSTRING("active_count","\x56","\x66","\xd1","\x71"));
	outFields->push(HX_HCSTRING("_state_count","\xe2","\x12","\x49","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(States_obj,_states),HX_HCSTRING("_states","\xe1","\xea","\x72","\x74")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(States_obj,active_states),HX_HCSTRING("active_states","\xdb","\x0d","\xeb","\x5e")},
	{hx::fsObject /*::luxe::State*/ ,(int)offsetof(States_obj,current_state),HX_HCSTRING("current_state","\x4b","\xca","\xba","\x2e")},
	{hx::fsInt,(int)offsetof(States_obj,active_count),HX_HCSTRING("active_count","\x56","\x66","\xd1","\x71")},
	{hx::fsInt,(int)offsetof(States_obj,_state_count),HX_HCSTRING("_state_count","\xe2","\x12","\x49","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_states","\xe1","\xea","\x72","\x74"),
	HX_HCSTRING("active_states","\xdb","\x0d","\xeb","\x5e"),
	HX_HCSTRING("current_state","\x4b","\xca","\xba","\x2e"),
	HX_HCSTRING("active_count","\x56","\x66","\xd1","\x71"),
	HX_HCSTRING("_state_count","\xe2","\x12","\x49","\xf2"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("enter","\x18","\x6d","\x86","\x70"),
	HX_HCSTRING("leave","\xf7","\x34","\x53","\x72"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("unset","\xe9","\xf2","\xee","\xa6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("prerender","\xb9","\x07","\x36","\x2f"),
	HX_HCSTRING("postrender","\xb6","\x77","\xcd","\x25"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"),
	HX_HCSTRING("textinput","\x3d","\xe4","\xdd","\xc3"),
	HX_HCSTRING("inputup","\xe5","\xc0","\x1e","\xd4"),
	HX_HCSTRING("inputdown","\x6c","\x89","\xbf","\x1e"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("touchdown","\xa1","\x5b","\x01","\x1d"),
	HX_HCSTRING("touchup","\xda","\x2b","\xf8","\xd8"),
	HX_HCSTRING("touchmove","\x50","\x46","\xf4","\x22"),
	HX_HCSTRING("gamepadaxis","\xc2","\x61","\xf2","\xe5"),
	HX_HCSTRING("gamepadup","\x3c","\x71","\x38","\x5f"),
	HX_HCSTRING("gamepaddown","\x83","\x3d","\xe7","\xe7"),
	HX_HCSTRING("gamepaddevice","\xf7","\x6b","\xa5","\x5b"),
	HX_HCSTRING("windowmoved","\x43","\xf2","\x0a","\x6a"),
	HX_HCSTRING("windowresized","\x00","\x26","\x3a","\x51"),
	HX_HCSTRING("windowsized","\x93","\x2e","\x7e","\xda"),
	HX_HCSTRING("windowminimized","\x96","\x69","\x37","\x2d"),
	HX_HCSTRING("windowrestored","\x46","\x01","\xd4","\x0f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(States_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(States_obj::__mClass,"__mClass");
};

#endif

hx::Class States_obj::__mClass;

void States_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.States","\x1a","\xeb","\x59","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< States_obj >;
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
