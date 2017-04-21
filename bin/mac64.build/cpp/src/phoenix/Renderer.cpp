#include <hxcpp.h>

#include "linc_opengl.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
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
#ifndef INCLUDED_phoenix_Backbuffer
#include <phoenix/Backbuffer.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_RenderPath
#include <phoenix/RenderPath.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_RenderTarget
#include <phoenix/RenderTarget.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_Runtime
#include <snow/core/Runtime.h>
#endif
#ifndef INCLUDED_snow_core_native_Runtime
#include <snow/core/native/Runtime.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_Runtime
#include <snow/modules/sdl/Runtime.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetImage
#include <snow/systems/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_types_ImageData
#include <snow/types/ImageData.h>
#endif
namespace phoenix{

Void Renderer_obj::__construct(::luxe::Engine _core,::snow::systems::assets::AssetImage _asset)
{
HX_STACK_FRAME("phoenix.Renderer","new",0x1fe39014,"phoenix.Renderer.new","phoenix/Renderer.hx",66,0x3d4c7b7b)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
HX_STACK_ARG(_asset,"_asset")
{
	HX_STACK_LINE(95)
	this->stop_count = (int)0;
	HX_STACK_LINE(94)
	this->stop = false;
	HX_STACK_LINE(93)
	this->should_clear = true;
	HX_STACK_LINE(102)
	this->core = _core;
	HX_STACK_LINE(103)
	this->font_asset = _asset;
	HX_STACK_LINE(108)
	::opengl::GLObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		Dynamic tmp1 = linc::opengl::webgl::getParameter((int)36006);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		Dynamic _id = tmp1;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(108)
		int _id1 = _id;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(108)
		::opengl::GLObject tmp2 = ::opengl::GLObject_obj::__new(_id1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		tmp = tmp2;
	}
	HX_STACK_LINE(108)
	this->default_framebuffer = tmp;
	HX_STACK_LINE(109)
	::opengl::GLObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		Dynamic tmp2 = linc::opengl::webgl::getParameter((int)36007);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		Dynamic _id = tmp2;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(109)
		int _id1 = _id;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(109)
		::opengl::GLObject tmp3 = ::opengl::GLObject_obj::__new(_id1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(109)
	this->default_renderbuffer = tmp1;
	HX_STACK_LINE(114)
	::luxe::Engine tmp2 = this->core;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	::snow::modules::sdl::Runtime tmp3 = tmp2->app->runtime;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	Float tmp4 = tmp3->window_device_pixel_ratio();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	Float render_scale_ratio = tmp4;		HX_STACK_VAR(render_scale_ratio,"render_scale_ratio");
	HX_STACK_LINE(118)
	::luxe::Engine tmp5 = this->core;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(118)
	::snow::modules::sdl::Runtime tmp6 = tmp5->app->runtime;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(118)
	int tmp7 = tmp6->window_w;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(119)
	::luxe::Engine tmp8 = this->core;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(119)
	::snow::modules::sdl::Runtime tmp9 = tmp8->app->runtime;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(119)
	int tmp10 = tmp9->window_h;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(120)
	Float tmp11 = render_scale_ratio;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(121)
	::opengl::GLObject tmp12 = this->default_framebuffer;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(122)
	::opengl::GLObject tmp13 = this->default_renderbuffer;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(117)
	::phoenix::Backbuffer tmp14 = ::phoenix::Backbuffer_obj::__new(tmp7,tmp10,tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(117)
	this->backbuffer = tmp14;
	HX_STACK_LINE(138)
	Dynamic();
}
;
	return null();
}

//Renderer_obj::~Renderer_obj() { }

Dynamic Renderer_obj::__CreateEmpty() { return  new Renderer_obj; }
hx::ObjectPtr< Renderer_obj > Renderer_obj::__new(::luxe::Engine _core,::snow::systems::assets::AssetImage _asset)
{  hx::ObjectPtr< Renderer_obj > _result_ = new Renderer_obj();
	_result_->__construct(_core,_asset);
	return _result_;}

Dynamic Renderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Renderer_obj > _result_ = new Renderer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Renderer_obj::init( ){
{
		HX_STACK_FRAME("phoenix.Renderer","init",0xc3f338dc,"phoenix.Renderer.init","phoenix/Renderer.hx",130,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(132)
		::phoenix::RenderState tmp = ::phoenix::RenderState_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		this->state = tmp;
		HX_STACK_LINE(133)
		::phoenix::Color tmp1 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		::phoenix::Color tmp2 = tmp1->rgb((int)1710618);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		this->clear_color = tmp2;
		HX_STACK_LINE(134)
		::phoenix::RendererStats tmp3 = ::phoenix::RendererStats_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		this->stats = tmp3;
		HX_STACK_LINE(135)
		::phoenix::Backbuffer tmp4 = this->backbuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		::phoenix::RenderTarget tmp5 = this->default_target = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(135)
		this->set_target(tmp5);
		HX_STACK_LINE(136)
		this->batchers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(139)
		::phoenix::Camera tmp6 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		this->camera = tmp6;
		HX_STACK_LINE(141)
		::phoenix::RenderPath tmp7 = ::phoenix::RenderPath_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(141)
		this->default_render_path = tmp7;
		HX_STACK_LINE(143)
		::phoenix::RenderPath tmp8 = this->default_render_path;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(143)
		this->render_path = tmp8;
		HX_STACK_LINE(146)
		this->create_default_shaders();
		HX_STACK_LINE(149)
		::phoenix::Batcher tmp9 = ::phoenix::Batcher_obj::__new(hx::ObjectPtr<OBJ_>(this),HX_HCSTRING("default batcher","\x48","\x68","\xba","\x35"),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(149)
		this->batcher = tmp9;
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			::phoenix::Batcher tmp10 = this->batcher;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(150)
			::phoenix::Batcher _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(150)
			_this->layer = (int)1;
			HX_STACK_LINE(150)
			Dynamic tmp11 = _this->renderer->sort_batchers_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(150)
			_this->renderer->batchers->sort(tmp11);
			HX_STACK_LINE(150)
			_this->layer;
		}
		HX_STACK_LINE(151)
		::phoenix::Batcher tmp10 = this->batcher;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(151)
		this->add_batch(tmp10);
		HX_STACK_LINE(155)
		this->create_default_font();
		HX_STACK_LINE(159)
		::luxe::Engine tmp11 = ::Luxe_obj::core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(159)
		Dynamic tmp12 = tmp11->app->config;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(159)
		Dynamic tmp13 = tmp12->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(159)
		bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(159)
		if ((tmp14)){
			HX_STACK_LINE(161)
			::phoenix::RenderState tmp15 = this->state;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(161)
			tmp15->enable((int)2929);
			HX_STACK_LINE(163)
			::phoenix::RenderState tmp16 = this->state;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(163)
			tmp16->depth_function((int)515);
			HX_STACK_LINE(165)
			glClearDepth(((Float)1.0));
		}
		HX_STACK_LINE(169)
		glEnable((int)3042);
		HX_STACK_LINE(170)
		glBlendFunc((int)770,(int)771);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,init,(void))

Void Renderer_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Renderer","destroy",0xe481d6ae,"phoenix.Renderer.destroy","phoenix/Renderer.hx",179,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::phoenix::Color tmp = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		::phoenix::Color tmp1 = tmp->rgb((int)16729099);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		this->clear(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,destroy,(void))

int Renderer_obj::sort_batchers( ::phoenix::Batcher a,::phoenix::Batcher b){
	HX_STACK_FRAME("phoenix.Renderer","sort_batchers",0x489f0ce1,"phoenix.Renderer.sort_batchers","phoenix/Renderer.hx",186,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(187)
	bool tmp = (a->layer < b->layer);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	if ((tmp)){
		HX_STACK_LINE(187)
		return (int)-1;
	}
	HX_STACK_LINE(188)
	bool tmp1 = (a->layer > b->layer);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	if ((tmp1)){
		HX_STACK_LINE(188)
		return (int)1;
	}
	HX_STACK_LINE(189)
	bool tmp2 = (a->sequence < b->sequence);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	if ((tmp2)){
		HX_STACK_LINE(189)
		return (int)-1;
	}
	HX_STACK_LINE(190)
	bool tmp3 = (a->sequence > b->sequence);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(190)
	if ((tmp3)){
		HX_STACK_LINE(190)
		return (int)1;
	}
	HX_STACK_LINE(191)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,sort_batchers,return )

Void Renderer_obj::add_batch( ::phoenix::Batcher batch){
{
		HX_STACK_FRAME("phoenix.Renderer","add_batch",0xa2b26e90,"phoenix.Renderer.add_batch","phoenix/Renderer.hx",194,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batch,"batch")
		HX_STACK_LINE(196)
		::phoenix::Batcher tmp = batch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		this->batchers->push(tmp);
		HX_STACK_LINE(197)
		Dynamic tmp1 = this->sort_batchers_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		this->batchers->sort(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,add_batch,(void))

Void Renderer_obj::remove_batch( ::phoenix::Batcher batch){
{
		HX_STACK_FRAME("phoenix.Renderer","remove_batch",0x9e98000b,"phoenix.Renderer.remove_batch","phoenix/Renderer.hx",201,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batch,"batch")
		HX_STACK_LINE(203)
		::phoenix::Batcher tmp = batch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		this->batchers->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,remove_batch,(void))

::phoenix::Batcher Renderer_obj::create_batcher( Dynamic options){
	HX_STACK_FRAME("phoenix.Renderer","create_batcher",0xfc84f3f0,"phoenix.Renderer.create_batcher","phoenix/Renderer.hx",208,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(211)
	int _new_batcher_layer = (int)2;		HX_STACK_VAR(_new_batcher_layer,"_new_batcher_layer");
	HX_STACK_LINE(213)
	bool tmp = (options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	if ((tmp)){
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			bool tmp1 = (options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(215)
			if ((tmp1)){
				HX_STACK_LINE(215)
				options->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0");
			}
			HX_STACK_LINE(215)
			options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
		}
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			bool tmp1 = (options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(216)
			if ((tmp1)){
				HX_STACK_LINE(216)
				options->__FieldRef(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f")) = _new_batcher_layer;
			}
			HX_STACK_LINE(216)
			options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic );
		}
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			bool tmp1 = (options->__Field(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			if ((tmp1)){
				HX_STACK_LINE(217)
				::phoenix::Camera tmp2 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(217)
				options->__FieldRef(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")) = tmp2;
			}
			HX_STACK_LINE(217)
			options->__Field(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"), hx::paccDynamic );
		}
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			bool tmp1 = (options->__Field(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(218)
			if ((tmp1)){
				HX_STACK_LINE(218)
				options->__FieldRef(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b")) = (int)16384;
			}
			HX_STACK_LINE(218)
			options->__Field(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"), hx::paccDynamic );
		}
	}
	else{
		HX_STACK_LINE(223)
		::phoenix::Camera tmp1 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		int tmp2 = _new_batcher_layer;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( int &tmp2,::phoenix::Camera &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",221,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),false);
					__result->Add(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7") , tmp1,false);
					__result->Add(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f") , tmp2,false);
					__result->Add(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b") , (int)16384,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(221)
		Dynamic tmp3 = _Function_2_1::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		options = tmp3;
	}
	HX_STACK_LINE(229)
	::phoenix::Batcher tmp1 = ::phoenix::Batcher_obj::__new(hx::ObjectPtr<OBJ_>(this),options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ),options->__Field(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	::phoenix::Batcher _batcher = tmp1;		HX_STACK_VAR(_batcher,"_batcher");
	HX_STACK_LINE(230)
	_batcher->view = options->__Field(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"), hx::paccDynamic );
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		int _layer = options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic );		HX_STACK_VAR(_layer,"_layer");
		HX_STACK_LINE(231)
		_batcher->layer = _layer;
		HX_STACK_LINE(231)
		Dynamic tmp2 = _batcher->renderer->sort_batchers_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		_batcher->renderer->batchers->sort(tmp2);
		HX_STACK_LINE(231)
		_batcher->layer;
	}
	HX_STACK_LINE(233)
	bool tmp2 = (options->__Field(HX_HCSTRING("no_add","\xe3","\x4b","\xd1","\x23"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(233)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(233)
	if ((tmp3)){
		HX_STACK_LINE(233)
		tmp4 = (options->__Field(HX_HCSTRING("no_add","\xe3","\x4b","\xd1","\x23"), hx::paccDynamic ) == false);
	}
	else{
		HX_STACK_LINE(233)
		tmp4 = true;
	}
	HX_STACK_LINE(233)
	if ((tmp4)){
		HX_STACK_LINE(234)
		::phoenix::Batcher tmp5 = _batcher;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(234)
		this->add_batch(tmp5);
	}
	HX_STACK_LINE(238)
	::phoenix::Batcher tmp5 = _batcher;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(238)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,create_batcher,return )

Void Renderer_obj::clear( ::phoenix::Color _color){
{
		HX_STACK_FRAME("phoenix.Renderer","clear",0x3b218641,"phoenix.Renderer.clear","phoenix/Renderer.hx",243,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_color,"_color")
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			bool tmp = (_color == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(245)
			if ((tmp)){
				HX_STACK_LINE(245)
				::phoenix::Color tmp1 = this->clear_color;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(245)
				_color = tmp1;
			}
			HX_STACK_LINE(245)
			_color;
		}
		HX_STACK_LINE(247)
		Float tmp = _color->r;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		Float tmp1 = _color->g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		Float tmp2 = _color->b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		Float tmp3 = _color->a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		glClearColor(tmp,tmp1,tmp2,tmp3);
		HX_STACK_LINE(249)
		::luxe::Engine tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		Dynamic tmp5 = tmp4->app->config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(249)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(249)
		if ((tmp7)){
			HX_STACK_LINE(250)
			glClear((int)16640);
			HX_STACK_LINE(251)
			glClearDepth(((Float)1.0));
		}
		else{
			HX_STACK_LINE(253)
			glClear((int)16384);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,clear,(void))

Void Renderer_obj::blend_mode( Dynamic __o__src_mode,hx::Null< int >  __o__dst_mode){
Dynamic _src_mode = __o__src_mode.Default(770);
int _dst_mode = __o__dst_mode.Default(771);
	HX_STACK_FRAME("phoenix.Renderer","blend_mode",0x5b8aa01d,"phoenix.Renderer.blend_mode","phoenix/Renderer.hx",260,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_src_mode,"_src_mode")
	HX_STACK_ARG(_dst_mode,"_dst_mode")
{
		HX_STACK_LINE(260)
		int sfactor = _src_mode;		HX_STACK_VAR(sfactor,"sfactor");
		HX_STACK_LINE(260)
		int tmp = sfactor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		int tmp1 = _dst_mode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		glBlendFunc(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,blend_mode,(void))

Void Renderer_obj::blend_equation( Dynamic __o__equation){
Dynamic _equation = __o__equation.Default(32774);
	HX_STACK_FRAME("phoenix.Renderer","blend_equation",0x0d046d46,"phoenix.Renderer.blend_equation","phoenix/Renderer.hx",266,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_equation,"_equation")
{
		HX_STACK_LINE(266)
		int mode = _equation;		HX_STACK_VAR(mode,"mode");
		HX_STACK_LINE(266)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		glBlendEquation(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,blend_equation,(void))

Void Renderer_obj::internal_resized( int _w,int _h){
{
		HX_STACK_FRAME("phoenix.Renderer","internal_resized",0xd68aa17a,"phoenix.Renderer.internal_resized","phoenix/Renderer.hx",272,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(274)
		::phoenix::Backbuffer tmp = this->backbuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		tmp->width = _w;
		HX_STACK_LINE(275)
		::phoenix::Backbuffer tmp1 = this->backbuffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		tmp1->height = _h;
		HX_STACK_LINE(279)
		::luxe::Engine tmp2 = this->core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(279)
		::snow::modules::sdl::Runtime tmp3 = tmp2->app->runtime;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(279)
		Float tmp4 = tmp3->window_device_pixel_ratio();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(279)
		::phoenix::Backbuffer tmp5 = this->backbuffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(279)
		tmp5->viewport_scale = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,internal_resized,(void))

Void Renderer_obj::process( ){
{
		HX_STACK_FRAME("phoenix.Renderer","process",0xb1464c23,"phoenix.Renderer.process","phoenix/Renderer.hx",286,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(290)
		bool tmp = this->should_clear;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		if ((tmp)){
			HX_STACK_LINE(291)
			::phoenix::Color tmp1 = this->clear_color;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(291)
			this->clear(tmp1);
		}
		HX_STACK_LINE(295)
		::phoenix::RenderPath tmp1 = this->render_path;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		::phoenix::RendererStats tmp2 = this->stats;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(295)
		tmp1->render(this->batchers,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,process,(void))

Void Renderer_obj::prerender( ){
{
		HX_STACK_FRAME("phoenix.Renderer","prerender",0xa4b6866d,"phoenix.Renderer.prerender","phoenix/Renderer.hx",305,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(307)
		::phoenix::RendererStats tmp = this->stats;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		tmp->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,prerender,(void))

::phoenix::RenderTarget Renderer_obj::get_target( ){
	HX_STACK_FRAME("phoenix.Renderer","get_target",0xd262c1e6,"phoenix.Renderer.get_target","phoenix/Renderer.hx",311,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	::phoenix::RenderTarget tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,get_target,return )

::phoenix::RenderTarget Renderer_obj::set_target( ::phoenix::RenderTarget _target){
	HX_STACK_FRAME("phoenix.Renderer","set_target",0xd5e0605a,"phoenix.Renderer.set_target","phoenix/Renderer.hx",317,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_target,"_target")
	HX_STACK_LINE(319)
	bool tmp = (_target == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	if ((tmp)){
		HX_STACK_LINE(319)
		::phoenix::RenderTarget tmp1 = this->default_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		_target = tmp1;
	}
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		::phoenix::RenderState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		::opengl::GLObject tmp2 = _target->__Field(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		tmp1->bindFramebuffer(tmp2);
		HX_STACK_LINE(321)
		::phoenix::RenderState tmp3 = this->state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		::opengl::GLObject tmp4 = _target->__Field(HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		tmp3->bindRenderbuffer(tmp4);
	}
	HX_STACK_LINE(323)
	::phoenix::RenderTarget tmp1 = this->target = _target;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(323)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,set_target,return )

Void Renderer_obj::bind_target( ::phoenix::RenderTarget _target){
{
		HX_STACK_FRAME("phoenix.Renderer","bind_target",0x5a288487,"phoenix.Renderer.bind_target","phoenix/Renderer.hx",327,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_target,"_target")
		HX_STACK_LINE(329)
		::phoenix::RenderState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(329)
		::opengl::GLObject tmp1 = _target->__Field(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		tmp->bindFramebuffer(tmp1);
		HX_STACK_LINE(330)
		::phoenix::RenderState tmp2 = this->state;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		::opengl::GLObject tmp3 = _target->__Field(HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		tmp2->bindRenderbuffer(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,bind_target,(void))

Void Renderer_obj::create_default_shaders( ){
{
		HX_STACK_FRAME("phoenix.Renderer","create_default_shaders",0xf69f9f39,"phoenix.Renderer.create_default_shaders","phoenix/Renderer.hx",334,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(338)
		::String vert = null();		HX_STACK_VAR(vert,"vert");
		HX_STACK_LINE(339)
		::String frag = null();		HX_STACK_VAR(frag,"frag");
		HX_STACK_LINE(340)
		::String frag_textured = null();		HX_STACK_VAR(frag_textured,"frag_textured");
		HX_STACK_LINE(341)
		::String frag_bitmapfont = null();		HX_STACK_VAR(frag_bitmapfont,"frag_bitmapfont");
		HX_STACK_LINE(344)
		::luxe::Engine tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		Dynamic tmp1 = tmp->app->config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(344)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(344)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(344)
		bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(344)
		if ((tmp4)){
			HX_STACK_LINE(345)
			Array< int > vaos = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(vaos,"vaos");
			HX_STACK_LINE(346)
			glGenVertexArrays((int)1, (GLuint*)&(vaos[0]));
			HX_STACK_LINE(347)
			int tmp5 = vaos->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(347)
			glBindVertexArray(tmp5);
			HX_STACK_LINE(349)
			::String tmp6 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.vert.gl3.glsl","\xee","\xba","\x74","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(349)
			vert = tmp6;
			HX_STACK_LINE(350)
			::String tmp7 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.gl3.glsl","\x4d","\x3e","\x98","\x05"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(350)
			frag = tmp7;
			HX_STACK_LINE(351)
			::String tmp8 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.textured.gl3.glsl","\xb4","\x91","\x67","\xe5"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(351)
			frag_textured = tmp8;
			HX_STACK_LINE(352)
			::String tmp9 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.bitmapfont.gl3.glsl","\x3f","\xe3","\x39","\x2c"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(352)
			frag_bitmapfont = tmp9;
		}
		HX_STACK_LINE(356)
		bool tmp5 = (vert == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(356)
		if ((tmp5)){
			HX_STACK_LINE(357)
			::String tmp6 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.vert.glsl","\xee","\x68","\x0a","\xe0"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(357)
			vert = tmp6;
			HX_STACK_LINE(358)
			::String tmp7 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.glsl","\xcd","\x10","\xf3","\xa2"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(358)
			frag = tmp7;
			HX_STACK_LINE(359)
			::String tmp8 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.textured.glsl","\xb4","\xe4","\x4c","\xd4"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(359)
			frag_textured = tmp8;
			HX_STACK_LINE(360)
			::String tmp9 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.bitmapfont.glsl","\xbf","\xd4","\xfe","\x6d"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(360)
			frag_bitmapfont = tmp9;
		}
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",375,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.shader","\xdd","\x5c","\xea","\x47"),false);
					__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(375)
		Dynamic tmp6 = _Function_1_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(375)
		::phoenix::Shader tmp7 = ::phoenix::Shader_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(375)
		::phoenix::Shader _plain = tmp7;		HX_STACK_VAR(_plain,"_plain");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",376,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.shader_textured","\x0b","\x8e","\x98","\xdb"),false);
					__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"),false);
					__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(376)
		Dynamic tmp8 = _Function_1_2::Block();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(376)
		::phoenix::Shader tmp9 = ::phoenix::Shader_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(376)
		::phoenix::Shader _textured = tmp9;		HX_STACK_VAR(_textured,"_textured");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",377,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.shader_bitmapfont","\xa0","\x24","\xcb","\xf6"),false);
					__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a"),false);
					__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(377)
		Dynamic tmp10 = _Function_1_3::Block();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(377)
		::phoenix::Shader tmp11 = ::phoenix::Shader_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(377)
		::phoenix::Shader _font = tmp11;		HX_STACK_VAR(_font,"_font");
		HX_STACK_LINE(380)
		bool _ok = true;		HX_STACK_VAR(_ok,"_ok");
		HX_STACK_LINE(382)
		bool tmp12 = _ok;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(382)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(382)
		if ((tmp12)){
			HX_STACK_LINE(382)
			::String tmp14 = vert;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(382)
			::String tmp15 = frag;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(382)
			::String tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(382)
			::String tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(382)
			tmp13 = _plain->from_string(tmp16,tmp17);
		}
		else{
			HX_STACK_LINE(382)
			tmp13 = false;
		}
		HX_STACK_LINE(382)
		_ok = tmp13;
		HX_STACK_LINE(383)
		bool tmp14 = _ok;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(383)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(383)
		if ((tmp14)){
			HX_STACK_LINE(383)
			::String tmp16 = vert;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(383)
			::String tmp17 = frag_textured;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(383)
			::String tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(383)
			::String tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(383)
			tmp15 = _textured->from_string(tmp18,tmp19);
		}
		else{
			HX_STACK_LINE(383)
			tmp15 = false;
		}
		HX_STACK_LINE(383)
		_ok = tmp15;
		HX_STACK_LINE(384)
		bool tmp16 = _ok;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(384)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(384)
		if ((tmp16)){
			HX_STACK_LINE(384)
			::String tmp18 = vert;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(384)
			::String tmp19 = frag_bitmapfont;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(384)
			::String tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(384)
			::String tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(384)
			tmp17 = _font->from_string(tmp20,tmp21);
		}
		else{
			HX_STACK_LINE(384)
			tmp17 = false;
		}
		HX_STACK_LINE(384)
		_ok = tmp17;
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			bool tmp18 = _ok;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(386)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(386)
			if ((tmp19)){
				HX_STACK_LINE(214)
				::String tmp20 = HX_HCSTRING(" ( Default shaders failed to compile or link. See log for errors","\x3c","\x9a","\x24","\x4c");		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(214)
				::String tmp21 = (tmp20 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(386)
				::String tmp22 = (HX_HCSTRING("_ok","\x3b","\x77","\x48","\x00") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(386)
				::luxe::DebugError tmp23 = ::luxe::DebugError_obj::assertion(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(386)
				HX_STACK_DO_THROW(tmp23);
			}
		}
		HX_STACK_LINE(391)
		::phoenix::Shader tmp18 = _plain;		HX_STACK_VAR(tmp18,"tmp18");
		struct _Function_1_4{
			inline static Dynamic Block( ::String &frag,::String &vert){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",391,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e") , vert,false);
					__result->Add(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43") , frag,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(391)
		Dynamic tmp19 = _Function_1_4::Block(frag,vert);		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_5{
			inline static Dynamic Block( Dynamic &tmp19,::phoenix::Shader &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",391,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , tmp18,false);
					__result->Add(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32") , tmp19,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(391)
		Dynamic tmp20 = _Function_1_5::Block(tmp19,tmp18);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(392)
		::phoenix::Shader tmp21 = _textured;		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_6{
			inline static Dynamic Block( ::String &frag_textured,::String &vert){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",392,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e") , vert,false);
					__result->Add(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43") , frag_textured,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(392)
		Dynamic tmp22 = _Function_1_6::Block(frag_textured,vert);		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_7{
			inline static Dynamic Block( Dynamic &tmp22,::phoenix::Shader &tmp21){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",392,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , tmp21,false);
					__result->Add(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32") , tmp22,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(392)
		Dynamic tmp23 = _Function_1_7::Block(tmp22,tmp21);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(393)
		::phoenix::Shader tmp24 = _font;		HX_STACK_VAR(tmp24,"tmp24");
		struct _Function_1_8{
			inline static Dynamic Block( ::String &vert,::String &frag_bitmapfont){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",393,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e") , vert,false);
					__result->Add(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43") , frag_bitmapfont,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(393)
		Dynamic tmp25 = _Function_1_8::Block(vert,frag_bitmapfont);		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_1_9{
			inline static Dynamic Block( ::phoenix::Shader &tmp24,Dynamic &tmp25){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",393,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , tmp24,false);
					__result->Add(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32") , tmp25,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(393)
		Dynamic tmp26 = _Function_1_9::Block(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		struct _Function_1_10{
			inline static Dynamic Block( Dynamic &tmp20,Dynamic &tmp23,Dynamic &tmp26){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",390,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4") , tmp20,false);
					__result->Add(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65") , tmp23,false);
					__result->Add(HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a") , tmp26,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(390)
		Dynamic tmp27 = _Function_1_10::Block(tmp20,tmp23,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(390)
		this->shaders = tmp27;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create_default_shaders,(void))

Void Renderer_obj::create_default_font( ){
{
		HX_STACK_FRAME("phoenix.Renderer","create_default_font",0xfe822b64,"phoenix.Renderer.create_default_font","phoenix/Renderer.hx",400,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(402)
		{
			HX_STACK_LINE(402)
			::snow::systems::assets::AssetImage tmp = this->font_asset;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(402)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(402)
			if ((tmp1)){
				HX_STACK_LINE(230)
				::String tmp2 = HX_HCSTRING(" ( Renderer / failed to create the default font","\xc9","\x9d","\x8e","\x27");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(230)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(402)
				::String tmp4 = (HX_HCSTRING("font_asset was null","\xbe","\x7c","\x51","\xcf") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(402)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::null_assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(402)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(409)
		::snow::systems::assets::AssetImage tmp = this->font_asset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(409)
		int tmp1 = tmp->image->width_actual;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(410)
		::snow::systems::assets::AssetImage tmp2 = this->font_asset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(410)
		int tmp3 = tmp2->image->height_actual;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(411)
		::snow::systems::assets::AssetImage tmp4 = this->font_asset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(411)
		::snow::api::buffers::ArrayBufferView tmp5 = tmp4->image->pixels;		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_1{
			inline static Dynamic Block( ::snow::api::buffers::ArrayBufferView &tmp5,int &tmp3,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",407,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.font.png","\x42","\x9a","\x18","\x5d"),false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp1,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp3,false);
					__result->Add(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(407)
		Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp3,tmp1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(407)
		::phoenix::Texture tmp7 = ::phoenix::Texture_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(407)
		::phoenix::Texture _font_texture = tmp7;		HX_STACK_VAR(_font_texture,"_font_texture");
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			bool tmp8 = (_font_texture == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(414)
			if ((tmp8)){
				HX_STACK_LINE(230)
				::String tmp9 = HX_HCSTRING(" ( Renderer / failed to create the default font... font_texture was null.","\x56","\xeb","\x94","\x5f");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(230)
				::String tmp10 = (tmp9 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(414)
				::String tmp11 = (HX_HCSTRING("_font_texture was null","\xb4","\x4d","\x06","\x3c") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(414)
				::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(414)
				HX_STACK_DO_THROW(tmp12);
			}
		}
		HX_STACK_LINE(416)
		::String tmp8 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.fnt","\xff","\x63","\x9b","\x05"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(416)
		::String _font_data = tmp8;		HX_STACK_VAR(_font_data,"_font_data");
		struct _Function_1_2{
			inline static Dynamic Block( ::String &_font_data,::phoenix::Texture &_font_texture){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",418,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.font","\x87","\x9d","\x30","\xc2"),false);
					__result->Add(HX_HCSTRING("font_data","\xda","\xa5","\x22","\x0e") , _font_data,false);
					__result->Add(HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd") , Array_obj< ::Dynamic >::__new().Add(_font_texture),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(418)
		Dynamic tmp9 = _Function_1_2::Block(_font_data,_font_texture);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(418)
		::phoenix::BitmapFont tmp10 = ::phoenix::BitmapFont_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(418)
		this->font = tmp10;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create_default_font,(void))


Renderer_obj::Renderer_obj()
{
}

void Renderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderer);
	HX_MARK_MEMBER_NAME(batchers,"batchers");
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(default_framebuffer,"default_framebuffer");
	HX_MARK_MEMBER_NAME(default_renderbuffer,"default_renderbuffer");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(font_asset,"font_asset");
	HX_MARK_MEMBER_NAME(render_path,"render_path");
	HX_MARK_MEMBER_NAME(default_render_path,"default_render_path");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(default_target,"default_target");
	HX_MARK_MEMBER_NAME(backbuffer,"backbuffer");
	HX_MARK_MEMBER_NAME(should_clear,"should_clear");
	HX_MARK_MEMBER_NAME(stop,"stop");
	HX_MARK_MEMBER_NAME(stop_count,"stop_count");
	HX_MARK_MEMBER_NAME(clear_color,"clear_color");
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_END_CLASS();
}

void Renderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(batchers,"batchers");
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(default_framebuffer,"default_framebuffer");
	HX_VISIT_MEMBER_NAME(default_renderbuffer,"default_renderbuffer");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(font_asset,"font_asset");
	HX_VISIT_MEMBER_NAME(render_path,"render_path");
	HX_VISIT_MEMBER_NAME(default_render_path,"default_render_path");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(default_target,"default_target");
	HX_VISIT_MEMBER_NAME(backbuffer,"backbuffer");
	HX_VISIT_MEMBER_NAME(should_clear,"should_clear");
	HX_VISIT_MEMBER_NAME(stop,"stop");
	HX_VISIT_MEMBER_NAME(stop_count,"stop_count");
	HX_VISIT_MEMBER_NAME(clear_color,"clear_color");
	HX_VISIT_MEMBER_NAME(stats,"stats");
}

Dynamic Renderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"target") ) { return inCallProp == hx::paccAlways ? get_target() : target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { return batchers; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"add_batch") ) { return add_batch_dyn(); }
		if (HX_FIELD_EQ(inName,"prerender") ) { return prerender_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"font_asset") ) { return font_asset; }
		if (HX_FIELD_EQ(inName,"backbuffer") ) { return backbuffer; }
		if (HX_FIELD_EQ(inName,"stop_count") ) { return stop_count; }
		if (HX_FIELD_EQ(inName,"blend_mode") ) { return blend_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"render_path") ) { return render_path; }
		if (HX_FIELD_EQ(inName,"clear_color") ) { return clear_color; }
		if (HX_FIELD_EQ(inName,"bind_target") ) { return bind_target_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"should_clear") ) { return should_clear; }
		if (HX_FIELD_EQ(inName,"remove_batch") ) { return remove_batch_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sort_batchers") ) { return sort_batchers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"default_target") ) { return default_target; }
		if (HX_FIELD_EQ(inName,"create_batcher") ) { return create_batcher_dyn(); }
		if (HX_FIELD_EQ(inName,"blend_equation") ) { return blend_equation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internal_resized") ) { return internal_resized_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"default_framebuffer") ) { return default_framebuffer; }
		if (HX_FIELD_EQ(inName,"default_render_path") ) { return default_render_path; }
		if (HX_FIELD_EQ(inName,"create_default_font") ) { return create_default_font_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"default_renderbuffer") ) { return default_renderbuffer; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"create_default_shaders") ) { return create_default_shaders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Renderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stop") ) { stop=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::RenderState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::phoenix::RendererStats >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == hx::paccAlways) return set_target(inValue);target=inValue.Cast< ::phoenix::RenderTarget >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { batchers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"font_asset") ) { font_asset=inValue.Cast< ::snow::systems::assets::AssetImage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backbuffer") ) { backbuffer=inValue.Cast< ::phoenix::Backbuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stop_count") ) { stop_count=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"render_path") ) { render_path=inValue.Cast< ::phoenix::RenderPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clear_color") ) { clear_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"should_clear") ) { should_clear=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"default_target") ) { default_target=inValue.Cast< ::phoenix::RenderTarget >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"default_framebuffer") ) { default_framebuffer=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"default_render_path") ) { default_render_path=inValue.Cast< ::phoenix::RenderPath >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"default_renderbuffer") ) { default_renderbuffer=inValue.Cast< ::opengl::GLObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Renderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"));
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("default_framebuffer","\x2f","\x39","\x98","\x94"));
	outFields->push(HX_HCSTRING("default_renderbuffer","\x54","\xe2","\x25","\xf7"));
	outFields->push(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"));
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("font_asset","\x40","\xd4","\xdf","\xa1"));
	outFields->push(HX_HCSTRING("render_path","\x6e","\xbe","\xe6","\x35"));
	outFields->push(HX_HCSTRING("default_render_path","\xb0","\xe2","\x36","\x50"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("default_target","\x4f","\x36","\x53","\x57"));
	outFields->push(HX_HCSTRING("backbuffer","\x67","\x2e","\x8a","\xda"));
	outFields->push(HX_HCSTRING("should_clear","\x41","\x09","\xe6","\x4f"));
	outFields->push(HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"));
	outFields->push(HX_HCSTRING("stop_count","\x92","\x69","\x65","\x3b"));
	outFields->push(HX_HCSTRING("clear_color","\xf1","\x51","\x9c","\xa5"));
	outFields->push(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Renderer_obj,batchers),HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e")},
	{hx::fsObject /*::luxe::Engine*/ ,(int)offsetof(Renderer_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*::phoenix::RenderState*/ ,(int)offsetof(Renderer_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Renderer_obj,default_framebuffer),HX_HCSTRING("default_framebuffer","\x2f","\x39","\x98","\x94")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Renderer_obj,default_renderbuffer),HX_HCSTRING("default_renderbuffer","\x54","\xe2","\x25","\xf7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Renderer_obj,shaders),HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Renderer_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Renderer_obj,camera),HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(Renderer_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*::snow::systems::assets::AssetImage*/ ,(int)offsetof(Renderer_obj,font_asset),HX_HCSTRING("font_asset","\x40","\xd4","\xdf","\xa1")},
	{hx::fsObject /*::phoenix::RenderPath*/ ,(int)offsetof(Renderer_obj,render_path),HX_HCSTRING("render_path","\x6e","\xbe","\xe6","\x35")},
	{hx::fsObject /*::phoenix::RenderPath*/ ,(int)offsetof(Renderer_obj,default_render_path),HX_HCSTRING("default_render_path","\xb0","\xe2","\x36","\x50")},
	{hx::fsObject /*::phoenix::RenderTarget*/ ,(int)offsetof(Renderer_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*::phoenix::RenderTarget*/ ,(int)offsetof(Renderer_obj,default_target),HX_HCSTRING("default_target","\x4f","\x36","\x53","\x57")},
	{hx::fsObject /*::phoenix::Backbuffer*/ ,(int)offsetof(Renderer_obj,backbuffer),HX_HCSTRING("backbuffer","\x67","\x2e","\x8a","\xda")},
	{hx::fsBool,(int)offsetof(Renderer_obj,should_clear),HX_HCSTRING("should_clear","\x41","\x09","\xe6","\x4f")},
	{hx::fsBool,(int)offsetof(Renderer_obj,stop),HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c")},
	{hx::fsInt,(int)offsetof(Renderer_obj,stop_count),HX_HCSTRING("stop_count","\x92","\x69","\x65","\x3b")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Renderer_obj,clear_color),HX_HCSTRING("clear_color","\xf1","\x51","\x9c","\xa5")},
	{hx::fsObject /*::phoenix::RendererStats*/ ,(int)offsetof(Renderer_obj,stats),HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"),
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("default_framebuffer","\x2f","\x39","\x98","\x94"),
	HX_HCSTRING("default_renderbuffer","\x54","\xe2","\x25","\xf7"),
	HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"),
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("font_asset","\x40","\xd4","\xdf","\xa1"),
	HX_HCSTRING("render_path","\x6e","\xbe","\xe6","\x35"),
	HX_HCSTRING("default_render_path","\xb0","\xe2","\x36","\x50"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("default_target","\x4f","\x36","\x53","\x57"),
	HX_HCSTRING("backbuffer","\x67","\x2e","\x8a","\xda"),
	HX_HCSTRING("should_clear","\x41","\x09","\xe6","\x4f"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("stop_count","\x92","\x69","\x65","\x3b"),
	HX_HCSTRING("clear_color","\xf1","\x51","\x9c","\xa5"),
	HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("sort_batchers","\x2d","\x24","\xe7","\xf1"),
	HX_HCSTRING("add_batch","\xdc","\xef","\x31","\x2d"),
	HX_HCSTRING("remove_batch","\x3f","\x56","\x3b","\xe4"),
	HX_HCSTRING("create_batcher","\x24","\x3f","\x51","\x72"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("blend_mode","\x51","\x41","\x9c","\x00"),
	HX_HCSTRING("blend_equation","\x7a","\xb8","\xd0","\x82"),
	HX_HCSTRING("internal_resized","\xae","\x21","\x67","\x90"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("prerender","\xb9","\x07","\x36","\x2f"),
	HX_HCSTRING("get_target","\x1a","\x63","\x74","\x77"),
	HX_HCSTRING("set_target","\x8e","\x01","\xf2","\x7a"),
	HX_HCSTRING("bind_target","\xd3","\xf0","\x83","\x24"),
	HX_HCSTRING("create_default_shaders","\x6d","\x3e","\x38","\xab"),
	HX_HCSTRING("create_default_font","\xb0","\xc3","\xd4","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#endif

hx::Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Renderer","\x22","\x36","\xb5","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Renderer_obj >;
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
