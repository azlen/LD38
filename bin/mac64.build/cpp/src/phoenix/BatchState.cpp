#include <hxcpp.h>

#include "linc_opengl.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_phoenix_BatchState
#include <phoenix/BatchState.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
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
#ifndef INCLUDED_phoenix__Shader_Uniform_snow_api_buffers_Float32Array
#include <phoenix/_Shader/Uniform_snow_api_buffers_Float32Array.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
namespace phoenix{

Void BatchState_obj::__construct(::phoenix::Batcher _r)
{
HX_STACK_FRAME("phoenix.BatchState","new",0x4a680688,"phoenix.BatchState.new","phoenix/BatchState.hx",11,0xe3277547)
HX_STACK_THIS(this)
HX_STACK_ARG(_r,"_r")
{
	HX_STACK_LINE(23)
	this->log = false;
	HX_STACK_LINE(26)
	this->batcher = _r;
	HX_STACK_LINE(27)
	::phoenix::geometry::GeometryState tmp = ::phoenix::geometry::GeometryState_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->geom_state = tmp;
	HX_STACK_LINE(28)
	::phoenix::geometry::GeometryState tmp1 = ::phoenix::geometry::GeometryState_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	this->last_geom_state = tmp1;
}
;
	return null();
}

//BatchState_obj::~BatchState_obj() { }

Dynamic BatchState_obj::__CreateEmpty() { return  new BatchState_obj; }
hx::ObjectPtr< BatchState_obj > BatchState_obj::__new(::phoenix::Batcher _r)
{  hx::ObjectPtr< BatchState_obj > _result_ = new BatchState_obj();
	_result_->__construct(_r);
	return _result_;}

Dynamic BatchState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BatchState_obj > _result_ = new BatchState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::phoenix::Shader BatchState_obj::active_shader( ){
	HX_STACK_FRAME("phoenix.BatchState","active_shader",0xae846be6,"phoenix.BatchState.active_shader","phoenix/BatchState.hx",31,0xe3277547)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::phoenix::geometry::GeometryState tmp = this->geom_state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	if ((tmp2)){
		HX_STACK_LINE(33)
		::phoenix::geometry::GeometryState tmp3 = this->geom_state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		::phoenix::Shader tmp4 = tmp3->shader;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		return tmp4;
	}
	else{
		HX_STACK_LINE(35)
		::phoenix::geometry::GeometryState tmp3 = this->geom_state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		::phoenix::Texture tmp4 = tmp3->texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		if ((tmp5)){
			HX_STACK_LINE(36)
			::phoenix::Batcher tmp6 = this->batcher;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			Dynamic tmp7 = tmp6->renderer->shaders;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(36)
			::phoenix::Shader tmp8 = tmp7->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(36)
			return tmp8;
		}
		else{
			HX_STACK_LINE(38)
			::phoenix::Batcher tmp6 = this->batcher;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			Dynamic tmp7 = tmp6->renderer->shaders;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(38)
			::phoenix::Shader tmp8 = tmp7->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic )->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(38)
			return tmp8;
		}
	}
	HX_STACK_LINE(32)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BatchState_obj,active_shader,return )

