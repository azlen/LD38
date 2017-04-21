#include <hxcpp.h>

#include "linc_opengl.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Uniforms
#include <phoenix/Uniforms.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix__Shader_Uniform_Float
#include <phoenix/_Shader/Uniform_Float.h>
#endif
#ifndef INCLUDED_phoenix__Shader_Uniform_Int
#include <phoenix/_Shader/Uniform_Int.h>
#endif
#ifndef INCLUDED_phoenix__Shader_Uniform_phoenix_Color
#include <phoenix/_Shader/Uniform_phoenix_Color.h>
#endif
#ifndef INCLUDED_phoenix__Shader_Uniform_phoenix_Matrix
#include <phoenix/_Shader/Uniform_phoenix_Matrix.h>
#endif
#ifndef INCLUDED_phoenix__Shader_Uniform_phoenix_Texture
#include <phoenix/_Shader/Uniform_phoenix_Texture.h>
#endif
#ifndef INCLUDED_phoenix__Shader_Uniform_phoenix_Vector
#include <phoenix/_Shader/Uniform_phoenix_Vector.h>
#endif
#ifndef INCLUDED_phoenix__Shader_Uniform_snow_api_buffers_Float32Array
#include <phoenix/_Shader/Uniform_snow_api_buffers_Float32Array.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
namespace phoenix{

Void Uniforms_obj::__construct()
{
HX_STACK_FRAME("phoenix.Uniforms","new",0x539c0590,"phoenix.Uniforms.new","phoenix/Shader.hx",52,0x14ec92d9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(52)
	this->clear();
}
;
	return null();
}

//Uniforms_obj::~Uniforms_obj() { }

Dynamic Uniforms_obj::__CreateEmpty() { return  new Uniforms_obj; }
hx::ObjectPtr< Uniforms_obj > Uniforms_obj::__new()
{  hx::ObjectPtr< Uniforms_obj > _result_ = new Uniforms_obj();
	_result_->__construct();
	return _result_;}

Dynamic Uniforms_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uniforms_obj > _result_ = new Uniforms_obj();
	_result_->__construct();
	return _result_;}

Void Uniforms_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Uniforms","destroy",0x9bc8ba2a,"phoenix.Uniforms.destroy","phoenix/Shader.hx",55,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->ints = null();
		HX_STACK_LINE(57)
		this->floats = null();
		HX_STACK_LINE(58)
		this->vector2s = null();
		HX_STACK_LINE(59)
		this->vector2arrs = null();
		HX_STACK_LINE(60)
		this->vector3s = null();
		HX_STACK_LINE(61)
		this->vector3arrs = null();
		HX_STACK_LINE(62)
		this->vector4s = null();
		HX_STACK_LINE(63)
		this->vector4arrs = null();
		HX_STACK_LINE(64)
		this->matrix4s = null();
		HX_STACK_LINE(65)
		this->matrix4arrs = null();
		HX_STACK_LINE(66)
		this->colors = null();
		HX_STACK_LINE(67)
		this->textures = null();
		HX_STACK_LINE(68)
		this->dirty_ints = null();
		HX_STACK_LINE(69)
		this->dirty_floats = null();
		HX_STACK_LINE(70)
		this->dirty_vector2s = null();
		HX_STACK_LINE(71)
		this->dirty_vector2arrs = null();
		HX_STACK_LINE(72)
		this->dirty_vector3s = null();
		HX_STACK_LINE(73)
		this->dirty_vector3arrs = null();
		HX_STACK_LINE(74)
		this->dirty_vector4s = null();
		HX_STACK_LINE(75)
		this->dirty_vector4arrs = null();
		HX_STACK_LINE(76)
		this->dirty_matrix4s = null();
		HX_STACK_LINE(77)
		this->dirty_matrix4arrs = null();
		HX_STACK_LINE(78)
		this->dirty_colors = null();
		HX_STACK_LINE(79)
		this->dirty_textures = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Uniforms_obj,destroy,(void))

Void Uniforms_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.Uniforms","clear",0x25ff52bd,"phoenix.Uniforms.clear","phoenix/Shader.hx",82,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		this->destroy();
		HX_STACK_LINE(86)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			tmp = tmp2;
		}
		HX_STACK_LINE(86)
		this->ints = tmp;
		HX_STACK_LINE(87)
		::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(87)
		this->floats = tmp1;
		HX_STACK_LINE(88)
		::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(88)
		this->vector2s = tmp2;
		HX_STACK_LINE(89)
		::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			tmp3 = tmp5;
		}
		HX_STACK_LINE(89)
		this->vector2arrs = tmp3;
		HX_STACK_LINE(90)
		::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			tmp4 = tmp6;
		}
		HX_STACK_LINE(90)
		this->vector3s = tmp4;
		HX_STACK_LINE(91)
		::haxe::ds::StringMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			::haxe::ds::StringMap tmp6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			tmp5 = tmp7;
		}
		HX_STACK_LINE(91)
		this->vector3arrs = tmp5;
		HX_STACK_LINE(92)
		::haxe::ds::StringMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			::haxe::ds::StringMap tmp7 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(92)
			::haxe::ds::StringMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(92)
			tmp6 = tmp8;
		}
		HX_STACK_LINE(92)
		this->vector4s = tmp6;
		HX_STACK_LINE(93)
		::haxe::ds::StringMap tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			::haxe::ds::StringMap tmp8 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(93)
			::haxe::ds::StringMap tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(93)
			tmp7 = tmp9;
		}
		HX_STACK_LINE(93)
		this->vector4arrs = tmp7;
		HX_STACK_LINE(94)
		::haxe::ds::StringMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			::haxe::ds::StringMap tmp9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			tmp8 = tmp10;
		}
		HX_STACK_LINE(94)
		this->matrix4s = tmp8;
		HX_STACK_LINE(95)
		::haxe::ds::StringMap tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::haxe::ds::StringMap tmp10 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(95)
			::haxe::ds::StringMap tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(95)
			tmp9 = tmp11;
		}
		HX_STACK_LINE(95)
		this->matrix4arrs = tmp9;
		HX_STACK_LINE(96)
		::haxe::ds::StringMap tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			::haxe::ds::StringMap tmp11 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(96)
			::haxe::ds::StringMap tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(96)
			tmp10 = tmp12;
		}
		HX_STACK_LINE(96)
		this->colors = tmp10;
		HX_STACK_LINE(97)
		::haxe::ds::StringMap tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::haxe::ds::StringMap tmp12 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(97)
			::haxe::ds::StringMap tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(97)
			tmp11 = tmp13;
		}
		HX_STACK_LINE(97)
		this->textures = tmp11;
		HX_STACK_LINE(99)
		this->dirty_ints = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(100)
		this->dirty_floats = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(101)
		this->dirty_vector2s = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(102)
		this->dirty_vector2arrs = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(103)
		this->dirty_vector3s = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(104)
		this->dirty_vector3arrs = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(105)
		this->dirty_vector4s = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(106)
		this->dirty_vector4arrs = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(107)
		this->dirty_matrix4s = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(108)
		this->dirty_matrix4arrs = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(109)
		this->dirty_colors = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(110)
		this->dirty_textures = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Uniforms_obj,clear,(void))

