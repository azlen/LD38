#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_SizeMode
#include <luxe/SizeMode.h>
#endif
#ifndef INCLUDED_luxe_tween_Actuate
#include <luxe/tween/Actuate.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_Quad
#include <luxe/tween/easing/Quad.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace luxe{

Void Camera_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Camera","new",0x2ec87bef,"luxe.Camera.new","luxe/Camera.hx",30,0xd52a0e40)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(164)
	this->_connected = false;
	HX_STACK_LINE(58)
	this->minimum_shake = ((Float)0.1);
	HX_STACK_LINE(56)
	this->shaking = false;
	HX_STACK_LINE(68)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	this->_size_factor = tmp;
	HX_STACK_LINE(69)
	::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	this->_rotation_radian = tmp1;
	HX_STACK_LINE(70)
	::phoenix::Quaternion tmp2 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	this->_rotation_cache = tmp2;
	HX_STACK_LINE(71)
	this->set_size_mode(::luxe::SizeMode_obj::fit);
	HX_STACK_LINE(73)
	::String _name = HX_HCSTRING("untitled camera","\x80","\xf6","\x97","\x4f");		HX_STACK_VAR(_name,"_name");
	HX_STACK_LINE(75)
	bool tmp3 = (_options != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	if ((tmp3)){
		HX_STACK_LINE(76)
		bool tmp4 = (_options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		if ((tmp4)){
			HX_STACK_LINE(77)
			_name = _options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
			HX_STACK_LINE(78)
			::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			::String tmp6 = (tmp5 + HX_HCSTRING(".view","\x93","\xe1","\xbd","\xca"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(78)
			_options->__FieldRef(HX_HCSTRING("camera_name","\x65","\x11","\x29","\x5d")) = tmp6;
		}
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Camera.hx",81,0xd52a0e40)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(81)
		Dynamic tmp4 = _Function_2_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		_options = tmp4;
	}
	HX_STACK_LINE(87)
	::phoenix::Camera tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		bool tmp5 = (_options->__Field(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		if ((tmp5)){
			HX_STACK_LINE(87)
			::phoenix::Camera tmp6 = ::phoenix::Camera_obj::__new(_options);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			_options->__FieldRef(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")) = tmp6;
		}
		HX_STACK_LINE(87)
		tmp4 = _options->__Field(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"), hx::paccDynamic );
	}
	HX_STACK_LINE(87)
	this->view = tmp4;
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &_options,::String &_name){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Camera.hx",90,0xd52a0e40)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _name,false);
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , _options->__Field(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10"), hx::paccDynamic ),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(90)
	Dynamic tmp5 = _Function_1_1::Block(_options,_name);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(90)
	super::__construct(tmp5);
}
;
	return null();
}

//Camera_obj::~Camera_obj() { }

Dynamic Camera_obj::__CreateEmpty() { return  new Camera_obj; }
hx::ObjectPtr< Camera_obj > Camera_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Camera_obj > _result_ = new Camera_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Camera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Camera_obj > _result_ = new Camera_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::phoenix::Rectangle Camera_obj::get_viewport( ){
	HX_STACK_FRAME("luxe.Camera","get_viewport",0xdc75eb00,"luxe.Camera.get_viewport","luxe/Camera.hx",97,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	::phoenix::Rectangle tmp1 = tmp->viewport;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_viewport,return )

::phoenix::Rectangle Camera_obj::set_viewport( ::phoenix::Rectangle _v){
	HX_STACK_FRAME("luxe.Camera","set_viewport",0xf16f0e74,"luxe.Camera.set_viewport","luxe/Camera.hx",101,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(102)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	::phoenix::Rectangle tmp1 = _v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	::phoenix::Rectangle tmp2 = tmp->set_viewport(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_viewport,return )

::phoenix::Vector Camera_obj::get_center( ){
	HX_STACK_FRAME("luxe.Camera","get_center",0xe3d709ef,"luxe.Camera.get_center","luxe/Camera.hx",105,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	::phoenix::Vector tmp1 = tmp->center;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_center,return )

::phoenix::Vector Camera_obj::set_center( ::phoenix::Vector _c){
	HX_STACK_FRAME("luxe.Camera","set_center",0xe754a863,"luxe.Camera.set_center","luxe/Camera.hx",109,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(111)
	Float tmp = _c->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	::phoenix::Rectangle tmp1 = this->get_viewport();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	Float tmp4 = (tmp - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(111)
	Float tmp5 = _c->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(111)
	::phoenix::Rectangle tmp6 = this->get_viewport();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(111)
	Float tmp7 = tmp6->h;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(111)
	Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(111)
	Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(111)
	::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new(tmp4,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(111)
	this->set_pos(tmp10);
	HX_STACK_LINE(112)
	::phoenix::Camera tmp11 = this->view;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(112)
	::phoenix::Vector tmp12 = _c;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(112)
	::phoenix::Vector tmp13 = tmp11->set_center(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(112)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_center,return )

Float Camera_obj::get_minimum_zoom( ){
	HX_STACK_FRAME("luxe.Camera","get_minimum_zoom",0x56a621fe,"luxe.Camera.get_minimum_zoom","luxe/Camera.hx",116,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	Float tmp1 = tmp->minimum_zoom;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_minimum_zoom,return )

Float Camera_obj::set_minimum_zoom( Float _m){
	HX_STACK_FRAME("luxe.Camera","set_minimum_zoom",0xace80f72,"luxe.Camera.set_minimum_zoom","luxe/Camera.hx",120,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(121)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	Float tmp1 = tmp->minimum_zoom = _m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_minimum_zoom,return )

Float Camera_obj::get_zoom( ){
	HX_STACK_FRAME("luxe.Camera","get_zoom",0xf17b6cad,"luxe.Camera.get_zoom","luxe/Camera.hx",124,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(125)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	Float tmp1 = tmp->zoom;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_zoom,return )

Float Camera_obj::set_zoom( Float _z){
	HX_STACK_FRAME("luxe.Camera","set_zoom",0x9fd8c621,"luxe.Camera.set_zoom","luxe/Camera.hx",128,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(131)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	Float tmp1 = _z;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	tmp->set_zoom(tmp1);
	HX_STACK_LINE(134)
	::phoenix::Vector tmp2 = this->get_size();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	if ((tmp3)){
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			::phoenix::Camera tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			::phoenix::Spatial tmp5 = tmp4->transform->local;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(135)
			::phoenix::Vector _g = tmp5->scale;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				Float tmp6 = _g->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(135)
				::phoenix::Vector tmp7 = this->_size_factor;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(135)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(135)
				Float tmp9 = (Float((int)1) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(135)
				Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(135)
				Float _x = tmp10;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(135)
				_g->x = _x;
				HX_STACK_LINE(135)
				bool tmp11 = _g->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(135)
				if ((tmp11)){
					HX_STACK_LINE(135)
					_g->x;
				}
				else{
					HX_STACK_LINE(135)
					bool tmp12 = (_g->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(135)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(135)
					if ((tmp12)){
						HX_STACK_LINE(135)
						bool tmp14 = _g->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(135)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(135)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(135)
						tmp13 = false;
					}
					HX_STACK_LINE(135)
					if ((tmp13)){
						HX_STACK_LINE(135)
						Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(135)
						_g->listen_x(tmp14);
					}
					HX_STACK_LINE(135)
					_g->x;
				}
			}
		}
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::phoenix::Camera tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			::phoenix::Spatial tmp5 = tmp4->transform->local;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			::phoenix::Vector _g = tmp5->scale;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(136)
			{
				HX_STACK_LINE(136)
				Float tmp6 = _g->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(136)
				::phoenix::Vector tmp7 = this->_size_factor;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(136)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(136)
				Float tmp9 = (Float((int)1) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(136)
				Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(136)
				Float _y = tmp10;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(136)
				_g->y = _y;
				HX_STACK_LINE(136)
				bool tmp11 = _g->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(136)
				if ((tmp11)){
					HX_STACK_LINE(136)
					_g->y;
				}
				else{
					HX_STACK_LINE(136)
					bool tmp12 = (_g->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(136)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(136)
					if ((tmp12)){
						HX_STACK_LINE(136)
						bool tmp14 = _g->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(136)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(136)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(136)
						tmp13 = false;
					}
					HX_STACK_LINE(136)
					if ((tmp13)){
						HX_STACK_LINE(136)
						Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(136)
						_g->listen_y(tmp14);
					}
					HX_STACK_LINE(136)
					_g->y;
				}
			}
		}
	}
	HX_STACK_LINE(139)
	::phoenix::Camera tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(139)
	Float tmp5 = tmp4->zoom;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(139)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_zoom,return )

::phoenix::Vector Camera_obj::get_size( ){
	HX_STACK_FRAME("luxe.Camera","get_size",0xecd66a5b,"luxe.Camera.get_size","luxe/Camera.hx",143,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(144)
	::phoenix::Vector tmp = this->size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_size,return )

::luxe::SizeMode Camera_obj::get_size_mode( ){
	HX_STACK_FRAME("luxe.Camera","get_size_mode",0xfd951b07,"luxe.Camera.get_size_mode","luxe/Camera.hx",147,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	::luxe::SizeMode tmp = this->size_mode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_size_mode,return )

::luxe::SizeMode Camera_obj::set_size_mode( ::luxe::SizeMode _m){
	HX_STACK_FRAME("luxe.Camera","set_size_mode",0x429afd13,"luxe.Camera.set_size_mode","luxe/Camera.hx",151,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(153)
	::luxe::SizeMode tmp = this->get_size_mode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	if ((tmp1)){
		HX_STACK_LINE(154)
		this->size_mode = _m;
		HX_STACK_LINE(155)
		::phoenix::Vector tmp2 = this->get_size();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		if ((tmp3)){
			HX_STACK_LINE(156)
			::phoenix::Vector tmp4 = this->get_size();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			this->set_size(tmp4);
		}
	}
	HX_STACK_LINE(160)
	::luxe::SizeMode tmp2 = this->size_mode = _m;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_size_mode,return )

Void Camera_obj::_onwindowsized( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.Camera","_onwindowsized",0x6dbb14e6,"luxe.Camera._onwindowsized","luxe/Camera.hx",165,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(166)
		::phoenix::Vector tmp = this->get_size();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		if ((tmp1)){
			HX_STACK_LINE(169)
			::phoenix::Rectangle tmp2 = this->get_viewport();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			::phoenix::Rectangle tmp4 = this->get_viewport();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			Dynamic tmp6 = _event->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			Dynamic tmp7 = _event->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			::phoenix::Rectangle tmp8 = ::phoenix::Rectangle_obj::__new(tmp3,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			this->set_viewport(tmp8);
			HX_STACK_LINE(170)
			::phoenix::Vector tmp9 = this->get_size();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(170)
			this->set_size(tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,_onwindowsized,(void))

::phoenix::Vector Camera_obj::set_size( ::phoenix::Vector _size){
	HX_STACK_FRAME("luxe.Camera","set_size",0x9b33c3cf,"luxe.Camera.set_size","luxe/Camera.hx",174,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_size,"_size")
	HX_STACK_LINE(177)
	bool tmp = (_size == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	if ((tmp)){
		HX_STACK_LINE(178)
		::phoenix::Rectangle tmp1 = this->get_viewport();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		::phoenix::Rectangle tmp4 = this->get_viewport();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		Float tmp5 = tmp4->h;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(tmp3,tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(178)
		this->set_center(tmp7);
		HX_STACK_LINE(179)
		this->size = null();
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			::phoenix::Vector tmp8 = this->_size_factor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(180)
			::phoenix::Vector _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(180)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(180)
			{
				HX_STACK_LINE(180)
				::phoenix::Vector tmp10 = this->_size_factor;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(180)
				::phoenix::Vector _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(180)
				_this1->y = (int)1;
				HX_STACK_LINE(180)
				bool tmp11 = _this1->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(180)
				if ((tmp11)){
					HX_STACK_LINE(180)
					tmp9 = _this1->y;
				}
				else{
					HX_STACK_LINE(180)
					bool tmp12 = (_this1->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(180)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(180)
					if ((tmp12)){
						HX_STACK_LINE(180)
						bool tmp14 = _this1->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(180)
						tmp13 = false;
					}
					HX_STACK_LINE(180)
					if ((tmp13)){
						HX_STACK_LINE(180)
						_this1->listen_y((int)1);
					}
					HX_STACK_LINE(180)
					tmp9 = _this1->y;
				}
			}
			HX_STACK_LINE(180)
			Float _x = tmp9;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(180)
			_this->x = _x;
			HX_STACK_LINE(180)
			bool tmp10 = _this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(180)
			if ((tmp10)){
				HX_STACK_LINE(180)
				_this->x;
			}
			else{
				HX_STACK_LINE(180)
				bool tmp11 = (_this->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(180)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(180)
				if ((tmp11)){
					HX_STACK_LINE(180)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(180)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(180)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(180)
					tmp12 = false;
				}
				HX_STACK_LINE(180)
				if ((tmp12)){
					HX_STACK_LINE(180)
					Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(180)
					_this->listen_x(tmp13);
				}
				HX_STACK_LINE(180)
				_this->x;
			}
		}
		HX_STACK_LINE(181)
		Float tmp8 = this->get_zoom();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		this->set_zoom(tmp8);
		HX_STACK_LINE(182)
		this->_connected = false;
		HX_STACK_LINE(183)
		Dynamic tmp9 = this->_onwindowsized_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(183)
		::Luxe_obj::off((int)31,tmp9);
		HX_STACK_LINE(184)
		::phoenix::Vector tmp10 = this->get_size();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(184)
		return tmp10;
	}
	HX_STACK_LINE(187)
	bool tmp1 = this->_connected;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	if ((tmp2)){
		HX_STACK_LINE(188)
		Dynamic tmp3 = this->_onwindowsized_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		::Luxe_obj::on((int)31,tmp3);
		HX_STACK_LINE(189)
		this->_connected = true;
	}
	HX_STACK_LINE(196)
	::phoenix::Rectangle tmp3 = this->get_viewport();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(196)
	Float tmp4 = tmp3->w;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(196)
	Float tmp5 = _size->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(196)
	Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(196)
	Float _ratio_x = tmp6;		HX_STACK_VAR(_ratio_x,"_ratio_x");
	HX_STACK_LINE(197)
	::phoenix::Rectangle tmp7 = this->get_viewport();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(197)
	Float tmp8 = tmp7->h;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(197)
	Float tmp9 = _size->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(197)
	Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(197)
	Float _ratio_y = tmp10;		HX_STACK_VAR(_ratio_y,"_ratio_y");
	HX_STACK_LINE(198)
	Float tmp11 = _ratio_x;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(198)
	Float tmp12 = _ratio_y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(198)
	Float tmp13 = ::Math_obj::max(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(198)
	Float _shortest = tmp13;		HX_STACK_VAR(_shortest,"_shortest");
	HX_STACK_LINE(199)
	Float tmp14 = _ratio_x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(199)
	Float tmp15 = _ratio_y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(199)
	Float tmp16 = ::Math_obj::min(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(199)
	Float _longest = tmp16;		HX_STACK_VAR(_longest,"_longest");
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		::luxe::SizeMode tmp17 = this->get_size_mode();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(201)
		::luxe::SizeMode _g = tmp17;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(201)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(204)
				Float tmp18 = _ratio_y = _longest;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(204)
				_ratio_x = tmp18;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(208)
				Float tmp18 = _ratio_y = _shortest;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(208)
				_ratio_x = tmp18;
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(218)
		::phoenix::Vector tmp17 = this->_size_factor;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(218)
		::phoenix::Vector _this = tmp17;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(218)
		_this->x = _ratio_x;
		HX_STACK_LINE(218)
		bool tmp18 = _this->_construct;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(218)
		if ((tmp18)){
			HX_STACK_LINE(218)
			_this->x;
		}
		else{
			HX_STACK_LINE(218)
			bool tmp19 = (_this->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(218)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(218)
			if ((tmp19)){
				HX_STACK_LINE(218)
				bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(218)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(218)
				tmp20 = !(tmp22);
			}
			else{
				HX_STACK_LINE(218)
				tmp20 = false;
			}
			HX_STACK_LINE(218)
			if ((tmp20)){
				HX_STACK_LINE(218)
				Float tmp21 = _ratio_x;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(218)
				_this->listen_x(tmp21);
			}
			HX_STACK_LINE(218)
			_this->x;
		}
	}
	HX_STACK_LINE(219)
	{
		HX_STACK_LINE(219)
		::phoenix::Vector tmp17 = this->_size_factor;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(219)
		::phoenix::Vector _this = tmp17;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(219)
		_this->y = _ratio_y;
		HX_STACK_LINE(219)
		bool tmp18 = _this->_construct;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(219)
		if ((tmp18)){
			HX_STACK_LINE(219)
			_this->y;
		}
		else{
			HX_STACK_LINE(219)
			bool tmp19 = (_this->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(219)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(219)
			if ((tmp19)){
				HX_STACK_LINE(219)
				bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(219)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(219)
				tmp20 = !(tmp22);
			}
			else{
				HX_STACK_LINE(219)
				tmp20 = false;
			}
			HX_STACK_LINE(219)
			if ((tmp20)){
				HX_STACK_LINE(219)
				Float tmp21 = _ratio_y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(219)
				_this->listen_y(tmp21);
			}
			HX_STACK_LINE(219)
			_this->y;
		}
	}
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(221)
		::phoenix::Camera tmp17 = this->view;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(221)
		::phoenix::Spatial tmp18 = tmp17->transform->local;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(221)
		::phoenix::Vector _this = tmp18->scale;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(221)
		::phoenix::Vector tmp19 = this->_size_factor;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(221)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(221)
		Float tmp21 = this->get_zoom();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(221)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(221)
		Float tmp23 = (Float((int)1) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(221)
		Float _x = tmp23;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(221)
		_this->x = _x;
		HX_STACK_LINE(221)
		bool tmp24 = _this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(221)
		if ((tmp24)){
			HX_STACK_LINE(221)
			_this->x;
		}
		else{
			HX_STACK_LINE(221)
			bool tmp25 = (_this->listen_x != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(221)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(221)
			if ((tmp25)){
				HX_STACK_LINE(221)
				bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(221)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(221)
				tmp26 = !(tmp28);
			}
			else{
				HX_STACK_LINE(221)
				tmp26 = false;
			}
			HX_STACK_LINE(221)
			if ((tmp26)){
				HX_STACK_LINE(221)
				Float tmp27 = _x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(221)
				_this->listen_x(tmp27);
			}
			HX_STACK_LINE(221)
			_this->x;
		}
	}
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		::phoenix::Camera tmp17 = this->view;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(222)
		::phoenix::Spatial tmp18 = tmp17->transform->local;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(222)
		::phoenix::Vector _this = tmp18->scale;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(222)
		::phoenix::Vector tmp19 = this->_size_factor;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(222)
		Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(222)
		Float tmp21 = this->get_zoom();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(222)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(222)
		Float tmp23 = (Float((int)1) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(222)
		Float _y = tmp23;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(222)
		_this->y = _y;
		HX_STACK_LINE(222)
		bool tmp24 = _this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(222)
		if ((tmp24)){
			HX_STACK_LINE(222)
			_this->y;
		}
		else{
			HX_STACK_LINE(222)
			bool tmp25 = (_this->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(222)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(222)
			if ((tmp25)){
				HX_STACK_LINE(222)
				bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(222)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(222)
				tmp26 = !(tmp28);
			}
			else{
				HX_STACK_LINE(222)
				tmp26 = false;
			}
			HX_STACK_LINE(222)
			if ((tmp26)){
				HX_STACK_LINE(222)
				Float tmp27 = _y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(222)
				_this->listen_y(tmp27);
			}
			HX_STACK_LINE(222)
			_this->y;
		}
	}
	HX_STACK_LINE(225)
	Float tmp17 = (Float(_size->x) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(225)
	Float tmp18 = (Float(_size->y) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(225)
	::phoenix::Vector tmp19 = ::phoenix::Vector_obj::__new(tmp17,tmp18,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(225)
	this->set_center(tmp19);
	HX_STACK_LINE(228)
	::phoenix::Vector tmp20 = ::phoenix::Vector_obj::__new(_size->x,_size->y,_size->z,_size->w);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(228)
	::phoenix::Vector tmp21 = this->size = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(228)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_size,return )

Void Camera_obj::focus( ::phoenix::Vector _p,hx::Null< Float >  __o__t,Dynamic _oncomplete){
Float _t = __o__t.Default(((Float)0.6));
	HX_STACK_FRAME("luxe.Camera","focus",0x3a2b4d27,"luxe.Camera.focus","luxe/Camera.hx",234,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_ARG(_oncomplete,"_oncomplete")
{
		HX_STACK_LINE(234)
		::luxe::Camera _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(236)
		::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		::phoenix::Vector tmp1 = tmp->center;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		Float tmp2 = _t;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &_p){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Camera.hx",236,0xd52a0e40)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , _p->x,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , _p->y,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(236)
		Dynamic tmp3 = _Function_1_1::Block(_p);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(236)
		::luxe::tween::actuators::IGenericActuator tmp4 = ::luxe::tween::Actuate_obj::tween(tmp1,tmp2,tmp3,true,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		Dynamic tmp5 = _oncomplete;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(236)
		::luxe::tween::actuators::IGenericActuator tmp6 = tmp4->onComplete(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(237)
		::luxe::tween::easing::IEasing tmp7 = ::luxe::tween::easing::Quad_obj::get_easeInOut();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(236)
		::luxe::tween::actuators::IGenericActuator tmp8 = tmp6->ease(tmp7);		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::luxe::Camera,_g)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","luxe/Camera.hx",239,0xd52a0e40)
			{
				HX_STACK_LINE(239)
				::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					::phoenix::Transform tmp10 = _g->get_transform();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(239)
					::phoenix::Transform _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(239)
					tmp9 = _this->local->pos;
				}
				HX_STACK_LINE(239)
				::phoenix::Vector _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(239)
				::phoenix::Vector tmp10 = _g->view->pos;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(239)
				Float _x = tmp10->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(239)
				::phoenix::Vector tmp11 = _g->view->pos;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(239)
				Float _y = tmp11->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(239)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(239)
				_this->ignore_listeners = true;
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					_this->x = _x;
					HX_STACK_LINE(239)
					bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(239)
					if ((tmp12)){
						HX_STACK_LINE(239)
						_this->x;
					}
					else{
						HX_STACK_LINE(239)
						bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(239)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(239)
						if ((tmp13)){
							HX_STACK_LINE(239)
							bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(239)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(239)
							tmp14 = !(tmp16);
						}
						else{
							HX_STACK_LINE(239)
							tmp14 = false;
						}
						HX_STACK_LINE(239)
						if ((tmp14)){
							HX_STACK_LINE(239)
							Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(239)
							_this->listen_x(tmp15);
						}
						HX_STACK_LINE(239)
						_this->x;
					}
				}
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					_this->y = _y;
					HX_STACK_LINE(239)
					bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(239)
					if ((tmp12)){
						HX_STACK_LINE(239)
						_this->y;
					}
					else{
						HX_STACK_LINE(239)
						bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(239)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(239)
						if ((tmp13)){
							HX_STACK_LINE(239)
							bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(239)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(239)
							tmp14 = !(tmp16);
						}
						else{
							HX_STACK_LINE(239)
							tmp14 = false;
						}
						HX_STACK_LINE(239)
						if ((tmp14)){
							HX_STACK_LINE(239)
							Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(239)
							_this->listen_y(tmp15);
						}
						HX_STACK_LINE(239)
						_this->y;
					}
				}
				HX_STACK_LINE(239)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(239)
				bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(239)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(239)
				if ((tmp12)){
					HX_STACK_LINE(239)
					bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(239)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(239)
					tmp13 = !(tmp15);
				}
				else{
					HX_STACK_LINE(239)
					tmp13 = false;
				}
				HX_STACK_LINE(239)
				if ((tmp13)){
					HX_STACK_LINE(239)
					Float tmp14 = _this->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(239)
					_this->listen_x(tmp14);
				}
				HX_STACK_LINE(239)
				bool tmp14 = (_this->listen_y != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(239)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(239)
				if ((tmp14)){
					HX_STACK_LINE(239)
					bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(239)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(239)
					tmp15 = !(tmp17);
				}
				else{
					HX_STACK_LINE(239)
					tmp15 = false;
				}
				HX_STACK_LINE(239)
				if ((tmp15)){
					HX_STACK_LINE(239)
					Float tmp16 = _this->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(239)
					_this->listen_y(tmp16);
				}
				HX_STACK_LINE(239)
				_this;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(236)
		tmp8->onUpdate( Dynamic(new _Function_1_2(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Camera_obj,focus,(void))

::phoenix::Vector Camera_obj::screen_point_to_world( ::phoenix::Vector _vector){
	HX_STACK_FRAME("luxe.Camera","screen_point_to_world",0x4663cc5f,"luxe.Camera.screen_point_to_world","luxe/Camera.hx",245,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(247)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	::phoenix::Vector tmp1 = _vector;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	::phoenix::Vector tmp2 = tmp->screen_point_to_world(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,screen_point_to_world,return )

::phoenix::Vector Camera_obj::world_point_to_screen( ::phoenix::Vector _vector,::phoenix::Rectangle _viewport){
	HX_STACK_FRAME("luxe.Camera","world_point_to_screen",0x46a6e923,"luxe.Camera.world_point_to_screen","luxe/Camera.hx",252,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_ARG(_viewport,"_viewport")
	HX_STACK_LINE(254)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	::phoenix::Vector tmp1 = _vector;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(254)
	::phoenix::Rectangle tmp2 = _viewport;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(254)
	::phoenix::Vector tmp3 = tmp->world_point_to_screen(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(254)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,world_point_to_screen,return )

Void Camera_obj::set_pos_from_transform( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("luxe.Camera","set_pos_from_transform",0x5d9e6830,"luxe.Camera.set_pos_from_transform","luxe/Camera.hx",259,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(261)
		::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		Float tmp1 = tmp->viewport->w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		Float _vw = tmp1;		HX_STACK_VAR(_vw,"_vw");
		HX_STACK_LINE(262)
		::phoenix::Camera tmp2 = this->view;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		Float tmp3 = tmp2->viewport->h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		Float _vh = tmp3;		HX_STACK_VAR(_vh,"_vh");
		HX_STACK_LINE(263)
		Float tmp4 = (Float(_vw) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		Float _hvw = tmp4;		HX_STACK_VAR(_hvw,"_hvw");
		HX_STACK_LINE(264)
		Float tmp5 = (Float(_vh) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(264)
		Float _hvh = tmp5;		HX_STACK_VAR(_hvh,"_hvh");
		HX_STACK_LINE(266)
		Float _px = _pos->x;		HX_STACK_VAR(_px,"_px");
		HX_STACK_LINE(267)
		Float _py = _pos->y;		HX_STACK_VAR(_py,"_py");
		HX_STACK_LINE(269)
		::phoenix::Rectangle tmp6 = this->bounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(269)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(269)
		if ((tmp7)){
			HX_STACK_LINE(270)
			Float tmp8 = _px;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(270)
			::phoenix::Rectangle tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(270)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(270)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(270)
			if ((tmp11)){
				HX_STACK_LINE(270)
				::phoenix::Rectangle tmp12 = this->bounds;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(270)
				_px = tmp12->x;
			}
			HX_STACK_LINE(271)
			Float tmp12 = _py;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(271)
			::phoenix::Rectangle tmp13 = this->bounds;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(271)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(271)
			bool tmp15 = (tmp12 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(271)
			if ((tmp15)){
				HX_STACK_LINE(271)
				::phoenix::Rectangle tmp16 = this->bounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(271)
				_py = tmp16->y;
			}
			HX_STACK_LINE(272)
			Float tmp16 = (_px + _hvw);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(272)
			::phoenix::Rectangle tmp17 = this->bounds;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(272)
			Float tmp18 = tmp17->w;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(272)
			Float tmp19 = _vw;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(272)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(272)
			bool tmp21 = (tmp16 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(272)
			if ((tmp21)){
				HX_STACK_LINE(272)
				::phoenix::Rectangle tmp22 = this->bounds;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(272)
				Float tmp23 = tmp22->w;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(272)
				Float tmp24 = _vw;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(272)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(272)
				Float tmp26 = _hvw;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(272)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(272)
				_px = tmp27;
			}
			HX_STACK_LINE(273)
			Float tmp22 = (_py + _hvh);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(273)
			::phoenix::Rectangle tmp23 = this->bounds;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(273)
			Float tmp24 = tmp23->h;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(273)
			Float tmp25 = _vh;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(273)
			Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(273)
			bool tmp27 = (tmp22 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(273)
			if ((tmp27)){
				HX_STACK_LINE(273)
				::phoenix::Rectangle tmp28 = this->bounds;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(273)
				Float tmp29 = tmp28->h;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(273)
				Float tmp30 = _vh;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(273)
				Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(273)
				Float tmp32 = _hvh;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(273)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(273)
				_py = tmp33;
			}
		}
		HX_STACK_LINE(276)
		bool _prev = _pos->ignore_listeners;		HX_STACK_VAR(_prev,"_prev");
		HX_STACK_LINE(277)
		_pos->ignore_listeners = true;
		HX_STACK_LINE(278)
		{
			HX_STACK_LINE(278)
			bool prev = _pos->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(278)
			_pos->ignore_listeners = true;
			HX_STACK_LINE(278)
			{
				HX_STACK_LINE(278)
				_pos->x = _px;
				HX_STACK_LINE(278)
				bool tmp8 = _pos->_construct;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(278)
				if ((tmp8)){
					HX_STACK_LINE(278)
					_pos->x;
				}
				else{
					HX_STACK_LINE(278)
					bool tmp9 = (_pos->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(278)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(278)
					if ((tmp9)){
						HX_STACK_LINE(278)
						bool tmp11 = _pos->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(278)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(278)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(278)
						tmp10 = false;
					}
					HX_STACK_LINE(278)
					if ((tmp10)){
						HX_STACK_LINE(278)
						Float tmp11 = _px;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(278)
						_pos->listen_x(tmp11);
					}
					HX_STACK_LINE(278)
					_pos->x;
				}
			}
			HX_STACK_LINE(278)
			{
				HX_STACK_LINE(278)
				_pos->y = _py;
				HX_STACK_LINE(278)
				bool tmp8 = _pos->_construct;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(278)
				if ((tmp8)){
					HX_STACK_LINE(278)
					_pos->y;
				}
				else{
					HX_STACK_LINE(278)
					bool tmp9 = (_pos->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(278)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(278)
					if ((tmp9)){
						HX_STACK_LINE(278)
						bool tmp11 = _pos->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(278)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(278)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(278)
						tmp10 = false;
					}
					HX_STACK_LINE(278)
					if ((tmp10)){
						HX_STACK_LINE(278)
						Float tmp11 = _py;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(278)
						_pos->listen_y(tmp11);
					}
					HX_STACK_LINE(278)
					_pos->y;
				}
			}
			HX_STACK_LINE(278)
			_pos->ignore_listeners = prev;
			HX_STACK_LINE(278)
			bool tmp8 = (_pos->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(278)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(278)
			if ((tmp8)){
				HX_STACK_LINE(278)
				bool tmp10 = _pos->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(278)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(278)
				tmp9 = !(tmp11);
			}
			else{
				HX_STACK_LINE(278)
				tmp9 = false;
			}
			HX_STACK_LINE(278)
			if ((tmp9)){
				HX_STACK_LINE(278)
				Float tmp10 = _pos->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(278)
				_pos->listen_x(tmp10);
			}
			HX_STACK_LINE(278)
			bool tmp10 = (_pos->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(278)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(278)
			if ((tmp10)){
				HX_STACK_LINE(278)
				bool tmp12 = _pos->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(278)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(278)
				tmp11 = !(tmp13);
			}
			else{
				HX_STACK_LINE(278)
				tmp11 = false;
			}
			HX_STACK_LINE(278)
			if ((tmp11)){
				HX_STACK_LINE(278)
				Float tmp12 = _pos->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(278)
				_pos->listen_y(tmp12);
			}
			HX_STACK_LINE(278)
			_pos;
		}
		HX_STACK_LINE(279)
		_pos->ignore_listeners = _prev;
		HX_STACK_LINE(281)
		::phoenix::Vector tmp8 = _pos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(281)
		this->super::set_pos_from_transform(tmp8);
		HX_STACK_LINE(283)
		::phoenix::Camera tmp9 = this->view;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(283)
		::phoenix::Vector tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			::phoenix::Camera tmp11 = this->view;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(283)
			::phoenix::Vector _this = tmp11->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(283)
			Float _x = _pos->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(283)
			Float _y = _pos->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(283)
			Float _z = _pos->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(283)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(283)
			_this->ignore_listeners = true;
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				_this->x = _x;
				HX_STACK_LINE(283)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(283)
				if ((tmp12)){
					HX_STACK_LINE(283)
					_this->x;
				}
				else{
					HX_STACK_LINE(283)
					bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(283)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(283)
					if ((tmp13)){
						HX_STACK_LINE(283)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(283)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(283)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(283)
						tmp14 = false;
					}
					HX_STACK_LINE(283)
					if ((tmp14)){
						HX_STACK_LINE(283)
						Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(283)
						_this->listen_x(tmp15);
					}
					HX_STACK_LINE(283)
					_this->x;
				}
			}
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				_this->y = _y;
				HX_STACK_LINE(283)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(283)
				if ((tmp12)){
					HX_STACK_LINE(283)
					_this->y;
				}
				else{
					HX_STACK_LINE(283)
					bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(283)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(283)
					if ((tmp13)){
						HX_STACK_LINE(283)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(283)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(283)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(283)
						tmp14 = false;
					}
					HX_STACK_LINE(283)
					if ((tmp14)){
						HX_STACK_LINE(283)
						Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(283)
						_this->listen_y(tmp15);
					}
					HX_STACK_LINE(283)
					_this->y;
				}
			}
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				_this->z = _z;
				HX_STACK_LINE(283)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(283)
				if ((tmp12)){
					HX_STACK_LINE(283)
					_this->z;
				}
				else{
					HX_STACK_LINE(283)
					bool tmp13 = (_this->listen_z != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(283)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(283)
					if ((tmp13)){
						HX_STACK_LINE(283)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(283)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(283)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(283)
						tmp14 = false;
					}
					HX_STACK_LINE(283)
					if ((tmp14)){
						HX_STACK_LINE(283)
						Float tmp15 = _z;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(283)
						_this->listen_z(tmp15);
					}
					HX_STACK_LINE(283)
					_this->z;
				}
			}
			HX_STACK_LINE(283)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(283)
			bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(283)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(283)
			if ((tmp12)){
				HX_STACK_LINE(283)
				bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(283)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(283)
				tmp13 = !(tmp15);
			}
			else{
				HX_STACK_LINE(283)
				tmp13 = false;
			}
			HX_STACK_LINE(283)
			if ((tmp13)){
				HX_STACK_LINE(283)
				Float tmp14 = _this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(283)
				_this->listen_x(tmp14);
			}
			HX_STACK_LINE(283)
			bool tmp14 = (_this->listen_y != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(283)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(283)
			if ((tmp14)){
				HX_STACK_LINE(283)
				bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(283)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(283)
				tmp15 = !(tmp17);
			}
			else{
				HX_STACK_LINE(283)
				tmp15 = false;
			}
			HX_STACK_LINE(283)
			if ((tmp15)){
				HX_STACK_LINE(283)
				Float tmp16 = _this->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(283)
				_this->listen_y(tmp16);
			}
			HX_STACK_LINE(283)
			bool tmp16 = (_this->listen_z != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(283)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(283)
			if ((tmp16)){
				HX_STACK_LINE(283)
				bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(283)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(283)
				tmp17 = !(tmp19);
			}
			else{
				HX_STACK_LINE(283)
				tmp17 = false;
			}
			HX_STACK_LINE(283)
			if ((tmp17)){
				HX_STACK_LINE(283)
				Float tmp18 = _this->z;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(283)
				_this->listen_z(tmp18);
			}
			HX_STACK_LINE(283)
			tmp10 = _this;
		}
		HX_STACK_LINE(283)
		tmp9->set_pos(tmp10);
	}
return null();
}


Void Camera_obj::set_rotation_from_transform( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Camera","set_rotation_from_transform",0xfae455ea,"luxe.Camera.set_rotation_from_transform","luxe/Camera.hx",287,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		HX_STACK_LINE(289)
		::phoenix::Quaternion tmp = _rotation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		this->super::set_rotation_from_transform(tmp);
		HX_STACK_LINE(291)
		::phoenix::Camera tmp1 = this->view;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		if ((tmp2)){
			HX_STACK_LINE(292)
			::phoenix::Camera tmp3 = this->view;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(292)
			::phoenix::Spatial tmp4 = tmp3->transform->local;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(292)
			::phoenix::Spatial _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(292)
			_this->rotation = _rotation;
			HX_STACK_LINE(292)
			bool tmp5 = (_rotation != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(292)
			if ((tmp5)){
				HX_STACK_LINE(292)
				{
					HX_STACK_LINE(292)
					::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
					HX_STACK_LINE(292)
					Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(292)
					_q->listen_x = listener;
					HX_STACK_LINE(292)
					_q->listen_y = listener;
					HX_STACK_LINE(292)
					_q->listen_z = listener;
					HX_STACK_LINE(292)
					_q->listen_w = listener;
				}
				HX_STACK_LINE(292)
				{
					HX_STACK_LINE(292)
					bool tmp6 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(292)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(292)
					if ((tmp6)){
						HX_STACK_LINE(292)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(292)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(292)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(292)
						tmp7 = false;
					}
					HX_STACK_LINE(292)
					if ((tmp7)){
						HX_STACK_LINE(292)
						::phoenix::Quaternion tmp8 = _this->rotation;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(292)
						_this->rotation_changed(tmp8);
					}
				}
			}
			HX_STACK_LINE(292)
			_this->rotation;
		}
	}
return null();
}


Void Camera_obj::set_scale_from_transform( ::phoenix::Vector _scale){
{
		HX_STACK_FRAME("luxe.Camera","set_scale_from_transform",0x39fbfb7a,"luxe.Camera.set_scale_from_transform","luxe/Camera.hx",297,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(299)
		::phoenix::Vector tmp = _scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		this->super::set_scale_from_transform(tmp);
		HX_STACK_LINE(301)
		::phoenix::Camera tmp1 = this->view;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		if ((tmp2)){
			HX_STACK_LINE(302)
			::phoenix::Camera tmp3 = this->view;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			::phoenix::Spatial tmp4 = tmp3->transform->local;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			::phoenix::Spatial _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(302)
			_this->scale = _scale;
			HX_STACK_LINE(302)
			bool tmp5 = (_scale != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(302)
			if ((tmp5)){
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::phoenix::Vector _v = _this->scale;		HX_STACK_VAR(_v,"_v");
					HX_STACK_LINE(302)
					Dynamic listener = _this->_scale_change_dyn();		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(302)
					_v->listen_x = listener;
					HX_STACK_LINE(302)
					_v->listen_y = listener;
					HX_STACK_LINE(302)
					_v->listen_z = listener;
				}
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					bool tmp6 = (_this->scale_changed != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(302)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(302)
					if ((tmp6)){
						HX_STACK_LINE(302)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(302)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(302)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(302)
						tmp7 = false;
					}
					HX_STACK_LINE(302)
					if ((tmp7)){
						HX_STACK_LINE(302)
						::phoenix::Vector tmp8 = _this->scale;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(302)
						_this->scale_changed(tmp8);
					}
				}
			}
			HX_STACK_LINE(302)
			_this->scale;
		}
	}
return null();
}


Void Camera_obj::shake( Float _amount){
{
		HX_STACK_FRAME("luxe.Camera","shake",0xb1becc15,"luxe.Camera.shake","luxe/Camera.hx",308,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_amount,"_amount")
		HX_STACK_LINE(310)
		this->shake_amount = _amount;
		HX_STACK_LINE(311)
		this->shaking = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,shake,(void))

Void Camera_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Camera","update",0x3f133dda,"luxe.Camera.update","luxe/Camera.hx",316,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(319)
		bool tmp = this->shaking;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		if ((tmp)){
			HX_STACK_LINE(322)
			::luxe::utils::Utils tmp1 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(322)
			::phoenix::Vector tmp2 = tmp1->geometry->random_point_in_unit_circle();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(322)
			this->shake_vector = tmp2;
			HX_STACK_LINE(325)
			{
				HX_STACK_LINE(325)
				::phoenix::Vector tmp3 = this->shake_vector;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(325)
				::phoenix::Vector _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					Float tmp4 = _g->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(325)
					Float tmp5 = this->shake_amount;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(325)
					Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(325)
					Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(325)
					_g->x = _x;
					HX_STACK_LINE(325)
					bool tmp7 = _g->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(325)
					if ((tmp7)){
						HX_STACK_LINE(325)
						_g->x;
					}
					else{
						HX_STACK_LINE(325)
						bool tmp8 = (_g->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(325)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(325)
						if ((tmp8)){
							HX_STACK_LINE(325)
							bool tmp10 = _g->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(325)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(325)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(325)
							tmp9 = false;
						}
						HX_STACK_LINE(325)
						if ((tmp9)){
							HX_STACK_LINE(325)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(325)
							_g->listen_x(tmp10);
						}
						HX_STACK_LINE(325)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(326)
			{
				HX_STACK_LINE(326)
				::phoenix::Vector tmp3 = this->shake_vector;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(326)
				::phoenix::Vector _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(326)
				{
					HX_STACK_LINE(326)
					Float tmp4 = _g->y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(326)
					Float tmp5 = this->shake_amount;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(326)
					Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(326)
					Float _y = tmp6;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(326)
					_g->y = _y;
					HX_STACK_LINE(326)
					bool tmp7 = _g->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(326)
					if ((tmp7)){
						HX_STACK_LINE(326)
						_g->y;
					}
					else{
						HX_STACK_LINE(326)
						bool tmp8 = (_g->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(326)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(326)
						if ((tmp8)){
							HX_STACK_LINE(326)
							bool tmp10 = _g->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(326)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(326)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(326)
							tmp9 = false;
						}
						HX_STACK_LINE(326)
						if ((tmp9)){
							HX_STACK_LINE(326)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(326)
							_g->listen_y(tmp10);
						}
						HX_STACK_LINE(326)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(327)
			{
				HX_STACK_LINE(327)
				::phoenix::Vector tmp3 = this->shake_vector;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(327)
				::phoenix::Vector _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(327)
				{
					HX_STACK_LINE(327)
					Float tmp4 = _g->z;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(327)
					Float tmp5 = this->shake_amount;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(327)
					Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(327)
					Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(327)
					_g->z = _z;
					HX_STACK_LINE(327)
					bool tmp7 = _g->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(327)
					if ((tmp7)){
						HX_STACK_LINE(327)
						_g->z;
					}
					else{
						HX_STACK_LINE(327)
						bool tmp8 = (_g->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(327)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(327)
						if ((tmp8)){
							HX_STACK_LINE(327)
							bool tmp10 = _g->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(327)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(327)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(327)
							tmp9 = false;
						}
						HX_STACK_LINE(327)
						if ((tmp9)){
							HX_STACK_LINE(327)
							Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(327)
							_g->listen_z(tmp10);
						}
						HX_STACK_LINE(327)
						_g->z;
					}
				}
			}
			HX_STACK_LINE(330)
			hx::MultEq(this->shake_amount,((Float)0.9));
			HX_STACK_LINE(333)
			Float tmp3 = this->shake_amount;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(333)
			Float tmp4 = this->minimum_shake;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(333)
			bool tmp5 = (tmp3 <= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			if ((tmp5)){
				HX_STACK_LINE(334)
				this->shake_amount = (int)0;
				HX_STACK_LINE(335)
				this->shaking = false;
			}
			HX_STACK_LINE(339)
			::phoenix::Camera tmp6 = this->view;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(339)
			::phoenix::Vector tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(339)
				::phoenix::Camera tmp8 = this->view;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(339)
				::phoenix::Vector _this = tmp8->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(339)
				::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					::phoenix::Transform tmp10 = this->get_transform();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(339)
					::phoenix::Transform _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(339)
					tmp9 = _this1->local->pos;
				}
				HX_STACK_LINE(339)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(339)
				::phoenix::Vector tmp11 = this->shake_vector;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(339)
				Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(339)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(339)
				Float _x = tmp13;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(339)
				::phoenix::Vector tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					::phoenix::Transform tmp15 = this->get_transform();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(339)
					::phoenix::Transform _this1 = tmp15;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(339)
					tmp14 = _this1->local->pos;
				}
				HX_STACK_LINE(339)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(339)
				::phoenix::Vector tmp16 = this->shake_vector;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(339)
				Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(339)
				Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(339)
				Float _y = tmp18;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(339)
				::phoenix::Vector tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					::phoenix::Transform tmp20 = this->get_transform();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(339)
					::phoenix::Transform _this1 = tmp20;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(339)
					tmp19 = _this1->local->pos;
				}
				HX_STACK_LINE(339)
				Float tmp20 = tmp19->z;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(339)
				::phoenix::Vector tmp21 = this->shake_vector;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(339)
				Float tmp22 = tmp21->z;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(339)
				Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(339)
				Float _z = tmp23;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(339)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(339)
				_this->ignore_listeners = true;
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					_this->x = _x;
					HX_STACK_LINE(339)
					bool tmp24 = _this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(339)
					if ((tmp24)){
						HX_STACK_LINE(339)
						_this->x;
					}
					else{
						HX_STACK_LINE(339)
						bool tmp25 = (_this->listen_x != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(339)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(339)
						if ((tmp25)){
							HX_STACK_LINE(339)
							bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(339)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(339)
							tmp26 = !(tmp28);
						}
						else{
							HX_STACK_LINE(339)
							tmp26 = false;
						}
						HX_STACK_LINE(339)
						if ((tmp26)){
							HX_STACK_LINE(339)
							Float tmp27 = _x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(339)
							_this->listen_x(tmp27);
						}
						HX_STACK_LINE(339)
						_this->x;
					}
				}
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					_this->y = _y;
					HX_STACK_LINE(339)
					bool tmp24 = _this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(339)
					if ((tmp24)){
						HX_STACK_LINE(339)
						_this->y;
					}
					else{
						HX_STACK_LINE(339)
						bool tmp25 = (_this->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(339)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(339)
						if ((tmp25)){
							HX_STACK_LINE(339)
							bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(339)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(339)
							tmp26 = !(tmp28);
						}
						else{
							HX_STACK_LINE(339)
							tmp26 = false;
						}
						HX_STACK_LINE(339)
						if ((tmp26)){
							HX_STACK_LINE(339)
							Float tmp27 = _y;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(339)
							_this->listen_y(tmp27);
						}
						HX_STACK_LINE(339)
						_this->y;
					}
				}
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					_this->z = _z;
					HX_STACK_LINE(339)
					bool tmp24 = _this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(339)
					if ((tmp24)){
						HX_STACK_LINE(339)
						_this->z;
					}
					else{
						HX_STACK_LINE(339)
						bool tmp25 = (_this->listen_z != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(339)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(339)
						if ((tmp25)){
							HX_STACK_LINE(339)
							bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(339)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(339)
							tmp26 = !(tmp28);
						}
						else{
							HX_STACK_LINE(339)
							tmp26 = false;
						}
						HX_STACK_LINE(339)
						if ((tmp26)){
							HX_STACK_LINE(339)
							Float tmp27 = _z;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(339)
							_this->listen_z(tmp27);
						}
						HX_STACK_LINE(339)
						_this->z;
					}
				}
				HX_STACK_LINE(339)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(339)
				bool tmp24 = (_this->listen_x != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(339)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(339)
				if ((tmp24)){
					HX_STACK_LINE(339)
					bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(339)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(339)
					tmp25 = !(tmp27);
				}
				else{
					HX_STACK_LINE(339)
					tmp25 = false;
				}
				HX_STACK_LINE(339)
				if ((tmp25)){
					HX_STACK_LINE(339)
					Float tmp26 = _this->x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(339)
					_this->listen_x(tmp26);
				}
				HX_STACK_LINE(339)
				bool tmp26 = (_this->listen_y != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(339)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(339)
				if ((tmp26)){
					HX_STACK_LINE(339)
					bool tmp28 = _this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(339)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(339)
					tmp27 = !(tmp29);
				}
				else{
					HX_STACK_LINE(339)
					tmp27 = false;
				}
				HX_STACK_LINE(339)
				if ((tmp27)){
					HX_STACK_LINE(339)
					Float tmp28 = _this->y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(339)
					_this->listen_y(tmp28);
				}
				HX_STACK_LINE(339)
				bool tmp28 = (_this->listen_z != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(339)
				bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(339)
				if ((tmp28)){
					HX_STACK_LINE(339)
					bool tmp30 = _this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(339)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(339)
					tmp29 = !(tmp31);
				}
				else{
					HX_STACK_LINE(339)
					tmp29 = false;
				}
				HX_STACK_LINE(339)
				if ((tmp29)){
					HX_STACK_LINE(339)
					Float tmp30 = _this->z;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(339)
					_this->listen_z(tmp30);
				}
				HX_STACK_LINE(339)
				tmp7 = _this;
			}
			HX_STACK_LINE(339)
			tmp6->set_pos(tmp7);
		}
	}
return null();
}


Void Camera_obj::init( ){
{
		HX_STACK_FRAME("luxe.Camera","init",0xbd5caca1,"luxe.Camera.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Camera_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Camera","ondestroy",0xbd23fe8a,"luxe.Camera.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(size_mode,"size_mode");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(shake_vector,"shake_vector");
	HX_MARK_MEMBER_NAME(shake_amount,"shake_amount");
	HX_MARK_MEMBER_NAME(shaking,"shaking");
	HX_MARK_MEMBER_NAME(minimum_shake,"minimum_shake");
	HX_MARK_MEMBER_NAME(_size_factor,"_size_factor");
	HX_MARK_MEMBER_NAME(_rotation_radian,"_rotation_radian");
	HX_MARK_MEMBER_NAME(_rotation_cache,"_rotation_cache");
	HX_MARK_MEMBER_NAME(_connected,"_connected");
	::luxe::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(size_mode,"size_mode");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(shake_vector,"shake_vector");
	HX_VISIT_MEMBER_NAME(shake_amount,"shake_amount");
	HX_VISIT_MEMBER_NAME(shaking,"shaking");
	HX_VISIT_MEMBER_NAME(minimum_shake,"minimum_shake");
	HX_VISIT_MEMBER_NAME(_size_factor,"_size_factor");
	HX_VISIT_MEMBER_NAME(_rotation_radian,"_rotation_radian");
	HX_VISIT_MEMBER_NAME(_rotation_cache,"_rotation_cache");
	HX_VISIT_MEMBER_NAME(_connected,"_connected");
	::luxe::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Camera_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == hx::paccAlways) return get_zoom(); }
		if (HX_FIELD_EQ(inName,"size") ) { return inCallProp == hx::paccAlways ? get_size() : size; }
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return get_center(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaking") ) { return shaking; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { if (inCallProp == hx::paccAlways) return get_viewport(); }
		if (HX_FIELD_EQ(inName,"get_zoom") ) { return get_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"size_mode") ) { return inCallProp == hx::paccAlways ? get_size_mode() : size_mode; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_center") ) { return get_center_dyn(); }
		if (HX_FIELD_EQ(inName,"set_center") ) { return set_center_dyn(); }
		if (HX_FIELD_EQ(inName,"_connected") ) { return _connected; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimum_zoom") ) { if (inCallProp == hx::paccAlways) return get_minimum_zoom(); }
		if (HX_FIELD_EQ(inName,"shake_vector") ) { return shake_vector; }
		if (HX_FIELD_EQ(inName,"shake_amount") ) { return shake_amount; }
		if (HX_FIELD_EQ(inName,"_size_factor") ) { return _size_factor; }
		if (HX_FIELD_EQ(inName,"get_viewport") ) { return get_viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"set_viewport") ) { return set_viewport_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"minimum_shake") ) { return minimum_shake; }
		if (HX_FIELD_EQ(inName,"get_size_mode") ) { return get_size_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size_mode") ) { return set_size_mode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onwindowsized") ) { return _onwindowsized_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rotation_cache") ) { return _rotation_cache; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rotation_radian") ) { return _rotation_radian; }
		if (HX_FIELD_EQ(inName,"get_minimum_zoom") ) { return get_minimum_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minimum_zoom") ) { return set_minimum_zoom_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"screen_point_to_world") ) { return screen_point_to_world_dyn(); }
		if (HX_FIELD_EQ(inName,"world_point_to_screen") ) { return world_point_to_screen_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pos_from_transform") ) { return set_pos_from_transform_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_scale_from_transform") ) { return set_scale_from_transform_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_rotation_from_transform") ) { return set_rotation_from_transform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Camera_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == hx::paccAlways) return set_zoom(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue);size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return set_center(inValue); }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaking") ) { shaking=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { if (inCallProp == hx::paccAlways) return set_viewport(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"size_mode") ) { if (inCallProp == hx::paccAlways) return set_size_mode(inValue);size_mode=inValue.Cast< ::luxe::SizeMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_connected") ) { _connected=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimum_zoom") ) { if (inCallProp == hx::paccAlways) return set_minimum_zoom(inValue); }
		if (HX_FIELD_EQ(inName,"shake_vector") ) { shake_vector=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shake_amount") ) { shake_amount=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_size_factor") ) { _size_factor=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"minimum_shake") ) { minimum_shake=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rotation_cache") ) { _rotation_cache=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rotation_radian") ) { _rotation_radian=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"));
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("minimum_zoom","\x64","\x2e","\x79","\xf3"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("size_mode","\xe1","\xf2","\xda","\x66"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("shake_vector","\x5c","\xe8","\x33","\x81"));
	outFields->push(HX_HCSTRING("shake_amount","\x71","\x49","\xd9","\xbe"));
	outFields->push(HX_HCSTRING("shaking","\x83","\x05","\x2a","\x64"));
	outFields->push(HX_HCSTRING("minimum_shake","\x55","\x3a","\x16","\x0a"));
	outFields->push(HX_HCSTRING("_size_factor","\xce","\xc1","\xf6","\x92"));
	outFields->push(HX_HCSTRING("_rotation_radian","\x83","\x19","\xf0","\x9d"));
	outFields->push(HX_HCSTRING("_rotation_cache","\xe0","\xe9","\xe0","\x66"));
	outFields->push(HX_HCSTRING("_connected","\x8a","\x5e","\x99","\xfe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::luxe::SizeMode*/ ,(int)offsetof(Camera_obj,size_mode),HX_HCSTRING("size_mode","\xe1","\xf2","\xda","\x66")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Camera_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Camera_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,shake_vector),HX_HCSTRING("shake_vector","\x5c","\xe8","\x33","\x81")},
	{hx::fsFloat,(int)offsetof(Camera_obj,shake_amount),HX_HCSTRING("shake_amount","\x71","\x49","\xd9","\xbe")},
	{hx::fsBool,(int)offsetof(Camera_obj,shaking),HX_HCSTRING("shaking","\x83","\x05","\x2a","\x64")},
	{hx::fsFloat,(int)offsetof(Camera_obj,minimum_shake),HX_HCSTRING("minimum_shake","\x55","\x3a","\x16","\x0a")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,_size_factor),HX_HCSTRING("_size_factor","\xce","\xc1","\xf6","\x92")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,_rotation_radian),HX_HCSTRING("_rotation_radian","\x83","\x19","\xf0","\x9d")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(Camera_obj,_rotation_cache),HX_HCSTRING("_rotation_cache","\xe0","\xe9","\xe0","\x66")},
	{hx::fsBool,(int)offsetof(Camera_obj,_connected),HX_HCSTRING("_connected","\x8a","\x5e","\x99","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("size_mode","\xe1","\xf2","\xda","\x66"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("shake_vector","\x5c","\xe8","\x33","\x81"),
	HX_HCSTRING("shake_amount","\x71","\x49","\xd9","\xbe"),
	HX_HCSTRING("shaking","\x83","\x05","\x2a","\x64"),
	HX_HCSTRING("minimum_shake","\x55","\x3a","\x16","\x0a"),
	HX_HCSTRING("_size_factor","\xce","\xc1","\xf6","\x92"),
	HX_HCSTRING("_rotation_radian","\x83","\x19","\xf0","\x9d"),
	HX_HCSTRING("_rotation_cache","\xe0","\xe9","\xe0","\x66"),
	HX_HCSTRING("get_viewport","\x6f","\x00","\xbf","\x51"),
	HX_HCSTRING("set_viewport","\xe3","\x23","\xb8","\x66"),
	HX_HCSTRING("get_center","\x9e","\x95","\x62","\xf6"),
	HX_HCSTRING("set_center","\x12","\x34","\xe0","\xf9"),
	HX_HCSTRING("get_minimum_zoom","\xed","\x1a","\x18","\xf8"),
	HX_HCSTRING("set_minimum_zoom","\x61","\x08","\x5a","\x4e"),
	HX_HCSTRING("get_zoom","\x9c","\x5e","\xb3","\xd0"),
	HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("get_size_mode","\xb8","\xc6","\x3e","\x28"),
	HX_HCSTRING("set_size_mode","\xc4","\xa8","\x44","\x6d"),
	HX_HCSTRING("_connected","\x8a","\x5e","\x99","\xfe"),
	HX_HCSTRING("_onwindowsized","\x15","\xa4","\x87","\x97"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("screen_point_to_world","\x10","\x11","\x1a","\xdc"),
	HX_HCSTRING("world_point_to_screen","\xd4","\x2d","\x5d","\xdc"),
	HX_HCSTRING("set_pos_from_transform","\x5f","\x3e","\x64","\xc7"),
	HX_HCSTRING("set_rotation_from_transform","\x5b","\xb5","\xfc","\x30"),
	HX_HCSTRING("set_scale_from_transform","\x69","\xfb","\x86","\x01"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
};

#endif

hx::Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Camera","\x7d","\x58","\xea","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Camera_obj >;
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