Void BatchState_obj::activate( ::phoenix::Batcher batcher){
{
		HX_STACK_FRAME("phoenix.BatchState","activate",0xd6da948b,"phoenix.BatchState.activate","phoenix/BatchState.hx",43,0xe3277547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batcher,"batcher")
		HX_STACK_LINE(46)
		::phoenix::geometry::GeometryState tmp = this->geom_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		bool tmp1 = tmp->dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		if ((tmp1)){
			HX_STACK_LINE(48)
			::phoenix::geometry::GeometryState tmp2 = this->geom_state;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			::phoenix::Texture tmp3 = tmp2->texture;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(48)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(48)
			if ((tmp4)){
				HX_STACK_LINE(50)
				Dynamic tmp5 = this->last_texture_id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(50)
				::phoenix::geometry::GeometryState tmp6 = this->geom_state;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(50)
				::String tmp7 = tmp6->texture->id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				bool tmp8 = (tmp5 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(50)
				if ((tmp8)){
					HX_STACK_LINE(52)
					::phoenix::geometry::GeometryState tmp9 = this->geom_state;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(52)
					::String tmp10 = tmp9->texture->id;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(52)
					this->last_texture_id = tmp10;
					HX_STACK_LINE(53)
					::phoenix::geometry::GeometryState tmp11 = this->geom_state;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(53)
					::opengl::GLObject tmp12 = tmp11->texture->texture;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(53)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(53)
					if ((tmp13)){
						HX_STACK_LINE(54)
						::phoenix::geometry::GeometryState tmp14 = this->geom_state;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(54)
						tmp14->texture->bind();
					}
				}
			}
			else{
				HX_STACK_LINE(61)
				::phoenix::Renderer tmp5 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				tmp5->state->bindTexture2D(null());
				HX_STACK_LINE(62)
				this->last_texture_id = null();
			}
			HX_STACK_LINE(66)
			bool tmp5 = (batcher->shader == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			::phoenix::Shader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			if ((tmp5)){
				HX_STACK_LINE(66)
				::phoenix::geometry::GeometryState tmp7 = this->geom_state;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				tmp6 = tmp7->shader;
			}
			else{
				HX_STACK_LINE(66)
				tmp6 = batcher->shader;
			}
			HX_STACK_LINE(66)
			::phoenix::Shader _shader = tmp6;		HX_STACK_VAR(_shader,"_shader");
			HX_STACK_LINE(68)
			bool tmp7 = (_shader == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			if ((tmp7)){
				HX_STACK_LINE(71)
				::phoenix::geometry::GeometryState tmp8 = this->geom_state;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(71)
				::phoenix::Texture tmp9 = tmp8->texture;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(71)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(71)
				if ((tmp10)){
					HX_STACK_LINE(72)
					Dynamic tmp11 = batcher->renderer->shaders;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(72)
					::phoenix::Shader tmp12 = tmp11->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(72)
					_shader = tmp12;
				}
				else{
					HX_STACK_LINE(74)
					Dynamic tmp11 = batcher->renderer->shaders;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(74)
					::phoenix::Shader tmp12 = tmp11->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic )->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(74)
					_shader = tmp12;
				}
			}
			HX_STACK_LINE(79)
			::opengl::GLObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				Dynamic tmp9 = this->last_shader_id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(79)
				int _id = tmp9;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(79)
				::opengl::GLObject tmp10 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(79)
				tmp8 = tmp10;
			}
			HX_STACK_LINE(79)
			::opengl::GLObject tmp9 = _shader->program;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(79)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(79)
			if ((tmp10)){
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					bool tmp11 = _shader->no_default_uniforms;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(80)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(80)
					if ((tmp12)){
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(80)
							::snow::api::buffers::ArrayBufferView tmp13 = batcher->view->proj_arr;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(80)
							::snow::api::buffers::ArrayBufferView _value = tmp13;		HX_STACK_VAR(_value,"_value");
							HX_STACK_LINE(80)
							{
								HX_STACK_LINE(80)
								::phoenix::Uniforms _this = _shader->uniforms;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(80)
								::opengl::GLObject tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(80)
								{
									HX_STACK_LINE(80)
									::opengl::GLObject program = _shader->program;		HX_STACK_VAR(program,"program");
									HX_STACK_LINE(80)
									{
										HX_STACK_LINE(80)
										bool tmp15 = (program == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(80)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(80)
										if ((tmp15)){
											HX_STACK_LINE(80)
											tmp16 = (int)0;
										}
										else{
											HX_STACK_LINE(80)
											tmp16 = program->id;
										}
										HX_STACK_LINE(80)
										int tmp17 = glGetUniformLocation(tmp16,HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(80)
										int _id = tmp17;		HX_STACK_VAR(_id,"_id");
										HX_STACK_LINE(80)
										::opengl::GLObject tmp18 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(80)
										tmp14 = tmp18;
									}
								}
								HX_STACK_LINE(80)
								::opengl::GLObject _location = tmp14;		HX_STACK_VAR(_location,"_location");
								HX_STACK_LINE(80)
								::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp15 = _this->matrix4arrs->get(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(80)
								::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp15;		HX_STACK_VAR(_matrix4,"_matrix4");
								HX_STACK_LINE(80)
								bool tmp16 = (_matrix4 != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(80)
								if ((tmp16)){
									HX_STACK_LINE(80)
									_matrix4->value = _value;
								}
								else{
									HX_STACK_LINE(80)
									::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp17 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),_value,_location);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(80)
									_matrix4 = tmp17;
									HX_STACK_LINE(80)
									::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp18 = _matrix4;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(80)
									_this->matrix4arrs->set(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),tmp18);
								}
								HX_STACK_LINE(80)
								::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp17 = _matrix4;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(80)
								_this->dirty_matrix4arrs->push(tmp17);
							}
						}
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(80)
							::snow::api::buffers::ArrayBufferView tmp13 = batcher->view->view_inverse_arr;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(80)
							::snow::api::buffers::ArrayBufferView _value = tmp13;		HX_STACK_VAR(_value,"_value");
							HX_STACK_LINE(80)
							{
								HX_STACK_LINE(80)
								::phoenix::Uniforms _this = _shader->uniforms;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(80)
								::opengl::GLObject tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(80)
								{
									HX_STACK_LINE(80)
									::opengl::GLObject program = _shader->program;		HX_STACK_VAR(program,"program");
									HX_STACK_LINE(80)
									{
										HX_STACK_LINE(80)
										bool tmp15 = (program == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(80)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(80)
										if ((tmp15)){
											HX_STACK_LINE(80)
											tmp16 = (int)0;
										}
										else{
											HX_STACK_LINE(80)
											tmp16 = program->id;
										}
										HX_STACK_LINE(80)
										int tmp17 = glGetUniformLocation(tmp16,HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(80)
										int _id = tmp17;		HX_STACK_VAR(_id,"_id");
										HX_STACK_LINE(80)
										::opengl::GLObject tmp18 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(80)
										tmp14 = tmp18;
									}
								}
								HX_STACK_LINE(80)
								::opengl::GLObject _location = tmp14;		HX_STACK_VAR(_location,"_location");
								HX_STACK_LINE(80)
								::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp15 = _this->matrix4arrs->get(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(80)
								::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array _matrix4 = tmp15;		HX_STACK_VAR(_matrix4,"_matrix4");
								HX_STACK_LINE(80)
								bool tmp16 = (_matrix4 != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(80)
								if ((tmp16)){
									HX_STACK_LINE(80)
									_matrix4->value = _value;
								}
								else{
									HX_STACK_LINE(80)
									::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp17 = ::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array_obj::__new(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),_value,_location);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(80)
									_matrix4 = tmp17;
									HX_STACK_LINE(80)
									::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp18 = _matrix4;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(80)
									_this->matrix4arrs->set(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),tmp18);
								}
								HX_STACK_LINE(80)
								::phoenix::_Shader::Uniform_snow_api_buffers_Float32Array tmp17 = _matrix4;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(80)
								_this->dirty_matrix4arrs->push(tmp17);
							}
						}
					}
				}
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					_shader->use();
					HX_STACK_LINE(81)
					_shader->uniforms->apply();
					HX_STACK_LINE(81)
					::phoenix::Renderer tmp11 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(81)
					tmp11->state->activeTexture((int)33984);
				}
				HX_STACK_LINE(82)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(82)
				{
					HX_STACK_LINE(82)
					::opengl::GLObject this1 = _shader->program;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(82)
					bool tmp12 = (this1 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(82)
					if ((tmp12)){
						HX_STACK_LINE(82)
						tmp11 = (int)0;
					}
					else{
						HX_STACK_LINE(82)
						tmp11 = this1->id;
					}
				}
				HX_STACK_LINE(82)
				this->last_shader_id = tmp11;
			}
		}
		HX_STACK_LINE(91)
		::phoenix::geometry::GeometryState tmp2 = this->geom_state;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		bool tmp3 = tmp2->clip;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		if ((tmp3)){
			HX_STACK_LINE(93)
			bool tmp4 = this->is_clipping;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			if ((tmp5)){
				HX_STACK_LINE(94)
				glEnable((int)3089);
				HX_STACK_LINE(95)
				this->is_clipping = true;
			}
			HX_STACK_LINE(99)
			::phoenix::Rectangle tmp6 = this->clip_rect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			if ((tmp7)){
				HX_STACK_LINE(101)
				::phoenix::Rectangle tmp8 = this->clip_rect;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(101)
				::phoenix::Rectangle tmp9 = this->last_clip_rect;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				bool tmp10 = tmp8->equal(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(101)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(101)
				if ((tmp11)){
					HX_STACK_LINE(104)
					::phoenix::RenderState tmp12 = batcher->renderer->state;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(104)
					::phoenix::Rectangle tmp13 = this->clip_rect;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(104)
					Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(104)
					::phoenix::Rectangle tmp15 = this->clip_rect;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(104)
					Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(104)
					::phoenix::Rectangle tmp17 = this->clip_rect;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(104)
					Float tmp18 = tmp17->w;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(104)
					::phoenix::Rectangle tmp19 = this->clip_rect;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(104)
					Float tmp20 = tmp19->h;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(104)
					tmp12->scissor(tmp14,tmp16,tmp18,tmp20);
				}
			}
		}
		else{
			HX_STACK_LINE(112)
			bool tmp4 = this->is_clipping;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			if ((tmp4)){
				HX_STACK_LINE(113)
				glDisable((int)3089);
				HX_STACK_LINE(114)
				this->is_clipping = false;
			}
		}
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			::phoenix::geometry::GeometryState tmp4 = this->geom_state;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			tmp4->dirty = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BatchState_obj,activate,(void))

Void BatchState_obj::deactivate( ::phoenix::Batcher batcher){
{
		HX_STACK_FRAME("phoenix.BatchState","deactivate",0xb061bb0c,"phoenix.BatchState.deactivate","phoenix/BatchState.hx",123,0xe3277547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batcher,"batcher")
		HX_STACK_LINE(125)
		Dynamic tmp = this->last_texture_id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		if ((tmp1)){
			HX_STACK_LINE(127)
			::phoenix::Renderer tmp2 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			tmp2->state->bindTexture2D(null());
		}
		HX_STACK_LINE(132)
		::phoenix::Renderer tmp2 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		tmp2->state->useProgram(null());
		HX_STACK_LINE(135)
		bool tmp3 = this->is_clipping;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		if ((tmp3)){
			HX_STACK_LINE(135)
			glDisable((int)3089);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BatchState_obj,deactivate,(void))

bool BatchState_obj::update( ::phoenix::geometry::Geometry geom){
	HX_STACK_FRAME("phoenix.BatchState","update",0x8d6798e1,"phoenix.BatchState.update","phoenix/BatchState.hx",138,0xe3277547)
	HX_STACK_THIS(this)
	HX_STACK_ARG(geom,"geom")
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::phoenix::geometry::GeometryState tmp = this->geom_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		::phoenix::geometry::GeometryState _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(140)
		::phoenix::geometry::GeometryState tmp1 = this->last_geom_state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		::phoenix::geometry::GeometryState _other = tmp1;		HX_STACK_VAR(_other,"_other");
		HX_STACK_LINE(140)
		_other->dirty = _this->dirty;
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			_other->dirty = true;
			HX_STACK_LINE(140)
			_other->texture = _this->texture;
		}
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			_other->dirty = true;
			HX_STACK_LINE(140)
			_other->shader = _this->shader;
		}
		HX_STACK_LINE(140)
		_other->depth = _this->depth;
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			_other->dirty = true;
			HX_STACK_LINE(140)
			_other->primitive_type = _this->primitive_type;
		}
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			_other->dirty = true;
			HX_STACK_LINE(140)
			_other->clip = _this->clip;
		}
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			_other->dirty = true;
			HX_STACK_LINE(140)
			_other->clip_x = _this->clip_x;
		}
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			_other->dirty = true;
			HX_STACK_LINE(140)
			_other->clip_y = _this->clip_y;
		}
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			_other->dirty = true;
			HX_STACK_LINE(140)
			_other->clip_w = _this->clip_w;
		}
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			_other->dirty = true;
			HX_STACK_LINE(140)
			_other->clip_h = _this->clip_h;
		}
	}
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		::phoenix::geometry::GeometryState tmp = this->geom_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		::phoenix::geometry::GeometryState _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(141)
		::phoenix::geometry::GeometryState other = geom->state;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(141)
		bool tmp1 = (_this->depth != other->depth);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		if ((tmp1)){
			HX_STACK_LINE(141)
			_this->depth = other->depth;
		}
		HX_STACK_LINE(141)
		bool tmp2 = (_this->texture != other->texture);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		if ((tmp2)){
			HX_STACK_LINE(141)
			_this->dirty = true;
			HX_STACK_LINE(141)
			_this->texture = other->texture;
		}
		HX_STACK_LINE(141)
		bool tmp3 = (_this->shader != other->shader);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		if ((tmp3)){
			HX_STACK_LINE(141)
			_this->dirty = true;
			HX_STACK_LINE(141)
			_this->shader = other->shader;
		}
		HX_STACK_LINE(141)
		bool tmp4 = (_this->primitive_type != other->primitive_type);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(141)
		if ((tmp4)){
			HX_STACK_LINE(141)
			_this->dirty = true;
			HX_STACK_LINE(141)
			_this->primitive_type = other->primitive_type;
		}
		HX_STACK_LINE(141)
		bool tmp5 = (_this->clip != other->clip);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(141)
		if ((tmp5)){
			HX_STACK_LINE(141)
			_this->dirty = true;
			HX_STACK_LINE(141)
			_this->clip = other->clip;
		}
		HX_STACK_LINE(141)
		bool tmp6 = (_this->clip_x != other->clip_x);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(141)
		if ((tmp6)){
			HX_STACK_LINE(141)
			_this->dirty = true;
			HX_STACK_LINE(141)
			_this->clip_x = other->clip_x;
		}
		HX_STACK_LINE(141)
		bool tmp7 = (_this->clip_y != other->clip_y);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(141)
		if ((tmp7)){
			HX_STACK_LINE(141)
			_this->dirty = true;
			HX_STACK_LINE(141)
			_this->clip_y = other->clip_y;
		}
		HX_STACK_LINE(141)
		bool tmp8 = (_this->clip_w != other->clip_w);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(141)
		if ((tmp8)){
			HX_STACK_LINE(141)
			_this->dirty = true;
			HX_STACK_LINE(141)
			_this->clip_w = other->clip_w;
		}
		HX_STACK_LINE(141)
		bool tmp9 = (_this->clip_h != other->clip_h);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(141)
		if ((tmp9)){
			HX_STACK_LINE(141)
			_this->dirty = true;
			HX_STACK_LINE(141)
			_this->clip_h = other->clip_h;
		}
	}
	HX_STACK_LINE(143)
	::phoenix::geometry::GeometryState tmp = this->geom_state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	bool tmp1 = tmp->clip;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	if ((tmp1)){
		HX_STACK_LINE(144)
		::phoenix::Rectangle tmp2 = this->clip_rect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		this->last_clip_rect = tmp2;
		HX_STACK_LINE(145)
		this->clip_rect = geom->clip_rect;
	}
	HX_STACK_LINE(148)
	::phoenix::geometry::GeometryState tmp2 = this->geom_state;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	bool tmp3 = tmp2->dirty;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(148)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(148)
	if ((tmp4)){
		HX_STACK_LINE(148)
		::phoenix::Rectangle tmp6 = this->last_clip_rect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		::phoenix::Rectangle tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(148)
		::phoenix::Rectangle tmp8 = this->clip_rect;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(148)
		::phoenix::Rectangle tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(148)
		tmp5 = (tmp7 != tmp9);
	}
	else{
		HX_STACK_LINE(148)
		tmp5 = true;
	}
	HX_STACK_LINE(148)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(BatchState_obj,update,return )

