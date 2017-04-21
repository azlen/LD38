#include <hxcpp.h>

#include "linc_opengl.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
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
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
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
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetText
#include <snow/systems/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
namespace phoenix{

Void Shader_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.Shader","new",0xb939fd36,"phoenix.Shader.new","phoenix/Shader.hx",361,0x14ec92d9)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(375)
	this->no_default_uniforms = false;
	HX_STACK_LINE(368)
	this->frag_id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(367)
	this->vert_id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(363)
	this->log = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(383)
	{
		HX_STACK_LINE(383)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		if ((tmp)){
			HX_STACK_LINE(383)
			::String tmp1 = HX_HCSTRING("_options was null","\x3f","\x38","\x24","\xa1");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(383)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(383)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(385)
	_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)7;
	HX_STACK_LINE(387)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(387)
	super::__construct(tmp);
	HX_STACK_LINE(389)
	this->frag_id = _options->__Field(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44"), hx::paccDynamic );
	HX_STACK_LINE(390)
	this->vert_id = _options->__Field(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d"), hx::paccDynamic );
	HX_STACK_LINE(391)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		bool tmp2 = (_options->__Field(HX_HCSTRING("no_default_uniforms","\x3b","\x80","\x7e","\x28"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		if ((tmp2)){
			HX_STACK_LINE(391)
			_options->__FieldRef(HX_HCSTRING("no_default_uniforms","\x3b","\x80","\x7e","\x28")) = false;
		}
		HX_STACK_LINE(391)
		tmp1 = _options->__Field(HX_HCSTRING("no_default_uniforms","\x3b","\x80","\x7e","\x28"), hx::paccDynamic );
	}
	HX_STACK_LINE(391)
	this->no_default_uniforms = tmp1;
	HX_STACK_LINE(393)
	::phoenix::Uniforms tmp2 = ::phoenix::Uniforms_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(393)
	this->uniforms = tmp2;
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Shader_obj::activate( ){
{
		HX_STACK_FRAME("phoenix.Shader","activate",0x6f45a71d,"phoenix.Shader.activate","phoenix/Shader.hx",397,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(399)
		this->use();
		HX_STACK_LINE(401)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(401)
		tmp->apply();
		HX_STACK_LINE(404)
		::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(404)
		tmp1->state->activeTexture((int)33984);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,activate,(void))

Void Shader_obj::use( ){
{
		HX_STACK_FRAME("phoenix.Shader","use",0xb93f591d,"phoenix.Shader.use","phoenix/Shader.hx",408,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(410)
		::opengl::GLObject tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(410)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(410)
		if ((tmp1)){
			HX_STACK_LINE(411)
			::phoenix::Renderer tmp2 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(411)
			::opengl::GLObject tmp3 = this->program;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(411)
			tmp2->state->useProgram(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,use,(void))

Void Shader_obj::deactivate( ){
{
		HX_STACK_FRAME("phoenix.Shader","deactivate",0x87a4161e,"phoenix.Shader.deactivate","phoenix/Shader.hx",416,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(418)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(418)
		tmp->state->useProgram(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,deactivate,(void))

::phoenix::Shader Shader_obj::clone( ::String _id){
	HX_STACK_FRAME("phoenix.Shader","clone",0xa8cea1b3,"phoenix.Shader.clone","phoenix/Shader.hx",423,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(426)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(427)
	::String tmp1 = this->frag_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(428)
	::String tmp2 = this->vert_id;		HX_STACK_VAR(tmp2,"tmp2");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp,::String &tmp2,::String &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Shader.hx",425,0x14ec92d9)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp,false);
				__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , tmp1,false);
				__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , tmp2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(425)
	Dynamic tmp3 = _Function_1_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(425)
	::phoenix::Shader tmp4 = ::phoenix::Shader_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(425)
	::phoenix::Shader _clone = tmp4;		HX_STACK_VAR(_clone,"_clone");
	HX_STACK_LINE(431)
	::String tmp5 = this->vert_source;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(431)
	::String tmp6 = this->frag_source;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(431)
	_clone->from_string(tmp5,tmp6);
	HX_STACK_LINE(433)
	::phoenix::Shader tmp7 = _clone;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(433)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,clone,return )

Void Shader_obj::set_int( ::String _name,int _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_int",0x16f2b668,"phoenix.Shader.set_int","phoenix/Shader.hx",438,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(438)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(438)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		{
			HX_STACK_LINE(438)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(438)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(438)
			{
				HX_STACK_LINE(438)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(438)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(438)
				if ((tmp3)){
					HX_STACK_LINE(438)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(438)
					tmp4 = program->id;
				}
				HX_STACK_LINE(438)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(438)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(438)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(438)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(438)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(438)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(438)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(438)
		::phoenix::_Shader::Uniform_Int tmp3 = _this->ints->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(438)
		::phoenix::_Shader::Uniform_Int _int = tmp3;		HX_STACK_VAR(_int,"_int");
		HX_STACK_LINE(438)
		bool tmp4 = (_int != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(438)
		if ((tmp4)){
			HX_STACK_LINE(438)
			_int->value = _value;
		}
		else{
			HX_STACK_LINE(438)
			::phoenix::_Shader::Uniform_Int tmp5 = ::phoenix::_Shader::Uniform_Int_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(438)
			_int = tmp5;
			HX_STACK_LINE(438)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(438)
			::phoenix::_Shader::Uniform_Int tmp7 = _int;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(438)
			_this->ints->set(tmp6,tmp7);
		}
		HX_STACK_LINE(438)
		::phoenix::_Shader::Uniform_Int tmp5 = _int;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(438)
		_this->dirty_ints->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_int,(void))

Void Shader_obj::set_float( ::String _name,Float _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_float",0x06517f55,"phoenix.Shader.set_float","phoenix/Shader.hx",442,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(442)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(442)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(442)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(442)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(442)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(442)
				if ((tmp3)){
					HX_STACK_LINE(442)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(442)
					tmp4 = program->id;
				}
				HX_STACK_LINE(442)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(442)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(442)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(442)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(442)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(442)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(442)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		::phoenix::_Shader::Uniform_Float tmp3 = _this->floats->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		::phoenix::_Shader::Uniform_Float _float = tmp3;		HX_STACK_VAR(_float,"_float");
		HX_STACK_LINE(442)
		bool tmp4 = (_float != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(442)
		if ((tmp4)){
			HX_STACK_LINE(442)
			_float->value = _value;
		}
		else{
			HX_STACK_LINE(442)
			::phoenix::_Shader::Uniform_Float tmp5 = ::phoenix::_Shader::Uniform_Float_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(442)
			_float = tmp5;
			HX_STACK_LINE(442)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(442)
			::phoenix::_Shader::Uniform_Float tmp7 = _float;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(442)
			_this->floats->set(tmp6,tmp7);
		}
		HX_STACK_LINE(442)
		::phoenix::_Shader::Uniform_Float tmp5 = _float;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(442)
		_this->dirty_floats->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_float,(void))

Void Shader_obj::set_vector2( ::String _name,::phoenix::Vector _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector2",0x4dc45408,"phoenix.Shader.set_vector2","phoenix/Shader.hx",446,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(446)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(446)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(446)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(446)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(446)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(446)
				if ((tmp3)){
					HX_STACK_LINE(446)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(446)
					tmp4 = program->id;
				}
				HX_STACK_LINE(446)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(446)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(446)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(446)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(446)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(446)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(446)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(446)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp3 = _this->vector2s->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(446)
		::phoenix::_Shader::Uniform_phoenix_Vector _vector2 = tmp3;		HX_STACK_VAR(_vector2,"_vector2");
		HX_STACK_LINE(446)
		bool tmp4 = (_vector2 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(446)
		if ((tmp4)){
			HX_STACK_LINE(446)
			_vector2->value = _value;
		}
		else{
			HX_STACK_LINE(446)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp5 = ::phoenix::_Shader::Uniform_phoenix_Vector_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(446)
			_vector2 = tmp5;
			HX_STACK_LINE(446)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(446)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp7 = _vector2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(446)
			_this->vector2s->set(tmp6,tmp7);
		}
		HX_STACK_LINE(446)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp5 = _vector2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(446)
		_this->dirty_vector2s->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector2,(void))

Void Shader_obj::set_vector2_arr( ::String _name,::snow::api::buffers::ArrayBufferView _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector2_arr",0x02c83b6a,"phoenix.Shader.set_vector2_arr","phoenix/Shader.hx",450,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(450)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(450)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(450)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(450)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(450)
			{
				HX_STACK_LINE(450)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(450)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(450)
				if ((tmp3)){
					HX_STACK_LINE(450)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(450)
					tmp4 = program->id;
				}
				HX_STACK_LINE(450)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(450)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(450)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(450)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(450)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(450)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(450)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(450)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp3 = _this->vector2arrs->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(450)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _vector2 = tmp3;		HX_STACK_VAR(_vector2,"_vector2");
		HX_STACK_LINE(450)
		bool tmp4 = (_vector2 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(450)
		if ((tmp4)){
			HX_STACK_LINE(450)
			_vector2->value = _value;
		}
		else{
			HX_STACK_LINE(450)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp5 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(450)
			_vector2 = tmp5;
			HX_STACK_LINE(450)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(450)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp7 = _vector2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(450)
			_this->vector2arrs->set(tmp6,tmp7);
		}
		HX_STACK_LINE(450)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp5 = _vector2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(450)
		_this->dirty_vector2arrs->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector2_arr,(void))

Void Shader_obj::set_vector3( ::String _name,::phoenix::Vector _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector3",0x4dc45409,"phoenix.Shader.set_vector3","phoenix/Shader.hx",454,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(454)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(454)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(454)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(454)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(454)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(454)
			{
				HX_STACK_LINE(454)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(454)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(454)
				if ((tmp3)){
					HX_STACK_LINE(454)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(454)
					tmp4 = program->id;
				}
				HX_STACK_LINE(454)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(454)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(454)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(454)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(454)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(454)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(454)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(454)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp3 = _this->vector3s->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(454)
		::phoenix::_Shader::Uniform_phoenix_Vector _vector3 = tmp3;		HX_STACK_VAR(_vector3,"_vector3");
		HX_STACK_LINE(454)
		bool tmp4 = (_vector3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(454)
		if ((tmp4)){
			HX_STACK_LINE(454)
			_vector3->value = _value;
		}
		else{
			HX_STACK_LINE(454)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp5 = ::phoenix::_Shader::Uniform_phoenix_Vector_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(454)
			_vector3 = tmp5;
			HX_STACK_LINE(454)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(454)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp7 = _vector3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(454)
			_this->vector3s->set(tmp6,tmp7);
		}
		HX_STACK_LINE(454)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp5 = _vector3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(454)
		_this->dirty_vector3s->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector3,(void))

Void Shader_obj::set_vector3_arr( ::String _name,::snow::api::buffers::ArrayBufferView _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector3_arr",0x962ecfeb,"phoenix.Shader.set_vector3_arr","phoenix/Shader.hx",458,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(458)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(458)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(458)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(458)
		{
			HX_STACK_LINE(458)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(458)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(458)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(458)
				if ((tmp3)){
					HX_STACK_LINE(458)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(458)
					tmp4 = program->id;
				}
				HX_STACK_LINE(458)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(458)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(458)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(458)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(458)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(458)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(458)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(458)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp3 = _this->vector3arrs->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(458)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _vector3 = tmp3;		HX_STACK_VAR(_vector3,"_vector3");
		HX_STACK_LINE(458)
		bool tmp4 = (_vector3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(458)
		if ((tmp4)){
			HX_STACK_LINE(458)
			_vector3->value = _value;
		}
		else{
			HX_STACK_LINE(458)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp5 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(458)
			_vector3 = tmp5;
			HX_STACK_LINE(458)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(458)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp7 = _vector3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(458)
			_this->vector3arrs->set(tmp6,tmp7);
		}
		HX_STACK_LINE(458)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp5 = _vector3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(458)
		_this->dirty_vector3arrs->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector3_arr,(void))

Void Shader_obj::set_vector4( ::String _name,::phoenix::Vector _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector4",0x4dc4540a,"phoenix.Shader.set_vector4","phoenix/Shader.hx",462,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(462)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(462)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(462)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(462)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(462)
			{
				HX_STACK_LINE(462)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(462)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(462)
				if ((tmp3)){
					HX_STACK_LINE(462)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(462)
					tmp4 = program->id;
				}
				HX_STACK_LINE(462)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(462)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(462)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(462)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(462)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(462)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(462)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(462)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp3 = _this->vector4s->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(462)
		::phoenix::_Shader::Uniform_phoenix_Vector _vector4 = tmp3;		HX_STACK_VAR(_vector4,"_vector4");
		HX_STACK_LINE(462)
		bool tmp4 = (_vector4 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(462)
		if ((tmp4)){
			HX_STACK_LINE(462)
			_vector4->value = _value;
		}
		else{
			HX_STACK_LINE(462)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp5 = ::phoenix::_Shader::Uniform_phoenix_Vector_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(462)
			_vector4 = tmp5;
			HX_STACK_LINE(462)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(462)
			::phoenix::_Shader::Uniform_phoenix_Vector tmp7 = _vector4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(462)
			_this->vector4s->set(tmp6,tmp7);
		}
		HX_STACK_LINE(462)
		::phoenix::_Shader::Uniform_phoenix_Vector tmp5 = _vector4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(462)
		_this->dirty_vector4s->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector4,(void))

Void Shader_obj::set_vector4_arr( ::String _name,::snow::api::buffers::ArrayBufferView _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_vector4_arr",0x2995646c,"phoenix.Shader.set_vector4_arr","phoenix/Shader.hx",466,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(466)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(466)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(466)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(466)
		{
			HX_STACK_LINE(466)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(466)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(466)
			{
				HX_STACK_LINE(466)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(466)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(466)
				if ((tmp3)){
					HX_STACK_LINE(466)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(466)
					tmp4 = program->id;
				}
				HX_STACK_LINE(466)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(466)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(466)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(466)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(466)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(466)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(466)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(466)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp3 = _this->vector4arrs->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(466)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _vector4 = tmp3;		HX_STACK_VAR(_vector4,"_vector4");
		HX_STACK_LINE(466)
		bool tmp4 = (_vector4 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(466)
		if ((tmp4)){
			HX_STACK_LINE(466)
			_vector4->value = _value;
		}
		else{
			HX_STACK_LINE(466)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp5 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(466)
			_vector4 = tmp5;
			HX_STACK_LINE(466)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(466)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp7 = _vector4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(466)
			_this->vector4arrs->set(tmp6,tmp7);
		}
		HX_STACK_LINE(466)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp5 = _vector4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(466)
		_this->dirty_vector4arrs->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_vector4_arr,(void))

Void Shader_obj::set_matrix4( ::String _name,::phoenix::Matrix _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_matrix4",0x068e9ccc,"phoenix.Shader.set_matrix4","phoenix/Shader.hx",470,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(470)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(470)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(470)
		{
			HX_STACK_LINE(470)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(470)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(470)
			{
				HX_STACK_LINE(470)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(470)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(470)
				if ((tmp3)){
					HX_STACK_LINE(470)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(470)
					tmp4 = program->id;
				}
				HX_STACK_LINE(470)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(470)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(470)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(470)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(470)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(470)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(470)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(470)
		::phoenix::_Shader::Uniform_phoenix_Matrix tmp3 = _this->matrix4s->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(470)
		::phoenix::_Shader::Uniform_phoenix_Matrix _matrix4 = tmp3;		HX_STACK_VAR(_matrix4,"_matrix4");
		HX_STACK_LINE(470)
		bool tmp4 = (_matrix4 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(470)
		if ((tmp4)){
			HX_STACK_LINE(470)
			_matrix4->value = _value;
		}
		else{
			HX_STACK_LINE(470)
			::phoenix::_Shader::Uniform_phoenix_Matrix tmp5 = ::phoenix::_Shader::Uniform_phoenix_Matrix_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(470)
			_matrix4 = tmp5;
			HX_STACK_LINE(470)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(470)
			::phoenix::_Shader::Uniform_phoenix_Matrix tmp7 = _matrix4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(470)
			_this->matrix4s->set(tmp6,tmp7);
		}
		HX_STACK_LINE(470)
		::phoenix::_Shader::Uniform_phoenix_Matrix tmp5 = _matrix4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(470)
		_this->dirty_matrix4s->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_matrix4,(void))

Void Shader_obj::set_matrix4_arr( ::String _name,::snow::api::buffers::ArrayBufferView _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_matrix4_arr",0x9ce0362e,"phoenix.Shader.set_matrix4_arr","phoenix/Shader.hx",474,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(474)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(474)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(474)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(474)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(474)
			{
				HX_STACK_LINE(474)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(474)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(474)
				if ((tmp3)){
					HX_STACK_LINE(474)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(474)
					tmp4 = program->id;
				}
				HX_STACK_LINE(474)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(474)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(474)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(474)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(474)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(474)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(474)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(474)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp3 = _this->matrix4arrs->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(474)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp3;		HX_STACK_VAR(_matrix4,"_matrix4");
		HX_STACK_LINE(474)
		bool tmp4 = (_matrix4 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(474)
		if ((tmp4)){
			HX_STACK_LINE(474)
			_matrix4->value = _value;
		}
		else{
			HX_STACK_LINE(474)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp5 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(474)
			_matrix4 = tmp5;
			HX_STACK_LINE(474)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(474)
			::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp7 = _matrix4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(474)
			_this->matrix4arrs->set(tmp6,tmp7);
		}
		HX_STACK_LINE(474)
		::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp5 = _matrix4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(474)
		_this->dirty_matrix4arrs->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_matrix4_arr,(void))

Void Shader_obj::set_color( ::String _name,::phoenix::Color _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_color",0x4e172b1c,"phoenix.Shader.set_color","phoenix/Shader.hx",478,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(478)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(478)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		{
			HX_STACK_LINE(478)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(478)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(478)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(478)
				if ((tmp3)){
					HX_STACK_LINE(478)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(478)
					tmp4 = program->id;
				}
				HX_STACK_LINE(478)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(478)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(478)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(478)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(478)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(478)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(478)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(478)
		::phoenix::_Shader::Uniform_phoenix_Color tmp3 = _this->colors->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(478)
		::phoenix::_Shader::Uniform_phoenix_Color _color = tmp3;		HX_STACK_VAR(_color,"_color");
		HX_STACK_LINE(478)
		bool tmp4 = (_color != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(478)
		if ((tmp4)){
			HX_STACK_LINE(478)
			_color->value = _value;
		}
		else{
			HX_STACK_LINE(478)
			::phoenix::_Shader::Uniform_phoenix_Color tmp5 = ::phoenix::_Shader::Uniform_phoenix_Color_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(478)
			_color = tmp5;
			HX_STACK_LINE(478)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(478)
			::phoenix::_Shader::Uniform_phoenix_Color tmp7 = _color;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(478)
			_this->colors->set(tmp6,tmp7);
		}
		HX_STACK_LINE(478)
		::phoenix::_Shader::Uniform_phoenix_Color tmp5 = _color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(478)
		_this->dirty_colors->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_color,(void))

Void Shader_obj::set_texture( ::String _name,::phoenix::Texture _value){
{
		HX_STACK_FRAME("phoenix.Shader","set_texture",0x120822d4,"phoenix.Shader.set_texture","phoenix/Shader.hx",482,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(482)
		::phoenix::Uniforms tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(482)
		::phoenix::Uniforms _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(482)
		::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(482)
			::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(482)
			::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(482)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(482)
				if ((tmp3)){
					HX_STACK_LINE(482)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(482)
					tmp4 = program->id;
				}
				HX_STACK_LINE(482)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(482)
				int tmp6 = glGetUniformLocation(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(482)
				int _id = tmp6;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(482)
				::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(482)
				tmp1 = tmp7;
			}
		}
		HX_STACK_LINE(482)
		::opengl::GLObject _location = tmp1;		HX_STACK_VAR(_location,"_location");
		HX_STACK_LINE(482)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(482)
		::phoenix::_Shader::Uniform_phoenix_Texture tmp3 = _this->textures->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(482)
		::phoenix::_Shader::Uniform_phoenix_Texture _texture = tmp3;		HX_STACK_VAR(_texture,"_texture");
		HX_STACK_LINE(482)
		bool tmp4 = (_texture != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(482)
		if ((tmp4)){
			HX_STACK_LINE(482)
			_texture->value = _value;
		}
		else{
			HX_STACK_LINE(482)
			::phoenix::_Shader::Uniform_phoenix_Texture tmp5 = ::phoenix::_Shader::Uniform_phoenix_Texture_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(482)
			_texture = tmp5;
			HX_STACK_LINE(482)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(482)
			::phoenix::_Shader::Uniform_phoenix_Texture tmp7 = _texture;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(482)
			_this->textures->set(tmp6,tmp7);
		}
		HX_STACK_LINE(482)
		::phoenix::_Shader::Uniform_phoenix_Texture tmp5 = _texture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(482)
		_this->dirty_textures->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,set_texture,(void))

::opengl::GLObject Shader_obj::compile( int _type,::String _source){
	HX_STACK_FRAME("phoenix.Shader","compile",0x809b7549,"phoenix.Shader.compile","phoenix/Shader.hx",486,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_type,"_type")
	HX_STACK_ARG(_source,"_source")
	HX_STACK_LINE(488)
	::opengl::GLObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(488)
	{
		HX_STACK_LINE(488)
		int tmp1 = _type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(488)
		int tmp2 = glCreateShader(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(488)
		int _id = tmp2;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(488)
		::opengl::GLObject tmp3 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(488)
		tmp = tmp3;
	}
	HX_STACK_LINE(488)
	::opengl::GLObject _shader = tmp;		HX_STACK_VAR(_shader,"_shader");
	HX_STACK_LINE(490)
	bool tmp1 = (_shader == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(490)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(490)
	if ((tmp1)){
		HX_STACK_LINE(490)
		tmp2 = (int)0;
	}
	else{
		HX_STACK_LINE(490)
		tmp2 = _shader->id;
	}
	HX_STACK_LINE(490)
	::String tmp3 = _source;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(490)
	linc::opengl::webgl::shaderSource(tmp2,tmp3);
	HX_STACK_LINE(491)
	bool tmp4 = (_shader == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(491)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(491)
	if ((tmp4)){
		HX_STACK_LINE(491)
		tmp5 = (int)0;
	}
	else{
		HX_STACK_LINE(491)
		tmp5 = _shader->id;
	}
	HX_STACK_LINE(491)
	glCompileShader(tmp5);
	HX_STACK_LINE(493)
	bool tmp6 = (_shader == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(493)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(493)
	if ((tmp6)){
		HX_STACK_LINE(493)
		tmp7 = (int)0;
	}
	else{
		HX_STACK_LINE(493)
		tmp7 = _shader->id;
	}
	HX_STACK_LINE(493)
	::String tmp8 = linc::opengl::webgl::getShaderInfoLog(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(493)
	::String _compile_log = tmp8;		HX_STACK_VAR(_compile_log,"_compile_log");
	HX_STACK_LINE(494)
	::String _log = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_log,"_log");
	HX_STACK_LINE(496)
	bool tmp9 = (_compile_log.length > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(496)
	if ((tmp9)){
		HX_STACK_LINE(498)
		bool tmp10 = (_type == (int)35632);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(498)
		bool _is_frag = tmp10;		HX_STACK_VAR(_is_frag,"_is_frag");
		HX_STACK_LINE(499)
		bool tmp11 = _is_frag;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(499)
		::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(499)
		if ((tmp11)){
			HX_STACK_LINE(499)
			tmp12 = HX_HCSTRING("frag","\x32","\x99","\xc2","\x43");
		}
		else{
			HX_STACK_LINE(499)
			tmp12 = HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e");
		}
		HX_STACK_LINE(499)
		::String _type_name = tmp12;		HX_STACK_VAR(_type_name,"_type_name");
		HX_STACK_LINE(500)
		bool tmp13 = _is_frag;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(500)
		::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(500)
		if ((tmp13)){
			HX_STACK_LINE(500)
			tmp14 = this->frag_id;
		}
		else{
			HX_STACK_LINE(500)
			tmp14 = this->vert_id;
		}
		HX_STACK_LINE(500)
		::String _type_id = tmp14;		HX_STACK_VAR(_type_id,"_type_id");
		HX_STACK_LINE(502)
		::String tmp15 = (HX_HCSTRING("\n\t// start -- (","\xc7","\x92","\xd2","\xb9") + _type_name);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(502)
		::String tmp16 = (tmp15 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(502)
		::String tmp17 = _type_id;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(502)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(502)
		::String tmp19 = (tmp18 + HX_HCSTRING(") compile log --\n","\x6a","\x61","\xa8","\x06"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(502)
		hx::AddEq(_log,tmp19);
		HX_STACK_LINE(503)
		::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			Array< ::String > _items = _compile_log.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_items,"_items");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
			int __ArgCount() const { return 1; }
			bool run(::String s){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","phoenix/Shader.hx",503,0x14ec92d9)
				HX_STACK_ARG(s,"s")
				{
					HX_STACK_LINE(503)
					::String tmp21 = s;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(503)
					::String tmp22 = ::StringTools_obj::trim(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(503)
					bool tmp23 = (tmp22 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(503)
					return tmp23;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(503)
			_items = _items->filter( Dynamic(new _Function_3_1()));

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
			int __ArgCount() const { return 1; }
			::String run(::String s){
				HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","phoenix/Shader.hx",503,0x14ec92d9)
				HX_STACK_ARG(s,"s")
				{
					HX_STACK_LINE(503)
					::String tmp21 = s;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(503)
					::String tmp22 = ::StringTools_obj::trim(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(503)
					::String tmp23 = (HX_HCSTRING("\t\t","\xe0","\x07","\x00","\x00") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(503)
					return tmp23;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(503)
			_items = _items->map( Dynamic(new _Function_3_2())).StaticCast< Array< ::String > >();
			HX_STACK_LINE(503)
			tmp20 = _items->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(503)
		hx::AddEq(_log,tmp20);
		HX_STACK_LINE(504)
		hx::AddEq(_log,HX_HCSTRING("\n\t// end --\n","\x64","\x48","\x2d","\x54"));
	}
	HX_STACK_LINE(508)
	bool tmp10 = (_shader == null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(508)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(508)
	if ((tmp10)){
		HX_STACK_LINE(508)
		tmp11 = (int)0;
	}
	else{
		HX_STACK_LINE(508)
		tmp11 = _shader->id;
	}
	HX_STACK_LINE(508)
	int tmp12 = linc::opengl::webgl::getShaderParameter(tmp11,(int)35713);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(508)
	bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(508)
	if ((tmp13)){
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			::String tmp14 = this->id;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(510)
			::String tmp15 = (HX_HCSTRING("\tFailed to compile shader `","\xbd","\x54","\xf0","\x32") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(510)
			::String tmp16 = (tmp15 + HX_HCSTRING("`:\n","\xf0","\x0a","\x49","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(510)
			hx::AddEq(this->log,tmp16);
		}
		HX_STACK_LINE(511)
		{
			HX_STACK_LINE(511)
			bool tmp14 = (_log.length == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(511)
			::String tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(511)
			if ((tmp14)){
				HX_STACK_LINE(511)
				bool tmp16 = (_shader == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(511)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(511)
				if ((tmp16)){
					HX_STACK_LINE(511)
					tmp17 = (int)0;
				}
				else{
					HX_STACK_LINE(511)
					tmp17 = _shader->id;
				}
				HX_STACK_LINE(511)
				::String tmp18 = linc::opengl::webgl::getShaderInfoLog(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(511)
				::String _log1 = tmp18;		HX_STACK_VAR(_log1,"_log1");
				HX_STACK_LINE(511)
				Array< ::String > _items = _log1.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_items,"_items");

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_1)
				int __ArgCount() const { return 1; }
				bool run(::String s){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","phoenix/Shader.hx",511,0x14ec92d9)
					HX_STACK_ARG(s,"s")
					{
						HX_STACK_LINE(511)
						::String tmp19 = s;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(511)
						::String tmp20 = ::StringTools_obj::trim(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(511)
						bool tmp21 = (tmp20 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(511)
						return tmp21;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(511)
				_items = _items->filter( Dynamic(new _Function_4_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_2)
				int __ArgCount() const { return 1; }
				::String run(::String s){
					HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","phoenix/Shader.hx",511,0x14ec92d9)
					HX_STACK_ARG(s,"s")
					{
						HX_STACK_LINE(511)
						::String tmp19 = s;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(511)
						::String tmp20 = ::StringTools_obj::trim(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(511)
						::String tmp21 = (HX_HCSTRING("\t\t","\xe0","\x07","\x00","\x00") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(511)
						return tmp21;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(511)
				_items = _items->map( Dynamic(new _Function_4_2())).StaticCast< Array< ::String > >();
				HX_STACK_LINE(511)
				tmp15 = _items->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(511)
				tmp15 = _log;
			}
			HX_STACK_LINE(511)
			::String _log1 = tmp15;		HX_STACK_VAR(_log1,"_log1");
			HX_STACK_LINE(511)
			hx::AddEq(this->log,_log1);
		}
		HX_STACK_LINE(513)
		bool tmp14 = (_shader == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(513)
		int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(513)
		if ((tmp14)){
			HX_STACK_LINE(513)
			tmp15 = (int)0;
		}
		else{
			HX_STACK_LINE(513)
			tmp15 = _shader->id;
		}
		HX_STACK_LINE(513)
		glDeleteShader(tmp15);
		HX_STACK_LINE(514)
		_shader = null();
		HX_STACK_LINE(516)
		return null();
	}
	HX_STACK_LINE(520)
	::opengl::GLObject tmp14 = _shader;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(520)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,compile,return )

bool Shader_obj::link( ){
	HX_STACK_FRAME("phoenix.Shader","link",0x58342664,"phoenix.Shader.link","phoenix/Shader.hx",523,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(525)
	::opengl::GLObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(525)
	{
		HX_STACK_LINE(525)
		int tmp1 = glCreateProgram();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(525)
		int _id = tmp1;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(525)
		::opengl::GLObject tmp2 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(525)
		tmp = tmp2;
	}
	HX_STACK_LINE(525)
	this->program = tmp;
	HX_STACK_LINE(527)
	{
		HX_STACK_LINE(527)
		::opengl::GLObject tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(527)
		::opengl::GLObject program = tmp1;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(527)
		::opengl::GLObject tmp2 = this->vert_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(527)
		::opengl::GLObject shader = tmp2;		HX_STACK_VAR(shader,"shader");
		HX_STACK_LINE(527)
		bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(527)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(527)
		if ((tmp3)){
			HX_STACK_LINE(527)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(527)
			tmp4 = program->id;
		}
		HX_STACK_LINE(527)
		bool tmp5 = (shader == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(527)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(527)
		if ((tmp5)){
			HX_STACK_LINE(527)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(527)
			tmp6 = shader->id;
		}
		HX_STACK_LINE(527)
		glAttachShader(tmp4,tmp6);
	}
	HX_STACK_LINE(528)
	{
		HX_STACK_LINE(528)
		::opengl::GLObject tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(528)
		::opengl::GLObject program = tmp1;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(528)
		::opengl::GLObject tmp2 = this->frag_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(528)
		::opengl::GLObject shader = tmp2;		HX_STACK_VAR(shader,"shader");
		HX_STACK_LINE(528)
		bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(528)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(528)
		if ((tmp3)){
			HX_STACK_LINE(528)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(528)
			tmp4 = program->id;
		}
		HX_STACK_LINE(528)
		bool tmp5 = (shader == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(528)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(528)
		if ((tmp5)){
			HX_STACK_LINE(528)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(528)
			tmp6 = shader->id;
		}
		HX_STACK_LINE(528)
		glAttachShader(tmp4,tmp6);
	}
	HX_STACK_LINE(531)
	{
		HX_STACK_LINE(531)
		::opengl::GLObject tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(531)
		::opengl::GLObject program = tmp1;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(531)
		bool tmp2 = (program == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(531)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(531)
		if ((tmp2)){
			HX_STACK_LINE(531)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(531)
			tmp3 = program->id;
		}
		HX_STACK_LINE(531)
		glBindAttribLocation(tmp3,(int)0,HX_HCSTRING("vertexPosition","\x2d","\x3c","\x14","\x50"));
	}
	HX_STACK_LINE(532)
	{
		HX_STACK_LINE(532)
		::opengl::GLObject tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(532)
		::opengl::GLObject program = tmp1;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(532)
		bool tmp2 = (program == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(532)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(532)
		if ((tmp2)){
			HX_STACK_LINE(532)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(532)
			tmp3 = program->id;
		}
		HX_STACK_LINE(532)
		glBindAttribLocation(tmp3,(int)1,HX_HCSTRING("vertexTCoord","\x25","\xf8","\x06","\xdf"));
	}
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(533)
		::opengl::GLObject tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(533)
		::opengl::GLObject program = tmp1;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(533)
		bool tmp2 = (program == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(533)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(533)
		if ((tmp2)){
			HX_STACK_LINE(533)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(533)
			tmp3 = program->id;
		}
		HX_STACK_LINE(533)
		glBindAttribLocation(tmp3,(int)2,HX_HCSTRING("vertexColor","\x5f","\x3b","\x98","\x5e"));
	}
	HX_STACK_LINE(534)
	{
		HX_STACK_LINE(534)
		::opengl::GLObject tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(534)
		::opengl::GLObject program = tmp1;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(534)
		bool tmp2 = (program == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(534)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(534)
		if ((tmp2)){
			HX_STACK_LINE(534)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(534)
			tmp3 = program->id;
		}
		HX_STACK_LINE(534)
		glBindAttribLocation(tmp3,(int)3,HX_HCSTRING("vertexNormal","\xab","\x64","\x7e","\xd0"));
	}
	HX_STACK_LINE(536)
	{
		HX_STACK_LINE(536)
		::opengl::GLObject tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(536)
		::opengl::GLObject program = tmp1;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(536)
		bool tmp2 = (program == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(536)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(536)
		if ((tmp2)){
			HX_STACK_LINE(536)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(536)
			tmp3 = program->id;
		}
		HX_STACK_LINE(536)
		glLinkProgram(tmp3);
	}
	HX_STACK_LINE(538)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(538)
	{
		HX_STACK_LINE(538)
		::opengl::GLObject tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(538)
		::opengl::GLObject program = tmp2;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(538)
		bool tmp3 = (program == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(538)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(538)
		if ((tmp3)){
			HX_STACK_LINE(538)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(538)
			tmp4 = program->id;
		}
		HX_STACK_LINE(538)
		tmp1 = linc::opengl::webgl::getProgramParameter(tmp4,(int)35714);
	}
	HX_STACK_LINE(538)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(538)
	if ((tmp2)){
		HX_STACK_LINE(539)
		hx::AddEq(this->log,HX_HCSTRING("\tFailed to link shader program:","\xb6","\xc0","\x1d","\xe8"));
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(540)
				{
					HX_STACK_LINE(540)
					::opengl::GLObject tmp5 = this->program;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(540)
					::opengl::GLObject program = tmp5;		HX_STACK_VAR(program,"program");
					HX_STACK_LINE(540)
					bool tmp6 = (program == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(540)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(540)
					if ((tmp6)){
						HX_STACK_LINE(540)
						tmp7 = (int)0;
					}
					else{
						HX_STACK_LINE(540)
						tmp7 = program->id;
					}
					HX_STACK_LINE(540)
					tmp4 = linc::opengl::webgl::getProgramInfoLog(tmp7);
				}
				HX_STACK_LINE(540)
				::String _log = tmp4;		HX_STACK_VAR(_log,"_log");
				HX_STACK_LINE(540)
				Array< ::String > _items = _log.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_items,"_items");

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_1)
				int __ArgCount() const { return 1; }
				bool run(::String s){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","phoenix/Shader.hx",540,0x14ec92d9)
					HX_STACK_ARG(s,"s")
					{
						HX_STACK_LINE(540)
						::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(540)
						::String tmp6 = ::StringTools_obj::trim(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(540)
						bool tmp7 = (tmp6 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(540)
						return tmp7;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(540)
				_items = _items->filter( Dynamic(new _Function_4_1()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_2)
				int __ArgCount() const { return 1; }
				::String run(::String s){
					HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","phoenix/Shader.hx",540,0x14ec92d9)
					HX_STACK_ARG(s,"s")
					{
						HX_STACK_LINE(540)
						::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(540)
						::String tmp6 = ::StringTools_obj::trim(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(540)
						::String tmp7 = (HX_HCSTRING("\t\t","\xe0","\x07","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(540)
						return tmp7;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(540)
				_items = _items->map( Dynamic(new _Function_4_2())).StaticCast< Array< ::String > >();
				HX_STACK_LINE(540)
				tmp3 = _items->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(540)
			::String _log = tmp3;		HX_STACK_VAR(_log,"_log");
			HX_STACK_LINE(540)
			hx::AddEq(this->log,_log);
		}
		HX_STACK_LINE(541)
		{
			HX_STACK_LINE(541)
			::opengl::GLObject tmp3 = this->program;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(541)
			::opengl::GLObject program = tmp3;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(541)
			bool tmp4 = (program == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(541)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(541)
			if ((tmp4)){
				HX_STACK_LINE(541)
				tmp5 = (int)0;
			}
			else{
				HX_STACK_LINE(541)
				tmp5 = program->id;
			}
			HX_STACK_LINE(541)
			glDeleteProgram(tmp5);
		}
		HX_STACK_LINE(542)
		this->program = null();
		HX_STACK_LINE(543)
		return false;
	}
	HX_STACK_LINE(547)
	this->use();
	HX_STACK_LINE(553)
	bool tmp3 = this->no_default_uniforms;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(553)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(553)
	if ((tmp4)){
		HX_STACK_LINE(555)
		::opengl::GLObject tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(555)
		{
			HX_STACK_LINE(555)
			::opengl::GLObject tmp6 = this->program;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(555)
			::opengl::GLObject program = tmp6;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(555)
			{
				HX_STACK_LINE(555)
				bool tmp7 = (program == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(555)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(555)
				if ((tmp7)){
					HX_STACK_LINE(555)
					tmp8 = (int)0;
				}
				else{
					HX_STACK_LINE(555)
					tmp8 = program->id;
				}
				HX_STACK_LINE(555)
				int tmp9 = glGetUniformLocation(tmp8,HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(555)
				int _id = tmp9;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(555)
				::opengl::GLObject tmp10 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(555)
				tmp5 = tmp10;
			}
		}
		HX_STACK_LINE(555)
		this->proj_attribute = tmp5;
		HX_STACK_LINE(556)
		::opengl::GLObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(556)
		{
			HX_STACK_LINE(556)
			::opengl::GLObject tmp7 = this->program;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(556)
			::opengl::GLObject program = tmp7;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(556)
			{
				HX_STACK_LINE(556)
				bool tmp8 = (program == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(556)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(556)
				if ((tmp8)){
					HX_STACK_LINE(556)
					tmp9 = (int)0;
				}
				else{
					HX_STACK_LINE(556)
					tmp9 = program->id;
				}
				HX_STACK_LINE(556)
				int tmp10 = glGetUniformLocation(tmp9,HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(556)
				int _id = tmp10;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(556)
				::opengl::GLObject tmp11 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(556)
				tmp6 = tmp11;
			}
		}
		HX_STACK_LINE(556)
		this->view_attribute = tmp6;
		HX_STACK_LINE(558)
		::opengl::GLObject tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			::opengl::GLObject tmp8 = this->program;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(558)
			::opengl::GLObject program = tmp8;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(558)
			{
				HX_STACK_LINE(558)
				bool tmp9 = (program == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(558)
				int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(558)
				if ((tmp9)){
					HX_STACK_LINE(558)
					tmp10 = (int)0;
				}
				else{
					HX_STACK_LINE(558)
					tmp10 = program->id;
				}
				HX_STACK_LINE(558)
				int tmp11 = glGetUniformLocation(tmp10,HX_HCSTRING("tex0","\x69","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(558)
				int _id = tmp11;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(558)
				::opengl::GLObject tmp12 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(558)
				tmp7 = tmp12;
			}
		}
		HX_STACK_LINE(558)
		::opengl::GLObject _tex0_attribute = tmp7;		HX_STACK_VAR(_tex0_attribute,"_tex0_attribute");
		HX_STACK_LINE(559)
		::opengl::GLObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(559)
		{
			HX_STACK_LINE(559)
			::opengl::GLObject tmp9 = this->program;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(559)
			::opengl::GLObject program = tmp9;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(559)
			{
				HX_STACK_LINE(559)
				bool tmp10 = (program == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(559)
				int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(559)
				if ((tmp10)){
					HX_STACK_LINE(559)
					tmp11 = (int)0;
				}
				else{
					HX_STACK_LINE(559)
					tmp11 = program->id;
				}
				HX_STACK_LINE(559)
				int tmp12 = glGetUniformLocation(tmp11,HX_HCSTRING("tex1","\x6a","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(559)
				int _id = tmp12;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(559)
				::opengl::GLObject tmp13 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(559)
				tmp8 = tmp13;
			}
		}
		HX_STACK_LINE(559)
		::opengl::GLObject _tex1_attribute = tmp8;		HX_STACK_VAR(_tex1_attribute,"_tex1_attribute");
		HX_STACK_LINE(560)
		::opengl::GLObject tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(560)
		{
			HX_STACK_LINE(560)
			::opengl::GLObject tmp10 = this->program;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(560)
			::opengl::GLObject program = tmp10;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(560)
			{
				HX_STACK_LINE(560)
				bool tmp11 = (program == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(560)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(560)
				if ((tmp11)){
					HX_STACK_LINE(560)
					tmp12 = (int)0;
				}
				else{
					HX_STACK_LINE(560)
					tmp12 = program->id;
				}
				HX_STACK_LINE(560)
				int tmp13 = glGetUniformLocation(tmp12,HX_HCSTRING("tex2","\x6b","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(560)
				int _id = tmp13;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(560)
				::opengl::GLObject tmp14 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(560)
				tmp9 = tmp14;
			}
		}
		HX_STACK_LINE(560)
		::opengl::GLObject _tex2_attribute = tmp9;		HX_STACK_VAR(_tex2_attribute,"_tex2_attribute");
		HX_STACK_LINE(561)
		::opengl::GLObject tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(561)
		{
			HX_STACK_LINE(561)
			::opengl::GLObject tmp11 = this->program;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(561)
			::opengl::GLObject program = tmp11;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(561)
			{
				HX_STACK_LINE(561)
				bool tmp12 = (program == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(561)
				int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(561)
				if ((tmp12)){
					HX_STACK_LINE(561)
					tmp13 = (int)0;
				}
				else{
					HX_STACK_LINE(561)
					tmp13 = program->id;
				}
				HX_STACK_LINE(561)
				int tmp14 = glGetUniformLocation(tmp13,HX_HCSTRING("tex3","\x6c","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(561)
				int _id = tmp14;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(561)
				::opengl::GLObject tmp15 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(561)
				tmp10 = tmp15;
			}
		}
		HX_STACK_LINE(561)
		::opengl::GLObject _tex3_attribute = tmp10;		HX_STACK_VAR(_tex3_attribute,"_tex3_attribute");
		HX_STACK_LINE(562)
		::opengl::GLObject tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(562)
		{
			HX_STACK_LINE(562)
			::opengl::GLObject tmp12 = this->program;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(562)
			::opengl::GLObject program = tmp12;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(562)
			{
				HX_STACK_LINE(562)
				bool tmp13 = (program == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(562)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(562)
				if ((tmp13)){
					HX_STACK_LINE(562)
					tmp14 = (int)0;
				}
				else{
					HX_STACK_LINE(562)
					tmp14 = program->id;
				}
				HX_STACK_LINE(562)
				int tmp15 = glGetUniformLocation(tmp14,HX_HCSTRING("tex4","\x6d","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(562)
				int _id = tmp15;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(562)
				::opengl::GLObject tmp16 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(562)
				tmp11 = tmp16;
			}
		}
		HX_STACK_LINE(562)
		::opengl::GLObject _tex4_attribute = tmp11;		HX_STACK_VAR(_tex4_attribute,"_tex4_attribute");
		HX_STACK_LINE(563)
		::opengl::GLObject tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(563)
		{
			HX_STACK_LINE(563)
			::opengl::GLObject tmp13 = this->program;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(563)
			::opengl::GLObject program = tmp13;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(563)
			{
				HX_STACK_LINE(563)
				bool tmp14 = (program == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(563)
				int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(563)
				if ((tmp14)){
					HX_STACK_LINE(563)
					tmp15 = (int)0;
				}
				else{
					HX_STACK_LINE(563)
					tmp15 = program->id;
				}
				HX_STACK_LINE(563)
				int tmp16 = glGetUniformLocation(tmp15,HX_HCSTRING("tex5","\x6e","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(563)
				int _id = tmp16;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(563)
				::opengl::GLObject tmp17 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(563)
				tmp12 = tmp17;
			}
		}
		HX_STACK_LINE(563)
		::opengl::GLObject _tex5_attribute = tmp12;		HX_STACK_VAR(_tex5_attribute,"_tex5_attribute");
		HX_STACK_LINE(564)
		::opengl::GLObject tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(564)
		{
			HX_STACK_LINE(564)
			::opengl::GLObject tmp14 = this->program;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(564)
			::opengl::GLObject program = tmp14;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(564)
			{
				HX_STACK_LINE(564)
				bool tmp15 = (program == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(564)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(564)
				if ((tmp15)){
					HX_STACK_LINE(564)
					tmp16 = (int)0;
				}
				else{
					HX_STACK_LINE(564)
					tmp16 = program->id;
				}
				HX_STACK_LINE(564)
				int tmp17 = glGetUniformLocation(tmp16,HX_HCSTRING("tex6","\x6f","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(564)
				int _id = tmp17;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(564)
				::opengl::GLObject tmp18 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(564)
				tmp13 = tmp18;
			}
		}
		HX_STACK_LINE(564)
		::opengl::GLObject _tex6_attribute = tmp13;		HX_STACK_VAR(_tex6_attribute,"_tex6_attribute");
		HX_STACK_LINE(565)
		::opengl::GLObject tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(565)
		{
			HX_STACK_LINE(565)
			::opengl::GLObject tmp15 = this->program;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(565)
			::opengl::GLObject program = tmp15;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(565)
			{
				HX_STACK_LINE(565)
				bool tmp16 = (program == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(565)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(565)
				if ((tmp16)){
					HX_STACK_LINE(565)
					tmp17 = (int)0;
				}
				else{
					HX_STACK_LINE(565)
					tmp17 = program->id;
				}
				HX_STACK_LINE(565)
				int tmp18 = glGetUniformLocation(tmp17,HX_HCSTRING("tex7","\x70","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(565)
				int _id = tmp18;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(565)
				::opengl::GLObject tmp19 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(565)
				tmp14 = tmp19;
			}
		}
		HX_STACK_LINE(565)
		::opengl::GLObject _tex7_attribute = tmp14;		HX_STACK_VAR(_tex7_attribute,"_tex7_attribute");
		HX_STACK_LINE(567)
		bool tmp15 = (_tex0_attribute != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(567)
		if ((tmp15)){
			HX_STACK_LINE(567)
			bool tmp16 = (_tex0_attribute == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(567)
			int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(567)
			if ((tmp16)){
				HX_STACK_LINE(567)
				tmp17 = (int)0;
			}
			else{
				HX_STACK_LINE(567)
				tmp17 = _tex0_attribute->id;
			}
			HX_STACK_LINE(567)
			glUniform1i(tmp17,(int)0);
		}
		HX_STACK_LINE(568)
		bool tmp16 = (_tex1_attribute != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(568)
		if ((tmp16)){
			HX_STACK_LINE(568)
			bool tmp17 = (_tex1_attribute == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(568)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(568)
			if ((tmp17)){
				HX_STACK_LINE(568)
				tmp18 = (int)0;
			}
			else{
				HX_STACK_LINE(568)
				tmp18 = _tex1_attribute->id;
			}
			HX_STACK_LINE(568)
			glUniform1i(tmp18,(int)1);
		}
		HX_STACK_LINE(569)
		bool tmp17 = (_tex2_attribute != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(569)
		if ((tmp17)){
			HX_STACK_LINE(569)
			bool tmp18 = (_tex2_attribute == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(569)
			int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(569)
			if ((tmp18)){
				HX_STACK_LINE(569)
				tmp19 = (int)0;
			}
			else{
				HX_STACK_LINE(569)
				tmp19 = _tex2_attribute->id;
			}
			HX_STACK_LINE(569)
			glUniform1i(tmp19,(int)2);
		}
		HX_STACK_LINE(570)
		bool tmp18 = (_tex3_attribute != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(570)
		if ((tmp18)){
			HX_STACK_LINE(570)
			bool tmp19 = (_tex3_attribute == null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(570)
			int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(570)
			if ((tmp19)){
				HX_STACK_LINE(570)
				tmp20 = (int)0;
			}
			else{
				HX_STACK_LINE(570)
				tmp20 = _tex3_attribute->id;
			}
			HX_STACK_LINE(570)
			glUniform1i(tmp20,(int)3);
		}
		HX_STACK_LINE(571)
		bool tmp19 = (_tex4_attribute != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(571)
		if ((tmp19)){
			HX_STACK_LINE(571)
			bool tmp20 = (_tex4_attribute == null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(571)
			int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(571)
			if ((tmp20)){
				HX_STACK_LINE(571)
				tmp21 = (int)0;
			}
			else{
				HX_STACK_LINE(571)
				tmp21 = _tex4_attribute->id;
			}
			HX_STACK_LINE(571)
			glUniform1i(tmp21,(int)4);
		}
		HX_STACK_LINE(572)
		bool tmp20 = (_tex5_attribute != null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(572)
		if ((tmp20)){
			HX_STACK_LINE(572)
			bool tmp21 = (_tex5_attribute == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(572)
			int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(572)
			if ((tmp21)){
				HX_STACK_LINE(572)
				tmp22 = (int)0;
			}
			else{
				HX_STACK_LINE(572)
				tmp22 = _tex5_attribute->id;
			}
			HX_STACK_LINE(572)
			glUniform1i(tmp22,(int)5);
		}
		HX_STACK_LINE(573)
		bool tmp21 = (_tex6_attribute != null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(573)
		if ((tmp21)){
			HX_STACK_LINE(573)
			bool tmp22 = (_tex6_attribute == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(573)
			int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(573)
			if ((tmp22)){
				HX_STACK_LINE(573)
				tmp23 = (int)0;
			}
			else{
				HX_STACK_LINE(573)
				tmp23 = _tex6_attribute->id;
			}
			HX_STACK_LINE(573)
			glUniform1i(tmp23,(int)6);
		}
		HX_STACK_LINE(574)
		bool tmp22 = (_tex7_attribute != null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(574)
		if ((tmp22)){
			HX_STACK_LINE(574)
			bool tmp23 = (_tex7_attribute == null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(574)
			int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(574)
			if ((tmp23)){
				HX_STACK_LINE(574)
				tmp24 = (int)0;
			}
			else{
				HX_STACK_LINE(574)
				tmp24 = _tex7_attribute->id;
			}
			HX_STACK_LINE(574)
			glUniform1i(tmp24,(int)7);
		}
	}
	HX_STACK_LINE(578)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,link,return )

::opengl::GLObject Shader_obj::location( ::String _name){
	HX_STACK_FRAME("phoenix.Shader","location",0x6edff99f,"phoenix.Shader.location","phoenix/Shader.hx",582,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(583)
	::opengl::GLObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(583)
	{
		HX_STACK_LINE(583)
		::opengl::GLObject tmp1 = this->program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(583)
		::opengl::GLObject program = tmp1;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			bool tmp2 = (program == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(583)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(583)
			if ((tmp2)){
				HX_STACK_LINE(583)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(583)
				tmp3 = program->id;
			}
			HX_STACK_LINE(583)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(583)
			int tmp5 = glGetUniformLocation(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(583)
			int _id = tmp5;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(583)
			::opengl::GLObject tmp6 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(583)
			tmp = tmp6;
		}
	}
	HX_STACK_LINE(583)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,location,return )

Void Shader_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.Shader","clear",0xa8c6ffe3,"phoenix.Shader.clear","phoenix/Shader.hx",588,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(590)
		::opengl::GLObject tmp = this->vert_shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(590)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(590)
		if ((tmp1)){
			HX_STACK_LINE(590)
			::opengl::GLObject tmp2 = this->vert_shader;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(590)
			::opengl::GLObject shader = tmp2;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(590)
			bool tmp3 = (shader == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(590)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(590)
			if ((tmp3)){
				HX_STACK_LINE(590)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(590)
				tmp4 = shader->id;
			}
			HX_STACK_LINE(590)
			glDeleteShader(tmp4);
		}
		HX_STACK_LINE(591)
		::opengl::GLObject tmp2 = this->frag_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(591)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(591)
		if ((tmp3)){
			HX_STACK_LINE(591)
			::opengl::GLObject tmp4 = this->frag_shader;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(591)
			::opengl::GLObject shader = tmp4;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(591)
			bool tmp5 = (shader == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(591)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(591)
			if ((tmp5)){
				HX_STACK_LINE(591)
				tmp6 = (int)0;
			}
			else{
				HX_STACK_LINE(591)
				tmp6 = shader->id;
			}
			HX_STACK_LINE(591)
			glDeleteShader(tmp6);
		}
		HX_STACK_LINE(592)
		::opengl::GLObject tmp4 = this->program;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(592)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(592)
		if ((tmp5)){
			HX_STACK_LINE(592)
			::opengl::GLObject tmp6 = this->program;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(592)
			::opengl::GLObject program = tmp6;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(592)
			bool tmp7 = (program == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(592)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(592)
			if ((tmp7)){
				HX_STACK_LINE(592)
				tmp8 = (int)0;
			}
			else{
				HX_STACK_LINE(592)
				tmp8 = program->id;
			}
			HX_STACK_LINE(592)
			glDeleteProgram(tmp8);
		}
		HX_STACK_LINE(594)
		this->vert_source = null();
		HX_STACK_LINE(595)
		this->frag_source = null();
		HX_STACK_LINE(597)
		::phoenix::Uniforms tmp6 = this->uniforms;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(597)
		tmp6->clear();
	}
return null();
}


::snow::api::Promise Shader_obj::reload( ){
	HX_STACK_FRAME("phoenix.Shader","reload",0x01905043,"phoenix.Shader.reload","phoenix/Shader.hx",601,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(601)
	::phoenix::Shader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(603)
	{
		HX_STACK_LINE(603)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(603)
		bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(603)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(603)
		if ((tmp2)){
			HX_STACK_LINE(603)
			::String tmp3 = HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(603)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(603)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(605)
	this->clear();

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::phoenix::Shader,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","phoenix/Shader.hx",607,0x14ec92d9)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(609)
			_g->set_state((int)2);
			HX_STACK_LINE(611)
			{
				HX_STACK_LINE(611)
				::String _g1 = _g->frag_id;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(611)
				::String tmp = _g1;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(611)
				::String _switch_1 = (tmp);
				if (  ( _switch_1==HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"))){
					HX_STACK_LINE(612)
					::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(612)
					Dynamic tmp2 = tmp1->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(612)
					::String tmp3 = tmp2->__Field(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(612)
					_g->frag_source = tmp3;
				}
				else if (  ( _switch_1==HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"))){
					HX_STACK_LINE(613)
					::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(613)
					Dynamic tmp2 = tmp1->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(613)
					::String tmp3 = tmp2->__Field(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(613)
					_g->frag_source = tmp3;
				}
			}
			HX_STACK_LINE(616)
			{
				HX_STACK_LINE(616)
				::String _g1 = _g->vert_id;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(616)
				::String tmp = _g1;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(616)
				::String _switch_2 = (tmp);
				if (  ( _switch_2==HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"))){
					HX_STACK_LINE(617)
					::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(617)
					Dynamic tmp2 = tmp1->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(617)
					::String tmp3 = tmp2->__Field(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(617)
					_g->vert_source = tmp3;
				}
			}

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::phoenix::Shader,_g,Dynamic,reject)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _err){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","phoenix/Shader.hx",620,0x14ec92d9)
				HX_STACK_ARG(_err,"_err")
				{
					HX_STACK_LINE(621)
					_g->set_state((int)4);
					HX_STACK_LINE(622)
					Dynamic tmp = _err;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(622)
					reject(tmp);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(620)
			Dynamic _onfail =  Dynamic(new _Function_2_1(_g,reject));		HX_STACK_VAR(_onfail,"_onfail");
			HX_STACK_LINE(626)
			::snow::api::Promise tmp = ::snow::api::Promise_obj::resolve(null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(626)
			Array< ::Dynamic > _wait = Array_obj< ::Dynamic >::__new().Add(tmp);		HX_STACK_VAR(_wait,"_wait");
			HX_STACK_LINE(628)
			bool tmp1 = (_g->frag_source == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(628)
			if ((tmp1)){
				HX_STACK_LINE(630)
				::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(630)
				::snow::systems::assets::Assets tmp3 = tmp2->app->assets;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(630)
				::String tmp4 = _g->frag_id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(630)
				::snow::api::Promise tmp5 = ::snow::systems::assets::AssetText_obj::load(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(630)
				::snow::api::Promise _frag = tmp5;		HX_STACK_VAR(_frag,"_frag");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,::phoenix::Shader,_g)
				int __ArgCount() const { return 1; }
				Void run(::snow::systems::assets::AssetText _asset){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","phoenix/Shader.hx",633,0x14ec92d9)
					HX_STACK_ARG(_asset,"_asset")
					{
						HX_STACK_LINE(633)
						_g->frag_source = _asset->text;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(632)
				_frag->then( Dynamic(new _Function_3_1(_g)),null());
				HX_STACK_LINE(636)
				::snow::api::Promise tmp6 = _frag;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(636)
				_wait->push(tmp6);
			}
			HX_STACK_LINE(640)
			bool tmp2 = (_g->vert_source == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(640)
			if ((tmp2)){
				HX_STACK_LINE(642)
				::luxe::Engine tmp3 = ::Luxe_obj::core;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(642)
				::snow::systems::assets::Assets tmp4 = tmp3->app->assets;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(642)
				::String tmp5 = _g->vert_id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(642)
				::snow::api::Promise tmp6 = ::snow::systems::assets::AssetText_obj::load(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(642)
				::snow::api::Promise _vert = tmp6;		HX_STACK_VAR(_vert,"_vert");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,::phoenix::Shader,_g)
				int __ArgCount() const { return 1; }
				Void run(::snow::systems::assets::AssetText _asset){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","phoenix/Shader.hx",645,0x14ec92d9)
					HX_STACK_ARG(_asset,"_asset")
					{
						HX_STACK_LINE(645)
						_g->vert_source = _asset->text;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(644)
				_vert->then( Dynamic(new _Function_3_1(_g)),null());
				HX_STACK_LINE(648)
				::snow::api::Promise tmp7 = _vert;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(648)
				_wait->push(tmp7);
			}
			HX_STACK_LINE(652)
			::snow::api::Promise tmp3 = ::snow::api::Promise_obj::all(_wait);		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_2,::phoenix::Shader,_g,Dynamic,_onfail,Dynamic,resolve)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","phoenix/Shader.hx",652,0x14ec92d9)
				{
					HX_STACK_LINE(660)
					::String tmp4 = _g->vert_source;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(660)
					::String tmp5 = _g->frag_source;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(660)
					bool tmp6 = _g->from_string(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(660)
					if ((tmp6)){
						HX_STACK_LINE(661)
						_g->set_state((int)3);
						HX_STACK_LINE(662)
						::phoenix::Shader tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(662)
						resolve(tmp7);
					}
					else{
						HX_STACK_LINE(664)
						::String tmp7 = (HX_HCSTRING("`","\x60","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(664)
						::String tmp8 = (tmp7 + HX_HCSTRING("` failed to create :\n\n","\xf8","\xd8","\xb3","\xe6"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(664)
						::String tmp9 = _g->log;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(664)
						::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(664)
						::snow::types::Error tmp11 = ::snow::types::Error_obj::error(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(664)
						_onfail(tmp11).Cast< Void >();
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(652)
			::snow::api::Promise tmp4 = tmp3->then( Dynamic(new _Function_2_2(_g,_onfail,resolve)),null());		HX_STACK_VAR(tmp4,"tmp4");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_3,::phoenix::Shader,_g,Dynamic,_onfail)
			int __ArgCount() const { return 1; }
			Void run(::String err){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","phoenix/Shader.hx",667,0x14ec92d9)
				HX_STACK_ARG(err,"err")
				{
					HX_STACK_LINE(668)
					::String tmp5 = (HX_HCSTRING("`","\x60","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(668)
					::String tmp6 = (tmp5 + HX_HCSTRING("` failed to create :\n\t\t","\x32","\xff","\xa9","\xf6"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(668)
					::String tmp7 = err;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(668)
					::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(668)
					::String tmp9 = (tmp8 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(668)
					::snow::types::Error tmp10 = ::snow::types::Error_obj::error(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(668)
					_onfail(tmp10).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(652)
			tmp4->error( Dynamic(new _Function_2_3(_g,_onfail)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(607)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(607)
	return tmp;
}


bool Shader_obj::from_string( ::String _vert_source,::String _fragment_source){
	HX_STACK_FRAME("phoenix.Shader","from_string",0x2d56691c,"phoenix.Shader.from_string","phoenix/Shader.hx",676,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vert_source,"_vert_source")
	HX_STACK_ARG(_fragment_source,"_fragment_source")
	HX_STACK_LINE(676)
	::phoenix::Shader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(684)
	this->clear();
	HX_STACK_LINE(686)
	this->frag_source = _fragment_source;
	HX_STACK_LINE(687)
	this->vert_source = _vert_source;
	HX_STACK_LINE(690)
	::String tmp = this->vert_source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(690)
	::opengl::GLObject tmp1 = this->compile((int)35633,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(690)
	this->vert_shader = tmp1;
	HX_STACK_LINE(691)
	::String tmp2 = this->frag_source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(691)
	::opengl::GLObject tmp3 = this->compile((int)35632,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(691)
	this->frag_shader = tmp3;
	HX_STACK_LINE(693)
	::opengl::GLObject tmp4 = this->vert_shader;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(693)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(693)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(693)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(693)
	if ((tmp6)){
		HX_STACK_LINE(693)
		::opengl::GLObject tmp8 = this->frag_shader;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(693)
		::opengl::GLObject tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(693)
		tmp7 = (tmp9 == null());
	}
	else{
		HX_STACK_LINE(693)
		tmp7 = true;
	}
	HX_STACK_LINE(693)
	if ((tmp7)){
		HX_STACK_LINE(694)
		{
			HX_STACK_LINE(694)
			int tmp8 = _g->log.length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(694)
			bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(694)
			if ((tmp9)){
				HX_STACK_LINE(694)
				::String tmp10 = (HX_HCSTRING("   i / shader / ","\xa4","\x59","\x57","\x90") + _g->log);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(694)
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),680,HX_HCSTRING("phoenix.Shader","\x44","\xea","\x01","\x9b"),HX_HCSTRING("from_string","\x46","\x76","\x96","\x4a"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(694)
				::haxe::Log_obj::trace(tmp10,tmp11);
			}
		}
		HX_STACK_LINE(695)
		return false;
	}
	HX_STACK_LINE(699)
	bool tmp8 = this->link();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(699)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(699)
	if ((tmp9)){
		HX_STACK_LINE(700)
		{
			HX_STACK_LINE(700)
			int tmp10 = _g->log.length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(700)
			bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(700)
			if ((tmp11)){
				HX_STACK_LINE(700)
				::String tmp12 = (HX_HCSTRING("   i / shader / ","\xa4","\x59","\x57","\x90") + _g->log);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(700)
				Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),680,HX_HCSTRING("phoenix.Shader","\x44","\xea","\x01","\x9b"),HX_HCSTRING("from_string","\x46","\x76","\x96","\x4a"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(700)
				::haxe::Log_obj::trace(tmp12,tmp13);
			}
		}
		HX_STACK_LINE(701)
		return false;
	}
	HX_STACK_LINE(704)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,from_string,return )

Void Shader_obj::add_log( ::String _log){
{
		HX_STACK_FRAME("phoenix.Shader","add_log",0x8dadfffc,"phoenix.Shader.add_log","phoenix/Shader.hx",709,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_log,"_log")
		HX_STACK_LINE(709)
		hx::AddEq(this->log,_log);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,add_log,(void))

::String Shader_obj::toString( ){
	HX_STACK_FRAME("phoenix.Shader","toString",0xc2085c16,"phoenix.Shader.toString","phoenix/Shader.hx",712,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(713)
	::String tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(713)
	::String tmp1 = (HX_HCSTRING("Shader(","\x43","\xa9","\xd7","\x2c") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(713)
	::String tmp2 = (tmp1 + HX_HCSTRING(") vert:","\x32","\x77","\xbd","\xa8"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(713)
	::String tmp3 = this->vert_id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(713)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(713)
	::String tmp5 = (tmp4 + HX_HCSTRING(" / frag: ","\x49","\xe8","\x9f","\xbd"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(713)
	::String tmp6 = this->frag_id;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(713)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(713)
	return tmp7;
}


::String Shader_obj::format_log( ::String _log){
	HX_STACK_FRAME("phoenix.Shader","format_log",0x5f4c4a26,"phoenix.Shader.format_log","phoenix/Shader.hx",718,0x14ec92d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_log,"_log")
	HX_STACK_LINE(719)
	Array< ::String > _items = _log.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_items,"_items");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	bool run(::String s){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","phoenix/Shader.hx",720,0x14ec92d9)
		HX_STACK_ARG(s,"s")
		{
			HX_STACK_LINE(720)
			::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(720)
			::String tmp1 = ::StringTools_obj::trim(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(720)
			bool tmp2 = (tmp1 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(720)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(720)
	_items = _items->filter( Dynamic(new _Function_1_1()));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 1; }
	::String run(::String s){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","phoenix/Shader.hx",721,0x14ec92d9)
		HX_STACK_ARG(s,"s")
		{
			HX_STACK_LINE(721)
			::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(721)
			::String tmp1 = ::StringTools_obj::trim(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(721)
			::String tmp2 = (HX_HCSTRING("\t\t","\xe0","\x07","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(721)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(721)
	_items = _items->map( Dynamic(new _Function_1_2())).StaticCast< Array< ::String > >();
	HX_STACK_LINE(722)
	::String tmp = _items->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(722)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,format_log,return )


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(vert_source,"vert_source");
	HX_MARK_MEMBER_NAME(frag_source,"frag_source");
	HX_MARK_MEMBER_NAME(vert_id,"vert_id");
	HX_MARK_MEMBER_NAME(frag_id,"frag_id");
	HX_MARK_MEMBER_NAME(vert_shader,"vert_shader");
	HX_MARK_MEMBER_NAME(frag_shader,"frag_shader");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(no_default_uniforms,"no_default_uniforms");
	HX_MARK_MEMBER_NAME(proj_attribute,"proj_attribute");
	HX_MARK_MEMBER_NAME(view_attribute,"view_attribute");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(vert_source,"vert_source");
	HX_VISIT_MEMBER_NAME(frag_source,"frag_source");
	HX_VISIT_MEMBER_NAME(vert_id,"vert_id");
	HX_VISIT_MEMBER_NAME(frag_id,"frag_id");
	HX_VISIT_MEMBER_NAME(vert_shader,"vert_shader");
	HX_VISIT_MEMBER_NAME(frag_shader,"frag_shader");
	HX_VISIT_MEMBER_NAME(program,"program");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(no_default_uniforms,"no_default_uniforms");
	HX_VISIT_MEMBER_NAME(proj_attribute,"proj_attribute");
	HX_VISIT_MEMBER_NAME(view_attribute,"view_attribute");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"use") ) { return use_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { return link_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vert_id") ) { return vert_id; }
		if (HX_FIELD_EQ(inName,"frag_id") ) { return frag_id; }
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		if (HX_FIELD_EQ(inName,"set_int") ) { return set_int_dyn(); }
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
		if (HX_FIELD_EQ(inName,"add_log") ) { return add_log_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"location") ) { return location_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_float") ) { return set_float_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"format_log") ) { return format_log_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vert_source") ) { return vert_source; }
		if (HX_FIELD_EQ(inName,"frag_source") ) { return frag_source; }
		if (HX_FIELD_EQ(inName,"vert_shader") ) { return vert_shader; }
		if (HX_FIELD_EQ(inName,"frag_shader") ) { return frag_shader; }
		if (HX_FIELD_EQ(inName,"set_vector2") ) { return set_vector2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector3") ) { return set_vector3_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector4") ) { return set_vector4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix4") ) { return set_matrix4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"from_string") ) { return from_string_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"proj_attribute") ) { return proj_attribute; }
		if (HX_FIELD_EQ(inName,"view_attribute") ) { return view_attribute; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_vector2_arr") ) { return set_vector2_arr_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector3_arr") ) { return set_vector3_arr_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector4_arr") ) { return set_vector4_arr_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix4_arr") ) { return set_matrix4_arr_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"no_default_uniforms") ) { return no_default_uniforms; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vert_id") ) { vert_id=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frag_id") ) { frag_id=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::phoenix::Uniforms >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vert_source") ) { vert_source=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frag_source") ) { frag_source=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vert_shader") ) { vert_shader=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frag_shader") ) { frag_shader=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"proj_attribute") ) { proj_attribute=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"view_attribute") ) { view_attribute=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"no_default_uniforms") ) { no_default_uniforms=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	outFields->push(HX_HCSTRING("vert_source","\xe9","\xf5","\xeb","\xbe"));
	outFields->push(HX_HCSTRING("frag_source","\x88","\x93","\x35","\x8b"));
	outFields->push(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d"));
	outFields->push(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44"));
	outFields->push(HX_HCSTRING("vert_shader","\x33","\x04","\xdb","\xa9"));
	outFields->push(HX_HCSTRING("frag_shader","\xd2","\xa1","\x24","\x76"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("no_default_uniforms","\x3b","\x80","\x7e","\x28"));
	outFields->push(HX_HCSTRING("proj_attribute","\xba","\x39","\x38","\x70"));
	outFields->push(HX_HCSTRING("view_attribute","\x82","\xee","\x54","\x86"));
	outFields->push(HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Shader_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsString,(int)offsetof(Shader_obj,vert_source),HX_HCSTRING("vert_source","\xe9","\xf5","\xeb","\xbe")},
	{hx::fsString,(int)offsetof(Shader_obj,frag_source),HX_HCSTRING("frag_source","\x88","\x93","\x35","\x8b")},
	{hx::fsString,(int)offsetof(Shader_obj,vert_id),HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d")},
	{hx::fsString,(int)offsetof(Shader_obj,frag_id),HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Shader_obj,vert_shader),HX_HCSTRING("vert_shader","\x33","\x04","\xdb","\xa9")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Shader_obj,frag_shader),HX_HCSTRING("frag_shader","\xd2","\xa1","\x24","\x76")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Shader_obj,program),HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Shader_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsBool,(int)offsetof(Shader_obj,no_default_uniforms),HX_HCSTRING("no_default_uniforms","\x3b","\x80","\x7e","\x28")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Shader_obj,proj_attribute),HX_HCSTRING("proj_attribute","\xba","\x39","\x38","\x70")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Shader_obj,view_attribute),HX_HCSTRING("view_attribute","\x82","\xee","\x54","\x86")},
	{hx::fsObject /*::phoenix::Uniforms*/ ,(int)offsetof(Shader_obj,uniforms),HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("vert_source","\xe9","\xf5","\xeb","\xbe"),
	HX_HCSTRING("frag_source","\x88","\x93","\x35","\x8b"),
	HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d"),
	HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44"),
	HX_HCSTRING("vert_shader","\x33","\x04","\xdb","\xa9"),
	HX_HCSTRING("frag_shader","\xd2","\xa1","\x24","\x76"),
	HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("no_default_uniforms","\x3b","\x80","\x7e","\x28"),
	HX_HCSTRING("proj_attribute","\xba","\x39","\x38","\x70"),
	HX_HCSTRING("view_attribute","\x82","\xee","\x54","\x86"),
	HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"),
	HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),
	HX_HCSTRING("use","\x47","\x2c","\x59","\x00"),
	HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
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
	HX_HCSTRING("compile","\x73","\x25","\x6f","\x83"),
	HX_HCSTRING("link","\xfa","\x17","\xb3","\x47"),
	HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("from_string","\x46","\x76","\x96","\x4a"),
	HX_HCSTRING("add_log","\x26","\xb0","\x81","\x90"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("format_log","\x3c","\x90","\xa9","\x13"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#endif

hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Shader","\x44","\xea","\x01","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
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
