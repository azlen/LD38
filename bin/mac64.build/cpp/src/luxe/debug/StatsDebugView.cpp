#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
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
#ifndef INCLUDED_luxe_ResourceStats
#include <luxe/ResourceStats.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
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
#ifndef INCLUDED_luxe_debug_StatsDebugView
#include <luxe/debug/StatsDebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_AudioResource
#include <luxe/resource/AudioResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_TextResource
#include <luxe/resource/TextResource.h>
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
#ifndef INCLUDED_luxe_tween_easing_Linear
#include <luxe/tween/easing/Linear.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetText
#include <snow/systems/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_systems_audio_AudioSource
#include <snow/systems/audio/AudioSource.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace luxe{
namespace debug{

Void StatsDebugView_obj::__construct(::luxe::Debug _debug)
{
HX_STACK_FRAME("luxe.debug.StatsDebugView","new",0x9c8136be,"luxe.debug.StatsDebugView.new","luxe/debug/StatsDebugView.hx",13,0x06813970)
HX_STACK_THIS(this)
HX_STACK_ARG(_debug,"_debug")
{
	HX_STACK_LINE(95)
	this->margin = (int)32;
	HX_STACK_LINE(20)
	this->font_size = (int)15;
	HX_STACK_LINE(19)
	this->debug_geometry_count = (int)13;
	HX_STACK_LINE(18)
	this->debug_draw_call_count = (int)3;
	HX_STACK_LINE(28)
	::luxe::Debug tmp = _debug;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	super::__construct(tmp);
	HX_STACK_LINE(30)
	this->set_name(HX_HCSTRING("Statistics","\x43","\xdb","\xe9","\xf0"));
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",32,0x06813970)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e") , (int)0,false);
				__result->Add(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12") , (int)0,false);
				__result->Add(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66") , (int)0,false);
				__result->Add(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c") , (int)0,false);
				__result->Add(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70") , (int)0,false);
				__result->Add(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a") , (int)0,false);
				__result->Add(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(32)
	Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	this->_last_render_stats = tmp1;
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",42,0x06813970)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e") , (int)0,false);
				__result->Add(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12") , (int)0,false);
				__result->Add(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66") , (int)0,false);
				__result->Add(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c") , (int)0,false);
				__result->Add(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70") , (int)0,false);
				__result->Add(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a") , (int)0,false);
				__result->Add(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(42)
	Dynamic tmp2 = _Function_1_2::Block();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	this->_render_stats = tmp2;
}
;
	return null();
}

//StatsDebugView_obj::~StatsDebugView_obj() { }

Dynamic StatsDebugView_obj::__CreateEmpty() { return  new StatsDebugView_obj; }
hx::ObjectPtr< StatsDebugView_obj > StatsDebugView_obj::__new(::luxe::Debug _debug)
{  hx::ObjectPtr< StatsDebugView_obj > _result_ = new StatsDebugView_obj();
	_result_->__construct(_debug);
	return _result_;}

Dynamic StatsDebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StatsDebugView_obj > _result_ = new StatsDebugView_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String StatsDebugView_obj::get_resource_stats_string( ){
	HX_STACK_FRAME("luxe.debug.StatsDebugView","get_resource_stats_string",0x687d7ab7,"luxe.debug.StatsDebugView.get_resource_stats_string","luxe/debug/StatsDebugView.hx",54,0x06813970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::luxe::ResourceStats tmp1 = tmp->stats;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,get_resource_stats_string,return )

::String StatsDebugView_obj::get_batcher_info( ::phoenix::Batcher b){
	HX_STACK_FRAME("luxe.debug.StatsDebugView","get_batcher_info",0x01c897b1,"luxe.debug.StatsDebugView.get_batcher_info","luxe/debug/StatsDebugView.hx",60,0x06813970)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(61)
	::String tmp = (HX_HCSTRING("  ","\x00","\x1c","\x00","\x00") + b->name);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	::String tmp1 = (tmp + HX_HCSTRING(" (enabled ","\x87","\x50","\xba","\xeb"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	bool tmp2 = b->enabled;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	::String tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	::String tmp5 = (tmp4 + HX_HCSTRING(", layer ","\xa3","\x8a","\x0b","\x60"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	int tmp6 = b->layer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(61)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(61)
	::String tmp8 = (tmp7 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(61)
	::String _s = tmp8;		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(62)
	bool tmp9 = (b->shader == null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(62)
	::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(62)
	if ((tmp9)){
		HX_STACK_LINE(62)
		tmp10 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
	}
	else{
		HX_STACK_LINE(62)
		tmp10 = b->shader->id;
	}
	HX_STACK_LINE(62)
	::String tmp11 = (HX_HCSTRING("    shader: ","\x0b","\xfd","\x61","\xf1") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(62)
	::String tmp12 = (tmp11 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(62)
	hx::AddEq(_s,tmp12);
	HX_STACK_LINE(63)
	::String tmp13 = (HX_HCSTRING("    max verts/batch: ","\xb7","\x5e","\x9e","\xf5") + b->max_verts);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(63)
	::String tmp14 = (tmp13 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(63)
	hx::AddEq(_s,tmp14);
	HX_STACK_LINE(64)
	::String tmp15 = (HX_HCSTRING("    visible geom: ","\x50","\xc2","\x5d","\xea") + b->visible_count);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(64)
	::String tmp16 = (tmp15 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(64)
	hx::AddEq(_s,tmp16);
	HX_STACK_LINE(65)
	::String tmp17 = (HX_HCSTRING("    verts: ","\xc8","\x4d","\x3a","\x27") + b->vert_count);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(65)
	::String tmp18 = (tmp17 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(65)
	hx::AddEq(_s,tmp18);
	HX_STACK_LINE(66)
	::String tmp19 = (HX_HCSTRING("    draw calls: ","\xdf","\x5f","\x2f","\x0a") + b->draw_calls);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(66)
	::String tmp20 = (tmp19 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(66)
	hx::AddEq(_s,tmp20);
	HX_STACK_LINE(67)
	::String tmp21 = (HX_HCSTRING("    batched: ","\x7f","\xb5","\x6a","\x13") + b->dynamic_batched_count);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(67)
	::String tmp22 = (tmp21 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(67)
	hx::AddEq(_s,tmp22);
	HX_STACK_LINE(68)
	::String tmp23 = (HX_HCSTRING("    static: ","\xd4","\x4e","\x66","\x1d") + b->static_batched_count);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(68)
	::String tmp24 = (tmp23 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(68)
	hx::AddEq(_s,tmp24);
	HX_STACK_LINE(69)
	::String tmp25 = _s;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(69)
	return tmp25;
}


HX_DEFINE_DYNAMIC_FUNC1(StatsDebugView_obj,get_batcher_info,return )

::String StatsDebugView_obj::get_render_stats_string( ){
	HX_STACK_FRAME("luxe.debug.StatsDebugView","get_render_stats_string",0xb1344fef,"luxe.debug.StatsDebugView.get_render_stats_string","luxe/debug/StatsDebugView.hx",72,0x06813970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	::String _bs = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_bs,"_bs");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		Array< ::Dynamic > _g1 = ::phoenix::Batcher_obj::all;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(76)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(76)
			if ((tmp1)){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(76)
			::phoenix::Batcher tmp2 = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			::phoenix::Batcher b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(76)
			++(_g);
			HX_STACK_LINE(77)
			bool tmp3 = (b->show_stats != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			if ((tmp3)){
				HX_STACK_LINE(78)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					::String tmp5 = (HX_HCSTRING("  ","\x00","\x1c","\x00","\x00") + b->name);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(78)
					::String tmp6 = (tmp5 + HX_HCSTRING(" (enabled ","\x87","\x50","\xba","\xeb"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(78)
					bool tmp7 = b->enabled;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(78)
					::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(78)
					::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(78)
					::String tmp10 = (tmp9 + HX_HCSTRING(", layer ","\xa3","\x8a","\x0b","\x60"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(78)
					int tmp11 = b->layer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(78)
					::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(78)
					::String tmp13 = (tmp12 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(78)
					::String _s = tmp13;		HX_STACK_VAR(_s,"_s");
					HX_STACK_LINE(78)
					bool tmp14 = (b->shader == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(78)
					::String tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(78)
					if ((tmp14)){
						HX_STACK_LINE(78)
						tmp15 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
					}
					else{
						HX_STACK_LINE(78)
						tmp15 = b->shader->id;
					}
					HX_STACK_LINE(78)
					::String tmp16 = (HX_HCSTRING("    shader: ","\x0b","\xfd","\x61","\xf1") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(78)
					::String tmp17 = (tmp16 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(78)
					hx::AddEq(_s,tmp17);
					HX_STACK_LINE(78)
					::String tmp18 = (HX_HCSTRING("    max verts/batch: ","\xb7","\x5e","\x9e","\xf5") + b->max_verts);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(78)
					::String tmp19 = (tmp18 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(78)
					hx::AddEq(_s,tmp19);
					HX_STACK_LINE(78)
					::String tmp20 = (HX_HCSTRING("    visible geom: ","\x50","\xc2","\x5d","\xea") + b->visible_count);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(78)
					::String tmp21 = (tmp20 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(78)
					hx::AddEq(_s,tmp21);
					HX_STACK_LINE(78)
					::String tmp22 = (HX_HCSTRING("    verts: ","\xc8","\x4d","\x3a","\x27") + b->vert_count);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(78)
					::String tmp23 = (tmp22 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(78)
					hx::AddEq(_s,tmp23);
					HX_STACK_LINE(78)
					::String tmp24 = (HX_HCSTRING("    draw calls: ","\xdf","\x5f","\x2f","\x0a") + b->draw_calls);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(78)
					::String tmp25 = (tmp24 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(78)
					hx::AddEq(_s,tmp25);
					HX_STACK_LINE(78)
					::String tmp26 = (HX_HCSTRING("    batched: ","\x7f","\xb5","\x6a","\x13") + b->dynamic_batched_count);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(78)
					::String tmp27 = (tmp26 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(78)
					hx::AddEq(_s,tmp27);
					HX_STACK_LINE(78)
					::String tmp28 = (HX_HCSTRING("    static: ","\xd4","\x4e","\x66","\x1d") + b->static_batched_count);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(78)
					::String tmp29 = (tmp28 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(78)
					hx::AddEq(_s,tmp29);
					HX_STACK_LINE(78)
					tmp4 = _s;
				}
				HX_STACK_LINE(78)
				hx::AddEq(_bs,tmp4);
			}
		}
	}
	HX_STACK_LINE(83)
	::String tmp = HX_HCSTRING("Renderer Statistics\n\ntotal geometry : ","\x58","\x75","\x54","\xca");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	Dynamic tmp1 = this->_render_stats;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	int tmp2 = tmp1->__Field(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	::String tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	::String tmp4 = (tmp3 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	::String tmp5 = (tmp4 + HX_HCSTRING("visible geometry : ","\xa6","\xc2","\xc2","\x90"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	Dynamic tmp6 = this->_render_stats;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	int tmp7 = tmp6->__Field(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(83)
	::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(83)
	::String tmp9 = (tmp8 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(83)
	::String tmp10 = (tmp9 + HX_HCSTRING("dynamic batch count : ","\xfe","\xf1","\xd0","\xe5"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(86)
	Dynamic tmp11 = this->_render_stats;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(86)
	int tmp12 = tmp11->__Field(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(83)
	::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(83)
	::String tmp14 = (tmp13 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(83)
	::String tmp15 = (tmp14 + HX_HCSTRING("static batch count : ","\xaf","\xe1","\x4e","\xf4"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(87)
	Dynamic tmp16 = this->_render_stats;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(87)
	int tmp17 = tmp16->__Field(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(83)
	::String tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(83)
	::String tmp19 = (tmp18 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(83)
	::String tmp20 = (tmp19 + HX_HCSTRING("total draw calls : ","\x11","\x66","\x61","\xe8"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(88)
	Dynamic tmp21 = this->_render_stats;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(88)
	int tmp22 = tmp21->__Field(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(83)
	::String tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(83)
	::String tmp24 = (tmp23 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(83)
	::String tmp25 = (tmp24 + HX_HCSTRING("total vert count : ","\x4a","\x7d","\xf0","\xcd"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(89)
	Dynamic tmp26 = this->_render_stats;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(89)
	int tmp27 = tmp26->__Field(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(83)
	::String tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(83)
	::String tmp29 = (tmp28 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(83)
	::String tmp30 = (tmp29 + HX_HCSTRING("batchers : ","\x5a","\x06","\xd0","\x1b"));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(90)
	Dynamic tmp31 = this->_render_stats;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(90)
	int tmp32 = tmp31->__Field(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(83)
	::String tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(83)
	::String tmp34 = (tmp33 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(91)
	::String tmp35 = _bs;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(83)
	::String tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(82)
	return tmp36;
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,get_render_stats_string,return )

Void StatsDebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","create",0xa3e7cf5e,"luxe.debug.StatsDebugView.create","luxe/debug/StatsDebugView.hx",96,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		::luxe::debug::StatsDebugView _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		::luxe::Debug tmp = ::Luxe_obj::debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		::luxe::Debug debug = tmp;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(104)
		::phoenix::Color tmp1 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		::phoenix::Color tmp2 = tmp1->rgb((int)16121979);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		::phoenix::Renderer tmp4 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		::phoenix::BitmapFont tmp5 = tmp4->font;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		::String tmp6 = this->get_render_stats_string();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		int tmp7 = this->font_size;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(109)
		::phoenix::Batcher tmp9 = debug->batcher;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::BitmapFont &tmp5,::String &tmp6,::phoenix::Batcher &tmp9,::phoenix::Color &tmp2,::phoenix::Vector &tmp3,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",100,0x06813970)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.render.stats","\x02","\xa2","\x35","\x30"),false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.3),false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp2,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp3,false);
					__result->Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43") , tmp5,false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp6,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , tmp8,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp9,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(100)
		Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp2,tmp3,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		::luxe::Text tmp11 = ::luxe::Text_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		this->render_stats_text = tmp11;
		HX_STACK_LINE(117)
		::phoenix::Color tmp12 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(117)
		::phoenix::Color tmp13 = tmp12->rgb((int)16121979);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(118)
		::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(119)
		::phoenix::Renderer tmp15 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(119)
		::phoenix::BitmapFont tmp16 = tmp15->font;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(122)
		int tmp17 = this->font_size;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(122)
		Float tmp18 = (tmp17 * ((Float)0.9));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(123)
		::phoenix::Batcher tmp19 = debug->batcher;		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Color &tmp13,::phoenix::Batcher &tmp19,::phoenix::BitmapFont &tmp16,Float &tmp18,::phoenix::Vector &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",113,0x06813970)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.resource.stats","\x3a","\xf2","\xc9","\xaa"),false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.3),false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp13,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp14,false);
					__result->Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43") , tmp16,false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
					__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , (int)1,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , tmp18,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp19,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(113)
		Dynamic tmp20 = _Function_1_2::Block(tmp13,tmp19,tmp16,tmp18,tmp14);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(113)
		::luxe::Text tmp21 = ::luxe::Text_obj::__new(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(113)
		this->resource_list_text = tmp21;
		HX_STACK_LINE(127)
		::luxe::Text tmp22 = this->render_stats_text;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(127)
		tmp22->geometry->id = HX_HCSTRING("debug.render.stats.geometry","\x9e","\xee","\xa4","\xfb");
		HX_STACK_LINE(128)
		::luxe::Text tmp23 = this->render_stats_text;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(128)
		tmp23->geometry->id = HX_HCSTRING("debug.resource.stats.geometry","\x66","\xd7","\x50","\xe4");
		HX_STACK_LINE(130)
		this->resize();
		HX_STACK_LINE(132)
		::luxe::Resources tmp24 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp24,"tmp24");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::luxe::debug::StatsDebugView,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","luxe/debug/StatsDebugView.hx",132,0x06813970)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(132)
				bool tmp25 = _g->visible;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(132)
				if ((tmp25)){
					HX_STACK_LINE(132)
					_g->refresh();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(132)
		tmp24->on((int)1, Dynamic(new _Function_1_3(_g)));
	}
return null();
}


Void StatsDebugView_obj::resize( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","resize",0x3053c256,"luxe.debug.StatsDebugView.resize","luxe/debug/StatsDebugView.hx",136,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		::luxe::Text tmp = this->resource_list_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		if ((tmp2)){
			HX_STACK_LINE(139)
			::luxe::Text tmp4 = this->render_stats_text;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			::luxe::Text tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(138)
			tmp3 = true;
		}
		HX_STACK_LINE(138)
		if ((tmp3)){
			HX_STACK_LINE(140)
			return null();
		}
		HX_STACK_LINE(143)
		::luxe::Debug tmp4 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		::luxe::Debug debug = tmp4;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(146)
		::phoenix::Vector tmp5 = debug->inspector->pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(146)
		int tmp7 = this->margin;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(146)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(147)
		::phoenix::Vector tmp10 = debug->inspector->pos;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(147)
		Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(147)
		int tmp12 = this->margin;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(147)
		Float tmp13 = (tmp12 * ((Float)1.5));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(147)
		Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(148)
		::phoenix::Vector tmp15 = debug->inspector->size;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(148)
		Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(148)
		int tmp17 = this->margin;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(148)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(149)
		::phoenix::Vector tmp19 = debug->inspector->size;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(149)
		Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(149)
		int tmp21 = this->margin;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(149)
		Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(149)
		int tmp23 = this->margin;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(149)
		Float tmp24 = (tmp23 * ((Float)1.5));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(149)
		Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(145)
		::phoenix::Rectangle tmp26 = ::phoenix::Rectangle_obj::__new(tmp9,tmp14,tmp18,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(145)
		::phoenix::Rectangle viewrect = tmp26;		HX_STACK_VAR(viewrect,"viewrect");
		HX_STACK_LINE(152)
		Float tmp27 = debug->padding->x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(152)
		int tmp28 = this->margin;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(152)
		Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(152)
		Float left = tmp29;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(153)
		Float tmp30 = debug->padding->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(153)
		::phoenix::Vector tmp31 = debug->inspector->size;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(153)
		Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(153)
		Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(153)
		int tmp34 = this->margin;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(153)
		Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(153)
		Float right = tmp35;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(154)
		Float tmp36 = debug->padding->y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(154)
		int tmp37 = this->margin;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(154)
		Float tmp38 = (tmp37 * ((Float)1.5));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(154)
		Float tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(154)
		Float top = tmp39;		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(155)
		::luxe::Text tmp40 = this->render_stats_text;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(155)
		Float tmp41 = tmp40->text_bounds->w;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(155)
		Float render_w = tmp41;		HX_STACK_VAR(render_w,"render_w");
		HX_STACK_LINE(156)
		::luxe::Text tmp42 = this->render_stats_text;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(156)
		Float tmp43 = tmp42->text_bounds->h;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(156)
		Float render_h = tmp43;		HX_STACK_VAR(render_h,"render_h");
		HX_STACK_LINE(158)
		::luxe::Text tmp44 = this->resource_list_text;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(158)
		bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(158)
		if ((tmp45)){
			HX_STACK_LINE(159)
			::luxe::Text tmp46 = this->resource_list_text;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(159)
			::phoenix::Vector tmp47 = ::phoenix::Vector_obj::__new(right,top,null(),null());		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(159)
			tmp46->set_pos(tmp47);
			HX_STACK_LINE(160)
			::luxe::Text tmp48 = this->resource_list_text;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(160)
			::phoenix::Rectangle tmp49 = viewrect;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(160)
			tmp48->set_clip_rect(tmp49);
		}
		HX_STACK_LINE(163)
		::luxe::Text tmp46 = this->render_stats_text;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(163)
		bool tmp47 = (tmp46 != null());		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(163)
		if ((tmp47)){
			HX_STACK_LINE(164)
			::luxe::Text tmp48 = this->render_stats_text;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(164)
			::phoenix::Vector tmp49 = ::phoenix::Vector_obj::__new(left,top,null(),null());		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(164)
			tmp48->set_pos(tmp49);
			HX_STACK_LINE(165)
			::luxe::Text tmp50 = this->render_stats_text;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(165)
			::phoenix::Rectangle tmp51 = viewrect;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(165)
			tmp50->set_clip_rect(tmp51);
		}
		HX_STACK_LINE(168)
		this->reset_tween();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,resize,(void))

Void StatsDebugView_obj::onwindowsized( ::snow::types::WindowEvent e){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","onwindowsized",0xc009fbb2,"luxe.debug.StatsDebugView.onwindowsized","luxe/debug/StatsDebugView.hx",172,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(172)
		this->resize();
	}
return null();
}


Void StatsDebugView_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","refresh",0xa2a3c739,"luxe.debug.StatsDebugView.refresh","luxe/debug/StatsDebugView.hx",174,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		::String bytes_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(bytes_lists,"bytes_lists");
		HX_STACK_LINE(177)
		::String text_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(text_lists,"text_lists");
		HX_STACK_LINE(178)
		::String json_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(json_lists,"json_lists");
		HX_STACK_LINE(179)
		::String texture_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(texture_lists,"texture_lists");
		HX_STACK_LINE(180)
		::String rtt_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(rtt_lists,"rtt_lists");
		HX_STACK_LINE(181)
		::String font_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(font_lists,"font_lists");
		HX_STACK_LINE(182)
		::String shader_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(shader_lists,"shader_lists");
		HX_STACK_LINE(183)
		::String audio_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(audio_lists,"audio_lists");
		HX_STACK_LINE(185)
		int _total_txt = (int)0;		HX_STACK_VAR(_total_txt,"_total_txt");
		HX_STACK_LINE(186)
		int _total_tex = (int)0;		HX_STACK_VAR(_total_tex,"_total_tex");
		HX_STACK_LINE(187)
		int _total_rtt = (int)0;		HX_STACK_VAR(_total_rtt,"_total_rtt");
		HX_STACK_LINE(188)
		Array< int > _total_snd = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(_total_snd,"_total_snd");
		HX_STACK_LINE(189)
		int _total_all = (int)0;		HX_STACK_VAR(_total_all,"_total_all");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< int >,_total_snd)
		int __ArgCount() const { return 1; }
		::String run(::luxe::resource::AudioResource res){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/debug/StatsDebugView.hx",207,0x06813970)
			HX_STACK_ARG(res,"res")
			{
				HX_STACK_LINE(207)
				Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(207)
				{
					HX_STACK_LINE(208)
					::String _s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_s,"_s");
					HX_STACK_LINE(209)
					bool tmp1 = (res->source != null());		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(209)
					if ((tmp1)){
						HX_STACK_LINE(210)
						::snow::types::AudioData tmp2 = res->source->data;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(210)
						bool tmp3 = tmp2->is_stream;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(210)
						::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(210)
						if ((tmp3)){
							HX_STACK_LINE(210)
							tmp4 = HX_HCSTRING("STREAM \xe2""\x80""\xa2""","\xe4","\xc1","\xac","\x7f");
						}
						else{
							HX_STACK_LINE(210)
							tmp4 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(210)
						hx::AddEq(_s,tmp4);
						HX_STACK_LINE(211)
						::String tmp5 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + res->id);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(211)
						::String tmp6 = (tmp5 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(211)
						int tmp7 = res->ref;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(211)
						::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(211)
						::String tmp9 = (tmp8 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(211)
						hx::AddEq(_s,tmp9);
						HX_STACK_LINE(212)
						::snow::types::AudioData tmp10 = res->source->data;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(212)
						bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(212)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(212)
						if ((tmp11)){
							HX_STACK_LINE(212)
							::snow::types::AudioData tmp13 = res->source->data;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(212)
							::snow::types::AudioData tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(212)
							bool tmp15 = tmp14->is_stream;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(212)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(212)
							tmp12 = !(tmp16);
						}
						else{
							HX_STACK_LINE(212)
							tmp12 = false;
						}
						HX_STACK_LINE(212)
						if ((tmp12)){
							HX_STACK_LINE(213)
							::luxe::utils::Utils tmp13 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(213)
							::snow::types::AudioData tmp14 = res->source->data;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(213)
							int tmp15 = tmp14->length;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(213)
							::String tmp16 = tmp13->bytes_to_string(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(213)
							::String tmp17 = (HX_HCSTRING("~","\x7e","\x00","\x00","\x00") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(213)
							hx::AddEq(_s,tmp17);
							HX_STACK_LINE(214)
							::snow::types::AudioData tmp18 = res->source->data;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(214)
							hx::AddEq(_total_snd[(int)0],tmp18->length);
						}
						HX_STACK_LINE(216)
						::snow::types::AudioData tmp13 = res->source->data;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(216)
						bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(216)
						if ((tmp14)){
							HX_STACK_LINE(217)
							::snow::types::AudioData tmp15 = res->source->data;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(217)
							int tmp16 = tmp15->channels;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(217)
							::String tmp17 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(217)
							::String tmp18 = (tmp17 + HX_HCSTRING("ch","\xa5","\x56","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(217)
							hx::AddEq(_s,tmp18);
							HX_STACK_LINE(218)
							Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(218)
							{
								HX_STACK_LINE(218)
								Float tmp20 = ::Math_obj::pow((int)10,(int)1);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(218)
								Float n = tmp20;		HX_STACK_VAR(n,"n");
								HX_STACK_LINE(218)
								::snow::types::AudioData tmp21 = res->source->data;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(218)
								int tmp22 = tmp21->rate;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(218)
								Float tmp23 = (Float(tmp22) / Float((int)1000));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(218)
								Float tmp24 = n;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(218)
								Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(218)
								int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(218)
								Float tmp27 = n;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(218)
								tmp19 = (Float(tmp26) / Float(tmp27));
							}
							HX_STACK_LINE(218)
							::String tmp20 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(218)
							::String tmp21 = (tmp20 + HX_HCSTRING("khz","\x3d","\x8c","\x51","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(218)
							hx::AddEq(_s,tmp21);
							HX_STACK_LINE(219)
							::String tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(219)
							{
								HX_STACK_LINE(219)
								::snow::types::AudioData tmp23 = res->source->data;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(219)
								Dynamic this1 = tmp23->format;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(219)
								bool tmp24 = (this1 != null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(219)
								if ((tmp24)){
									HX_STACK_LINE(219)
									Dynamic tmp25 = this1;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(219)
									switch( (int)(tmp25)){
										case (int)0: {
											HX_STACK_LINE(219)
											tmp22 = HX_HCSTRING("af_unknown","\xf0","\xbe","\x9a","\x03");
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(219)
											tmp22 = HX_HCSTRING("af_custom","\x0b","\xdb","\x9b","\x65");
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(219)
											tmp22 = HX_HCSTRING("af_ogg","\xb5","\x04","\x9d","\xc2");
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(219)
											tmp22 = HX_HCSTRING("af_wav","\x92","\x11","\xa3","\xc2");
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(219)
											tmp22 = HX_HCSTRING("af_pcm","\x80","\xc3","\x9d","\xc2");
										}
										;break;
										default: {
											HX_STACK_LINE(219)
											tmp22 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
										}
									}
								}
								else{
									HX_STACK_LINE(219)
									tmp22 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
								}
							}
							HX_STACK_LINE(219)
							::String tmp23 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(219)
							hx::AddEq(_s,tmp23);
							HX_STACK_LINE(220)
							Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(220)
							{
								HX_STACK_LINE(220)
								Float tmp25 = res->source->duration();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(220)
								Float value = tmp25;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(220)
								Float tmp26 = ::Math_obj::pow((int)10,(int)4);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(220)
								Float n = tmp26;		HX_STACK_VAR(n,"n");
								HX_STACK_LINE(220)
								Float tmp27 = (value * n);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(220)
								int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(220)
								Float tmp29 = n;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(220)
								tmp24 = (Float(tmp28) / Float(tmp29));
							}
							HX_STACK_LINE(220)
							::String tmp25 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(220)
							::String tmp26 = (tmp25 + HX_HCSTRING("s","\x73","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(220)
							hx::AddEq(_s,tmp26);
						}
						HX_STACK_LINE(222)
						hx::AddEq(_s,HX_HCSTRING("\t\t\n\n","\xa0","\xc8","\xf9","\x05"));
					}
					else{
						HX_STACK_LINE(224)
						::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + res->id);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(224)
						::String tmp3 = (tmp2 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(224)
						int tmp4 = res->ref;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(224)
						::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(224)
						::String tmp6 = (tmp5 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(224)
						hx::AddEq(_s,tmp6);
					}
					HX_STACK_LINE(227)
					::String tmp2 = _s;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(227)
					return tmp2;
				}
				HX_STACK_LINE(207)
				return tmp;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(207)
		Dynamic _snd =  Dynamic(new _Function_1_1(_total_snd));		HX_STACK_VAR(_snd,"_snd");
		HX_STACK_LINE(230)
		::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		Dynamic tmp1 = tmp->cache->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		for(::cpp::FastIterator_obj< ::luxe::resource::Resource > *__it = ::cpp::CreateFastIterator< ::luxe::resource::Resource >(tmp1);  __it->hasNext(); ){
			::luxe::resource::Resource res = __it->next();
			{
				HX_STACK_LINE(231)
				int _g = res->resource_type;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(231)
				int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(231)
				switch( (int)(tmp2)){
					case (int)3: {
						HX_STACK_LINE(232)
						::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + res->id);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(232)
						::String tmp4 = (tmp3 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(232)
						int tmp5 = res->ref;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(232)
						::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(232)
						::String tmp7 = (tmp6 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(232)
						hx::AddEq(bytes_lists,tmp7);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(233)
						::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							::luxe::resource::TextResource res1 = ((::luxe::resource::TextResource)(res));		HX_STACK_VAR(res1,"res1");
							HX_STACK_LINE(233)
							bool tmp4 = (res1->asset != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(233)
							bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(233)
							if ((tmp4)){
								HX_STACK_LINE(233)
								::String tmp6 = res1->asset->text;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(233)
								::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(233)
								tmp5 = (tmp7 != null());
							}
							else{
								HX_STACK_LINE(233)
								tmp5 = false;
							}
							HX_STACK_LINE(233)
							int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(233)
							if ((tmp5)){
								HX_STACK_LINE(233)
								::String tmp7 = res1->asset->text;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(233)
								tmp6 = tmp7.length;
							}
							else{
								HX_STACK_LINE(233)
								tmp6 = (int)0;
							}
							HX_STACK_LINE(233)
							int _l = tmp6;		HX_STACK_VAR(_l,"_l");
							HX_STACK_LINE(233)
							hx::AddEq(_total_txt,_l);
							HX_STACK_LINE(233)
							::luxe::utils::Utils tmp7 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(233)
							int tmp8 = _l;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(233)
							::String tmp9 = tmp7->bytes_to_string(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(233)
							::String tmp10 = (HX_HCSTRING("(~","\x56","\x23","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(233)
							::String tmp11 = (tmp10 + HX_HCSTRING(") ","\xd7","\x23","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(233)
							::String tmp12 = res1->id;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(233)
							::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(233)
							::String tmp14 = (tmp13 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(233)
							int tmp15 = res1->ref;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(233)
							::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(233)
							tmp3 = (tmp16 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));
						}
						HX_STACK_LINE(233)
						hx::AddEq(text_lists,tmp3);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(234)
						::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + res->id);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(234)
						::String tmp4 = (tmp3 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(234)
						int tmp5 = res->ref;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(234)
						::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(234)
						::String tmp7 = (tmp6 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(234)
						hx::AddEq(json_lists,tmp7);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(235)
						::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(235)
						{
							HX_STACK_LINE(235)
							::phoenix::Texture tex = ((::phoenix::Texture)(res));		HX_STACK_VAR(tex,"tex");
							HX_STACK_LINE(235)
							bool tmp4 = (tex->resource_type == (int)5);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(235)
							if ((tmp4)){
								HX_STACK_LINE(235)
								int tmp5 = tex->memory_use();		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(235)
								hx::AddEq(_total_rtt,tmp5);
							}
							else{
								HX_STACK_LINE(235)
								int tmp5 = tex->memory_use();		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(235)
								hx::AddEq(_total_tex,tmp5);
							}
							HX_STACK_LINE(235)
							::String tmp5 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tex->width_actual);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(235)
							::String tmp6 = (tmp5 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(235)
							int tmp7 = tex->height_actual;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(235)
							::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(235)
							::String tmp9 = (tmp8 + HX_HCSTRING(" ~","\x5e","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(235)
							::luxe::utils::Utils tmp10 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(235)
							int tmp11 = tex->memory_use();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(235)
							::String tmp12 = tmp10->bytes_to_string(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(235)
							::String tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(235)
							::String tmp14 = (tmp13 + HX_HCSTRING(")    ","\xa9","\x00","\xad","\xb0"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(235)
							::String tmp15 = tex->id;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(235)
							::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(235)
							::String tmp17 = (tmp16 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(235)
							int tmp18 = tex->ref;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(235)
							::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(235)
							tmp3 = (tmp19 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));
						}
						HX_STACK_LINE(235)
						hx::AddEq(texture_lists,tmp3);
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(236)
						::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(236)
						{
							HX_STACK_LINE(236)
							::phoenix::Texture tex = ((::phoenix::Texture)(res));		HX_STACK_VAR(tex,"tex");
							HX_STACK_LINE(236)
							bool tmp4 = (tex->resource_type == (int)5);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(236)
							if ((tmp4)){
								HX_STACK_LINE(236)
								int tmp5 = tex->memory_use();		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(236)
								hx::AddEq(_total_rtt,tmp5);
							}
							else{
								HX_STACK_LINE(236)
								int tmp5 = tex->memory_use();		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(236)
								hx::AddEq(_total_tex,tmp5);
							}
							HX_STACK_LINE(236)
							::String tmp5 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tex->width_actual);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(236)
							::String tmp6 = (tmp5 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(236)
							int tmp7 = tex->height_actual;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(236)
							::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(236)
							::String tmp9 = (tmp8 + HX_HCSTRING(" ~","\x5e","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(236)
							::luxe::utils::Utils tmp10 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(236)
							int tmp11 = tex->memory_use();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(236)
							::String tmp12 = tmp10->bytes_to_string(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(236)
							::String tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(236)
							::String tmp14 = (tmp13 + HX_HCSTRING(")    ","\xa9","\x00","\xad","\xb0"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(236)
							::String tmp15 = tex->id;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(236)
							::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(236)
							::String tmp17 = (tmp16 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(236)
							int tmp18 = tex->ref;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(236)
							::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(236)
							tmp3 = (tmp19 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));
						}
						HX_STACK_LINE(236)
						hx::AddEq(rtt_lists,tmp3);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(237)
						::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + res->id);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(237)
						::String tmp4 = (tmp3 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(237)
						int tmp5 = res->ref;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(237)
						::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(237)
						::String tmp7 = (tmp6 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(237)
						hx::AddEq(font_lists,tmp7);
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(238)
						::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(238)
						{
							HX_STACK_LINE(238)
							::phoenix::Shader res1 = ((::phoenix::Shader)(res));		HX_STACK_VAR(res1,"res1");
							HX_STACK_LINE(238)
							::String tmp4 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + res1->vert_id);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(238)
							::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(238)
							::String tmp6 = res1->frag_id;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(238)
							::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(238)
							::String tmp8 = (tmp7 + HX_HCSTRING(")    ","\xa9","\x00","\xad","\xb0"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(238)
							::String tmp9 = res1->id;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(238)
							::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(238)
							::String tmp11 = (tmp10 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(238)
							int tmp12 = res1->ref;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(238)
							::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(238)
							tmp3 = (tmp13 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));
						}
						HX_STACK_LINE(238)
						hx::AddEq(shader_lists,tmp3);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(239)
						::luxe::resource::AudioResource tmp3 = ((::luxe::resource::AudioResource)(res));		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(239)
						::String tmp4 = _snd(tmp3).Cast< ::String >();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(239)
						hx::AddEq(audio_lists,tmp4);
					}
					;break;
					default: {
					}
				}
			}
;
		}
		HX_STACK_LINE(246)
		hx::AddEq(_total_all,_total_txt);
		HX_STACK_LINE(247)
		hx::AddEq(_total_all,_total_tex);
		HX_STACK_LINE(248)
		hx::AddEq(_total_all,_total_rtt);
		HX_STACK_LINE(249)
		hx::AddEq(_total_all,_total_snd->__get((int)0));
		HX_STACK_LINE(251)
		::luxe::Resources tmp2 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		int tmp3 = tmp2->stats->total;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		::String tmp4 = (HX_HCSTRING("Resource list (","\xd8","\x64","\x2f","\x2c") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		::String tmp5 = (tmp4 + HX_HCSTRING(" \xe2""\x80""\xa2"" ~","\xc2","\xfe","\x10","\x41"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		::luxe::utils::Utils tmp6 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(251)
		int tmp7 = _total_all;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(251)
		::String tmp8 = tmp6->bytes_to_string(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(251)
		::String tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(251)
		::String tmp10 = (tmp9 + HX_HCSTRING(")\n\n","\x29","\x25","\x1f","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(251)
		::String lists = tmp10;		HX_STACK_VAR(lists,"lists");
		HX_STACK_LINE(253)
		::luxe::Resources tmp11 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(253)
		int tmp12 = tmp11->stats->bytes;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(253)
		::String tmp13 = (HX_HCSTRING("Bytes (","\x13","\x7d","\x4c","\x27") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(253)
		::String tmp14 = (tmp13 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(253)
		hx::AddEq(lists,tmp14);
		HX_STACK_LINE(254)
		bool tmp15 = (bytes_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(254)
		::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(254)
		if ((tmp15)){
			HX_STACK_LINE(254)
			tmp16 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(254)
			tmp16 = bytes_lists;
		}
		HX_STACK_LINE(254)
		hx::AddEq(lists,tmp16);
		HX_STACK_LINE(255)
		::luxe::Resources tmp17 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(255)
		int tmp18 = tmp17->stats->texts;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(255)
		::String tmp19 = (HX_HCSTRING("\nText (","\x9f","\x45","\xf3","\xac") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(255)
		::String tmp20 = (tmp19 + HX_HCSTRING(" \xe2""\x80""\xa2"" ~","\xc2","\xfe","\x10","\x41"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(255)
		::luxe::utils::Utils tmp21 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(255)
		int tmp22 = _total_txt;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(255)
		::String tmp23 = tmp21->bytes_to_string(tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(255)
		::String tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(255)
		::String tmp25 = (tmp24 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(255)
		hx::AddEq(lists,tmp25);
		HX_STACK_LINE(256)
		bool tmp26 = (text_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(256)
		::String tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(256)
		if ((tmp26)){
			HX_STACK_LINE(256)
			tmp27 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(256)
			tmp27 = text_lists;
		}
		HX_STACK_LINE(256)
		hx::AddEq(lists,tmp27);
		HX_STACK_LINE(257)
		::luxe::Resources tmp28 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(257)
		int tmp29 = tmp28->stats->jsons;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(257)
		::String tmp30 = (HX_HCSTRING("\nJSON (","\xba","\xa3","\xf4","\x34") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(257)
		::String tmp31 = (tmp30 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(257)
		hx::AddEq(lists,tmp31);
		HX_STACK_LINE(258)
		bool tmp32 = (json_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(258)
		::String tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(258)
		if ((tmp32)){
			HX_STACK_LINE(258)
			tmp33 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(258)
			tmp33 = json_lists;
		}
		HX_STACK_LINE(258)
		hx::AddEq(lists,tmp33);
		HX_STACK_LINE(259)
		::luxe::Resources tmp34 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(259)
		int tmp35 = tmp34->stats->textures;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(259)
		::String tmp36 = (HX_HCSTRING("\nTexture (","\x39","\xa0","\x04","\xd4") + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(259)
		::String tmp37 = (tmp36 + HX_HCSTRING(" \xe2""\x80""\xa2"" ~","\xc2","\xfe","\x10","\x41"));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(259)
		::luxe::utils::Utils tmp38 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(259)
		int tmp39 = _total_tex;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(259)
		::String tmp40 = tmp38->bytes_to_string(tmp39,null());		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(259)
		::String tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(259)
		::String tmp42 = (tmp41 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(259)
		hx::AddEq(lists,tmp42);
		HX_STACK_LINE(260)
		bool tmp43 = (texture_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(260)
		::String tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(260)
		if ((tmp43)){
			HX_STACK_LINE(260)
			tmp44 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(260)
			tmp44 = texture_lists;
		}
		HX_STACK_LINE(260)
		hx::AddEq(lists,tmp44);
		HX_STACK_LINE(261)
		::luxe::Resources tmp45 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(261)
		int tmp46 = tmp45->stats->rtt;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(261)
		::String tmp47 = (HX_HCSTRING("\nRenderTexture (","\x83","\x0e","\x5f","\xc0") + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(261)
		::String tmp48 = (tmp47 + HX_HCSTRING(" \xe2""\x80""\xa2"" ~","\xc2","\xfe","\x10","\x41"));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(261)
		::luxe::utils::Utils tmp49 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(261)
		int tmp50 = _total_rtt;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(261)
		::String tmp51 = tmp49->bytes_to_string(tmp50,null());		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(261)
		::String tmp52 = (tmp48 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(261)
		::String tmp53 = (tmp52 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(261)
		hx::AddEq(lists,tmp53);
		HX_STACK_LINE(262)
		bool tmp54 = (rtt_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(262)
		::String tmp55;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(262)
		if ((tmp54)){
			HX_STACK_LINE(262)
			tmp55 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(262)
			tmp55 = rtt_lists;
		}
		HX_STACK_LINE(262)
		hx::AddEq(lists,tmp55);
		HX_STACK_LINE(263)
		::luxe::Resources tmp56 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(263)
		int tmp57 = tmp56->stats->fonts;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(263)
		::String tmp58 = (HX_HCSTRING("\nFont (","\x41","\xe3","\x59","\xcf") + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(263)
		::String tmp59 = (tmp58 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(263)
		hx::AddEq(lists,tmp59);
		HX_STACK_LINE(264)
		bool tmp60 = (font_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(264)
		::String tmp61;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(264)
		if ((tmp60)){
			HX_STACK_LINE(264)
			tmp61 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(264)
			tmp61 = font_lists;
		}
		HX_STACK_LINE(264)
		hx::AddEq(lists,tmp61);
		HX_STACK_LINE(265)
		::luxe::Resources tmp62 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(265)
		int tmp63 = tmp62->stats->shaders;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(265)
		::String tmp64 = (HX_HCSTRING("\nShader (","\x97","\x84","\x4a","\x4d") + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(265)
		::String tmp65 = (tmp64 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(265)
		hx::AddEq(lists,tmp65);
		HX_STACK_LINE(266)
		bool tmp66 = (shader_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(266)
		::String tmp67;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(266)
		if ((tmp66)){
			HX_STACK_LINE(266)
			tmp67 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(266)
			tmp67 = shader_lists;
		}
		HX_STACK_LINE(266)
		hx::AddEq(lists,tmp67);
		HX_STACK_LINE(267)
		::luxe::Resources tmp68 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(267)
		int tmp69 = tmp68->stats->audios;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(267)
		::String tmp70 = (HX_HCSTRING("\nAudio (","\x74","\x93","\x7a","\x6c") + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(267)
		::String tmp71 = (tmp70 + HX_HCSTRING(" \xe2""\x80""\xa2"" ~","\xc2","\xfe","\x10","\x41"));		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(267)
		::luxe::utils::Utils tmp72 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(267)
		int tmp73 = _total_snd->__get((int)0);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(267)
		::String tmp74 = tmp72->bytes_to_string(tmp73,null());		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(267)
		::String tmp75 = (tmp71 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(267)
		::String tmp76 = (tmp75 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(267)
		hx::AddEq(lists,tmp76);
		HX_STACK_LINE(268)
		bool tmp77 = (audio_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(268)
		::String tmp78;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(268)
		if ((tmp77)){
			HX_STACK_LINE(268)
			tmp78 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(268)
			tmp78 = audio_lists;
		}
		HX_STACK_LINE(268)
		hx::AddEq(lists,tmp78);
		HX_STACK_LINE(270)
		::luxe::Text tmp79 = this->resource_list_text;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(270)
		::String tmp80 = lists;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(270)
		tmp79->set_text(tmp80);
		HX_STACK_LINE(272)
		::luxe::Text tmp81 = this->resource_list_text;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(272)
		::phoenix::geometry::Geometry tmp82 = tmp81->geometry;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(272)
		bool tmp83 = (tmp82 != null());		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(272)
		if ((tmp83)){
			HX_STACK_LINE(273)
			::luxe::Text tmp84 = this->resource_list_text;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(273)
			tmp84->geometry->set_dirty(true);
		}
		HX_STACK_LINE(276)
		this->reset_tween();
	}
return null();
}


Void StatsDebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","process",0xa6cd8fcd,"luxe.debug.StatsDebugView.process","luxe/debug/StatsDebugView.hx",280,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(282)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(282)
		if ((tmp1)){
			HX_STACK_LINE(282)
			return null();
		}
		HX_STACK_LINE(284)
		bool dirty = false;		HX_STACK_VAR(dirty,"dirty");
		HX_STACK_LINE(287)
		this->update_render_stats();
		HX_STACK_LINE(289)
		Dynamic tmp2 = this->_last_render_stats;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		int tmp3 = tmp2->__Field(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(289)
		Dynamic tmp4 = this->_render_stats;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(289)
		int tmp5 = tmp4->__Field(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(289)
		bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(289)
		if ((tmp6)){
			HX_STACK_LINE(290)
			dirty = true;
			HX_STACK_LINE(290)
			Dynamic tmp7 = this->_render_stats;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(290)
			Dynamic tmp8 = this->_last_render_stats;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(290)
			tmp8->__FieldRef(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e")) = tmp7->__Field(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"), hx::paccDynamic );
		}
		HX_STACK_LINE(291)
		Dynamic tmp7 = this->_last_render_stats;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(291)
		int tmp8 = tmp7->__Field(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(291)
		Dynamic tmp9 = this->_render_stats;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(291)
		int tmp10 = tmp9->__Field(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(291)
		bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(291)
		if ((tmp11)){
			HX_STACK_LINE(292)
			dirty = true;
			HX_STACK_LINE(292)
			Dynamic tmp12 = this->_render_stats;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(292)
			Dynamic tmp13 = this->_last_render_stats;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(292)
			tmp13->__FieldRef(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12")) = tmp12->__Field(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12"), hx::paccDynamic );
		}
		HX_STACK_LINE(293)
		Dynamic tmp12 = this->_last_render_stats;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(293)
		int tmp13 = tmp12->__Field(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(293)
		Dynamic tmp14 = this->_render_stats;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(293)
		int tmp15 = tmp14->__Field(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(293)
		bool tmp16 = (tmp13 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(293)
		if ((tmp16)){
			HX_STACK_LINE(294)
			dirty = true;
			HX_STACK_LINE(294)
			Dynamic tmp17 = this->_render_stats;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(294)
			Dynamic tmp18 = this->_last_render_stats;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(294)
			tmp18->__FieldRef(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66")) = tmp17->__Field(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"), hx::paccDynamic );
		}
		HX_STACK_LINE(295)
		Dynamic tmp17 = this->_last_render_stats;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(295)
		int tmp18 = tmp17->__Field(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(295)
		Dynamic tmp19 = this->_render_stats;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(295)
		int tmp20 = tmp19->__Field(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(295)
		bool tmp21 = (tmp18 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(295)
		if ((tmp21)){
			HX_STACK_LINE(296)
			dirty = true;
			HX_STACK_LINE(296)
			Dynamic tmp22 = this->_render_stats;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(296)
			Dynamic tmp23 = this->_last_render_stats;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(296)
			tmp23->__FieldRef(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c")) = tmp22->__Field(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"), hx::paccDynamic );
		}
		HX_STACK_LINE(297)
		Dynamic tmp22 = this->_last_render_stats;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(297)
		int tmp23 = tmp22->__Field(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(297)
		Dynamic tmp24 = this->_render_stats;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(297)
		int tmp25 = tmp24->__Field(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(297)
		bool tmp26 = (tmp23 != tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(297)
		if ((tmp26)){
			HX_STACK_LINE(298)
			dirty = true;
			HX_STACK_LINE(298)
			Dynamic tmp27 = this->_render_stats;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(298)
			Dynamic tmp28 = this->_last_render_stats;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(298)
			tmp28->__FieldRef(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70")) = tmp27->__Field(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"), hx::paccDynamic );
		}
		HX_STACK_LINE(299)
		Dynamic tmp27 = this->_last_render_stats;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(299)
		int tmp28 = tmp27->__Field(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(299)
		Dynamic tmp29 = this->_render_stats;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(299)
		int tmp30 = tmp29->__Field(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(299)
		bool tmp31 = (tmp28 != tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(299)
		if ((tmp31)){
			HX_STACK_LINE(300)
			dirty = true;
			HX_STACK_LINE(300)
			Dynamic tmp32 = this->_render_stats;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(300)
			Dynamic tmp33 = this->_last_render_stats;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(300)
			tmp33->__FieldRef(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a")) = tmp32->__Field(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"), hx::paccDynamic );
		}
		HX_STACK_LINE(301)
		Dynamic tmp32 = this->_last_render_stats;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(301)
		int tmp33 = tmp32->__Field(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(301)
		Dynamic tmp34 = this->_render_stats;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(301)
		int tmp35 = tmp34->__Field(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(301)
		bool tmp36 = (tmp33 != tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(301)
		if ((tmp36)){
			HX_STACK_LINE(302)
			dirty = true;
			HX_STACK_LINE(302)
			Dynamic tmp37 = this->_render_stats;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(302)
			Dynamic tmp38 = this->_last_render_stats;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(302)
			tmp38->__FieldRef(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72")) = tmp37->__Field(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"), hx::paccDynamic );
		}
		HX_STACK_LINE(304)
		bool tmp37 = dirty;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(304)
		if ((tmp37)){
			HX_STACK_LINE(305)
			this->refresh_render_stats();
		}
	}
return null();
}


Void StatsDebugView_obj::onmousewheel( ::luxe::MouseEvent e){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","onmousewheel",0x733a3417,"luxe.debug.StatsDebugView.onmousewheel","luxe/debug/StatsDebugView.hx",312,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(314)
		::luxe::Text tmp = this->resource_list_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		::phoenix::Vector tmp1 = tmp->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		::luxe::tween::Actuate_obj::stop(tmp1,null(),null(),null());
		HX_STACK_LINE(315)
		::luxe::Text tmp2 = this->render_stats_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		::phoenix::Vector tmp3 = tmp2->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		::luxe::tween::Actuate_obj::stop(tmp3,null(),null(),null());
		HX_STACK_LINE(317)
		::luxe::Debug tmp4 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(317)
		::phoenix::Vector tmp5 = tmp4->inspector->size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(317)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(317)
		int tmp7 = this->margin;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(317)
		Float vh = tmp8;		HX_STACK_VAR(vh,"vh");
		HX_STACK_LINE(318)
		::luxe::Debug tmp9 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(318)
		Float tmp10 = tmp9->padding->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(318)
		int tmp11 = this->margin;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(318)
		Float tmp12 = (tmp11 * ((Float)1.5));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(318)
		Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(318)
		Float max_y = tmp13;		HX_STACK_VAR(max_y,"max_y");
		HX_STACK_LINE(319)
		Float min_y = max_y;		HX_STACK_VAR(min_y,"min_y");
		HX_STACK_LINE(321)
		Float tmp14 = e->pos->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(321)
		::luxe::Engine tmp15 = ::Luxe_obj::core;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(321)
		int tmp16 = tmp15->screen->get_w();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(321)
		Float tmp17 = (Float(tmp14) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(321)
		Float px = tmp17;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(322)
		bool tmp18 = (px > ((Float)0.5));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(322)
		if ((tmp18)){
			HX_STACK_LINE(325)
			::luxe::Text tmp19 = this->resource_list_text;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(325)
			Float tmp20 = tmp19->text_bounds->h;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(325)
			Float h = tmp20;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(326)
			Float tmp21 = (h - vh);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(326)
			Float diff = tmp21;		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(327)
			::luxe::Text tmp22 = this->resource_list_text;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(327)
			::phoenix::Vector tmp23 = tmp22->get_pos();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(327)
			Float new_y = tmp23->y;		HX_STACK_VAR(new_y,"new_y");
			HX_STACK_LINE(329)
			bool tmp24 = (diff > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(329)
			if ((tmp24)){
				HX_STACK_LINE(330)
				Float tmp25 = max_y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(330)
				Float tmp26 = diff;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(330)
				int tmp27 = this->margin;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(330)
				int tmp28 = (tmp27 * (int)2);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(330)
				Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(330)
				Float tmp30 = (tmp25 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(330)
				min_y = tmp30;
			}
			HX_STACK_LINE(333)
			int tmp25 = this->margin;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(333)
			Float tmp26 = (Float(tmp25) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(333)
			int tmp27 = e->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(333)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(333)
			hx::SubEq(new_y,tmp28);
			HX_STACK_LINE(334)
			bool tmp29 = (new_y < min_y);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(334)
			Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(334)
			if ((tmp29)){
				HX_STACK_LINE(334)
				tmp30 = min_y;
			}
			else{
				HX_STACK_LINE(334)
				bool tmp31 = (new_y > max_y);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(334)
				if ((tmp31)){
					HX_STACK_LINE(334)
					tmp30 = max_y;
				}
				else{
					HX_STACK_LINE(334)
					tmp30 = new_y;
				}
			}
			HX_STACK_LINE(334)
			new_y = tmp30;
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::luxe::Text tmp31 = this->resource_list_text;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(335)
				::phoenix::Vector tmp32 = tmp31->get_pos();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(335)
				::phoenix::Vector _this = tmp32;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(335)
				_this->y = new_y;
				HX_STACK_LINE(335)
				bool tmp33 = _this->_construct;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(335)
				if ((tmp33)){
					HX_STACK_LINE(335)
					_this->y;
				}
				else{
					HX_STACK_LINE(335)
					bool tmp34 = (_this->listen_y != null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(335)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(335)
					if ((tmp34)){
						HX_STACK_LINE(335)
						bool tmp36 = _this->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(335)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(335)
						tmp35 = !(tmp37);
					}
					else{
						HX_STACK_LINE(335)
						tmp35 = false;
					}
					HX_STACK_LINE(335)
					if ((tmp35)){
						HX_STACK_LINE(335)
						Float tmp36 = new_y;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(335)
						_this->listen_y(tmp36);
					}
					HX_STACK_LINE(335)
					_this->y;
				}
			}
			HX_STACK_LINE(336)
			::luxe::Text tmp31 = this->resource_list_text;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(336)
			tmp31->geometry->set_dirty(true);
		}
		else{
			HX_STACK_LINE(341)
			::luxe::Text tmp19 = this->render_stats_text;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(341)
			Float tmp20 = tmp19->text_bounds->h;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(341)
			Float h = tmp20;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(342)
			Float tmp21 = (h - vh);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(342)
			Float diff = tmp21;		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(343)
			::luxe::Text tmp22 = this->render_stats_text;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(343)
			::phoenix::Vector tmp23 = tmp22->get_pos();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(343)
			Float new_y = tmp23->y;		HX_STACK_VAR(new_y,"new_y");
			HX_STACK_LINE(345)
			bool tmp24 = (diff > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(345)
			if ((tmp24)){
				HX_STACK_LINE(346)
				Float tmp25 = max_y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(346)
				Float tmp26 = diff;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(346)
				int tmp27 = this->margin;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(346)
				int tmp28 = (tmp27 * (int)2);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(346)
				Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(346)
				Float tmp30 = (tmp25 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(346)
				min_y = tmp30;
			}
			HX_STACK_LINE(349)
			int tmp25 = this->margin;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(349)
			Float tmp26 = (Float(tmp25) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(349)
			int tmp27 = e->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(349)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(349)
			hx::SubEq(new_y,tmp28);
			HX_STACK_LINE(350)
			bool tmp29 = (new_y < min_y);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(350)
			Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(350)
			if ((tmp29)){
				HX_STACK_LINE(350)
				tmp30 = min_y;
			}
			else{
				HX_STACK_LINE(350)
				bool tmp31 = (new_y > max_y);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(350)
				if ((tmp31)){
					HX_STACK_LINE(350)
					tmp30 = max_y;
				}
				else{
					HX_STACK_LINE(350)
					tmp30 = new_y;
				}
			}
			HX_STACK_LINE(350)
			new_y = tmp30;
			HX_STACK_LINE(351)
			{
				HX_STACK_LINE(351)
				::luxe::Text tmp31 = this->render_stats_text;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(351)
				::phoenix::Vector tmp32 = tmp31->get_pos();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(351)
				::phoenix::Vector _this = tmp32;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(351)
				_this->y = new_y;
				HX_STACK_LINE(351)
				bool tmp33 = _this->_construct;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(351)
				if ((tmp33)){
					HX_STACK_LINE(351)
					_this->y;
				}
				else{
					HX_STACK_LINE(351)
					bool tmp34 = (_this->listen_y != null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(351)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(351)
					if ((tmp34)){
						HX_STACK_LINE(351)
						bool tmp36 = _this->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(351)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(351)
						tmp35 = !(tmp37);
					}
					else{
						HX_STACK_LINE(351)
						tmp35 = false;
					}
					HX_STACK_LINE(351)
					if ((tmp35)){
						HX_STACK_LINE(351)
						Float tmp36 = new_y;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(351)
						_this->listen_y(tmp36);
					}
					HX_STACK_LINE(351)
					_this->y;
				}
			}
			HX_STACK_LINE(352)
			::luxe::Text tmp31 = this->render_stats_text;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(352)
			tmp31->geometry->set_dirty(true);
		}
	}
return null();
}


Void StatsDebugView_obj::onkeydown( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","onkeydown",0x09e74f20,"luxe.debug.StatsDebugView.onkeydown","luxe/debug/StatsDebugView.hx",359,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(361)
		bool tmp = (e->keycode == (int)50);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(361)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(361)
		if ((tmp)){
			HX_STACK_LINE(361)
			tmp1 = this->visible;
		}
		else{
			HX_STACK_LINE(361)
			tmp1 = false;
		}
		HX_STACK_LINE(361)
		if ((tmp1)){
			HX_STACK_LINE(362)
			::luxe::Debug tmp2 = this->debug;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(362)
			int tmp3 = tmp2->batcher->show_stats;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(362)
			bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(362)
			if ((tmp4)){
				HX_STACK_LINE(363)
				::luxe::Debug tmp5 = this->debug;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(363)
				tmp5->batcher->set_show_stats((int)1);
			}
			else{
				HX_STACK_LINE(365)
				::luxe::Debug tmp5 = this->debug;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(365)
				tmp5->batcher->set_show_stats((int)0);
			}
		}
	}
return null();
}


Void StatsDebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","show",0x57df00df,"luxe.debug.StatsDebugView.show","luxe/debug/StatsDebugView.hx",371,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(373)
		this->super::show();
		HX_STACK_LINE(374)
		this->refresh();
		HX_STACK_LINE(375)
		::luxe::Text tmp = this->render_stats_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		tmp->set_visible(true);
		HX_STACK_LINE(376)
		::luxe::Text tmp1 = this->resource_list_text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		tmp1->set_visible(true);
	}
return null();
}


Void StatsDebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","hide",0x509a60a4,"luxe.debug.StatsDebugView.hide","luxe/debug/StatsDebugView.hx",380,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(382)
		this->super::hide();
		HX_STACK_LINE(383)
		::luxe::Text tmp = this->render_stats_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		tmp->set_visible(false);
		HX_STACK_LINE(384)
		::luxe::Text tmp1 = this->resource_list_text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		tmp1->set_visible(false);
		HX_STACK_LINE(385)
		::luxe::Text tmp2 = this->resource_list_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(385)
		::phoenix::Vector tmp3 = tmp2->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(385)
		::luxe::tween::Actuate_obj::stop(tmp3,null(),null(),null());
		HX_STACK_LINE(386)
		::luxe::Text tmp4 = this->render_stats_text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(386)
		::phoenix::Vector tmp5 = tmp4->get_pos();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(386)
		::luxe::tween::Actuate_obj::stop(tmp5,null(),null(),null());
	}
return null();
}


Void StatsDebugView_obj::reset_tween( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","reset_tween",0x367ff519,"luxe.debug.StatsDebugView.reset_tween","luxe/debug/StatsDebugView.hx",390,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(390)
		::luxe::debug::StatsDebugView _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(392)
		::luxe::Text tmp = this->resource_list_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(392)
		::phoenix::Vector tmp1 = tmp->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		::luxe::tween::Actuate_obj::stop(tmp1,null(),null(),null());
		HX_STACK_LINE(393)
		::luxe::Text tmp2 = this->render_stats_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(393)
		::phoenix::Vector tmp3 = tmp2->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(393)
		::luxe::tween::Actuate_obj::stop(tmp3,null(),null(),null());
		HX_STACK_LINE(395)
		::luxe::Debug tmp4 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(395)
		::phoenix::Vector tmp5 = tmp4->inspector->size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(395)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(395)
		int tmp7 = this->margin;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(395)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(395)
		Float vh = tmp8;		HX_STACK_VAR(vh,"vh");
		HX_STACK_LINE(396)
		::luxe::Debug tmp9 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(396)
		Float tmp10 = tmp9->padding->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(396)
		int tmp11 = this->margin;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(396)
		Float tmp12 = (tmp11 * ((Float)1.5));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(396)
		Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(396)
		Float start_y = tmp13;		HX_STACK_VAR(start_y,"start_y");
		HX_STACK_LINE(398)
		::luxe::Text tmp14 = this->resource_list_text;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(398)
		Float tmp15 = tmp14->text_bounds->h;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(398)
		Float h = tmp15;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(399)
		Float tmp16 = (h - vh);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(399)
		Float diff = tmp16;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(400)
		{
			HX_STACK_LINE(400)
			::luxe::Text tmp17 = this->resource_list_text;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(400)
			::phoenix::Vector tmp18 = tmp17->get_pos();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(400)
			::phoenix::Vector _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(400)
			_this->y = start_y;
			HX_STACK_LINE(400)
			bool tmp19 = _this->_construct;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(400)
			if ((tmp19)){
				HX_STACK_LINE(400)
				_this->y;
			}
			else{
				HX_STACK_LINE(400)
				bool tmp20 = (_this->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(400)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(400)
				if ((tmp20)){
					HX_STACK_LINE(400)
					bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(400)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(400)
					tmp21 = !(tmp23);
				}
				else{
					HX_STACK_LINE(400)
					tmp21 = false;
				}
				HX_STACK_LINE(400)
				if ((tmp21)){
					HX_STACK_LINE(400)
					Float tmp22 = start_y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(400)
					_this->listen_y(tmp22);
				}
				HX_STACK_LINE(400)
				_this->y;
			}
		}
		HX_STACK_LINE(402)
		bool tmp17 = (diff > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(402)
		if ((tmp17)){
			HX_STACK_LINE(403)
			Float tmp18 = start_y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(403)
			Float tmp19 = diff;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(403)
			int tmp20 = this->margin;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(403)
			int tmp21 = (tmp20 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(403)
			Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(403)
			Float tmp23 = (tmp18 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(403)
			Float end_y = tmp23;		HX_STACK_VAR(end_y,"end_y");
			HX_STACK_LINE(404)
			::luxe::Text tmp24 = this->resource_list_text;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(404)
			::phoenix::Vector tmp25 = tmp24->get_pos();		HX_STACK_VAR(tmp25,"tmp25");
			struct _Function_2_1{
				inline static Dynamic Block( Float &end_y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",404,0x06813970)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , end_y,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(404)
			Dynamic tmp26 = _Function_2_1::Block(end_y);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(404)
			::luxe::tween::actuators::IGenericActuator tmp27 = ::luxe::tween::Actuate_obj::tween(tmp25,(int)8,tmp26,null(),null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(404)
			::luxe::tween::actuators::IGenericActuator tmp28 = tmp27->repeat(null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(404)
			::luxe::tween::actuators::IGenericActuator tmp29 = tmp28->delay((int)4);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(404)
			::luxe::tween::actuators::IGenericActuator tmp30 = tmp29->reflect(null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(404)
			::luxe::tween::easing::IEasing tmp31 = ::luxe::tween::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(404)
			::luxe::tween::actuators::IGenericActuator tmp32 = tmp30->ease(tmp31);		HX_STACK_VAR(tmp32,"tmp32");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::luxe::debug::StatsDebugView,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","luxe/debug/StatsDebugView.hx",405,0x06813970)
				{
					HX_STACK_LINE(405)
					::phoenix::geometry::Geometry tmp33 = _g->resource_list_text->geometry;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(405)
					tmp33->set_dirty(true);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(404)
			tmp32->onUpdate( Dynamic(new _Function_2_2(_g)),null());
		}
		HX_STACK_LINE(408)
		::luxe::Text tmp18 = this->render_stats_text;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(408)
		Float tmp19 = tmp18->text_bounds->h;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(408)
		h = tmp19;
		HX_STACK_LINE(409)
		Float tmp20 = (h - vh);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(409)
		diff = tmp20;
		HX_STACK_LINE(410)
		{
			HX_STACK_LINE(410)
			::luxe::Text tmp21 = this->render_stats_text;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(410)
			::phoenix::Vector tmp22 = tmp21->get_pos();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(410)
			::phoenix::Vector _this = tmp22;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(410)
			_this->y = start_y;
			HX_STACK_LINE(410)
			bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(410)
			if ((tmp23)){
				HX_STACK_LINE(410)
				_this->y;
			}
			else{
				HX_STACK_LINE(410)
				bool tmp24 = (_this->listen_y != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(410)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(410)
				if ((tmp24)){
					HX_STACK_LINE(410)
					bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(410)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(410)
					tmp25 = !(tmp27);
				}
				else{
					HX_STACK_LINE(410)
					tmp25 = false;
				}
				HX_STACK_LINE(410)
				if ((tmp25)){
					HX_STACK_LINE(410)
					Float tmp26 = start_y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(410)
					_this->listen_y(tmp26);
				}
				HX_STACK_LINE(410)
				_this->y;
			}
		}
		HX_STACK_LINE(412)
		bool tmp21 = (diff > (int)0);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(412)
		if ((tmp21)){
			HX_STACK_LINE(413)
			Float tmp22 = start_y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(413)
			Float tmp23 = diff;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(413)
			int tmp24 = this->margin;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(413)
			int tmp25 = (tmp24 * (int)2);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(413)
			Float tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(413)
			Float tmp27 = (tmp22 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(413)
			Float end_y = tmp27;		HX_STACK_VAR(end_y,"end_y");
			HX_STACK_LINE(414)
			::luxe::Text tmp28 = this->render_stats_text;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(414)
			::phoenix::Vector tmp29 = tmp28->get_pos();		HX_STACK_VAR(tmp29,"tmp29");
			struct _Function_2_1{
				inline static Dynamic Block( Float &end_y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",414,0x06813970)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , end_y,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(414)
			Dynamic tmp30 = _Function_2_1::Block(end_y);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(414)
			::luxe::tween::actuators::IGenericActuator tmp31 = ::luxe::tween::Actuate_obj::tween(tmp29,(int)8,tmp30,null(),null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(414)
			::luxe::tween::actuators::IGenericActuator tmp32 = tmp31->repeat(null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(414)
			::luxe::tween::actuators::IGenericActuator tmp33 = tmp32->delay((int)4);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(414)
			::luxe::tween::actuators::IGenericActuator tmp34 = tmp33->reflect(null());		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(414)
			::luxe::tween::easing::IEasing tmp35 = ::luxe::tween::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(414)
			::luxe::tween::actuators::IGenericActuator tmp36 = tmp34->ease(tmp35);		HX_STACK_VAR(tmp36,"tmp36");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::luxe::debug::StatsDebugView,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","luxe/debug/StatsDebugView.hx",415,0x06813970)
				{
					HX_STACK_LINE(415)
					::phoenix::geometry::Geometry tmp37 = _g->render_stats_text->geometry;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(415)
					tmp37->set_dirty(true);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(414)
			tmp36->onUpdate( Dynamic(new _Function_2_2(_g)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,reset_tween,(void))

Void StatsDebugView_obj::refresh_render_stats( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","refresh_render_stats",0xe506493c,"luxe.debug.StatsDebugView.refresh_render_stats","luxe/debug/StatsDebugView.hx",420,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(422)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(422)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(422)
		if ((tmp1)){
			HX_STACK_LINE(423)
			return null();
		}
		HX_STACK_LINE(426)
		::luxe::Text tmp2 = this->render_stats_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		::String tmp3 = this->get_render_stats_string();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(426)
		tmp2->set_text(tmp3);
		HX_STACK_LINE(428)
		::luxe::Text tmp4 = this->render_stats_text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(428)
		tmp4->set_locked(true);
		HX_STACK_LINE(430)
		::luxe::Text tmp5 = this->render_stats_text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(430)
		::phoenix::geometry::Geometry tmp6 = tmp5->geometry;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(430)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(430)
		if ((tmp7)){
			HX_STACK_LINE(431)
			::luxe::Text tmp8 = this->render_stats_text;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(431)
			tmp8->geometry->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,refresh_render_stats,(void))

Void StatsDebugView_obj::update_render_stats( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","update_render_stats",0xaa1a0aca,"luxe.debug.StatsDebugView.update_render_stats","luxe/debug/StatsDebugView.hx",436,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(438)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		int tmp1 = tmp->stats->batchers;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		Dynamic tmp2 = this->_render_stats;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(438)
		tmp2->__FieldRef(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e")) = tmp1;
		HX_STACK_LINE(439)
		::phoenix::Renderer tmp3 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(439)
		int tmp4 = tmp3->stats->geometry_count;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(439)
		Dynamic tmp5 = this->_render_stats;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(439)
		tmp5->__FieldRef(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12")) = tmp4;
		HX_STACK_LINE(440)
		::phoenix::Renderer tmp6 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(440)
		int tmp7 = tmp6->stats->visible_count;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(440)
		Dynamic tmp8 = this->_render_stats;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(440)
		tmp8->__FieldRef(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70")) = tmp7;
		HX_STACK_LINE(441)
		::phoenix::Renderer tmp9 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(441)
		int tmp10 = tmp9->stats->dynamic_batched_count;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(441)
		Dynamic tmp11 = this->_render_stats;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(441)
		tmp11->__FieldRef(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66")) = tmp10;
		HX_STACK_LINE(442)
		::phoenix::Renderer tmp12 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(442)
		int tmp13 = tmp12->stats->static_batched_count;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(442)
		Dynamic tmp14 = this->_render_stats;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(442)
		tmp14->__FieldRef(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c")) = tmp13;
		HX_STACK_LINE(443)
		::phoenix::Renderer tmp15 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(443)
		int tmp16 = tmp15->stats->draw_calls;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(443)
		Dynamic tmp17 = this->_render_stats;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(443)
		tmp17->__FieldRef(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a")) = tmp16;
		HX_STACK_LINE(444)
		::phoenix::Renderer tmp18 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(444)
		int tmp19 = tmp18->stats->vert_count;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(444)
		Dynamic tmp20 = this->_render_stats;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(444)
		tmp20->__FieldRef(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72")) = tmp19;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,update_render_stats,(void))


StatsDebugView_obj::StatsDebugView_obj()
{
}

void StatsDebugView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StatsDebugView);
	HX_MARK_MEMBER_NAME(_last_render_stats,"_last_render_stats");
	HX_MARK_MEMBER_NAME(_render_stats,"_render_stats");
	HX_MARK_MEMBER_NAME(debug_draw_call_count,"debug_draw_call_count");
	HX_MARK_MEMBER_NAME(debug_geometry_count,"debug_geometry_count");
	HX_MARK_MEMBER_NAME(font_size,"font_size");
	HX_MARK_MEMBER_NAME(render_stats_text,"render_stats_text");
	HX_MARK_MEMBER_NAME(resource_list_text,"resource_list_text");
	HX_MARK_MEMBER_NAME(margin,"margin");
	::luxe::debug::DebugView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StatsDebugView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_last_render_stats,"_last_render_stats");
	HX_VISIT_MEMBER_NAME(_render_stats,"_render_stats");
	HX_VISIT_MEMBER_NAME(debug_draw_call_count,"debug_draw_call_count");
	HX_VISIT_MEMBER_NAME(debug_geometry_count,"debug_geometry_count");
	HX_VISIT_MEMBER_NAME(font_size,"font_size");
	HX_VISIT_MEMBER_NAME(render_stats_text,"render_stats_text");
	HX_VISIT_MEMBER_NAME(resource_list_text,"resource_list_text");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	::luxe::debug::DebugView_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StatsDebugView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { return font_size; }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"reset_tween") ) { return reset_tween_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_render_stats") ) { return _render_stats; }
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return onwindowsized_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_batcher_info") ) { return get_batcher_info_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"render_stats_text") ) { return render_stats_text; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_last_render_stats") ) { return _last_render_stats; }
		if (HX_FIELD_EQ(inName,"resource_list_text") ) { return resource_list_text; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"update_render_stats") ) { return update_render_stats_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"debug_geometry_count") ) { return debug_geometry_count; }
		if (HX_FIELD_EQ(inName,"refresh_render_stats") ) { return refresh_render_stats_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"debug_draw_call_count") ) { return debug_draw_call_count; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_render_stats_string") ) { return get_render_stats_string_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_resource_stats_string") ) { return get_resource_stats_string_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StatsDebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { font_size=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_render_stats") ) { _render_stats=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"render_stats_text") ) { render_stats_text=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_last_render_stats") ) { _last_render_stats=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resource_list_text") ) { resource_list_text=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"debug_geometry_count") ) { debug_geometry_count=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"debug_draw_call_count") ) { debug_draw_call_count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StatsDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_last_render_stats","\xc0","\x3c","\xe7","\x4b"));
	outFields->push(HX_HCSTRING("_render_stats","\x15","\xe0","\x22","\x9d"));
	outFields->push(HX_HCSTRING("debug_draw_call_count","\x9d","\x71","\x24","\xaf"));
	outFields->push(HX_HCSTRING("debug_geometry_count","\xee","\x2b","\x78","\x61"));
	outFields->push(HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18"));
	outFields->push(HX_HCSTRING("render_stats_text","\x96","\xf7","\xe4","\x0a"));
	outFields->push(HX_HCSTRING("resource_list_text","\x7d","\x5d","\xe6","\x1a"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StatsDebugView_obj,_last_render_stats),HX_HCSTRING("_last_render_stats","\xc0","\x3c","\xe7","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StatsDebugView_obj,_render_stats),HX_HCSTRING("_render_stats","\x15","\xe0","\x22","\x9d")},
	{hx::fsInt,(int)offsetof(StatsDebugView_obj,debug_draw_call_count),HX_HCSTRING("debug_draw_call_count","\x9d","\x71","\x24","\xaf")},
	{hx::fsInt,(int)offsetof(StatsDebugView_obj,debug_geometry_count),HX_HCSTRING("debug_geometry_count","\xee","\x2b","\x78","\x61")},
	{hx::fsInt,(int)offsetof(StatsDebugView_obj,font_size),HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(StatsDebugView_obj,render_stats_text),HX_HCSTRING("render_stats_text","\x96","\xf7","\xe4","\x0a")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(StatsDebugView_obj,resource_list_text),HX_HCSTRING("resource_list_text","\x7d","\x5d","\xe6","\x1a")},
	{hx::fsInt,(int)offsetof(StatsDebugView_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_last_render_stats","\xc0","\x3c","\xe7","\x4b"),
	HX_HCSTRING("_render_stats","\x15","\xe0","\x22","\x9d"),
	HX_HCSTRING("debug_draw_call_count","\x9d","\x71","\x24","\xaf"),
	HX_HCSTRING("debug_geometry_count","\xee","\x2b","\x78","\x61"),
	HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18"),
	HX_HCSTRING("render_stats_text","\x96","\xf7","\xe4","\x0a"),
	HX_HCSTRING("resource_list_text","\x7d","\x5d","\xe6","\x1a"),
	HX_HCSTRING("get_resource_stats_string","\xd9","\xdd","\xed","\x33"),
	HX_HCSTRING("get_batcher_info","\xcf","\x20","\x39","\xeb"),
	HX_HCSTRING("get_render_stats_string","\x91","\x46","\xc0","\x88"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("onwindowsized","\xd4","\xb3","\x35","\x59"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("reset_tween","\xbb","\x00","\xd8","\x80"),
	HX_HCSTRING("refresh_render_stats","\x5a","\xb9","\xf4","\x71"),
	HX_HCSTRING("update_render_stats","\x6c","\x88","\xb9","\xe8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StatsDebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StatsDebugView_obj::__mClass,"__mClass");
};

#endif

hx::Class StatsDebugView_obj::__mClass;

void StatsDebugView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.StatsDebugView","\xcc","\xbf","\xbb","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StatsDebugView_obj >;
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
} // end namespace debug