Void BatchState_obj::str( ){
{
		HX_STACK_FRAME("phoenix.BatchState","str",0x4a6bded9,"phoenix.BatchState.str","phoenix/BatchState.hx",153,0xe3277547)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		bool tmp = this->log;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		if ((tmp1)){
			HX_STACK_LINE(155)
			return null();
		}
		HX_STACK_LINE(157)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),157,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		::haxe::Log_obj::trace(HX_HCSTRING("\t+ BATCHSTATE LAST ","\x1f","\x46","\xe2","\x93"),tmp2);
		HX_STACK_LINE(158)
		::phoenix::geometry::GeometryState tmp3 = this->last_geom_state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		Float tmp4 = tmp3->depth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		::String tmp5 = (HX_HCSTRING("\t\tdepth - ","\x30","\xaa","\x11","\xc4") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(158)
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),158,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		::haxe::Log_obj::trace(tmp5,tmp6);
		HX_STACK_LINE(159)
		::phoenix::geometry::GeometryState tmp7 = this->last_geom_state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(159)
		::phoenix::Texture tmp8 = tmp7->texture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(159)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(159)
		::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(159)
		if ((tmp9)){
			HX_STACK_LINE(159)
			tmp10 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(159)
			::phoenix::geometry::GeometryState tmp11 = this->last_geom_state;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(159)
			tmp10 = tmp11->texture->id;
		}
		HX_STACK_LINE(159)
		::String tmp11 = (HX_HCSTRING("\t\ttexture - ","\x58","\x01","\x33","\x88") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(159)
		Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),159,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(159)
		::haxe::Log_obj::trace(tmp11,tmp12);
		HX_STACK_LINE(160)
		::phoenix::geometry::GeometryState tmp13 = this->last_geom_state;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(160)
		::phoenix::Texture tmp14 = tmp13->texture;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(160)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(160)
		if ((tmp15)){
			HX_STACK_LINE(161)
			::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(161)
			{
				HX_STACK_LINE(161)
				::phoenix::geometry::GeometryState tmp17 = this->last_geom_state;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(161)
				::opengl::GLObject tmp18 = tmp17->texture->texture;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(161)
				::opengl::GLObject this1 = tmp18;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(161)
				bool tmp19 = (this1 == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(161)
				int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(161)
				if ((tmp19)){
					HX_STACK_LINE(161)
					tmp20 = (int)0;
				}
				else{
					HX_STACK_LINE(161)
					tmp20 = this1->id;
				}
				HX_STACK_LINE(161)
				::String tmp21 = (HX_HCSTRING("GLTexture(","\x32","\x1e","\xd3","\x33") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(161)
				tmp16 = (tmp21 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(161)
			::String tmp17 = (HX_HCSTRING("\t\t\t ","\xd7","\xc7","\xf9","\x05") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(161)
			Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),161,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(161)
			::haxe::Log_obj::trace(tmp17,tmp18);
		}
		HX_STACK_LINE(163)
		::phoenix::geometry::GeometryState tmp16 = this->last_geom_state;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(163)
		::phoenix::Shader tmp17 = tmp16->shader;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(163)
		bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(163)
		::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(163)
		if ((tmp18)){
			HX_STACK_LINE(163)
			tmp19 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(163)
			::phoenix::geometry::GeometryState tmp20 = this->last_geom_state;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(163)
			tmp19 = tmp20->shader->id;
		}
		HX_STACK_LINE(163)
		::String tmp20 = (HX_HCSTRING("\t\tshader - ","\x8e","\xf1","\x9d","\x79") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(163)
		Dynamic tmp21 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),163,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(163)
		::haxe::Log_obj::trace(tmp20,tmp21);
		HX_STACK_LINE(164)
		::phoenix::geometry::GeometryState tmp22 = this->last_geom_state;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(164)
		int tmp23 = tmp22->primitive_type;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(164)
		::String tmp24 = (HX_HCSTRING("\t\tprimitive_type - ","\x41","\xea","\xf1","\x1f") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(164)
		Dynamic tmp25 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),164,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(164)
		::haxe::Log_obj::trace(tmp24,tmp25);
		HX_STACK_LINE(165)
		::phoenix::geometry::GeometryState tmp26 = this->last_geom_state;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(165)
		bool tmp27 = tmp26->clip;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(165)
		::String tmp28 = ::Std_obj::string(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(165)
		::String tmp29 = (HX_HCSTRING("\t\tclip - ","\xc3","\xd6","\xcd","\x6f") + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(165)
		Dynamic tmp30 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),165,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(165)
		::haxe::Log_obj::trace(tmp29,tmp30);
		HX_STACK_LINE(166)
		Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),166,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(166)
		::haxe::Log_obj::trace(HX_HCSTRING("\t- BATCHSTATE LAST","\xe3","\x62","\x2c","\xae"),tmp31);
		HX_STACK_LINE(168)
		Dynamic tmp32 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),168,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(168)
		::haxe::Log_obj::trace(HX_HCSTRING("\t+ BATCHSTATE STATE","\x06","\xbb","\x31","\xa8"),tmp32);
		HX_STACK_LINE(169)
		::phoenix::geometry::GeometryState tmp33 = this->geom_state;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(169)
		Float tmp34 = tmp33->depth;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(169)
		::String tmp35 = (HX_HCSTRING("\t\tdepth - ","\x30","\xaa","\x11","\xc4") + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(169)
		Dynamic tmp36 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),169,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(169)
		::haxe::Log_obj::trace(tmp35,tmp36);
		HX_STACK_LINE(170)
		::phoenix::geometry::GeometryState tmp37 = this->geom_state;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(170)
		::phoenix::Texture tmp38 = tmp37->texture;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(170)
		bool tmp39 = (tmp38 == null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(170)
		::String tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(170)
		if ((tmp39)){
			HX_STACK_LINE(170)
			tmp40 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(170)
			::phoenix::geometry::GeometryState tmp41 = this->geom_state;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(170)
			tmp40 = tmp41->texture->id;
		}
		HX_STACK_LINE(170)
		::String tmp41 = (HX_HCSTRING("\t\ttexture - ","\x58","\x01","\x33","\x88") + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(170)
		Dynamic tmp42 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),170,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(170)
		::haxe::Log_obj::trace(tmp41,tmp42);
		HX_STACK_LINE(171)
		::phoenix::geometry::GeometryState tmp43 = this->geom_state;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(171)
		::phoenix::Texture tmp44 = tmp43->texture;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(171)
		bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(171)
		if ((tmp45)){
			HX_STACK_LINE(172)
			::String tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(172)
			{
				HX_STACK_LINE(172)
				::phoenix::geometry::GeometryState tmp47 = this->geom_state;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(172)
				::opengl::GLObject tmp48 = tmp47->texture->texture;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(172)
				::opengl::GLObject this1 = tmp48;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(172)
				bool tmp49 = (this1 == null());		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(172)
				int tmp50;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(172)
				if ((tmp49)){
					HX_STACK_LINE(172)
					tmp50 = (int)0;
				}
				else{
					HX_STACK_LINE(172)
					tmp50 = this1->id;
				}
				HX_STACK_LINE(172)
				::String tmp51 = (HX_HCSTRING("GLTexture(","\x32","\x1e","\xd3","\x33") + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(172)
				tmp46 = (tmp51 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(172)
			::String tmp47 = (HX_HCSTRING("\t\t\t ","\xd7","\xc7","\xf9","\x05") + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(172)
			Dynamic tmp48 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),172,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(172)
			::haxe::Log_obj::trace(tmp47,tmp48);
		}
		HX_STACK_LINE(174)
		::phoenix::geometry::GeometryState tmp46 = this->geom_state;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(174)
		::phoenix::Shader tmp47 = tmp46->shader;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(174)
		bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(174)
		::String tmp49;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(174)
		if ((tmp48)){
			HX_STACK_LINE(174)
			tmp49 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(174)
			::phoenix::geometry::GeometryState tmp50 = this->geom_state;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(174)
			tmp49 = tmp50->shader->id;
		}
		HX_STACK_LINE(174)
		::String tmp50 = (HX_HCSTRING("\t\tshader - ","\x8e","\xf1","\x9d","\x79") + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(174)
		Dynamic tmp51 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),174,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(174)
		::haxe::Log_obj::trace(tmp50,tmp51);
		HX_STACK_LINE(175)
		::phoenix::geometry::GeometryState tmp52 = this->geom_state;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(175)
		int tmp53 = tmp52->primitive_type;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(175)
		::String tmp54 = (HX_HCSTRING("\t\tprimitive_type - ","\x41","\xea","\xf1","\x1f") + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(175)
		Dynamic tmp55 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),175,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(175)
		::haxe::Log_obj::trace(tmp54,tmp55);
		HX_STACK_LINE(176)
		::phoenix::geometry::GeometryState tmp56 = this->geom_state;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(176)
		bool tmp57 = tmp56->clip;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(176)
		::String tmp58 = ::Std_obj::string(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(176)
		::String tmp59 = (HX_HCSTRING("\t\tclip - ","\xc3","\xd6","\xcd","\x6f") + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(176)
		Dynamic tmp60 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),176,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(176)
		::haxe::Log_obj::trace(tmp59,tmp60);
		HX_STACK_LINE(177)
		Dynamic tmp61 = hx::SourceInfo(HX_HCSTRING("BatchState.hx","\x07","\x6b","\xe4","\x91"),177,HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(177)
		::haxe::Log_obj::trace(HX_HCSTRING("\t- BATCHSTATE STATE","\xc4","\x98","\xf9","\xcc"),tmp61);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BatchState_obj,str,(void))


BatchState_obj::BatchState_obj()
{
}

void BatchState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BatchState);
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(geom_state,"geom_state");
	HX_MARK_MEMBER_NAME(last_geom_state,"last_geom_state");
	HX_MARK_MEMBER_NAME(last_texture_id,"last_texture_id");
	HX_MARK_MEMBER_NAME(last_shader_id,"last_shader_id");
	HX_MARK_MEMBER_NAME(is_clipping,"is_clipping");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(last_clip_rect,"last_clip_rect");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_END_CLASS();
}

void BatchState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(geom_state,"geom_state");
	HX_VISIT_MEMBER_NAME(last_geom_state,"last_geom_state");
	HX_VISIT_MEMBER_NAME(last_texture_id,"last_texture_id");
	HX_VISIT_MEMBER_NAME(last_shader_id,"last_shader_id");
	HX_VISIT_MEMBER_NAME(is_clipping,"is_clipping");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(last_clip_rect,"last_clip_rect");
	HX_VISIT_MEMBER_NAME(log,"log");
}

Dynamic BatchState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"str") ) { return str_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return clip_rect; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"geom_state") ) { return geom_state; }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"is_clipping") ) { return is_clipping; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"active_shader") ) { return active_shader_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"last_shader_id") ) { return last_shader_id; }
		if (HX_FIELD_EQ(inName,"last_clip_rect") ) { return last_clip_rect; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"last_geom_state") ) { return last_geom_state; }
		if (HX_FIELD_EQ(inName,"last_texture_id") ) { return last_texture_id; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BatchState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"geom_state") ) { geom_state=inValue.Cast< ::phoenix::geometry::GeometryState >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"is_clipping") ) { is_clipping=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"last_shader_id") ) { last_shader_id=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_clip_rect") ) { last_clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"last_geom_state") ) { last_geom_state=inValue.Cast< ::phoenix::geometry::GeometryState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_texture_id") ) { last_texture_id=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BatchState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	outFields->push(HX_HCSTRING("geom_state","\x0e","\x71","\xaa","\x98"));
	outFields->push(HX_HCSTRING("last_geom_state","\x97","\x47","\x3e","\x29"));
	outFields->push(HX_HCSTRING("last_texture_id","\x88","\x3a","\x6a","\x41"));
	outFields->push(HX_HCSTRING("last_shader_id","\x8c","\x05","\xd6","\x07"));
	outFields->push(HX_HCSTRING("is_clipping","\x77","\xd7","\x85","\xf0"));
	outFields->push(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"));
	outFields->push(HX_HCSTRING("last_clip_rect","\xca","\x55","\x1a","\x62"));
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(BatchState_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsObject /*::phoenix::geometry::GeometryState*/ ,(int)offsetof(BatchState_obj,geom_state),HX_HCSTRING("geom_state","\x0e","\x71","\xaa","\x98")},
	{hx::fsObject /*::phoenix::geometry::GeometryState*/ ,(int)offsetof(BatchState_obj,last_geom_state),HX_HCSTRING("last_geom_state","\x97","\x47","\x3e","\x29")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BatchState_obj,last_texture_id),HX_HCSTRING("last_texture_id","\x88","\x3a","\x6a","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BatchState_obj,last_shader_id),HX_HCSTRING("last_shader_id","\x8c","\x05","\xd6","\x07")},
	{hx::fsBool,(int)offsetof(BatchState_obj,is_clipping),HX_HCSTRING("is_clipping","\x77","\xd7","\x85","\xf0")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(BatchState_obj,clip_rect),HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(BatchState_obj,last_clip_rect),HX_HCSTRING("last_clip_rect","\xca","\x55","\x1a","\x62")},
	{hx::fsBool,(int)offsetof(BatchState_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("geom_state","\x0e","\x71","\xaa","\x98"),
	HX_HCSTRING("last_geom_state","\x97","\x47","\x3e","\x29"),
	HX_HCSTRING("last_texture_id","\x88","\x3a","\x6a","\x41"),
	HX_HCSTRING("last_shader_id","\x8c","\x05","\xd6","\x07"),
	HX_HCSTRING("is_clipping","\x77","\xd7","\x85","\xf0"),
	HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"),
	HX_HCSTRING("last_clip_rect","\xca","\x55","\x1a","\x62"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("active_shader","\xbe","\xf3","\x0f","\x76"),
	HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),
	HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BatchState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BatchState_obj::__mClass,"__mClass");
};

#endif

hx::Class BatchState_obj::__mClass;

void BatchState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.BatchState","\x96","\x62","\xb8","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BatchState_obj >;
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