Void Uniforms_obj::set_int( ::String _name,int _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_int",0x9108f3c2,"phoenix.Uniforms.set_int","phoenix/Shader.hx",114,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(116)
		::haxe::ds::StringMap tmp = this->ints;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		::phoenix::_Shader::Uniform_Int tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		::phoenix::_Shader::Uniform_Int _int = tmp2;		HX_STACK_VAR(_int,"_int");
		HX_STACK_LINE(118)
		bool tmp3 = (_int != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		if ((tmp3)){
			HX_STACK_LINE(119)
			_int->value = _value;
		}
		else{
			HX_STACK_LINE(121)
			::phoenix::_Shader::Uniform_Int tmp4 = ::phoenix::_Shader::Uniform_Int_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			_int = tmp4;
			HX_STACK_LINE(122)
			::haxe::ds::StringMap tmp5 = this->ints;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(122)
			::phoenix::_Shader::Uniform_Int tmp7 = _int;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(125)
		::phoenix::_Shader::Uniform_Int tmp4 = _int;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		this->dirty_ints->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_int,(void))

Void Uniforms_obj::set_float( ::String _name,Float _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_float",0xe075472f,"phoenix.Uniforms.set_float","phoenix/Shader.hx",129,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(131)
		::haxe::ds::StringMap tmp = this->floats;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		::phoenix::_Shader::Uniform_Float tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		::phoenix::_Shader::Uniform_Float _float = tmp2;		HX_STACK_VAR(_float,"_float");
		HX_STACK_LINE(133)
		bool tmp3 = (_float != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		if ((tmp3)){
			HX_STACK_LINE(134)
			_float->value = _value;
		}
		else{
			HX_STACK_LINE(136)
			::phoenix::_Shader::Uniform_Float tmp4 = ::phoenix::_Shader::Uniform_Float_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			_float = tmp4;
			HX_STACK_LINE(137)
			::haxe::ds::StringMap tmp5 = this->floats;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			::phoenix::_Shader::Uniform_Float tmp7 = _float;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(137)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(140)
		::phoenix::_Shader::Uniform_Float tmp4 = _float;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		this->dirty_floats->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_float,(void))

Void Uniforms_obj::set_vector2( ::String _name,::phoenix::Vector _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_vector2",0xce4d4662,"phoenix.Uniforms.set_vector2","phoenix/Shader.hx",144,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(146)
		::haxe::ds::StringMap tmp = this->vector2s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		::phoenix::_Shader::Uniform_phoenix_Vector _vector2 = tmp2;		HX_STACK_VAR(_vector2,"_vector2");
		HX_STACK_LINE(148)
		bool tmp3 = (_vector2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		if ((tmp3)){
			HX_STACK_LINE(149)
			_vector2->value = _value;
		}
		else{
			HX_STACK_LINE(151)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp4 = ::phoenix::_Shader::Uniform_phoenix_Vector_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			_vector2 = tmp4;
			HX_STACK_LINE(152)
			::haxe::ds::StringMap tmp5 = this->vector2s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(152)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp7 = _vector2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(152)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(155)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp4 = _vector2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		this->dirty_vector2s->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_vector2,(void))

Void Uniforms_obj::set_vector2_arr( ::String _name,::snow::api::buffers::ArrayBufferView _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_vector2_arr",0x31c262c4,"phoenix.Uniforms.set_vector2_arr","phoenix/Shader.hx",159,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(161)
		::haxe::ds::StringMap tmp = this->vector2arrs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _vector2 = tmp2;		HX_STACK_VAR(_vector2,"_vector2");
		HX_STACK_LINE(163)
		bool tmp3 = (_vector2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		if ((tmp3)){
			HX_STACK_LINE(164)
			_vector2->value = _value;
		}
		else{
			HX_STACK_LINE(166)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp4 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			_vector2 = tmp4;
			HX_STACK_LINE(167)
			::haxe::ds::StringMap tmp5 = this->vector2arrs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(167)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(167)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp7 = _vector2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(167)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(170)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp4 = _vector2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		this->dirty_vector2arrs->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_vector2_arr,(void))

Void Uniforms_obj::set_vector3( ::String _name,::phoenix::Vector _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_vector3",0xce4d4663,"phoenix.Uniforms.set_vector3","phoenix/Shader.hx",174,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(176)
		::haxe::ds::StringMap tmp = this->vector3s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		::phoenix::_Shader::Uniform_phoenix_Vector _vector3 = tmp2;		HX_STACK_VAR(_vector3,"_vector3");
		HX_STACK_LINE(178)
		bool tmp3 = (_vector3 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		if ((tmp3)){
			HX_STACK_LINE(179)
			_vector3->value = _value;
		}
		else{
			HX_STACK_LINE(181)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp4 = ::phoenix::_Shader::Uniform_phoenix_Vector_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			_vector3 = tmp4;
			HX_STACK_LINE(182)
			::haxe::ds::StringMap tmp5 = this->vector3s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(182)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(182)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp7 = _vector3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(185)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp4 = _vector3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		this->dirty_vector3s->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_vector3,(void))

Void Uniforms_obj::set_vector3_arr( ::String _name,::snow::api::buffers::ArrayBufferView _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_vector3_arr",0xc528f745,"phoenix.Uniforms.set_vector3_arr","phoenix/Shader.hx",189,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(191)
		::haxe::ds::StringMap tmp = this->vector3arrs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _vector3 = tmp2;		HX_STACK_VAR(_vector3,"_vector3");
		HX_STACK_LINE(193)
		bool tmp3 = (_vector3 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(194)
			_vector3->value = _value;
		}
		else{
			HX_STACK_LINE(196)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp4 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			_vector3 = tmp4;
			HX_STACK_LINE(197)
			::haxe::ds::StringMap tmp5 = this->vector3arrs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(197)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(197)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp7 = _vector3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(197)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(200)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp4 = _vector3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		this->dirty_vector3arrs->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_vector3_arr,(void))

Void Uniforms_obj::set_vector4( ::String _name,::phoenix::Vector _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_vector4",0xce4d4664,"phoenix.Uniforms.set_vector4","phoenix/Shader.hx",204,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(206)
		::haxe::ds::StringMap tmp = this->vector4s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		::phoenix::_Shader::Uniform_phoenix_Vector _vector4 = tmp2;		HX_STACK_VAR(_vector4,"_vector4");
		HX_STACK_LINE(208)
		bool tmp3 = (_vector4 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		if ((tmp3)){
			HX_STACK_LINE(209)
			_vector4->value = _value;
		}
		else{
			HX_STACK_LINE(211)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp4 = ::phoenix::_Shader::Uniform_phoenix_Vector_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(211)
			_vector4 = tmp4;
			HX_STACK_LINE(212)
			::haxe::ds::StringMap tmp5 = this->vector4s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(212)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp7 = _vector4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(212)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(215)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp4 = _vector4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		this->dirty_vector4s->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_vector4,(void))

Void Uniforms_obj::set_vector4_arr( ::String _name,::snow::api::buffers::ArrayBufferView _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_vector4_arr",0x588f8bc6,"phoenix.Uniforms.set_vector4_arr","phoenix/Shader.hx",219,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(221)
		::haxe::ds::StringMap tmp = this->vector4arrs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _vector4 = tmp2;		HX_STACK_VAR(_vector4,"_vector4");
		HX_STACK_LINE(223)
		bool tmp3 = (_vector4 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		if ((tmp3)){
			HX_STACK_LINE(224)
			_vector4->value = _value;
		}
		else{
			HX_STACK_LINE(226)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp4 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			_vector4 = tmp4;
			HX_STACK_LINE(227)
			::haxe::ds::StringMap tmp5 = this->vector4arrs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp7 = _vector4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(227)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(230)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp4 = _vector4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		this->dirty_vector4arrs->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_vector4_arr,(void))

Void Uniforms_obj::set_matrix4( ::String _name,::phoenix::Matrix _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_matrix4",0x87178f26,"phoenix.Uniforms.set_matrix4","phoenix/Shader.hx",234,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(236)
		::haxe::ds::StringMap tmp = this->matrix4s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		::phoenix::_Shader::Uniform_phoenix_Matrix tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		::phoenix::_Shader::Uniform_phoenix_Matrix _matrix4 = tmp2;		HX_STACK_VAR(_matrix4,"_matrix4");
		HX_STACK_LINE(238)
		bool tmp3 = (_matrix4 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		if ((tmp3)){
			HX_STACK_LINE(239)
			_matrix4->value = _value;
		}
		else{
			HX_STACK_LINE(241)
			::phoenix::_Shader::Uniform_phoenix_Matrix tmp4 = ::phoenix::_Shader::Uniform_phoenix_Matrix_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(241)
			_matrix4 = tmp4;
			HX_STACK_LINE(242)
			::haxe::ds::StringMap tmp5 = this->matrix4s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(242)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(242)
			::phoenix::_Shader::Uniform_phoenix_Matrix tmp7 = _matrix4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(242)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(245)
		::phoenix::_Shader::Uniform_phoenix_Matrix tmp4 = _matrix4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		this->dirty_matrix4s->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_matrix4,(void))

Void Uniforms_obj::set_matrix4_arr( ::String _name,::snow::api::buffers::ArrayBufferView _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_matrix4_arr",0xcbda5d88,"phoenix.Uniforms.set_matrix4_arr","phoenix/Shader.hx",249,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(251)
		::haxe::ds::StringMap tmp = this->matrix4arrs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp2;		HX_STACK_VAR(_matrix4,"_matrix4");
		HX_STACK_LINE(253)
		bool tmp3 = (_matrix4 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		if ((tmp3)){
			HX_STACK_LINE(254)
			_matrix4->value = _value;
		}
		else{
			HX_STACK_LINE(256)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp4 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			_matrix4 = tmp4;
			HX_STACK_LINE(257)
			::haxe::ds::StringMap tmp5 = this->matrix4arrs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(257)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(257)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp7 = _matrix4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(257)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(260)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp4 = _matrix4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(260)
		this->dirty_matrix4arrs->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_matrix4_arr,(void))

Void Uniforms_obj::set_color( ::String _name,::phoenix::Color _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_color",0x283af2f6,"phoenix.Uniforms.set_color","phoenix/Shader.hx",264,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(266)
		::haxe::ds::StringMap tmp = this->colors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		::phoenix::_Shader::Uniform_phoenix_Color tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(266)
		::phoenix::_Shader::Uniform_phoenix_Color _color = tmp2;		HX_STACK_VAR(_color,"_color");
		HX_STACK_LINE(268)
		bool tmp3 = (_color != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(268)
		if ((tmp3)){
			HX_STACK_LINE(269)
			_color->value = _value;
		}
		else{
			HX_STACK_LINE(271)
			::phoenix::_Shader::Uniform_phoenix_Color tmp4 = ::phoenix::_Shader::Uniform_phoenix_Color_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			_color = tmp4;
			HX_STACK_LINE(272)
			::haxe::ds::StringMap tmp5 = this->colors;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(272)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(272)
			::phoenix::_Shader::Uniform_phoenix_Color tmp7 = _color;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(272)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(275)
		::phoenix::_Shader::Uniform_phoenix_Color tmp4 = _color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		this->dirty_colors->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_color,(void))

Void Uniforms_obj::set_texture( ::String _name,::phoenix::Texture _value,::opengl::GLObject _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_texture",0x9291152e,"phoenix.Uniforms.set_texture","phoenix/Shader.hx",279,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(281)
		::haxe::ds::StringMap tmp = this->textures;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		::phoenix::_Shader::Uniform_phoenix_Texture tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(281)
		::phoenix::_Shader::Uniform_phoenix_Texture _texture = tmp2;		HX_STACK_VAR(_texture,"_texture");
		HX_STACK_LINE(283)
		bool tmp3 = (_texture != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		if ((tmp3)){
			HX_STACK_LINE(284)
			_texture->value = _value;
		}
		else{
			HX_STACK_LINE(286)
			::phoenix::_Shader::Uniform_phoenix_Texture tmp4 = ::phoenix::_Shader::Uniform_phoenix_Texture_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			_texture = tmp4;
			HX_STACK_LINE(287)
			::haxe::ds::StringMap tmp5 = this->textures;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(287)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(287)
			::phoenix::_Shader::Uniform_phoenix_Texture tmp7 = _texture;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(287)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(290)
		::phoenix::_Shader::Uniform_phoenix_Texture tmp4 = _texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(290)
		this->dirty_textures->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_texture,(void))

Void Uniforms_obj::apply( ){
{
		HX_STACK_FRAME("phoenix.Uniforms","apply",0x01df669e,"phoenix.Uniforms.apply","phoenix/Shader.hx",295,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(297)
		while((true)){
			HX_STACK_LINE(297)
			int tmp = this->dirty_ints->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(297)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(297)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(297)
			if ((tmp2)){
				HX_STACK_LINE(297)
				break;
			}
			HX_STACK_LINE(298)
			::phoenix::_Shader::Uniform_Int tmp3 = this->dirty_ints->pop().StaticCast< ::phoenix::_Shader::Uniform_Int >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(298)
			::phoenix::_Shader::Uniform_Int uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(299)
			{
				HX_STACK_LINE(299)
				::opengl::GLObject location = uf->location;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(299)
				bool tmp4 = (location == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(299)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(299)
				if ((tmp4)){
					HX_STACK_LINE(299)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(299)
					tmp5 = location->id;
				}
				HX_STACK_LINE(299)
				int tmp6 = uf->value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(299)
				glUniform1i(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(302)
		while((true)){
			HX_STACK_LINE(302)
			int tmp = this->dirty_floats->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(302)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(302)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			if ((tmp2)){
				HX_STACK_LINE(302)
				break;
			}
			HX_STACK_LINE(303)
			::phoenix::_Shader::Uniform_Float tmp3 = this->dirty_floats->pop().StaticCast< ::phoenix::_Shader::Uniform_Float >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(303)
			::phoenix::_Shader::Uniform_Float uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				::opengl::GLObject location = uf->location;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(304)
				bool tmp4 = (location == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(304)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(304)
				if ((tmp4)){
					HX_STACK_LINE(304)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(304)
					tmp5 = location->id;
				}
				HX_STACK_LINE(304)
				Float tmp6 = uf->value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(304)
				glUniform1f(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(307)
		while((true)){
			HX_STACK_LINE(307)
			int tmp = this->dirty_vector2s->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(307)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(307)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(307)
			if ((tmp2)){
				HX_STACK_LINE(307)
				break;
			}
			HX_STACK_LINE(308)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp3 = this->dirty_vector2s->pop().StaticCast< ::phoenix::_Shader::Uniform_phoenix_Vector >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			::phoenix::_Shader::Uniform_phoenix_Vector uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				::opengl::GLObject location = uf->location;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(309)
				bool tmp4 = (location == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(309)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(309)
				if ((tmp4)){
					HX_STACK_LINE(309)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(309)
					tmp5 = location->id;
				}
				HX_STACK_LINE(309)
				Float tmp6 = uf->value->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(309)
				Float tmp7 = uf->value->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(309)
				glUniform2f(tmp5,tmp6,tmp7);
			}
		}
		HX_STACK_LINE(312)
		while((true)){
			HX_STACK_LINE(312)
			int tmp = this->dirty_vector2arrs->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(312)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(312)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(312)
			if ((tmp2)){
				HX_STACK_LINE(312)
				break;
			}
			HX_STACK_LINE(313)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp3 = this->dirty_vector2arrs->pop().StaticCast< ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(313)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(314)
			{
				HX_STACK_LINE(314)
				;;
				HX_STACK_LINE(314)
				glUniform2fv(uf->location->id, uf->value->byteLength/8, (GLfloat*)(&uf->value->buffer[0] + uf->value->byteOffset));
			}
		}
		HX_STACK_LINE(317)
		while((true)){
			HX_STACK_LINE(317)
			int tmp = this->dirty_vector3s->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(317)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(317)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(317)
			if ((tmp2)){
				HX_STACK_LINE(317)
				break;
			}
			HX_STACK_LINE(318)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp3 = this->dirty_vector3s->pop().StaticCast< ::phoenix::_Shader::Uniform_phoenix_Vector >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(318)
			::phoenix::_Shader::Uniform_phoenix_Vector uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				::opengl::GLObject location = uf->location;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(319)
				bool tmp4 = (location == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(319)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(319)
				if ((tmp4)){
					HX_STACK_LINE(319)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(319)
					tmp5 = location->id;
				}
				HX_STACK_LINE(319)
				Float tmp6 = uf->value->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(319)
				Float tmp7 = uf->value->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(319)
				Float tmp8 = uf->value->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(319)
				glUniform3f(tmp5,tmp6,tmp7,tmp8);
			}
		}
		HX_STACK_LINE(322)
		while((true)){
			HX_STACK_LINE(322)
			int tmp = this->dirty_vector3arrs->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(322)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(322)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(322)
			if ((tmp2)){
				HX_STACK_LINE(322)
				break;
			}
			HX_STACK_LINE(323)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp3 = this->dirty_vector3arrs->pop().StaticCast< ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(323)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(324)
			{
				HX_STACK_LINE(324)
				;;
				HX_STACK_LINE(324)
				glUniform3fv(uf->location->id, uf->value->byteLength/12, (GLfloat*)(&uf->value->buffer[0] + uf->value->byteOffset));
			}
		}
		HX_STACK_LINE(327)
		while((true)){
			HX_STACK_LINE(327)
			int tmp = this->dirty_vector4s->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(327)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(327)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(327)
			if ((tmp2)){
				HX_STACK_LINE(327)
				break;
			}
			HX_STACK_LINE(328)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp3 = this->dirty_vector4s->pop().StaticCast< ::phoenix::_Shader::Uniform_phoenix_Vector >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(328)
			::phoenix::_Shader::Uniform_phoenix_Vector uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				::opengl::GLObject location = uf->location;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(329)
				bool tmp4 = (location == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(329)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(329)
				if ((tmp4)){
					HX_STACK_LINE(329)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(329)
					tmp5 = location->id;
				}
				HX_STACK_LINE(329)
				Float tmp6 = uf->value->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(329)
				Float tmp7 = uf->value->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(329)
				Float tmp8 = uf->value->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(329)
				Float tmp9 = uf->value->w;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(329)
				glUniform4f(tmp5,tmp6,tmp7,tmp8,tmp9);
			}
		}
		HX_STACK_LINE(332)
		while((true)){
			HX_STACK_LINE(332)
			int tmp = this->dirty_vector4arrs->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(332)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(332)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(332)
			if ((tmp2)){
				HX_STACK_LINE(332)
				break;
			}
			HX_STACK_LINE(333)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp3 = this->dirty_vector4arrs->pop().StaticCast< ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(333)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(334)
			{
				HX_STACK_LINE(334)
				;;
				HX_STACK_LINE(334)
				glUniform4fv(uf->location->id, uf->value->byteLength/16, (GLfloat*)(&uf->value->buffer[0] + uf->value->byteOffset));
			}
		}
		HX_STACK_LINE(337)
		while((true)){
			HX_STACK_LINE(337)
			int tmp = this->dirty_colors->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(337)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(337)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(337)
			if ((tmp2)){
				HX_STACK_LINE(337)
				break;
			}
			HX_STACK_LINE(338)
			::phoenix::_Shader::Uniform_phoenix_Color tmp3 = this->dirty_colors->pop().StaticCast< ::phoenix::_Shader::Uniform_phoenix_Color >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(338)
			::phoenix::_Shader::Uniform_phoenix_Color uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(339)
				::opengl::GLObject location = uf->location;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(339)
				bool tmp4 = (location == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(339)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(339)
				if ((tmp4)){
					HX_STACK_LINE(339)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(339)
					tmp5 = location->id;
				}
				HX_STACK_LINE(339)
				Float tmp6 = uf->value->r;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(339)
				Float tmp7 = uf->value->g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(339)
				Float tmp8 = uf->value->b;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(339)
				Float tmp9 = uf->value->a;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(339)
				glUniform4f(tmp5,tmp6,tmp7,tmp8,tmp9);
			}
		}
		HX_STACK_LINE(342)
		while((true)){
			HX_STACK_LINE(342)
			int tmp = this->dirty_textures->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(342)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(342)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(342)
			if ((tmp2)){
				HX_STACK_LINE(342)
				break;
			}
			HX_STACK_LINE(343)
			::phoenix::_Shader::Uniform_phoenix_Texture tmp3 = this->dirty_textures->pop().StaticCast< ::phoenix::_Shader::Uniform_phoenix_Texture >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(343)
			::phoenix::_Shader::Uniform_phoenix_Texture uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(344)
			{
				HX_STACK_LINE(344)
				::opengl::GLObject location = uf->location;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(344)
				bool tmp4 = (location == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(344)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(344)
				if ((tmp4)){
					HX_STACK_LINE(344)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(344)
					tmp5 = location->id;
				}
				HX_STACK_LINE(344)
				int tmp6 = uf->value->slot;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(344)
				glUniform1i(tmp5,tmp6);
			}
			HX_STACK_LINE(344)
			uf->value->bind();
		}
		HX_STACK_LINE(347)
		while((true)){
			HX_STACK_LINE(347)
			int tmp = this->dirty_matrix4s->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(347)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(347)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(347)
			if ((tmp2)){
				HX_STACK_LINE(347)
				break;
			}
			HX_STACK_LINE(348)
			::phoenix::_Shader::Uniform_phoenix_Matrix tmp3 = this->dirty_matrix4s->pop().StaticCast< ::phoenix::_Shader::Uniform_phoenix_Matrix >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(348)
			::phoenix::_Shader::Uniform_phoenix_Matrix uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(349)
			{
				HX_STACK_LINE(349)
				::snow::api::buffers::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(349)
					::phoenix::Matrix _this = uf->value;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(349)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(349)
					while((true)){
						HX_STACK_LINE(349)
						bool tmp5 = (i < (int)16);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(349)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(349)
						if ((tmp6)){
							HX_STACK_LINE(349)
							break;
						}
						HX_STACK_LINE(349)
						{
							HX_STACK_LINE(349)
							::snow::api::buffers::ArrayBufferView this1 = _this->_float32array;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(349)
							::__hxcpp_memory_set_float(this1->buffer,(this1->byteOffset + (i * (int)4)),_this->elements->__get(i));
						}
						HX_STACK_LINE(349)
						++(i);
					}
					HX_STACK_LINE(349)
					tmp4 = _this->_float32array;
				}
				HX_STACK_LINE(349)
				::snow::api::buffers::ArrayBufferView data = tmp4;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(349)
				;;
				HX_STACK_LINE(349)
				glUniformMatrix4fv(uf->location->id, data->length>>4, false, (GLfloat*)(&data->buffer[0] + data->byteOffset));
			}
		}
		HX_STACK_LINE(352)
		while((true)){
			HX_STACK_LINE(352)
			int tmp = this->dirty_matrix4arrs->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(352)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(352)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(352)
			if ((tmp2)){
				HX_STACK_LINE(352)
				break;
			}
			HX_STACK_LINE(353)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp3 = this->dirty_matrix4arrs->pop().StaticCast< ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(353)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				;;
				HX_STACK_LINE(354)
				glUniformMatrix4fv(uf->location->id, uf->value->length>>4, false, (GLfloat*)(&uf->value->buffer[0] + uf->value->byteOffset));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Uniforms_obj,apply,(void))


Uniforms_obj::Uniforms_obj()
{
}

void Uniforms_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uniforms);
	HX_MARK_MEMBER_NAME(ints,"ints");
	HX_MARK_MEMBER_NAME(floats,"floats");
	HX_MARK_MEMBER_NAME(vector2s,"vector2s");
	HX_MARK_MEMBER_NAME(vector2arrs,"vector2arrs");
	HX_MARK_MEMBER_NAME(vector3s,"vector3s");
	HX_MARK_MEMBER_NAME(vector3arrs,"vector3arrs");
	HX_MARK_MEMBER_NAME(vector4s,"vector4s");
	HX_MARK_MEMBER_NAME(vector4arrs,"vector4arrs");
	HX_MARK_MEMBER_NAME(matrix4s,"matrix4s");
	HX_MARK_MEMBER_NAME(matrix4arrs,"matrix4arrs");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(textures,"textures");
	HX_MARK_MEMBER_NAME(dirty_ints,"dirty_ints");
	HX_MARK_MEMBER_NAME(dirty_floats,"dirty_floats");
	HX_MARK_MEMBER_NAME(dirty_vector2s,"dirty_vector2s");
	HX_MARK_MEMBER_NAME(dirty_vector2arrs,"dirty_vector2arrs");
	HX_MARK_MEMBER_NAME(dirty_vector3s,"dirty_vector3s");
	HX_MARK_MEMBER_NAME(dirty_vector3arrs,"dirty_vector3arrs");
	HX_MARK_MEMBER_NAME(dirty_vector4s,"dirty_vector4s");
	HX_MARK_MEMBER_NAME(dirty_vector4arrs,"dirty_vector4arrs");
	HX_MARK_MEMBER_NAME(dirty_matrix4s,"dirty_matrix4s");
	HX_MARK_MEMBER_NAME(dirty_matrix4arrs,"dirty_matrix4arrs");
	HX_MARK_MEMBER_NAME(dirty_colors,"dirty_colors");
	HX_MARK_MEMBER_NAME(dirty_textures,"dirty_textures");
	HX_MARK_END_CLASS();
}

void Uniforms_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ints,"ints");
	HX_VISIT_MEMBER_NAME(floats,"floats");
	HX_VISIT_MEMBER_NAME(vector2s,"vector2s");
	HX_VISIT_MEMBER_NAME(vector2arrs,"vector2arrs");
	HX_VISIT_MEMBER_NAME(vector3s,"vector3s");
	HX_VISIT_MEMBER_NAME(vector3arrs,"vector3arrs");
	HX_VISIT_MEMBER_NAME(vector4s,"vector4s");
	HX_VISIT_MEMBER_NAME(vector4arrs,"vector4arrs");
	HX_VISIT_MEMBER_NAME(matrix4s,"matrix4s");
	HX_VISIT_MEMBER_NAME(matrix4arrs,"matrix4arrs");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(textures,"textures");
	HX_VISIT_MEMBER_NAME(dirty_ints,"dirty_ints");
	HX_VISIT_MEMBER_NAME(dirty_floats,"dirty_floats");
	HX_VISIT_MEMBER_NAME(dirty_vector2s,"dirty_vector2s");
	HX_VISIT_MEMBER_NAME(dirty_vector2arrs,"dirty_vector2arrs");
	HX_VISIT_MEMBER_NAME(dirty_vector3s,"dirty_vector3s");
	HX_VISIT_MEMBER_NAME(dirty_vector3arrs,"dirty_vector3arrs");
	HX_VISIT_MEMBER_NAME(dirty_vector4s,"dirty_vector4s");
	HX_VISIT_MEMBER_NAME(dirty_vector4arrs,"dirty_vector4arrs");
	HX_VISIT_MEMBER_NAME(dirty_matrix4s,"dirty_matrix4s");
	HX_VISIT_MEMBER_NAME(dirty_matrix4arrs,"dirty_matrix4arrs");
	HX_VISIT_MEMBER_NAME(dirty_colors,"dirty_colors");
	HX_VISIT_MEMBER_NAME(dirty_textures,"dirty_textures");
}

Dynamic Uniforms_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { return ints; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floats") ) { return floats; }
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_int") ) { return set_int_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vector2s") ) { return vector2s; }
		if (HX_FIELD_EQ(inName,"vector3s") ) { return vector3s; }
		if (HX_FIELD_EQ(inName,"vector4s") ) { return vector4s; }
		if (HX_FIELD_EQ(inName,"matrix4s") ) { return matrix4s; }
		if (HX_FIELD_EQ(inName,"textures") ) { return textures; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_float") ) { return set_float_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dirty_ints") ) { return dirty_ints; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vector2arrs") ) { return vector2arrs; }
		if (HX_FIELD_EQ(inName,"vector3arrs") ) { return vector3arrs; }
		if (HX_FIELD_EQ(inName,"vector4arrs") ) { return vector4arrs; }
		if (HX_FIELD_EQ(inName,"matrix4arrs") ) { return matrix4arrs; }
		if (HX_FIELD_EQ(inName,"set_vector2") ) { return set_vector2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector3") ) { return set_vector3_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector4") ) { return set_vector4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix4") ) { return set_matrix4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dirty_floats") ) { return dirty_floats; }
		if (HX_FIELD_EQ(inName,"dirty_colors") ) { return dirty_colors; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dirty_vector2s") ) { return dirty_vector2s; }
		if (HX_FIELD_EQ(inName,"dirty_vector3s") ) { return dirty_vector3s; }
		if (HX_FIELD_EQ(inName,"dirty_vector4s") ) { return dirty_vector4s; }
		if (HX_FIELD_EQ(inName,"dirty_matrix4s") ) { return dirty_matrix4s; }
		if (HX_FIELD_EQ(inName,"dirty_textures") ) { return dirty_textures; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_vector2_arr") ) { return set_vector2_arr_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector3_arr") ) { return set_vector3_arr_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector4_arr") ) { return set_vector4_arr_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix4_arr") ) { return set_matrix4_arr_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dirty_vector2arrs") ) { return dirty_vector2arrs; }
		if (HX_FIELD_EQ(inName,"dirty_vector3arrs") ) { return dirty_vector3arrs; }
		if (HX_FIELD_EQ(inName,"dirty_vector4arrs") ) { return dirty_vector4arrs; }
		if (HX_FIELD_EQ(inName,"dirty_matrix4arrs") ) { return dirty_matrix4arrs; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Uniforms_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { ints=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floats") ) { floats=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vector2s") ) { vector2s=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vector3s") ) { vector3s=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vector4s") ) { vector4s=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix4s") ) { matrix4s=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dirty_ints") ) { dirty_ints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vector2arrs") ) { vector2arrs=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vector3arrs") ) { vector3arrs=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vector4arrs") ) { vector4arrs=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix4arrs") ) { matrix4arrs=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dirty_floats") ) { dirty_floats=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_colors") ) { dirty_colors=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dirty_vector2s") ) { dirty_vector2s=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_vector3s") ) { dirty_vector3s=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_vector4s") ) { dirty_vector4s=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_matrix4s") ) { dirty_matrix4s=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_textures") ) { dirty_textures=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dirty_vector2arrs") ) { dirty_vector2arrs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_vector3arrs") ) { dirty_vector3arrs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_vector4arrs") ) { dirty_vector4arrs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_matrix4arrs") ) { dirty_matrix4arrs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uniforms_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45"));
	outFields->push(HX_HCSTRING("floats","\x57","\x23","\x56","\x41"));
	outFields->push(HX_HCSTRING("vector2s","\x84","\xd3","\xbd","\x6e"));
	outFields->push(HX_HCSTRING("vector2arrs","\x81","\x44","\x19","\x69"));
	outFields->push(HX_HCSTRING("vector3s","\x63","\xd4","\xbd","\x6e"));
	outFields->push(HX_HCSTRING("vector3arrs","\x02","\xd9","\x7f","\xfc"));
	outFields->push(HX_HCSTRING("vector4s","\x42","\xd5","\xbd","\x6e"));
	outFields->push(HX_HCSTRING("vector4arrs","\x83","\x6d","\xe6","\x8f"));
	outFields->push(HX_HCSTRING("matrix4s","\x40","\x36","\xf3","\x66"));
	outFields->push(HX_HCSTRING("matrix4arrs","\x45","\x3f","\x31","\x03"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"));
	outFields->push(HX_HCSTRING("dirty_ints","\x31","\x8f","\x46","\x4c"));
	outFields->push(HX_HCSTRING("dirty_floats","\x24","\xeb","\x32","\x79"));
	outFields->push(HX_HCSTRING("dirty_vector2s","\x91","\xe8","\x35","\xed"));
	outFields->push(HX_HCSTRING("dirty_vector2arrs","\x94","\x15","\xb4","\x2f"));
	outFields->push(HX_HCSTRING("dirty_vector3s","\x70","\xe9","\x35","\xed"));
	outFields->push(HX_HCSTRING("dirty_vector3arrs","\x15","\xaa","\x1a","\xc3"));
	outFields->push(HX_HCSTRING("dirty_vector4s","\x4f","\xea","\x35","\xed"));
	outFields->push(HX_HCSTRING("dirty_vector4arrs","\x96","\x3e","\x81","\x56"));
	outFields->push(HX_HCSTRING("dirty_matrix4s","\x4d","\x4b","\x6b","\xe5"));
	outFields->push(HX_HCSTRING("dirty_matrix4arrs","\x58","\x10","\xcc","\xc9"));
	outFields->push(HX_HCSTRING("dirty_colors","\x7d","\x8d","\x63","\xfe"));
	outFields->push(HX_HCSTRING("dirty_textures","\x45","\x0c","\x47","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,ints),HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,floats),HX_HCSTRING("floats","\x57","\x23","\x56","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,vector2s),HX_HCSTRING("vector2s","\x84","\xd3","\xbd","\x6e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,vector2arrs),HX_HCSTRING("vector2arrs","\x81","\x44","\x19","\x69")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,vector3s),HX_HCSTRING("vector3s","\x63","\xd4","\xbd","\x6e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,vector3arrs),HX_HCSTRING("vector3arrs","\x02","\xd9","\x7f","\xfc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,vector4s),HX_HCSTRING("vector4s","\x42","\xd5","\xbd","\x6e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,vector4arrs),HX_HCSTRING("vector4arrs","\x83","\x6d","\xe6","\x8f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,matrix4s),HX_HCSTRING("matrix4s","\x40","\x36","\xf3","\x66")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,matrix4arrs),HX_HCSTRING("matrix4arrs","\x45","\x3f","\x31","\x03")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,textures),HX_HCSTRING("textures","\x38","\xf7","\xce","\x65")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_ints),HX_HCSTRING("dirty_ints","\x31","\x8f","\x46","\x4c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_floats),HX_HCSTRING("dirty_floats","\x24","\xeb","\x32","\x79")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_vector2s),HX_HCSTRING("dirty_vector2s","\x91","\xe8","\x35","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_vector2arrs),HX_HCSTRING("dirty_vector2arrs","\x94","\x15","\xb4","\x2f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_vector3s),HX_HCSTRING("dirty_vector3s","\x70","\xe9","\x35","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_vector3arrs),HX_HCSTRING("dirty_vector3arrs","\x15","\xaa","\x1a","\xc3")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_vector4s),HX_HCSTRING("dirty_vector4s","\x4f","\xea","\x35","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_vector4arrs),HX_HCSTRING("dirty_vector4arrs","\x96","\x3e","\x81","\x56")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_matrix4s),HX_HCSTRING("dirty_matrix4s","\x4d","\x4b","\x6b","\xe5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_matrix4arrs),HX_HCSTRING("dirty_matrix4arrs","\x58","\x10","\xcc","\xc9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_colors),HX_HCSTRING("dirty_colors","\x7d","\x8d","\x63","\xfe")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_textures),HX_HCSTRING("dirty_textures","\x45","\x0c","\x47","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45"),
	HX_HCSTRING("floats","\x57","\x23","\x56","\x41"),
	HX_HCSTRING("vector2s","\x84","\xd3","\xbd","\x6e"),
	HX_HCSTRING("vector2arrs","\x81","\x44","\x19","\x69"),
	HX_HCSTRING("vector3s","\x63","\xd4","\xbd","\x6e"),
	HX_HCSTRING("vector3arrs","\x02","\xd9","\x7f","\xfc"),
	HX_HCSTRING("vector4s","\x42","\xd5","\xbd","\x6e"),
	HX_HCSTRING("vector4arrs","\x83","\x6d","\xe6","\x8f"),
	HX_HCSTRING("matrix4s","\x40","\x36","\xf3","\x66"),
	HX_HCSTRING("matrix4arrs","\x45","\x3f","\x31","\x03"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"),
	HX_HCSTRING("dirty_ints","\x31","\x8f","\x46","\x4c"),
	HX_HCSTRING("dirty_floats","\x24","\xeb","\x32","\x79"),
	HX_HCSTRING("dirty_vector2s","\x91","\xe8","\x35","\xed"),
	HX_HCSTRING("dirty_vector2arrs","\x94","\x15","\xb4","\x2f"),
	HX_HCSTRING("dirty_vector3s","\x70","\xe9","\x35","\xed"),
	HX_HCSTRING("dirty_vector3arrs","\x15","\xaa","\x1a","\xc3"),
	HX_HCSTRING("dirty_vector4s","\x4f","\xea","\x35","\xed"),
	HX_HCSTRING("dirty_vector4arrs","\x96","\x3e","\x81","\x56"),
	HX_HCSTRING("dirty_matrix4s","\x4d","\x4b","\x6b","\xe5"),
	HX_HCSTRING("dirty_matrix4arrs","\x58","\x10","\xcc","\xc9"),
	HX_HCSTRING("dirty_colors","\x7d","\x8d","\x63","\xfe"),
	HX_HCSTRING("dirty_textures","\x45","\x0c","\x47","\xe4"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("set_int","\x92","\x66","\xc6","\x19"),
	HX_HCSTRING("set_float","\xff","\x0d","\x91","\x29"),
	HX_HCSTRING("set_vector2","\x32","\x61","\x04","\x6b"),
	HX_HCSTRING("set_vector2_arr","\x94","\x25","\x67","\x24"),
	HX_HCSTRING("set_vector3","\x33","\x61","\x04","\x6b"),
	HX_HCSTRING("set_vector3_arr","\x15","\xba","\xcd","\xb7"),
	HX_HCSTRING("set_vector4","\x34","\x61","\x04","\x6b"),
	HX_HCSTRING("set_vector4_arr","\x96","\x4e","\x34","\x4b"),
	HX_HCSTRING("set_matrix4","\xf6","\xa9","\xce","\x23"),
	HX_HCSTRING("set_matrix4_arr","\x58","\x20","\x7f","\xbe"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uniforms_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uniforms_obj::__mClass,"__mClass");
};

#endif

hx::Class Uniforms_obj::__mClass;

void Uniforms_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Uniforms","\x9e","\x3d","\x2e","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Uniforms_obj >;
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

} // end namespace phoenix
