#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_Cursor
#include <luxe/Cursor.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
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
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_TouchEvent
#include <luxe/TouchEvent.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_Inspector
#include <luxe/debug/Inspector.h>
#endif
#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#include <luxe/debug/ProfilerDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_SceneDebugView
#include <luxe/debug/SceneDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_StatsDebugView
#include <luxe/debug/StatsDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_TraceDebugView
#include <luxe/debug/TraceDebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
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
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace luxe{

Void Debug_obj::__construct(::luxe::Engine _app)
{
HX_STACK_FRAME("luxe.Debug","new",0xf1f6bded,"luxe.Debug.new","luxe/Debug.hx",23,0xe4198724)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(404)
	this->last_cursor_grab = false;
	HX_STACK_LINE(51)
	this->profiling = false;
	HX_STACK_LINE(50)
	this->profile_path = HX_HCSTRING("profile.txt","\xab","\xd0","\x4f","\xc6");
	HX_STACK_LINE(43)
	this->last_view_index = (int)0;
	HX_STACK_LINE(42)
	this->current_view_index = (int)0;
	HX_STACK_LINE(39)
	this->dt_average_count = (int)0;
	HX_STACK_LINE(38)
	this->dt_average_span = (int)60;
	HX_STACK_LINE(37)
	this->dt_average_accum = ((Float)0);
	HX_STACK_LINE(36)
	this->dt_average = ((Float)0);
	HX_STACK_LINE(26)
	this->visible = false;
	HX_STACK_LINE(55)
	this->app = _app;
}
;
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new(::luxe::Engine _app)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic Debug_obj::get_view( ::String _name){
	HX_STACK_FRAME("luxe.Debug","get_view",0xa5fdc141,"luxe.Debug.get_view","luxe/Debug.hx",62,0xe4198724)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		while((true)){
			HX_STACK_LINE(64)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(64)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(64)
			if ((tmp1)){
				HX_STACK_LINE(64)
				break;
			}
			HX_STACK_LINE(64)
			::luxe::debug::DebugView tmp2 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			::luxe::debug::DebugView view = tmp2;		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(64)
			++(_g);
			HX_STACK_LINE(66)
			::String tmp3 = view->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			if ((tmp5)){
				HX_STACK_LINE(67)
				Dynamic tmp6 = ((Dynamic)(view));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(72)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,get_view,return )

Void Debug_obj::start( ::String _name,Dynamic _max){
{
		HX_STACK_FRAME("luxe.Debug","start",0x566e9f2f,"luxe.Debug.start","luxe/Debug.hx",79,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_max,"_max")
		HX_STACK_LINE(81)
		::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = tmp->headless;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		if ((tmp2)){
			HX_STACK_LINE(82)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			Dynamic tmp4 = _max;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			::luxe::debug::ProfilerDebugView_obj::start(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,start,(void))

Void Debug_obj::end( ::String _name){
{
		HX_STACK_FRAME("luxe.Debug","end",0xf1eff168,"luxe.Debug.end","luxe/Debug.hx",88,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(90)
		::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		bool tmp1 = tmp->headless;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(91)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			::luxe::debug::ProfilerDebugView_obj::end(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,end,(void))

Void Debug_obj::init( ){
{
		HX_STACK_FRAME("luxe.Debug","init",0xc2a828e3,"luxe.Debug.init","luxe/Debug.hx",99,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		::luxe::Debug_obj::views = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(105)
		::luxe::debug::TraceDebugView tmp = ::luxe::debug::TraceDebugView_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		::luxe::Debug_obj::views->push(tmp);
		HX_STACK_LINE(106)
		::luxe::debug::StatsDebugView tmp1 = ::luxe::debug::StatsDebugView_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::luxe::Debug_obj::views->push(tmp1);
		HX_STACK_LINE(108)
		::luxe::debug::ProfilerDebugView tmp2 = ::luxe::debug::ProfilerDebugView_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		::luxe::Debug_obj::views->push(tmp2);
		HX_STACK_LINE(109)
		::luxe::debug::SceneDebugView tmp3 = ::luxe::debug::SceneDebugView_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		::luxe::Debug_obj::views->push(tmp3);
		HX_STACK_LINE(111)
		::luxe::debug::DebugView tmp4 = ::luxe::Debug_obj::views->__get((int)0).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		this->current_view = tmp4;
		HX_STACK_LINE(115)
		Dynamic tmp5 = ::luxe::Debug_obj::internal_trace_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		::haxe::Log_obj::trace = tmp5;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,init,(void))

Void Debug_obj::create_debug_console( ){
{
		HX_STACK_FRAME("luxe.Debug","create_debug_console",0x55dabe3b,"luxe.Debug.create_debug_console","luxe/Debug.hx",121,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		::luxe::Debug _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(125)
			Dynamic tmp1 = this->keyup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(125)
			tmp->emitter->on((int)13,tmp1);
		}
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(126)
			Dynamic tmp1 = this->keydown_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			tmp->emitter->on((int)12,tmp1);
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(127)
			Dynamic tmp1 = this->mouseup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			tmp->emitter->on((int)18,tmp1);
		}
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(128)
			Dynamic tmp1 = this->mousedown_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			tmp->emitter->on((int)17,tmp1);
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(129)
			Dynamic tmp1 = this->mousemove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(129)
			tmp->emitter->on((int)19,tmp1);
		}
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(130)
			Dynamic tmp1 = this->mousewheel_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(130)
			tmp->emitter->on((int)20,tmp1);
		}
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			Dynamic tmp1 = this->touchup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(131)
			tmp->emitter->on((int)22,tmp1);
		}
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(132)
			Dynamic tmp1 = this->touchdown_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			tmp->emitter->on((int)21,tmp1);
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(133)
			Dynamic tmp1 = this->touchmove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(133)
			tmp->emitter->on((int)23,tmp1);
		}
		HX_STACK_LINE(136)
		::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		::phoenix::Renderer tmp1 = tmp->renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		Float tmp2 = ::Math_obj::pow((int)2,(int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		::phoenix::Batcher tmp4 = ::phoenix::Batcher_obj::__new(tmp1,HX_HCSTRING("debug_batcher","\x7b","\xd9","\xce","\x3f"),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		this->batcher = tmp4;
		HX_STACK_LINE(137)
		::phoenix::Batcher tmp5 = this->batcher;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(137)
		tmp5->set_show_stats((int)0);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",140,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("camera_name","\x65","\x11","\x29","\x5d") , HX_HCSTRING("debug_batcher_camera","\x29","\x74","\xee","\xd9"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(140)
		Dynamic tmp6 = _Function_1_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		::phoenix::Camera tmp7 = ::phoenix::Camera_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		this->view = tmp7;
		HX_STACK_LINE(142)
		::phoenix::Camera tmp8 = this->view;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(142)
		::phoenix::Batcher tmp9 = this->batcher;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(142)
		tmp9->view = tmp8;
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			::phoenix::Batcher tmp10 = this->batcher;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(144)
			::phoenix::Batcher _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(144)
			_this->layer = (int)999;
			HX_STACK_LINE(144)
			Dynamic tmp11 = _this->renderer->sort_batchers_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			_this->renderer->batchers->sort(tmp11);
			HX_STACK_LINE(144)
			_this->layer;
		}
		HX_STACK_LINE(149)
		::luxe::Engine tmp10 = this->app;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(149)
		int tmp11 = tmp10->screen->get_w();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(149)
		Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(149)
		::luxe::Engine tmp13 = this->app;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(149)
		int tmp14 = tmp13->screen->get_h();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(149)
		Dynamic tmp15 = ((Dynamic)(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(150)
		::phoenix::Color tmp16 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,((Float)0.8));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(153)
		::phoenix::Batcher tmp17 = this->batcher;		HX_STACK_VAR(tmp17,"tmp17");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Batcher &tmp17,Dynamic &tmp15,Dynamic &tmp12,::phoenix::Color &tmp16){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",146,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("debug.overlay","\x75","\x22","\x27","\x36"),false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp12,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp15,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp16,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)999)),false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp17,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(146)
		Dynamic tmp18 = _Function_1_2::Block(tmp17,tmp15,tmp12,tmp16);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(146)
		::phoenix::geometry::QuadGeometry tmp19 = ::phoenix::geometry::QuadGeometry_obj::__new(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(146)
		this->overlay = tmp19;
		HX_STACK_LINE(156)
		::phoenix::geometry::QuadGeometry tmp20 = this->overlay;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(156)
		tmp20->set_locked(true);
		HX_STACK_LINE(159)
		::luxe::Engine tmp21 = this->app;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(159)
		int tmp22 = tmp21->screen->get_w();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(159)
		Float tmp23 = (tmp22 * ((Float)0.05));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(159)
		::luxe::Engine tmp24 = this->app;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(159)
		int tmp25 = tmp24->screen->get_h();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(159)
		Float tmp26 = (tmp25 * ((Float)0.05));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(159)
		::phoenix::Vector tmp27 = ::phoenix::Vector_obj::__new(tmp23,tmp26,null(),null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(159)
		this->padding = tmp27;
		HX_STACK_LINE(161)
		::phoenix::Vector tmp28 = this->padding;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(161)
		Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(161)
		::phoenix::Vector tmp30 = this->padding;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(161)
		Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(161)
		::phoenix::Vector tmp32 = ::phoenix::Vector_obj::__new(tmp29,tmp31,null(),null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(162)
		::luxe::Engine tmp33 = this->app;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(162)
		int tmp34 = tmp33->screen->get_w();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(162)
		::phoenix::Vector tmp35 = this->padding;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(162)
		Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(162)
		Float tmp37 = (tmp36 * (int)2);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(162)
		Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(162)
		::luxe::Engine tmp39 = this->app;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(162)
		int tmp40 = tmp39->screen->get_h();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(162)
		::phoenix::Vector tmp41 = this->padding;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(162)
		Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(162)
		Float tmp43 = (tmp42 * (int)2);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(162)
		Float tmp44 = (tmp40 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(162)
		::phoenix::Vector tmp45 = ::phoenix::Vector_obj::__new(tmp38,tmp44,null(),null());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(163)
		::phoenix::Batcher tmp46 = this->batcher;		HX_STACK_VAR(tmp46,"tmp46");
		struct _Function_1_3{
			inline static Dynamic Block( ::phoenix::Batcher &tmp46,::phoenix::Vector &tmp45,::phoenix::Vector &tmp32){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",160,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp32,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp45,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp46,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(160)
		Dynamic tmp47 = _Function_1_3::Block(tmp46,tmp45,tmp32);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(160)
		::luxe::debug::Inspector tmp48 = ::luxe::debug::Inspector_obj::__new(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(160)
		this->inspector = tmp48;
		HX_STACK_LINE(167)
		Dynamic tmp49 = this->refresh_dyn();		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(167)
		::luxe::debug::Inspector tmp50 = this->inspector;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(167)
		tmp50->onrefresh = tmp49;
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			::luxe::Engine tmp51 = this->app;		HX_STACK_VAR(tmp51,"tmp51");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::luxe::Debug,_g)
			int __ArgCount() const { return 1; }
			Void run(::snow::types::WindowEvent _event){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/Debug.hx",169,0xe4198724)
				HX_STACK_ARG(_event,"_event")
				{
					HX_STACK_LINE(171)
					Dynamic _w = _event->x;		HX_STACK_VAR(_w,"_w");
					HX_STACK_LINE(172)
					Dynamic _h = _event->y;		HX_STACK_VAR(_h,"_h");
					HX_STACK_LINE(174)
					{
						HX_STACK_LINE(174)
						::phoenix::Vector _this = _g->padding;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(174)
						Float tmp52 = (_w * ((Float)0.05));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(174)
						Float _x = tmp52;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(174)
						Float tmp53 = (_h * ((Float)0.05));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(174)
						Float _y = tmp53;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(174)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(174)
						_this->ignore_listeners = true;
						HX_STACK_LINE(174)
						{
							HX_STACK_LINE(174)
							_this->x = _x;
							HX_STACK_LINE(174)
							bool tmp54 = _this->_construct;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(174)
							if ((tmp54)){
								HX_STACK_LINE(174)
								_this->x;
							}
							else{
								HX_STACK_LINE(174)
								bool tmp55 = (_this->listen_x != null());		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(174)
								bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(174)
								if ((tmp55)){
									HX_STACK_LINE(174)
									bool tmp57 = _this->ignore_listeners;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(174)
									bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(174)
									tmp56 = !(tmp58);
								}
								else{
									HX_STACK_LINE(174)
									tmp56 = false;
								}
								HX_STACK_LINE(174)
								if ((tmp56)){
									HX_STACK_LINE(174)
									Float tmp57 = _x;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(174)
									_this->listen_x(tmp57);
								}
								HX_STACK_LINE(174)
								_this->x;
							}
						}
						HX_STACK_LINE(174)
						{
							HX_STACK_LINE(174)
							_this->y = _y;
							HX_STACK_LINE(174)
							bool tmp54 = _this->_construct;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(174)
							if ((tmp54)){
								HX_STACK_LINE(174)
								_this->y;
							}
							else{
								HX_STACK_LINE(174)
								bool tmp55 = (_this->listen_y != null());		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(174)
								bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(174)
								if ((tmp55)){
									HX_STACK_LINE(174)
									bool tmp57 = _this->ignore_listeners;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(174)
									bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(174)
									tmp56 = !(tmp58);
								}
								else{
									HX_STACK_LINE(174)
									tmp56 = false;
								}
								HX_STACK_LINE(174)
								if ((tmp56)){
									HX_STACK_LINE(174)
									Float tmp57 = _y;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(174)
									_this->listen_y(tmp57);
								}
								HX_STACK_LINE(174)
								_this->y;
							}
						}
						HX_STACK_LINE(174)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(174)
						bool tmp54 = (_this->listen_x != null());		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(174)
						bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(174)
						if ((tmp54)){
							HX_STACK_LINE(174)
							bool tmp56 = _this->ignore_listeners;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(174)
							bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(174)
							tmp55 = !(tmp57);
						}
						else{
							HX_STACK_LINE(174)
							tmp55 = false;
						}
						HX_STACK_LINE(174)
						if ((tmp55)){
							HX_STACK_LINE(174)
							Float tmp56 = _this->x;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(174)
							_this->listen_x(tmp56);
						}
						HX_STACK_LINE(174)
						bool tmp56 = (_this->listen_y != null());		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(174)
						bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(174)
						if ((tmp56)){
							HX_STACK_LINE(174)
							bool tmp58 = _this->ignore_listeners;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(174)
							bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(174)
							tmp57 = !(tmp59);
						}
						else{
							HX_STACK_LINE(174)
							tmp57 = false;
						}
						HX_STACK_LINE(174)
						if ((tmp57)){
							HX_STACK_LINE(174)
							Float tmp58 = _this->y;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(174)
							_this->listen_y(tmp58);
						}
						HX_STACK_LINE(174)
						_this;
					}
					HX_STACK_LINE(176)
					Dynamic tmp52 = _w;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(176)
					Dynamic tmp53 = _h;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(176)
					_g->overlay->resize_xy(tmp52,tmp53);
					HX_STACK_LINE(177)
					::phoenix::Rectangle tmp54 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,_w,_h);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(177)
					_g->view->set_viewport(tmp54);
					HX_STACK_LINE(178)
					Dynamic tmp55 = _w;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(178)
					Float tmp56 = _g->padding->x;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(178)
					Float tmp57 = (tmp56 * (int)2);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(178)
					Float tmp58 = (tmp55 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(178)
					Dynamic tmp59 = _h;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(178)
					Float tmp60 = _g->padding->y;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(178)
					Float tmp61 = (tmp60 * (int)2);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(178)
					Float tmp62 = (tmp59 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(178)
					::phoenix::Vector tmp63 = ::phoenix::Vector_obj::__new(tmp58,tmp62,null(),null());		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(178)
					_g->inspector->set_size(tmp63);
					HX_STACK_LINE(179)
					Float tmp64 = _g->padding->x;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(179)
					Float tmp65 = _g->padding->y;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(179)
					::phoenix::Vector tmp66 = ::phoenix::Vector_obj::__new(tmp64,tmp65,null(),null());		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(179)
					_g->inspector->set_pos(tmp66);
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(181)
						Array< ::Dynamic > _g2 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(181)
						while((true)){
							HX_STACK_LINE(181)
							bool tmp67 = (_g1 < _g2->length);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(181)
							bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(181)
							if ((tmp68)){
								HX_STACK_LINE(181)
								break;
							}
							HX_STACK_LINE(181)
							::luxe::debug::DebugView tmp69 = _g2->__get(_g1).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(181)
							::luxe::debug::DebugView view = tmp69;		HX_STACK_VAR(view,"view");
							HX_STACK_LINE(181)
							++(_g1);
							HX_STACK_LINE(182)
							::snow::types::WindowEvent tmp70 = _event;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(182)
							view->onwindowsized(tmp70);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(169)
			tmp51->emitter->on((int)31, Dynamic(new _Function_2_1(_g)));
		}
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(186)
			Array< ::Dynamic > _g11 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(186)
			while((true)){
				HX_STACK_LINE(186)
				bool tmp51 = (_g1 < _g11->length);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(186)
				bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(186)
				if ((tmp52)){
					HX_STACK_LINE(186)
					break;
				}
				HX_STACK_LINE(186)
				::luxe::debug::DebugView tmp53 = _g11->__get(_g1).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(186)
				::luxe::debug::DebugView view = tmp53;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(186)
				++(_g1);
				HX_STACK_LINE(187)
				view->create();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,create_debug_console,(void))

Void Debug_obj::render( ){
{
		HX_STACK_FRAME("luxe.Debug","render",0x498bb3e9,"luxe.Debug.render","luxe/Debug.hx",195,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		if ((tmp)){
			HX_STACK_LINE(201)
			::String tmp1 = ::luxe::Debug_obj::debug_batch_tag;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(201)
			this->start(tmp1,null());
			HX_STACK_LINE(203)
			{
				HX_STACK_LINE(203)
				::phoenix::Batcher tmp2 = this->batcher;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(203)
				::phoenix::Batcher _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(203)
				bool tmp3 = (_this->name != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(203)
				if ((tmp3)){
					HX_STACK_LINE(203)
					::luxe::Debug tmp4 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(203)
					::String tmp5 = _this->name;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(203)
					tmp4->start(tmp5,null());
				}
				HX_STACK_LINE(203)
				_this->draw_calls = (int)0;
				HX_STACK_LINE(203)
				_this->vert_count = (int)0;
				HX_STACK_LINE(203)
				::phoenix::Batcher tmp4 = _this;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(203)
				_this->emitter->emit((int)1,tmp4);
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(203)
					_this->view->process();
					HX_STACK_LINE(203)
					::phoenix::RenderState tmp5 = _this->renderer->state;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(203)
					::phoenix::Rectangle tmp6 = _this->view->viewport;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(203)
					Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(203)
					::phoenix::Rectangle tmp8 = _this->view->viewport;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(203)
					Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(203)
					::phoenix::Rectangle tmp10 = _this->view->viewport;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(203)
					Float tmp11 = tmp10->w;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(203)
					::phoenix::Rectangle tmp12 = _this->view->viewport;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(203)
					Float tmp13 = tmp12->h;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(203)
					tmp5->viewport(tmp7,tmp9,tmp11,tmp13);
				}
				HX_STACK_LINE(203)
				_this->batch(false);
				HX_STACK_LINE(203)
				::phoenix::Batcher tmp5 = _this;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(203)
				_this->emitter->emit((int)2,tmp5);
				HX_STACK_LINE(203)
				::phoenix::RendererStats tmp6 = _this->renderer->stats;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(203)
				::phoenix::RendererStats _stats = tmp6;		HX_STACK_VAR(_stats,"_stats");
				HX_STACK_LINE(203)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(203)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = _this->geometry->root;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(203)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp8;		HX_STACK_VAR(_node,"_node");
					HX_STACK_LINE(203)
					bool tmp9 = (_node == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(203)
					if ((tmp9)){
						HX_STACK_LINE(203)
						tmp7 = (int)0;
					}
					else{
						HX_STACK_LINE(203)
						tmp7 = _node->nodecount;
					}
				}
				HX_STACK_LINE(203)
				int tmp8 = _this->show_stats;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(203)
				int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(203)
				hx::AddEq(_stats->geometry_count,tmp9);
				HX_STACK_LINE(203)
				int tmp10 = (_this->dynamic_batched_count * _this->show_stats);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(203)
				hx::AddEq(_stats->dynamic_batched_count,tmp10);
				HX_STACK_LINE(203)
				int tmp11 = (_this->static_batched_count * _this->show_stats);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(203)
				hx::AddEq(_stats->static_batched_count,tmp11);
				HX_STACK_LINE(203)
				int tmp12 = (_this->visible_count * _this->show_stats);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(203)
				hx::AddEq(_stats->visible_count,tmp12);
				HX_STACK_LINE(203)
				int tmp13 = (_this->draw_calls * _this->show_stats);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(203)
				hx::AddEq(_stats->draw_calls,tmp13);
				HX_STACK_LINE(203)
				int tmp14 = (_this->vert_count * _this->show_stats);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(203)
				hx::AddEq(_stats->vert_count,tmp14);
				HX_STACK_LINE(203)
				bool tmp15 = (_this->name != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(203)
				if ((tmp15)){
					HX_STACK_LINE(203)
					::luxe::Debug tmp16 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(203)
					::String tmp17 = _this->name;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(203)
					tmp16->end(tmp17);
				}
			}
			HX_STACK_LINE(205)
			::String tmp2 = ::luxe::Debug_obj::debug_batch_tag;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(205)
			this->end(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,render,(void))

Void Debug_obj::mouseup( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Debug","mouseup",0x521047cd,"luxe.Debug.mouseup","luxe/Debug.hx",249,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(250)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		if ((tmp)){
			HX_STACK_LINE(251)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(251)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(251)
			while((true)){
				HX_STACK_LINE(251)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(251)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(251)
				if ((tmp2)){
					HX_STACK_LINE(251)
					break;
				}
				HX_STACK_LINE(251)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(251)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(251)
				++(_g);
				HX_STACK_LINE(252)
				::luxe::MouseEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(252)
				view->onmouseup(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mouseup,(void))

Void Debug_obj::mousedown( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Debug","mousedown",0x214e9a54,"luxe.Debug.mousedown","luxe/Debug.hx",257,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(258)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		if ((tmp)){
			HX_STACK_LINE(259)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(259)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(259)
			while((true)){
				HX_STACK_LINE(259)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(259)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(259)
				if ((tmp2)){
					HX_STACK_LINE(259)
					break;
				}
				HX_STACK_LINE(259)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(259)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(259)
				++(_g);
				HX_STACK_LINE(260)
				::luxe::MouseEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(260)
				view->onmousedown(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousedown,(void))

Void Debug_obj::mousemove( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Debug","mousemove",0x27418503,"luxe.Debug.mousemove","luxe/Debug.hx",265,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(266)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		if ((tmp)){
			HX_STACK_LINE(267)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(267)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(267)
			while((true)){
				HX_STACK_LINE(267)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(267)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(267)
				if ((tmp2)){
					HX_STACK_LINE(267)
					break;
				}
				HX_STACK_LINE(267)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(267)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(267)
				++(_g);
				HX_STACK_LINE(268)
				::luxe::MouseEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(268)
				view->onmousemove(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousemove,(void))

Void Debug_obj::mousewheel( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.Debug","mousewheel",0xef674669,"luxe.Debug.mousewheel","luxe/Debug.hx",273,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(274)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		if ((tmp)){
			HX_STACK_LINE(275)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(275)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(275)
			while((true)){
				HX_STACK_LINE(275)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(275)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(275)
				if ((tmp2)){
					HX_STACK_LINE(275)
					break;
				}
				HX_STACK_LINE(275)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(275)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(275)
				++(_g);
				HX_STACK_LINE(276)
				::luxe::MouseEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(276)
				view->onmousewheel(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousewheel,(void))

Void Debug_obj::touchup( ::luxe::TouchEvent e){
{
		HX_STACK_FRAME("luxe.Debug","touchup",0x6a9563e7,"luxe.Debug.touchup","luxe/Debug.hx",281,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(282)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		if ((tmp)){
			HX_STACK_LINE(283)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(283)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(283)
			while((true)){
				HX_STACK_LINE(283)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(283)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(283)
				if ((tmp2)){
					HX_STACK_LINE(283)
					break;
				}
				HX_STACK_LINE(283)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(283)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(283)
				++(_g);
				HX_STACK_LINE(284)
				::luxe::TouchEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(284)
				view->ontouchup(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,touchup,(void))

Void Debug_obj::touchdown( ::luxe::TouchEvent e){
{
		HX_STACK_FRAME("luxe.Debug","touchdown",0x3a6670ee,"luxe.Debug.touchdown","luxe/Debug.hx",289,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(308)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		if ((tmp)){
			HX_STACK_LINE(309)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(309)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(309)
			while((true)){
				HX_STACK_LINE(309)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(309)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(309)
				if ((tmp2)){
					HX_STACK_LINE(309)
					break;
				}
				HX_STACK_LINE(309)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(309)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(309)
				++(_g);
				HX_STACK_LINE(310)
				::luxe::TouchEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(310)
				view->ontouchdown(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,touchdown,(void))

Void Debug_obj::touchmove( ::luxe::TouchEvent e){
{
		HX_STACK_FRAME("luxe.Debug","touchmove",0x40595b9d,"luxe.Debug.touchmove","luxe/Debug.hx",315,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(316)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		if ((tmp)){
			HX_STACK_LINE(317)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(317)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(317)
			while((true)){
				HX_STACK_LINE(317)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(317)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(317)
				if ((tmp2)){
					HX_STACK_LINE(317)
					break;
				}
				HX_STACK_LINE(317)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(317)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(317)
				++(_g);
				HX_STACK_LINE(318)
				::luxe::TouchEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(318)
				view->ontouchmove(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,touchmove,(void))

Void Debug_obj::keyup( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("luxe.Debug","keyup",0xb1620087,"luxe.Debug.keyup","luxe/Debug.hx",323,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(325)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		if ((tmp)){
			HX_STACK_LINE(326)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(326)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(326)
			while((true)){
				HX_STACK_LINE(326)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(326)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(326)
				if ((tmp2)){
					HX_STACK_LINE(326)
					break;
				}
				HX_STACK_LINE(326)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(326)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(326)
				++(_g);
				HX_STACK_LINE(327)
				::luxe::KeyEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(327)
				view->onkeyup(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,keyup,(void))

Void Debug_obj::keydown( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("luxe.Debug","keydown",0x430b758e,"luxe.Debug.keydown","luxe/Debug.hx",343,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(345)
		bool tmp = (e->scancode == (int)53);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(345)
		if ((tmp)){
			HX_STACK_LINE(346)
			bool tmp1 = this->visible;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(346)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(346)
			this->set_visible(tmp2);
		}
		HX_STACK_LINE(349)
		bool tmp1 = this->visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		if ((tmp1)){
			HX_STACK_LINE(351)
			bool tmp2 = (e->keycode == (int)49);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(351)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(351)
			if ((tmp2)){
				HX_STACK_LINE(351)
				tmp3 = this->visible;
			}
			else{
				HX_STACK_LINE(351)
				tmp3 = false;
			}
			HX_STACK_LINE(351)
			if ((tmp3)){
				HX_STACK_LINE(352)
				this->switch_view();
			}
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(355)
				Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(355)
				while((true)){
					HX_STACK_LINE(355)
					bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(355)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(355)
					if ((tmp5)){
						HX_STACK_LINE(355)
						break;
					}
					HX_STACK_LINE(355)
					::luxe::debug::DebugView tmp6 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(355)
					::luxe::debug::DebugView view = tmp6;		HX_STACK_VAR(view,"view");
					HX_STACK_LINE(355)
					++(_g);
					HX_STACK_LINE(356)
					::luxe::KeyEvent tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(356)
					view->onkeydown(tmp7);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,keydown,(void))

Void Debug_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.Debug","refresh",0x7ebe11e8,"luxe.Debug.refresh","luxe/Debug.hx",373,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(375)
		::luxe::debug::DebugView tmp = this->current_view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		if ((tmp1)){
			HX_STACK_LINE(376)
			::luxe::debug::DebugView tmp2 = this->current_view;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(376)
			tmp2->refresh();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,refresh,(void))

Void Debug_obj::switch_view( ){
{
		HX_STACK_FRAME("luxe.Debug","switch_view",0x7281325d,"luxe.Debug.switch_view","luxe/Debug.hx",382,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(385)
		int tmp = this->current_view_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		this->last_view_index = tmp;
		HX_STACK_LINE(387)
		(this->current_view_index)++;
		HX_STACK_LINE(390)
		int tmp1 = this->current_view_index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		int tmp2 = ::luxe::Debug_obj::views->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(390)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(390)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		if ((tmp4)){
			HX_STACK_LINE(391)
			this->current_view_index = (int)0;
		}
		HX_STACK_LINE(395)
		int tmp5 = this->last_view_index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(395)
		::luxe::debug::DebugView tmp6 = ::luxe::Debug_obj::views->__get(tmp5).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(395)
		tmp6->hide();
		HX_STACK_LINE(397)
		int tmp7 = this->current_view_index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		::luxe::debug::DebugView tmp8 = ::luxe::Debug_obj::views->__get(tmp7).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(397)
		this->current_view = tmp8;
		HX_STACK_LINE(400)
		::luxe::debug::DebugView tmp9 = this->current_view;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(400)
		tmp9->show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,switch_view,(void))

bool Debug_obj::set_visible( bool _value){
	HX_STACK_FRAME("luxe.Debug","set_visible",0x445aa222,"luxe.Debug.set_visible","luxe/Debug.hx",406,0xe4198724)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(412)
	this->visible = _value;
	HX_STACK_LINE(413)
	::phoenix::geometry::QuadGeometry tmp = this->overlay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(413)
	bool tmp1 = this->visible;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(413)
	tmp->set_visible(tmp1);
	HX_STACK_LINE(415)
	bool tmp2 = this->visible;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(415)
	if ((tmp2)){
		HX_STACK_LINE(418)
		::luxe::Engine tmp3 = this->app;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		::luxe::Cursor tmp4 = tmp3->screen->cursor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(418)
		bool tmp5 = tmp4->get_grab();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(418)
		this->last_cursor_grab = tmp5;
		HX_STACK_LINE(419)
		::luxe::Engine tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(419)
		::luxe::Cursor tmp7 = tmp6->screen->cursor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(419)
		tmp7->set_grab(false);
		HX_STACK_LINE(421)
		::luxe::debug::DebugView tmp8 = this->current_view;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(421)
		tmp8->show();
		HX_STACK_LINE(422)
		::luxe::debug::Inspector tmp9 = this->inspector;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(422)
		tmp9->show();
	}
	else{
		HX_STACK_LINE(426)
		bool tmp3 = this->last_cursor_grab;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(426)
		bool tmp4 = (tmp3 != false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(426)
		if ((tmp4)){
			HX_STACK_LINE(427)
			::luxe::Engine tmp5 = this->app;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(427)
			::luxe::Cursor tmp6 = tmp5->screen->cursor;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(427)
			bool tmp7 = this->last_cursor_grab;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(427)
			tmp6->set_grab(tmp7);
		}
		HX_STACK_LINE(430)
		::luxe::debug::DebugView tmp5 = this->current_view;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(430)
		tmp5->hide();
		HX_STACK_LINE(431)
		::luxe::debug::Inspector tmp6 = this->inspector;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(431)
		tmp6->hide();
	}
	HX_STACK_LINE(435)
	bool tmp3 = this->visible;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(435)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,set_visible,return )

Void Debug_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Debug","destroy",0xb6236507,"luxe.Debug.destroy","luxe/Debug.hx",439,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(441)
		::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(441)
		Dynamic tmp1 = this->keyup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(441)
		tmp->emitter->off((int)13,tmp1);
		HX_STACK_LINE(442)
		::luxe::Engine tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		Dynamic tmp3 = this->keydown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		tmp2->emitter->off((int)12,tmp3);
		HX_STACK_LINE(443)
		::luxe::Engine tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(443)
		Dynamic tmp5 = this->mouseup_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(443)
		tmp4->emitter->off((int)18,tmp5);
		HX_STACK_LINE(444)
		::luxe::Engine tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(444)
		Dynamic tmp7 = this->mousedown_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(444)
		tmp6->emitter->off((int)17,tmp7);
		HX_STACK_LINE(445)
		::luxe::Engine tmp8 = this->app;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(445)
		Dynamic tmp9 = this->mousemove_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(445)
		tmp8->emitter->off((int)19,tmp9);
		HX_STACK_LINE(446)
		::luxe::Engine tmp10 = this->app;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(446)
		Dynamic tmp11 = this->mousewheel_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(446)
		tmp10->emitter->off((int)20,tmp11);
		HX_STACK_LINE(449)
		::luxe::Debug_obj::shut_down = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,destroy,(void))

Void Debug_obj::process( ){
{
		HX_STACK_FRAME("luxe.Debug","process",0x82e7da7c,"luxe.Debug.process","luxe/Debug.hx",453,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(455)
		::luxe::Engine tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(455)
		hx::AddEq(this->dt_average_accum,tmp->frame_delta);
		HX_STACK_LINE(456)
		(this->dt_average_count)++;
		HX_STACK_LINE(458)
		int tmp1 = this->dt_average_count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(458)
		int tmp2 = this->dt_average_span;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(458)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(458)
		bool tmp4 = (tmp1 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(458)
		if ((tmp4)){
			HX_STACK_LINE(459)
			Float tmp5 = this->dt_average_accum;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(459)
			int tmp6 = this->dt_average_span;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(459)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(459)
			this->dt_average = tmp7;
			HX_STACK_LINE(460)
			Float tmp8 = this->dt_average;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(460)
			this->dt_average_accum = tmp8;
			HX_STACK_LINE(461)
			this->dt_average_count = (int)0;
		}
		HX_STACK_LINE(464)
		bool tmp5 = this->visible;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(464)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(464)
		if ((tmp6)){
			HX_STACK_LINE(465)
			return null();
		}
		HX_STACK_LINE(469)
		::luxe::debug::Inspector tmp7 = this->inspector;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(469)
		::luxe::debug::DebugView tmp8 = this->current_view;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(469)
		::String tmp9 = tmp8->get_name();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(469)
		::String tmp10 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(469)
		::String tmp11 = (tmp10 + HX_HCSTRING("] / ","\xf4","\x48","\x91","\x3d"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(469)
		Float tmp12 = this->dt_average;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(469)
		Float tmp13 = (Float((int)1) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(469)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(469)
		::String tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(469)
		::String tmp16 = (tmp15 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(469)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(469)
		{
			HX_STACK_LINE(469)
			Float tmp18 = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(469)
			Float n = tmp18;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(469)
			::luxe::Engine tmp19 = this->app;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(469)
			Float tmp20 = tmp19->frame_delta;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(469)
			Float tmp21 = n;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(469)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(469)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(469)
			Float tmp24 = n;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(469)
			tmp17 = (Float(tmp23) / Float(tmp24));
		}
		HX_STACK_LINE(469)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(469)
		::String tmp19 = (tmp18 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(469)
		Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(469)
		{
			HX_STACK_LINE(469)
			Float tmp21 = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(469)
			Float n = tmp21;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(469)
			Float tmp22 = this->dt_average;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(469)
			Float tmp23 = n;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(469)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(469)
			int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(469)
			Float tmp26 = n;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(469)
			tmp20 = (Float(tmp25) / Float(tmp26));
		}
		HX_STACK_LINE(469)
		::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(469)
		tmp7->title->set_text(tmp21);
		HX_STACK_LINE(471)
		{
			HX_STACK_LINE(471)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(471)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(471)
			while((true)){
				HX_STACK_LINE(471)
				bool tmp22 = (_g < _g1->length);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(471)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(471)
				if ((tmp23)){
					HX_STACK_LINE(471)
					break;
				}
				HX_STACK_LINE(471)
				::luxe::debug::DebugView tmp24 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(471)
				::luxe::debug::DebugView view = tmp24;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(471)
				++(_g);
				HX_STACK_LINE(472)
				view->process();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,process,(void))

Array< ::Dynamic > Debug_obj::views;

::String Debug_obj::debug_batch_tag;

cpp::ArrayBase Debug_obj::trace_callbacks;

bool Debug_obj::shut_down;

bool Debug_obj::tracing;

Void Debug_obj::internal_trace( Dynamic _value,Dynamic _info){
{
		HX_STACK_FRAME("luxe.Debug","internal_trace",0x7eeb5c56,"luxe.Debug.internal_trace","luxe/Debug.hx",220,0xe4198724)
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_info,"_info")
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			bool tmp = ::luxe::Debug_obj::tracing;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(222)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(222)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(222)
			if ((tmp2)){
				HX_STACK_LINE(214)
				::String tmp3 = HX_HCSTRING(" ( luxe.Debug: calling trace from a trace callback is an infinite loop!","\x49","\x5d","\xb7","\x53");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(214)
				::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(222)
				::String tmp5 = (HX_HCSTRING("tracing == false","\xc1","\x8b","\x93","\xba") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(222)
				::luxe::DebugError tmp6 = ::luxe::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(222)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(223)
		::luxe::Debug_obj::tracing = true;
		HX_STACK_LINE(225)
		Dynamic tmp = _value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		::String _out = tmp2;		HX_STACK_VAR(_out,"_out");
		HX_STACK_LINE(227)
		bool tmp3 = (_info != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(227)
		if ((tmp3)){
			HX_STACK_LINE(227)
			tmp4 = (_info->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic ) != null());
		}
		else{
			HX_STACK_LINE(227)
			tmp4 = false;
		}
		HX_STACK_LINE(227)
		if ((tmp4)){
			HX_STACK_LINE(228)
			::String tmp5 = _info->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(228)
			::String tmp6 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(228)
			hx::AddEq(_out,tmp6);
		}
		HX_STACK_LINE(232)
		__trace(_out,_info);
		HX_STACK_LINE(237)
		bool tmp5 = ::luxe::Debug_obj::shut_down;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(237)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(237)
		if ((tmp6)){
			HX_STACK_LINE(238)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			cpp::ArrayBase _g1 = ::luxe::Debug_obj::trace_callbacks;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(238)
			while((true)){
				HX_STACK_LINE(238)
				bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(238)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(238)
				if ((tmp8)){
					HX_STACK_LINE(238)
					break;
				}
				HX_STACK_LINE(238)
				Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(238)
				Dynamic _callback = tmp9;		HX_STACK_VAR(_callback,"_callback");
				HX_STACK_LINE(238)
				++(_g);
				HX_STACK_LINE(239)
				Dynamic tmp10 = _value;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(239)
				Dynamic tmp11 = _info;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(239)
				_callback(tmp10,tmp11).Cast< Void >();
			}
		}
		HX_STACK_LINE(243)
		::luxe::Debug_obj::tracing = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,internal_trace,(void))


Debug_obj::Debug_obj()
{
}

void Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Debug);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(inspector,"inspector");
	HX_MARK_MEMBER_NAME(overlay,"overlay");
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(debug_font,"debug_font");
	HX_MARK_MEMBER_NAME(dt_average,"dt_average");
	HX_MARK_MEMBER_NAME(dt_average_accum,"dt_average_accum");
	HX_MARK_MEMBER_NAME(dt_average_span,"dt_average_span");
	HX_MARK_MEMBER_NAME(dt_average_count,"dt_average_count");
	HX_MARK_MEMBER_NAME(current_view_index,"current_view_index");
	HX_MARK_MEMBER_NAME(last_view_index,"last_view_index");
	HX_MARK_MEMBER_NAME(current_view,"current_view");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(profile_path,"profile_path");
	HX_MARK_MEMBER_NAME(profiling,"profiling");
	HX_MARK_MEMBER_NAME(last_cursor_grab,"last_cursor_grab");
	HX_MARK_END_CLASS();
}

void Debug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(inspector,"inspector");
	HX_VISIT_MEMBER_NAME(overlay,"overlay");
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(debug_font,"debug_font");
	HX_VISIT_MEMBER_NAME(dt_average,"dt_average");
	HX_VISIT_MEMBER_NAME(dt_average_accum,"dt_average_accum");
	HX_VISIT_MEMBER_NAME(dt_average_span,"dt_average_span");
	HX_VISIT_MEMBER_NAME(dt_average_count,"dt_average_count");
	HX_VISIT_MEMBER_NAME(current_view_index,"current_view_index");
	HX_VISIT_MEMBER_NAME(last_view_index,"last_view_index");
	HX_VISIT_MEMBER_NAME(current_view,"current_view");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(profile_path,"profile_path");
	HX_VISIT_MEMBER_NAME(profiling,"profiling");
	HX_VISIT_MEMBER_NAME(last_cursor_grab,"last_cursor_grab");
}

Dynamic Debug_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"overlay") ) { return overlay; }
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"padding") ) { return padding; }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"touchup") ) { return touchup_dyn(); }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_view") ) { return get_view_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inspector") ) { return inspector; }
		if (HX_FIELD_EQ(inName,"profiling") ) { return profiling; }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"touchdown") ) { return touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"touchmove") ) { return touchmove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_font") ) { return debug_font; }
		if (HX_FIELD_EQ(inName,"dt_average") ) { return dt_average; }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switch_view") ) { return switch_view_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_view") ) { return current_view; }
		if (HX_FIELD_EQ(inName,"profile_path") ) { return profile_path; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dt_average_span") ) { return dt_average_span; }
		if (HX_FIELD_EQ(inName,"last_view_index") ) { return last_view_index; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dt_average_accum") ) { return dt_average_accum; }
		if (HX_FIELD_EQ(inName,"dt_average_count") ) { return dt_average_count; }
		if (HX_FIELD_EQ(inName,"last_cursor_grab") ) { return last_cursor_grab; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"current_view_index") ) { return current_view_index; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"create_debug_console") ) { return create_debug_console_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"views") ) { outValue = views; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tracing") ) { outValue = tracing; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shut_down") ) { outValue = shut_down; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internal_trace") ) { outValue = internal_trace_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"debug_batch_tag") ) { outValue = debug_batch_tag; return true;  }
		if (HX_FIELD_EQ(inName,"trace_callbacks") ) { outValue = trace_callbacks; return true;  }
	}
	return false;
}

Dynamic Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::luxe::Engine >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overlay") ) { overlay=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { padding=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inspector") ) { inspector=inValue.Cast< ::luxe::debug::Inspector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"profiling") ) { profiling=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_font") ) { debug_font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average") ) { dt_average=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_view") ) { current_view=inValue.Cast< ::luxe::debug::DebugView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"profile_path") ) { profile_path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dt_average_span") ) { dt_average_span=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_view_index") ) { last_view_index=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dt_average_accum") ) { dt_average_accum=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average_count") ) { dt_average_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_cursor_grab") ) { last_cursor_grab=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"current_view_index") ) { current_view_index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Debug_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"views") ) { views=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tracing") ) { tracing=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shut_down") ) { shut_down=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"debug_batch_tag") ) { debug_batch_tag=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"trace_callbacks") ) { trace_callbacks=ioValue.Cast< cpp::ArrayBase >(); return true; }
	}
	return false;
}

void Debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("inspector","\xf7","\xf9","\x0e","\xf8"));
	outFields->push(HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"));
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62"));
	outFields->push(HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f"));
	outFields->push(HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34"));
	outFields->push(HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30"));
	outFields->push(HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63"));
	outFields->push(HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c"));
	outFields->push(HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57"));
	outFields->push(HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3"));
	outFields->push(HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"));
	outFields->push(HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Engine*/ ,(int)offsetof(Debug_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsBool,(int)offsetof(Debug_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::luxe::debug::Inspector*/ ,(int)offsetof(Debug_obj,inspector),HX_HCSTRING("inspector","\xf7","\xf9","\x0e","\xf8")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Debug_obj,overlay),HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Debug_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Debug_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(Debug_obj,debug_font),HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62")},
	{hx::fsFloat,(int)offsetof(Debug_obj,dt_average),HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f")},
	{hx::fsFloat,(int)offsetof(Debug_obj,dt_average_accum),HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34")},
	{hx::fsInt,(int)offsetof(Debug_obj,dt_average_span),HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30")},
	{hx::fsInt,(int)offsetof(Debug_obj,dt_average_count),HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63")},
	{hx::fsInt,(int)offsetof(Debug_obj,current_view_index),HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c")},
	{hx::fsInt,(int)offsetof(Debug_obj,last_view_index),HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57")},
	{hx::fsObject /*::luxe::debug::DebugView*/ ,(int)offsetof(Debug_obj,current_view),HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Debug_obj,padding),HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")},
	{hx::fsString,(int)offsetof(Debug_obj,profile_path),HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3")},
	{hx::fsBool,(int)offsetof(Debug_obj,profiling),HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f")},
	{hx::fsBool,(int)offsetof(Debug_obj,last_cursor_grab),HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Debug_obj::views,HX_HCSTRING("views","\x6e","\xe6","\xfc","\x36")},
	{hx::fsString,(void *) &Debug_obj::debug_batch_tag,HX_HCSTRING("debug_batch_tag","\xe9","\xff","\x5e","\xf0")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Debug_obj::trace_callbacks,HX_HCSTRING("trace_callbacks","\x94","\x35","\x4d","\xe8")},
	{hx::fsBool,(void *) &Debug_obj::shut_down,HX_HCSTRING("shut_down","\x8d","\xbd","\x24","\x57")},
	{hx::fsBool,(void *) &Debug_obj::tracing,HX_HCSTRING("tracing","\x02","\x63","\x07","\x88")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("inspector","\xf7","\xf9","\x0e","\xf8"),
	HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"),
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62"),
	HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f"),
	HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34"),
	HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30"),
	HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63"),
	HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c"),
	HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57"),
	HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5"),
	HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"),
	HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3"),
	HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"),
	HX_HCSTRING("get_view","\xee","\xed","\x09","\xce"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("create_debug_console","\x68","\xba","\x8d","\x98"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("touchup","\xda","\x2b","\xf8","\xd8"),
	HX_HCSTRING("touchdown","\xa1","\x5b","\x01","\x1d"),
	HX_HCSTRING("touchmove","\x50","\x46","\xf4","\x22"),
	HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("switch_view","\xd0","\x6f","\xb2","\x61"),
	HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Debug_obj::views,"views");
	HX_MARK_MEMBER_NAME(Debug_obj::debug_batch_tag,"debug_batch_tag");
	HX_MARK_MEMBER_NAME(Debug_obj::trace_callbacks,"trace_callbacks");
	HX_MARK_MEMBER_NAME(Debug_obj::shut_down,"shut_down");
	HX_MARK_MEMBER_NAME(Debug_obj::tracing,"tracing");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Debug_obj::views,"views");
	HX_VISIT_MEMBER_NAME(Debug_obj::debug_batch_tag,"debug_batch_tag");
	HX_VISIT_MEMBER_NAME(Debug_obj::trace_callbacks,"trace_callbacks");
	HX_VISIT_MEMBER_NAME(Debug_obj::shut_down,"shut_down");
	HX_VISIT_MEMBER_NAME(Debug_obj::tracing,"tracing");
};

#endif

hx::Class Debug_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("views","\x6e","\xe6","\xfc","\x36"),
	HX_HCSTRING("debug_batch_tag","\xe9","\xff","\x5e","\xf0"),
	HX_HCSTRING("trace_callbacks","\x94","\x35","\x4d","\xe8"),
	HX_HCSTRING("shut_down","\x8d","\xbd","\x24","\x57"),
	HX_HCSTRING("tracing","\x02","\x63","\x07","\x88"),
	HX_HCSTRING("internal_trace","\xc3","\xc8","\x61","\x02"),
	::String(null()) };

void Debug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Debug","\x7b","\x43","\x14","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &Debug_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Debug_obj >;
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

void Debug_obj::__boot()
{
	debug_batch_tag= HX_HCSTRING("batcher.debug_batcher","\x74","\xad","\x60","\x92");
	trace_callbacks= cpp::ArrayBase_obj::__new();
	shut_down= false;
	tracing= false;
}

} // end namespace luxe
