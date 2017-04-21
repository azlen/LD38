#include <hxcpp.h>

#include "hxMath.h"
#include "linc_opengl.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_Audio
#include <luxe/Audio.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
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
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
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
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_GamepadEvent
#include <luxe/GamepadEvent.h>
#endif
#ifndef INCLUDED_luxe_IO
#include <luxe/IO.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
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
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Tag
#include <luxe/Tag.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_TouchEvent
#include <luxe/TouchEvent.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
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
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
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
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
#ifndef INCLUDED_snow_types_ModState
#include <snow/types/ModState.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace luxe{

Void Engine_obj::__construct(::luxe::Game _game)
{
HX_STACK_FRAME("luxe.Engine","new",0x68f3cf8c,"luxe.Engine.new","luxe/Engine.hx",35,0xb793dd43)
HX_STACK_THIS(this)
HX_STACK_ARG(_game,"_game")
{
	HX_STACK_LINE(219)
	this->pixel_scale = ((Float)1);
	HX_STACK_LINE(66)
	this->running = false;
	HX_STACK_LINE(64)
	this->headless = false;
	HX_STACK_LINE(63)
	this->inited = false;
	HX_STACK_LINE(62)
	this->has_shutdown = false;
	HX_STACK_LINE(61)
	this->shutting_down = false;
	HX_STACK_LINE(42)
	this->build = HX_HCSTRING("+820525a66d","\x50","\x5f","\x8f","\x00");
	HX_STACK_LINE(41)
	this->version = HX_HCSTRING("dev","\xd5","\x39","\x4c","\x00");
	HX_STACK_LINE(71)
	super::__construct();
	HX_STACK_LINE(73)
	this->game = _game;
	HX_STACK_LINE(76)
	::luxe::Emitter tmp = ::luxe::Emitter_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	this->emitter = tmp;
	HX_STACK_LINE(79)
	::Luxe_obj::core = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(80)
	::luxe::utils::Utils tmp1 = ::luxe::utils::Utils_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	::Luxe_obj::utils = tmp1;
}
;
	return null();
}

//Engine_obj::~Engine_obj() { }

Dynamic Engine_obj::__CreateEmpty() { return  new Engine_obj; }
hx::ObjectPtr< Engine_obj > Engine_obj::__new(::luxe::Game _game)
{  hx::ObjectPtr< Engine_obj > _result_ = new Engine_obj();
	_result_->__construct(_game);
	return _result_;}

Dynamic Engine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Engine_obj > _result_ = new Engine_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Engine_obj::run( ){
{
		HX_STACK_FRAME("luxe.Engine","run",0x68f6e677,"luxe.Engine.run","luxe/Engine.hx",88,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			bool tmp = this->running;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(90)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(90)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			if ((tmp2)){
				HX_STACK_LINE(90)
				::String tmp3 = HX_HCSTRING("running == false","\x24","\xb9","\x38","\xcd");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(90)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(92)
		this->running = true;
		HX_STACK_LINE(94)
		::snow::Snow_obj::__new(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,run,(void))

Void Engine_obj::shutdown( ){
{
		HX_STACK_FRAME("luxe.Engine","shutdown",0xfac37dea,"luxe.Engine.shutdown","luxe/Engine.hx",99,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(102)
		this->shutting_down = true;
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(105)
			Dynamic func = tmp->shutdown_dyn();		HX_STACK_VAR(func,"func");
			HX_STACK_LINE(105)
			bool tmp1 = (func != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(105)
			if ((tmp1)){
				HX_STACK_LINE(105)
				Dynamic tmp2 = func;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,shutdown,(void))

::String Engine_obj::runtime_info( ){
	HX_STACK_FRAME("luxe.Engine","runtime_info",0x2d29cbc9,"luxe.Engine.runtime_info","luxe/Engine.hx",110,0xb793dd43)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	::String tmp = this->build;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	::String tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	::String tmp2 = (tmp1 + HX_HCSTRING(" / debug:","\x78","\xa2","\x67","\x75"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(112)
	::snow::Snow tmp3 = this->app;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	bool tmp4 = tmp3->debug;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(112)
	::String tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(112)
	::String tmp7 = (tmp6 + HX_HCSTRING(" / os:","\x05","\x42","\xbc","\xf0"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(112)
	::snow::Snow tmp8 = this->app;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(112)
	::String tmp9 = tmp8->os;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(112)
	::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(112)
	::String tmp11 = (tmp10 + HX_HCSTRING(" / platform:","\xd6","\x0a","\x95","\x7c"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(112)
	::snow::Snow tmp12 = this->app;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(112)
	::String tmp13 = tmp12->platform;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(112)
	::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(112)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,runtime_info,return )

Void Engine_obj::on( int event,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Engine","on",0xf7496b73,"luxe.Engine.on","luxe/Engine.hx",118,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(119)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		tmp->on(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,on,(void))

bool Engine_obj::off( int event,Dynamic handler){
	HX_STACK_FRAME("luxe.Engine","off",0x68f4929b,"luxe.Engine.off","luxe/Engine.hx",124,0xb793dd43)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(125)
	::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	bool tmp3 = tmp->off(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(125)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,off,return )

Void Engine_obj::emit( int event,Dynamic data){
{
		HX_STACK_FRAME("luxe.Engine","emit",0x6674e5a7,"luxe.Engine.emit","luxe/Engine.hx",130,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(131)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		tmp->emit(tmp1,tmp2);
		HX_STACK_LINE(131)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,emit,(void))

Void Engine_obj::ready( ){
{
		HX_STACK_FRAME("luxe.Engine","ready",0xb6b9c28f,"luxe.Engine.ready","luxe/Engine.hx",136,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		::luxe::Engine _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		if ((tmp)){
			HX_STACK_LINE(139)
			::String tmp1 = (HX_HCSTRING("log / level to ","\xdc","\xcc","\x48","\x9e") + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(139)
			::String tmp2 = (HX_HCSTRING("   i / luxe / ","\xb3","\x3f","\x91","\xb8") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Engine.hx","\x1c","\xa0","\x53","\xbe"),139,HX_HCSTRING("luxe.Engine","\x9a","\x59","\xe2","\x5b"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			::haxe::Log_obj::trace(tmp2,tmp3);
			HX_STACK_LINE(140)
			::String tmp4 = (HX_HCSTRING("log / filter : ","\x41","\x69","\x13","\x1f") + null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			::String tmp5 = (HX_HCSTRING("   i / luxe / ","\xb3","\x3f","\x91","\xb8") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Engine.hx","\x1c","\xa0","\x53","\xbe"),140,HX_HCSTRING("luxe.Engine","\x9a","\x59","\xe2","\x5b"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			::haxe::Log_obj::trace(tmp5,tmp6);
			HX_STACK_LINE(141)
			::String tmp7 = (HX_HCSTRING("log / exclude : ","\x99","\x61","\xf3","\xe1") + null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(141)
			::String tmp8 = (HX_HCSTRING("   i / luxe / ","\xb3","\x3f","\x91","\xb8") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(141)
			Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Engine.hx","\x1c","\xa0","\x53","\xbe"),141,HX_HCSTRING("luxe.Engine","\x9a","\x59","\xe2","\x5b"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(141)
			::haxe::Log_obj::trace(tmp8,tmp9);
		}
		HX_STACK_LINE(144)
		::String tmp1 = ::haxe::Resource_obj::getString(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		this->version = tmp1;
		HX_STACK_LINE(146)
		::String tmp2 = this->version;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		::String tmp3 = ::haxe::Resource_obj::getString(HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		this->build = tmp4;
		HX_STACK_LINE(148)
		::String tmp5 = this->build;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		::String tmp7 = (tmp6 + HX_HCSTRING(" / debug:","\x78","\xa2","\x67","\x75"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(148)
		::snow::Snow tmp8 = this->app;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(148)
		bool tmp9 = tmp8->debug;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(148)
		::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(148)
		::String tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(148)
		::String tmp12 = (tmp11 + HX_HCSTRING(" / os:","\x05","\x42","\xbc","\xf0"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(148)
		::snow::Snow tmp13 = this->app;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(148)
		::String tmp14 = tmp13->os;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(148)
		::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(148)
		::String tmp16 = (tmp15 + HX_HCSTRING(" / platform:","\xd6","\x0a","\x95","\x7c"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(148)
		::snow::Snow tmp17 = this->app;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(148)
		::String tmp18 = tmp17->platform;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(148)
		::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(148)
		::String tmp20 = (HX_HCSTRING("   i / luxe / ","\xb3","\x3f","\x91","\xb8") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(148)
		Dynamic tmp21 = hx::SourceInfo(HX_HCSTRING("Engine.hx","\x1c","\xa0","\x53","\xbe"),148,HX_HCSTRING("luxe.Engine","\x9a","\x59","\xe2","\x5b"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(148)
		::haxe::Log_obj::trace(tmp20,tmp21);
		HX_STACK_LINE(157)
		Dynamic tmp22 = this->game_config;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(157)
		this->headless = tmp22->__Field(HX_HCSTRING("headless","\x79","\x4c","\xd6","\x48"), hx::paccDynamic );
		HX_STACK_LINE(158)
		bool tmp23 = this->headless;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(158)
		bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(158)
		if ((tmp24)){
			HX_STACK_LINE(160)
			::String _font_name = HX_HCSTRING("default.png","\x7c","\xfa","\xa2","\x05");		HX_STACK_VAR(_font_name,"_font_name");
			HX_STACK_LINE(161)
			::snow::api::buffers::ArrayBufferView tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(161)
			{
				HX_STACK_LINE(161)
				::String tmp26 = _font_name;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(161)
				::haxe::io::Bytes tmp27 = ::haxe::Resource_obj::getBytes(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(161)
				::haxe::io::Bytes _bytes = tmp27;		HX_STACK_VAR(_bytes,"_bytes");
				HX_STACK_LINE(161)
				Dynamic _byteLength = null();		HX_STACK_VAR(_byteLength,"_byteLength");
				HX_STACK_LINE(161)
				bool tmp28 = (_byteLength == null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(161)
				if ((tmp28)){
					HX_STACK_LINE(161)
					_byteLength = _bytes->length;
				}
				HX_STACK_LINE(161)
				{
					HX_STACK_LINE(161)
					Array< unsigned char > _buffer = _bytes->b;		HX_STACK_VAR(_buffer,"_buffer");
					HX_STACK_LINE(161)
					int _byteOffset = (int)0;		HX_STACK_VAR(_byteOffset,"_byteOffset");
					HX_STACK_LINE(161)
					int _byteLength1 = _byteLength;		HX_STACK_VAR(_byteLength1,"_byteLength1");
					HX_STACK_LINE(161)
					{
						HX_STACK_LINE(161)
						::snow::api::buffers::ArrayBufferView tmp29 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)4);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(161)
						::snow::api::buffers::ArrayBufferView _view = tmp29;		HX_STACK_VAR(_view,"_view");
						HX_STACK_LINE(161)
						int _bytes_per_elem = _view->bytesPerElement;		HX_STACK_VAR(_bytes_per_elem,"_bytes_per_elem");
						HX_STACK_LINE(161)
						bool tmp30 = (_byteOffset < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(161)
						if ((tmp30)){
							HX_STACK_LINE(161)
							::snow::api::buffers::TAError tmp31 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be positive (> 0)","\x07","\x9d","\xc2","\x39"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(161)
							HX_STACK_DO_THROW(tmp31);
						}
						HX_STACK_LINE(161)
						int tmp31 = hx::Mod(_byteOffset,_bytes_per_elem);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(161)
						bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(161)
						if ((tmp32)){
							HX_STACK_LINE(161)
							::snow::api::buffers::TAError tmp33 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: byte offset must be aligned with the bytes per element","\xe2","\x98","\x67","\x08"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(161)
							HX_STACK_DO_THROW(tmp33);
						}
						HX_STACK_LINE(161)
						int _src_bytelen = _buffer->length;		HX_STACK_VAR(_src_bytelen,"_src_bytelen");
						HX_STACK_LINE(161)
						int tmp33 = (_byteOffset + _byteLength1);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(161)
						int _new_range = tmp33;		HX_STACK_VAR(_new_range,"_new_range");
						HX_STACK_LINE(161)
						bool tmp34 = (_new_range > _src_bytelen);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(161)
						if ((tmp34)){
							HX_STACK_LINE(161)
							::snow::api::buffers::TAError tmp35 = ::snow::api::buffers::TAError_obj::RangeError(HX_HCSTRING("fromBuffer: specified range would exceed the source buffer","\x98","\x6f","\xa0","\xbe"));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(161)
							HX_STACK_DO_THROW(tmp35);
						}
						HX_STACK_LINE(161)
						_view->buffer = _buffer;
						HX_STACK_LINE(161)
						_view->byteOffset = _byteOffset;
						HX_STACK_LINE(161)
						_view->byteLength = _byteLength1;
						HX_STACK_LINE(161)
						Float tmp35 = (Float(_byteLength1) / Float(_bytes_per_elem));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(161)
						int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(161)
						_view->length = tmp36;
						HX_STACK_LINE(161)
						tmp25 = _view;
					}
				}
			}
			HX_STACK_LINE(161)
			::snow::api::buffers::ArrayBufferView _font_image = tmp25;		HX_STACK_VAR(_font_image,"_font_image");
			HX_STACK_LINE(162)
			::snow::Snow tmp26 = this->app;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(162)
			::snow::systems::assets::Assets tmp27 = tmp26->assets;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(162)
			::String tmp28 = _font_name;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(162)
			::snow::api::buffers::ArrayBufferView tmp29 = _font_image;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(162)
			::snow::api::Promise tmp30 = ::snow::systems::assets::AssetImage_obj::load_from_bytes(tmp27,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(162)
			::snow::api::Promise _font_load = tmp30;		HX_STACK_VAR(_font_load,"_font_load");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::luxe::Engine,_g)
			int __ArgCount() const { return 1; }
			Void run(::snow::systems::assets::AssetImage asset){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/Engine.hx",164,0xb793dd43)
				HX_STACK_ARG(asset,"asset")
				{
					HX_STACK_LINE(165)
					::snow::systems::assets::AssetImage tmp31 = asset;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(165)
					_g->init(tmp31);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(164)
			::snow::api::Promise tmp31 = _font_load->then( Dynamic(new _Function_2_1(_g)),null());		HX_STACK_VAR(tmp31,"tmp31");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::luxe::Engine,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic error){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","luxe/Engine.hx",166,0xb793dd43)
				HX_STACK_ARG(error,"error")
				{
					HX_STACK_LINE(167)
					::String tmp32 = HX_HCSTRING("   i / luxe / failed to load default font, things will probably not look right... $error","\xe1","\x1f","\x6a","\x77");		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(167)
					Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("Engine.hx","\x1c","\xa0","\x53","\xbe"),167,HX_HCSTRING("luxe.Engine","\x9a","\x59","\xe2","\x5b"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(167)
					::haxe::Log_obj::trace(tmp32,tmp33);
					HX_STACK_LINE(168)
					_g->init(null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(164)
			tmp31->error( Dynamic(new _Function_2_2(_g)));
		}
		else{
			HX_STACK_LINE(173)
			this->init(null());
		}
	}
return null();
}


Void Engine_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Engine","ondestroy",0x5fb965e7,"luxe.Engine.ondestroy","luxe/Engine.hx",181,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		this->shutting_down = true;
		HX_STACK_LINE(185)
		::String tmp = HX_HCSTRING("   i / luxe / shutting down...","\x81","\x1d","\xf4","\x89");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Engine.hx","\x1c","\xa0","\x53","\xbe"),185,HX_HCSTRING("luxe.Engine","\x9a","\x59","\xe2","\x5b"),HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		::haxe::Log_obj::trace(tmp,tmp1);
		HX_STACK_LINE(188)
		::luxe::Emitter tmp2 = this->emitter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		tmp2->emit((int)8,null());
		HX_STACK_LINE(189)
		::luxe::Game tmp3 = this->game;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		tmp3->ondestroy();
		HX_STACK_LINE(192)
		::phoenix::Renderer tmp4 = this->renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		if ((tmp5)){
			HX_STACK_LINE(193)
			::phoenix::Renderer tmp6 = this->renderer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			tmp6->destroy();
		}
		HX_STACK_LINE(196)
		::luxe::Physics tmp6 = this->physics;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		tmp6->destroy();
		HX_STACK_LINE(197)
		::luxe::Input tmp7 = this->input;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		tmp7->destroy();
		HX_STACK_LINE(198)
		::luxe::Audio tmp8 = this->audio;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		tmp8->destroy();
		HX_STACK_LINE(199)
		::luxe::Timer tmp9 = this->timer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(199)
		tmp9->destroy();
		HX_STACK_LINE(200)
		::luxe::Events tmp10 = this->events;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(200)
		tmp10->destroy();
		HX_STACK_LINE(201)
		::luxe::Debug tmp11 = this->debug;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(201)
		tmp11->destroy();
		HX_STACK_LINE(204)
		this->emitter = null();
		HX_STACK_LINE(205)
		this->input = null();
		HX_STACK_LINE(206)
		this->audio = null();
		HX_STACK_LINE(207)
		this->events = null();
		HX_STACK_LINE(208)
		this->timer = null();
		HX_STACK_LINE(209)
		this->debug = null();
		HX_STACK_LINE(210)
		::Luxe_obj::utils = null();
		HX_STACK_LINE(213)
		this->has_shutdown = true;
		HX_STACK_LINE(215)
		::String tmp12 = HX_HCSTRING("   i / luxe / goodbye.","\x30","\x34","\x21","\x5b");		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(215)
		Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Engine.hx","\x1c","\xa0","\x53","\xbe"),215,HX_HCSTRING("luxe.Engine","\x9a","\x59","\xe2","\x5b"),HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(215)
		::haxe::Log_obj::trace(tmp12,tmp13);
	}
return null();
}


Void Engine_obj::init( ::snow::systems::assets::AssetImage asset){
{
		HX_STACK_FRAME("luxe.Engine","init",0x691a8264,"luxe.Engine.init","luxe/Engine.hx",221,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(asset,"asset")
		HX_STACK_LINE(227)
		::luxe::Debug tmp = ::luxe::Debug_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		::luxe::Debug tmp1 = this->debug = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		::Luxe_obj::debug = tmp1;
		HX_STACK_LINE(228)
		::luxe::IO tmp2 = ::luxe::IO_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(228)
		::luxe::IO tmp3 = this->io = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(228)
		::Luxe_obj::io = tmp3;
		HX_STACK_LINE(230)
		::luxe::Draw tmp4 = ::luxe::Draw_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		this->draw = tmp4;
		HX_STACK_LINE(231)
		::luxe::Timer tmp5 = ::luxe::Timer_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		this->timer = tmp5;
		HX_STACK_LINE(232)
		::luxe::Events tmp6 = ::luxe::Events_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(232)
		this->events = tmp6;
		HX_STACK_LINE(233)
		::luxe::Audio tmp7 = ::luxe::Audio_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(233)
		this->audio = tmp7;
		HX_STACK_LINE(234)
		::luxe::Input tmp8 = ::luxe::Input_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(234)
		this->input = tmp8;
		HX_STACK_LINE(235)
		::luxe::Physics tmp9 = ::luxe::Physics_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(235)
		this->physics = tmp9;
		HX_STACK_LINE(237)
		::luxe::Resources tmp10 = ::luxe::Resources_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(237)
		this->resources = tmp10;
		HX_STACK_LINE(238)
		::luxe::Resources tmp11 = this->resources;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(238)
		::Luxe_obj::resources = tmp11;
		HX_STACK_LINE(240)
		bool tmp12 = this->headless;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(240)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(240)
		if ((tmp13)){
			HX_STACK_LINE(241)
			::phoenix::Renderer tmp14 = ::phoenix::Renderer_obj::__new(hx::ObjectPtr<OBJ_>(this),asset);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(241)
			this->renderer = tmp14;
			HX_STACK_LINE(242)
			::phoenix::Renderer tmp15 = this->renderer;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(242)
			::Luxe_obj::renderer = tmp15;
		}
		HX_STACK_LINE(245)
		::snow::Snow tmp14 = this->app;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(245)
		int tmp15 = tmp14->runtime->window_w;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(245)
		int _render_w = tmp15;		HX_STACK_VAR(_render_w,"_render_w");
		HX_STACK_LINE(246)
		::snow::Snow tmp16 = this->app;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(246)
		int tmp17 = tmp16->runtime->window_h;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(246)
		int _render_h = tmp17;		HX_STACK_VAR(_render_h,"_render_h");
		HX_STACK_LINE(251)
		::snow::Snow tmp18 = this->app;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(251)
		Float tmp19 = tmp18->runtime->window_device_pixel_ratio();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(251)
		this->pixel_scale = tmp19;
		HX_STACK_LINE(252)
		int tmp20 = _render_w;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(252)
		Float tmp21 = this->pixel_scale;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(252)
		Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(252)
		int tmp23 = ::Math_obj::floor(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(252)
		int tmp24 = _render_h;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(252)
		Float tmp25 = this->pixel_scale;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(252)
		Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(252)
		int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(252)
		::luxe::Screen tmp28 = ::luxe::Screen_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp23,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(252)
		this->screen = tmp28;
		HX_STACK_LINE(255)
		::luxe::Debug tmp29 = this->debug;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(255)
		tmp29->init();
		HX_STACK_LINE(256)
		::luxe::IO tmp30 = this->io;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(256)
		tmp30->init();
		HX_STACK_LINE(257)
		::luxe::Timer tmp31 = this->timer;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(257)
		tmp31->init();
		HX_STACK_LINE(258)
		::luxe::Audio tmp32 = this->audio;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(258)
		tmp32->init();
		HX_STACK_LINE(259)
		::luxe::Input tmp33 = this->input;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(259)
		tmp33->init();
		HX_STACK_LINE(261)
		bool tmp34 = this->headless;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(261)
		bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(261)
		if ((tmp35)){
			HX_STACK_LINE(262)
			::phoenix::Renderer tmp36 = this->renderer;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(262)
			tmp36->init();
		}
		HX_STACK_LINE(265)
		::luxe::Physics tmp36 = this->physics;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(265)
		tmp36->init();
		HX_STACK_LINE(267)
		::luxe::Audio tmp37 = this->audio;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(267)
		::Luxe_obj::audio = tmp37;
		HX_STACK_LINE(268)
		::luxe::Draw tmp38 = this->draw;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(268)
		::Luxe_obj::draw = tmp38;
		HX_STACK_LINE(269)
		::luxe::Events tmp39 = this->events;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(269)
		::Luxe_obj::events = tmp39;
		HX_STACK_LINE(270)
		::luxe::Timer tmp40 = this->timer;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(270)
		::Luxe_obj::timer = tmp40;
		HX_STACK_LINE(271)
		::luxe::Input tmp41 = this->input;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(271)
		::Luxe_obj::input = tmp41;
		HX_STACK_LINE(273)
		bool tmp42 = this->headless;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(273)
		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(273)
		if ((tmp43)){
			HX_STACK_LINE(274)
			::phoenix::Renderer tmp44 = this->renderer;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(274)
			::phoenix::Camera tmp45 = tmp44->camera;		HX_STACK_VAR(tmp45,"tmp45");
			struct _Function_2_1{
				inline static Dynamic Block( ::phoenix::Camera &tmp45){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Engine.hx",274,0xb793dd43)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("default camera","\x24","\x50","\x2a","\x4c"),false);
						__result->Add(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e") , tmp45,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(274)
			Dynamic tmp46 = _Function_2_1::Block(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(274)
			::luxe::Camera tmp47 = ::luxe::Camera_obj::__new(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(274)
			::Luxe_obj::camera = tmp47;
		}
		HX_STACK_LINE(277)
		::luxe::Physics tmp44 = this->physics;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(277)
		::Luxe_obj::physics = tmp44;
		HX_STACK_LINE(279)
		::luxe::Scene tmp45 = ::luxe::Scene_obj::__new(HX_HCSTRING("default scene","\xad","\xc4","\x21","\x0a"));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(279)
		this->scene = tmp45;
		HX_STACK_LINE(280)
		::luxe::Scene tmp46 = this->scene;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(280)
		::Luxe_obj::scene = tmp46;
		HX_STACK_LINE(282)
		bool tmp47 = this->headless;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(282)
		bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(282)
		if ((tmp48)){
			HX_STACK_LINE(283)
			::luxe::Scene tmp49 = this->scene;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(283)
			::luxe::Camera tmp50 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(283)
			tmp49->add(tmp50);
			HX_STACK_LINE(284)
			::luxe::Debug tmp51 = this->debug;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(284)
			tmp51->create_debug_console();
		}
		HX_STACK_LINE(287)
		this->internal_pre_ready();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,init,(void))

Void Engine_obj::internal_pre_ready( ){
{
		HX_STACK_FRAME("luxe.Engine","internal_pre_ready",0x89eba799,"luxe.Engine.internal_pre_ready","luxe/Engine.hx",291,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(293)
		bool tmp = this->headless;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		if ((tmp1)){
			HX_STACK_LINE(299)
			::String tmp2 = linc::opengl::webgl::getVersionString();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(299)
			::String tmp3 = (HX_HCSTRING("opengl ","\xd1","\x7c","\x43","\x40") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			::String tmp4 = (HX_HCSTRING("   i / luxe / ","\xb3","\x3f","\x91","\xb8") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(299)
			Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Engine.hx","\x1c","\xa0","\x53","\xbe"),299,HX_HCSTRING("luxe.Engine","\x9a","\x59","\xe2","\x5b"),HX_HCSTRING("internal_pre_ready","\x45","\xb5","\x6d","\x32"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(299)
			::haxe::Log_obj::trace(tmp4,tmp5);
			HX_STACK_LINE(306)
			::luxe::Resources tmp6 = this->resources;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(307)
			Dynamic tmp7 = this->game_config;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(308)
			Dynamic tmp8 = this->game_config;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(309)
			Dynamic tmp9 = this->game_config;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(310)
			Dynamic tmp10 = this->game_config;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(311)
			Dynamic tmp11 = this->game_config;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(312)
			Dynamic tmp12 = this->game_config;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(313)
			Dynamic tmp13 = this->game_config;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(314)
			Dynamic tmp14 = this->internal_ready_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			struct _Function_2_1{
				inline static Dynamic Block( ::luxe::Resources &tmp6,Dynamic &tmp13,Dynamic &tmp9,Dynamic &tmp11,Dynamic &tmp10,Dynamic &tmp7,Dynamic &tmp8,Dynamic &tmp12,Dynamic &tmp14){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Engine.hx",304,0xb793dd43)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("default_parcel","\xc7","\xbb","\xe2","\xbd"),false);
						__result->Add(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2") , tmp6,false);
						__result->Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd") , tmp7->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d") , tmp8->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , tmp9->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , tmp10->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04") , tmp11->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f") , tmp12->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32") , tmp13->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83") , tmp14,false);

						HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
						int __ArgCount() const { return 1; }
						Void run(Dynamic _error){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","luxe/Engine.hx",315,0xb793dd43)
							HX_STACK_ARG(_error,"_error")
							{
								HX_STACK_LINE(316)
								::String tmp15 = HX_HCSTRING("   i / luxe / config / preload / failed to load","\x2c","\xa6","\xfd","\xef");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(316)
								Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Engine.hx","\x1c","\xa0","\x53","\xbe"),316,HX_HCSTRING("luxe.Engine","\x9a","\x59","\xe2","\x5b"),HX_HCSTRING("internal_pre_ready","\x45","\xb5","\x6d","\x32"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(316)
								::haxe::Log_obj::trace(tmp15,tmp16);
								HX_STACK_LINE(317)
								Dynamic tmp17 = _error;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(317)
								::snow::types::Error tmp18 = ::snow::types::Error_obj::error(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(317)
								HX_STACK_DO_THROW(tmp18);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						__result->Add(HX_HCSTRING("onfailed","\x1c","\x48","\x17","\x93") ,  Dynamic(new _Function_3_1()),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(304)
			Dynamic tmp15 = _Function_2_1::Block(tmp6,tmp13,tmp9,tmp11,tmp10,tmp7,tmp8,tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(304)
			::luxe::Parcel tmp16 = ::luxe::Parcel_obj::__new(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(304)
			::luxe::Parcel _default_parcel = tmp16;		HX_STACK_VAR(_default_parcel,"_default_parcel");
			HX_STACK_LINE(321)
			_default_parcel->load(null());
		}
		else{
			HX_STACK_LINE(325)
			this->internal_ready(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,internal_pre_ready,(void))

Void Engine_obj::internal_ready( ::luxe::Parcel _){
{
		HX_STACK_FRAME("luxe.Engine","internal_ready",0x7bd612f5,"luxe.Engine.internal_ready","luxe/Engine.hx",331,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(333)
		bool tmp = this->headless;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(333)
		if ((tmp1)){
			HX_STACK_LINE(337)
			::luxe::Debug tmp2 = this->debug;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(337)
			::String tmp3 = ::luxe::Tag_obj::update;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(337)
			tmp2->start(tmp3,(int)50);
			HX_STACK_LINE(338)
			::luxe::Debug tmp4 = this->debug;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(338)
			::String tmp5 = ::luxe::Tag_obj::tick;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(338)
			tmp4->start(tmp5,(int)50);
		}
		HX_STACK_LINE(345)
		::luxe::Game tmp2 = this->game;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		tmp2->ready();
		HX_STACK_LINE(348)
		bool tmp3 = this->shutting_down;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(348)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(348)
		if ((tmp4)){
			HX_STACK_LINE(352)
			::luxe::Emitter tmp5 = this->emitter;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(352)
			tmp5->emit((int)2,null());
			HX_STACK_LINE(353)
			this->inited = true;
			HX_STACK_LINE(356)
			::luxe::Physics tmp6 = this->physics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(356)
			tmp6->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,internal_ready,(void))

Void Engine_obj::onevent( ::snow::types::SystemEvent _event){
{
		HX_STACK_FRAME("luxe.Engine","onevent",0xa081fbc7,"luxe.Engine.onevent","luxe/Engine.hx",364,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(366)
		bool tmp = (_event->window != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		if ((tmp)){
			HX_STACK_LINE(367)
			::snow::types::WindowEvent tmp1 = _event->window;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(367)
			this->window_event(tmp1);
		}
		HX_STACK_LINE(370)
		::luxe::Game tmp1 = this->game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(370)
		::snow::types::SystemEvent tmp2 = _event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(370)
		tmp1->onevent(tmp2);
	}
return null();
}


Void Engine_obj::update( Float _delta){
{
		HX_STACK_FRAME("luxe.Engine","update",0xb6444a5d,"luxe.Engine.update","luxe/Engine.hx",376,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_delta,"_delta")
		HX_STACK_LINE(378)
		bool tmp = this->has_shutdown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(378)
		if ((tmp)){
			HX_STACK_LINE(378)
			return null();
		}
		HX_STACK_LINE(379)
		bool tmp1 = this->inited;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(379)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(379)
		if ((tmp2)){
			HX_STACK_LINE(379)
			return null();
		}
		HX_STACK_LINE(384)
		::luxe::Debug tmp3 = this->debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(384)
		::String tmp4 = ::luxe::Tag_obj::update;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(384)
		tmp3->end(tmp4);
		HX_STACK_LINE(385)
		::luxe::Debug tmp5 = this->debug;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(385)
		::String tmp6 = ::luxe::Tag_obj::update;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(385)
		tmp5->start(tmp6,null());
		HX_STACK_LINE(392)
		::luxe::Timer tmp7 = this->timer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(392)
		tmp7->process();
		HX_STACK_LINE(396)
		::luxe::Input tmp8 = this->input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(396)
		tmp8->process();
		HX_STACK_LINE(400)
		::luxe::Audio tmp9 = this->audio;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(400)
		tmp9->process();
		HX_STACK_LINE(404)
		::luxe::Events tmp10 = this->events;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(404)
		tmp10->process();
		HX_STACK_LINE(409)
		::luxe::Physics tmp11 = this->physics;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(409)
		tmp11->process();
		HX_STACK_LINE(412)
		::luxe::Debug tmp12 = this->debug;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(412)
		::String tmp13 = ::luxe::Tag_obj::updates;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(412)
		tmp12->start(tmp13,null());
		HX_STACK_LINE(413)
		::luxe::Emitter tmp14 = this->emitter;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(413)
		Float tmp15 = _delta;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(413)
		tmp14->emit((int)6,tmp15);
		HX_STACK_LINE(414)
		::luxe::Debug tmp16 = this->debug;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(414)
		::String tmp17 = ::luxe::Tag_obj::updates;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(414)
		tmp16->end(tmp17);
		HX_STACK_LINE(417)
		::luxe::Debug tmp18 = this->debug;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(417)
		::String tmp19 = ::luxe::Tag_obj::game_update;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(417)
		tmp18->start(tmp19,null());
		HX_STACK_LINE(418)
		::luxe::Game tmp20 = this->game;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(418)
		Float tmp21 = _delta;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(418)
		tmp20->update(tmp21);
		HX_STACK_LINE(419)
		::luxe::Debug tmp22 = this->debug;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(419)
		::String tmp23 = ::luxe::Tag_obj::game_update;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(419)
		tmp22->end(tmp23);
		HX_STACK_LINE(423)
		::luxe::Debug tmp24 = this->debug;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(423)
		tmp24->process();
	}
return null();
}


Void Engine_obj::tick( Float _delta){
{
		HX_STACK_FRAME("luxe.Engine","tick",0x705c0ab1,"luxe.Engine.tick","luxe/Engine.hx",428,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_delta,"_delta")
		HX_STACK_LINE(430)
		bool tmp = this->shutting_down;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		if ((tmp)){
			HX_STACK_LINE(430)
			return null();
		}
		HX_STACK_LINE(431)
		bool tmp1 = this->inited;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(431)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(431)
		if ((tmp2)){
			HX_STACK_LINE(431)
			return null();
		}
		HX_STACK_LINE(434)
		::luxe::Debug tmp3 = this->debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(434)
		::String tmp4 = ::luxe::Tag_obj::tick;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(434)
		tmp3->end(tmp4);
		HX_STACK_LINE(435)
		::luxe::Debug tmp5 = this->debug;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(435)
		::String tmp6 = ::luxe::Tag_obj::tick;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(435)
		tmp5->start(tmp6,null());
		HX_STACK_LINE(438)
		bool tmp7 = this->headless;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(438)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(438)
		if ((tmp8)){
			HX_STACK_LINE(440)
			::luxe::Debug tmp9 = this->debug;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(440)
			::String tmp10 = ::luxe::Tag_obj::render;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(440)
			tmp9->start(tmp10,null());
			HX_STACK_LINE(442)
			::phoenix::Renderer tmp11 = this->renderer;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(442)
			tmp11->prerender();
			HX_STACK_LINE(444)
			::luxe::Emitter tmp12 = this->emitter;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(444)
			tmp12->emit((int)9,null());
			HX_STACK_LINE(445)
			::luxe::Game tmp13 = this->game;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(445)
			tmp13->onprerender();
			HX_STACK_LINE(447)
			::luxe::Emitter tmp14 = this->emitter;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(447)
			tmp14->emit((int)10,null());
			HX_STACK_LINE(448)
			::luxe::Game tmp15 = this->game;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(448)
			tmp15->onrender();
			HX_STACK_LINE(449)
			::phoenix::Renderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(449)
			tmp16->process();
			HX_STACK_LINE(451)
			::luxe::Emitter tmp17 = this->emitter;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(451)
			tmp17->emit((int)11,null());
			HX_STACK_LINE(452)
			::luxe::Game tmp18 = this->game;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(452)
			tmp18->onpostrender();
			HX_STACK_LINE(454)
			::luxe::Debug tmp19 = this->debug;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(454)
			::String tmp20 = ::luxe::Tag_obj::render;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(454)
			tmp19->end(tmp20);
			HX_STACK_LINE(456)
			::luxe::Debug tmp21 = this->debug;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(456)
			tmp21->render();
		}
	}
return null();
}


Void Engine_obj::ontickstart( ){
{
		HX_STACK_FRAME("luxe.Engine","ontickstart",0x45416e12,"luxe.Engine.ontickstart","luxe/Engine.hx",462,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(464)
		bool tmp = this->has_shutdown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(464)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(464)
		if ((tmp1)){
			HX_STACK_LINE(465)
			::luxe::Emitter tmp2 = this->emitter;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(465)
			tmp2->emit((int)4,null());
		}
	}
return null();
}


Void Engine_obj::ontickend( ){
{
		HX_STACK_FRAME("luxe.Engine","ontickend",0x5618318b,"luxe.Engine.ontickend","luxe/Engine.hx",470,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(472)
		bool tmp = this->has_shutdown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(472)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(472)
		if ((tmp1)){
			HX_STACK_LINE(473)
			::luxe::Emitter tmp2 = this->emitter;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(473)
			tmp2->emit((int)5,null());
		}
	}
return null();
}


Void Engine_obj::window_event( ::snow::types::WindowEvent _event){
{
		HX_STACK_FRAME("luxe.Engine","window_event",0x4a3cf29f,"luxe.Engine.window_event","luxe/Engine.hx",480,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(482)
		bool tmp = this->shutting_down;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(482)
		if ((tmp)){
			HX_STACK_LINE(482)
			return null();
		}
		HX_STACK_LINE(483)
		bool tmp1 = this->inited;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(483)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(483)
		if ((tmp2)){
			HX_STACK_LINE(483)
			return null();
		}
		HX_STACK_LINE(486)
		Dynamic _render_w = _event->x;		HX_STACK_VAR(_render_w,"_render_w");
		HX_STACK_LINE(487)
		Dynamic _render_h = _event->y;		HX_STACK_VAR(_render_h,"_render_h");
		HX_STACK_LINE(491)
		::snow::Snow tmp3 = this->app;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(491)
		Float tmp4 = tmp3->runtime->window_device_pixel_ratio();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(491)
		this->pixel_scale = tmp4;
		HX_STACK_LINE(495)
		Dynamic tmp5 = _render_w;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(495)
		Float tmp6 = this->pixel_scale;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(495)
		Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(495)
		int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(495)
		_event->x = tmp8;
		HX_STACK_LINE(496)
		Dynamic tmp9 = _render_h;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(496)
		Float tmp10 = this->pixel_scale;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(496)
		Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(496)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(496)
		_event->y = tmp12;
		HX_STACK_LINE(498)
		::luxe::Emitter tmp13 = this->emitter;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(498)
		::snow::types::WindowEvent tmp14 = _event;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(498)
		tmp13->emit((int)28,tmp14);
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			int _g = _event->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(500)
			int tmp15 = _g;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(500)
			switch( (int)(tmp15)){
				case (int)4: {
					HX_STACK_LINE(503)
					::luxe::Emitter tmp16 = this->emitter;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(503)
					::snow::types::WindowEvent tmp17 = _event;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(503)
					tmp16->emit((int)29,tmp17);
					HX_STACK_LINE(504)
					::luxe::Game tmp18 = this->game;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(504)
					::snow::types::WindowEvent tmp19 = _event;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(504)
					tmp18->onwindowmoved(tmp19);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(508)
					::luxe::Screen tmp16 = this->screen;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(508)
					Dynamic tmp17 = _event->x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(508)
					Dynamic tmp18 = _event->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(508)
					tmp16->internal_resized(tmp17,tmp18);
					HX_STACK_LINE(509)
					::phoenix::Renderer tmp19 = this->renderer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(509)
					Dynamic tmp20 = _render_w;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(509)
					Dynamic tmp21 = _render_h;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(509)
					tmp19->internal_resized(tmp20,tmp21);
					HX_STACK_LINE(510)
					::luxe::Emitter tmp22 = this->emitter;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(510)
					::snow::types::WindowEvent tmp23 = _event;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(510)
					tmp22->emit((int)30,tmp23);
					HX_STACK_LINE(511)
					::luxe::Game tmp24 = this->game;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(511)
					::snow::types::WindowEvent tmp25 = _event;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(511)
					tmp24->onwindowresized(tmp25);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(515)
					::luxe::Screen tmp16 = this->screen;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(515)
					Dynamic tmp17 = _event->x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(515)
					Dynamic tmp18 = _event->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(515)
					tmp16->internal_resized(tmp17,tmp18);
					HX_STACK_LINE(516)
					::phoenix::Renderer tmp19 = this->renderer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(516)
					Dynamic tmp20 = _render_w;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(516)
					Dynamic tmp21 = _render_h;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(516)
					tmp19->internal_resized(tmp20,tmp21);
					HX_STACK_LINE(517)
					::luxe::Emitter tmp22 = this->emitter;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(517)
					::snow::types::WindowEvent tmp23 = _event;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(517)
					tmp22->emit((int)31,tmp23);
					HX_STACK_LINE(518)
					::luxe::Game tmp24 = this->game;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(518)
					::snow::types::WindowEvent tmp25 = _event;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(518)
					tmp24->onwindowsized(tmp25);
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(522)
					::luxe::Emitter tmp16 = this->emitter;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(522)
					::snow::types::WindowEvent tmp17 = _event;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(522)
					tmp16->emit((int)32,tmp17);
					HX_STACK_LINE(523)
					::luxe::Game tmp18 = this->game;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(523)
					::snow::types::WindowEvent tmp19 = _event;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(523)
					tmp18->onwindowminimized(tmp19);
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(527)
					::luxe::Emitter tmp16 = this->emitter;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(527)
					::snow::types::WindowEvent tmp17 = _event;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(527)
					tmp16->emit((int)33,tmp17);
					HX_STACK_LINE(528)
					::luxe::Game tmp18 = this->game;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(528)
					::snow::types::WindowEvent tmp19 = _event;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(528)
					tmp18->onwindowrestored(tmp19);
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(535)
		_event = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,window_event,(void))

Void Engine_obj::onmousedown( int _x,int _y,int _button,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Engine","onmousedown",0xdd0e9334,"luxe.Engine.onmousedown","luxe/Engine.hx",548,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(550)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(550)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(550)
		if ((tmp1)){
			HX_STACK_LINE(550)
			return null();
		}
		HX_STACK_LINE(552)
		int tmp2 = _x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(552)
		Float tmp3 = this->pixel_scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(552)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(552)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(552)
		_x = tmp5;
		HX_STACK_LINE(553)
		int tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(553)
		Float tmp7 = this->pixel_scale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(553)
		Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(553)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(553)
		_y = tmp9;
		HX_STACK_LINE(555)
		{
			HX_STACK_LINE(555)
			::luxe::Screen tmp10 = this->screen;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(555)
			::luxe::Cursor _this = tmp10->cursor;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(555)
			_this->ignore = true;
			HX_STACK_LINE(555)
			::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(555)
			_this->pos = tmp11;
			HX_STACK_LINE(555)
			_this->ignore = false;
		}
		HX_STACK_LINE(557)
		::luxe::Input tmp10 = this->input;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(557)
		int tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(557)
		int tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(557)
		int tmp13 = _button;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(557)
		Float tmp14 = _timestamp;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(557)
		int tmp15 = _window_id;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(557)
		tmp10->onmousedown(tmp11,tmp12,tmp13,tmp14,tmp15);
	}
return null();
}


Void Engine_obj::onmouseup( int _x,int _y,int _button,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Engine","onmouseup",0xfba648ad,"luxe.Engine.onmouseup","luxe/Engine.hx",561,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(563)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(563)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(563)
		if ((tmp1)){
			HX_STACK_LINE(563)
			return null();
		}
		HX_STACK_LINE(565)
		int tmp2 = _x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(565)
		Float tmp3 = this->pixel_scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(565)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(565)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(565)
		_x = tmp5;
		HX_STACK_LINE(566)
		int tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(566)
		Float tmp7 = this->pixel_scale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(566)
		Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(566)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(566)
		_y = tmp9;
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			::luxe::Screen tmp10 = this->screen;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(568)
			::luxe::Cursor _this = tmp10->cursor;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(568)
			_this->ignore = true;
			HX_STACK_LINE(568)
			::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(568)
			_this->pos = tmp11;
			HX_STACK_LINE(568)
			_this->ignore = false;
		}
		HX_STACK_LINE(570)
		::luxe::Input tmp10 = this->input;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(570)
		int tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(570)
		int tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(570)
		int tmp13 = _button;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(570)
		Float tmp14 = _timestamp;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(570)
		int tmp15 = _window_id;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(570)
		tmp10->onmouseup(tmp11,tmp12,tmp13,tmp14,tmp15);
	}
return null();
}


Void Engine_obj::onmousemove( int _x,int _y,int _x_rel,int _y_rel,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Engine","onmousemove",0xe3017de3,"luxe.Engine.onmousemove","luxe/Engine.hx",574,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_x_rel,"_x_rel")
		HX_STACK_ARG(_y_rel,"_y_rel")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(576)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(576)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(576)
		if ((tmp1)){
			HX_STACK_LINE(576)
			return null();
		}
		HX_STACK_LINE(578)
		int tmp2 = _x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(578)
		Float tmp3 = this->pixel_scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(578)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(578)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(578)
		_x = tmp5;
		HX_STACK_LINE(579)
		int tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(579)
		Float tmp7 = this->pixel_scale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(579)
		Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(579)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(579)
		_y = tmp9;
		HX_STACK_LINE(581)
		{
			HX_STACK_LINE(581)
			::luxe::Screen tmp10 = this->screen;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(581)
			::luxe::Cursor _this = tmp10->cursor;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(581)
			_this->ignore = true;
			HX_STACK_LINE(581)
			::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(581)
			_this->pos = tmp11;
			HX_STACK_LINE(581)
			_this->ignore = false;
		}
		HX_STACK_LINE(583)
		::luxe::Input tmp10 = this->input;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(583)
		int tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(583)
		int tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(583)
		int tmp13 = _x_rel;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(583)
		int tmp14 = _y_rel;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(583)
		Float tmp15 = _timestamp;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(583)
		int tmp16 = _window_id;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(583)
		tmp10->onmousemove(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
	}
return null();
}


Void Engine_obj::onmousewheel( Float _x,Float _y,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Engine","onmousewheel",0x7ba11189,"luxe.Engine.onmousewheel","luxe/Engine.hx",587,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(589)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(589)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(589)
		if ((tmp1)){
			HX_STACK_LINE(589)
			return null();
		}
		HX_STACK_LINE(591)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(591)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(591)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(591)
		Float tmp5 = _timestamp;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(591)
		int tmp6 = _window_id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(591)
		tmp2->onmousewheel(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


Void Engine_obj::onkeydown( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Engine","onkeydown",0xeca1766e,"luxe.Engine.onkeydown","luxe/Engine.hx",597,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_keycode,"_keycode")
		HX_STACK_ARG(_scancode,"_scancode")
		HX_STACK_ARG(_repeat,"_repeat")
		HX_STACK_ARG(_mod,"_mod")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(599)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(599)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(599)
		if ((tmp1)){
			HX_STACK_LINE(599)
			return null();
		}
		HX_STACK_LINE(601)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(601)
		int tmp3 = _keycode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(601)
		int tmp4 = _scancode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(601)
		bool tmp5 = _repeat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(601)
		::snow::types::ModState tmp6 = _mod;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(601)
		Float tmp7 = _timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(601)
		int tmp8 = _window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(601)
		tmp2->onkeydown(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


Void Engine_obj::onkeyup( int _keycode,int _scancode,bool _repeat,::snow::types::ModState _mod,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Engine","onkeyup",0x09bc0967,"luxe.Engine.onkeyup","luxe/Engine.hx",605,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_keycode,"_keycode")
		HX_STACK_ARG(_scancode,"_scancode")
		HX_STACK_ARG(_repeat,"_repeat")
		HX_STACK_ARG(_mod,"_mod")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(607)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(607)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(607)
		if ((tmp1)){
			HX_STACK_LINE(607)
			return null();
		}
		HX_STACK_LINE(609)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(609)
		int tmp3 = _keycode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(609)
		int tmp4 = _scancode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(609)
		bool tmp5 = _repeat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(609)
		::snow::types::ModState tmp6 = _mod;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(609)
		Float tmp7 = _timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(609)
		int tmp8 = _window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(609)
		tmp2->onkeyup(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


Void Engine_obj::ontextinput( ::String _text,int _start,int _length,int _etype,Float _timestamp,int _window_id){
{
		HX_STACK_FRAME("luxe.Engine","ontextinput",0x9d02f26a,"luxe.Engine.ontextinput","luxe/Engine.hx",613,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_text,"_text")
		HX_STACK_ARG(_start,"_start")
		HX_STACK_ARG(_length,"_length")
		HX_STACK_ARG(_etype,"_etype")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_ARG(_window_id,"_window_id")
		HX_STACK_LINE(615)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(615)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(615)
		if ((tmp1)){
			HX_STACK_LINE(615)
			return null();
		}
		HX_STACK_LINE(617)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(617)
		::String tmp3 = _text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(617)
		int tmp4 = _start;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(617)
		int tmp5 = _length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(617)
		int tmp6 = _etype;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(617)
		Float tmp7 = _timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(617)
		int tmp8 = _window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(617)
		tmp2->ontextinput(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


Void Engine_obj::ontouchdown( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Engine","ontouchdown",0xf62669ce,"luxe.Engine.ontouchdown","luxe/Engine.hx",623,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_dx,"_dx")
		HX_STACK_ARG(_dy,"_dy")
		HX_STACK_ARG(_touch_id,"_touch_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(625)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(625)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(625)
		if ((tmp1)){
			HX_STACK_LINE(625)
			return null();
		}
		HX_STACK_LINE(627)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(627)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(627)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(627)
		Float tmp5 = _dx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(627)
		Float tmp6 = _dy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(627)
		int tmp7 = _touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(627)
		Float tmp8 = _timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(627)
		tmp2->ontouchdown(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


Void Engine_obj::ontouchup( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Engine","ontouchup",0x142b64c7,"luxe.Engine.ontouchup","luxe/Engine.hx",631,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_dx,"_dx")
		HX_STACK_ARG(_dy,"_dy")
		HX_STACK_ARG(_touch_id,"_touch_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(633)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(633)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(633)
		if ((tmp1)){
			HX_STACK_LINE(633)
			return null();
		}
		HX_STACK_LINE(635)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(635)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(635)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(635)
		Float tmp5 = _dx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(635)
		Float tmp6 = _dy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(635)
		int tmp7 = _touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(635)
		Float tmp8 = _timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(635)
		tmp2->ontouchup(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


Void Engine_obj::ontouchmove( Float _x,Float _y,Float _dx,Float _dy,int _touch_id,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Engine","ontouchmove",0xfc19547d,"luxe.Engine.ontouchmove","luxe/Engine.hx",639,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_dx,"_dx")
		HX_STACK_ARG(_dy,"_dy")
		HX_STACK_ARG(_touch_id,"_touch_id")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(641)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(641)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(641)
		if ((tmp1)){
			HX_STACK_LINE(641)
			return null();
		}
		HX_STACK_LINE(643)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(643)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(643)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(643)
		Float tmp5 = _dx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(643)
		Float tmp6 = _dy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(643)
		int tmp7 = _touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(643)
		Float tmp8 = _timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(643)
		tmp2->ontouchmove(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


Void Engine_obj::oninputdown( ::String _name,::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event){
{
		HX_STACK_FRAME("luxe.Engine","oninputdown",0xf7e49799,"luxe.Engine.oninputdown","luxe/Engine.hx",649,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_key_event,"_key_event")
		HX_STACK_ARG(_mouse_event,"_mouse_event")
		HX_STACK_ARG(_touch_event,"_touch_event")
		HX_STACK_ARG(_gamepad_event,"_gamepad_event")
		HX_STACK_LINE(651)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(651)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(651)
		if ((tmp1)){
			HX_STACK_LINE(651)
			return null();
		}
		HX_STACK_LINE(653)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(653)
		::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(653)
		::luxe::KeyEvent tmp4 = _key_event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(653)
		::luxe::MouseEvent tmp5 = _mouse_event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(653)
		::luxe::TouchEvent tmp6 = _touch_event;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(653)
		::luxe::GamepadEvent tmp7 = _gamepad_event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(653)
		tmp2->oninputdown(tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,oninputdown,(void))

Void Engine_obj::oninputup( ::String _name,::luxe::KeyEvent _key_event,::luxe::MouseEvent _mouse_event,::luxe::TouchEvent _touch_event,::luxe::GamepadEvent _gamepad_event){
{
		HX_STACK_FRAME("luxe.Engine","oninputup",0x0f51f9d2,"luxe.Engine.oninputup","luxe/Engine.hx",657,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_key_event,"_key_event")
		HX_STACK_ARG(_mouse_event,"_mouse_event")
		HX_STACK_ARG(_touch_event,"_touch_event")
		HX_STACK_ARG(_gamepad_event,"_gamepad_event")
		HX_STACK_LINE(659)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(659)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(659)
		if ((tmp1)){
			HX_STACK_LINE(659)
			return null();
		}
		HX_STACK_LINE(661)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(661)
		::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(661)
		::luxe::KeyEvent tmp4 = _key_event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(661)
		::luxe::MouseEvent tmp5 = _mouse_event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(661)
		::luxe::TouchEvent tmp6 = _touch_event;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(661)
		::luxe::GamepadEvent tmp7 = _gamepad_event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(661)
		tmp2->oninputup(tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,oninputup,(void))

Void Engine_obj::ongamepadaxis( int _gamepad,int _axis,Float _value,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Engine","ongamepadaxis",0x1d19152f,"luxe.Engine.ongamepadaxis","luxe/Engine.hx",667,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_axis,"_axis")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(669)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(669)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(669)
		if ((tmp1)){
			HX_STACK_LINE(669)
			return null();
		}
		HX_STACK_LINE(671)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(671)
		int tmp3 = _gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(671)
		int tmp4 = _axis;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(671)
		Float tmp5 = _value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(671)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(671)
		tmp2->ongamepadaxis(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


Void Engine_obj::ongamepaddown( int _gamepad,int _button,Float _value,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Engine","ongamepaddown",0x1f0df0f0,"luxe.Engine.ongamepaddown","luxe/Engine.hx",675,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(677)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(677)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(677)
		if ((tmp1)){
			HX_STACK_LINE(677)
			return null();
		}
		HX_STACK_LINE(679)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(679)
		int tmp3 = _gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(679)
		int tmp4 = _button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(679)
		Float tmp5 = _value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(679)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(679)
		tmp2->ongamepaddown(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


Void Engine_obj::ongamepadup( int _gamepad,int _button,Float _value,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Engine","ongamepadup",0x385d7f69,"luxe.Engine.ongamepadup","luxe/Engine.hx",683,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_button,"_button")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(685)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(685)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(685)
		if ((tmp1)){
			HX_STACK_LINE(685)
			return null();
		}
		HX_STACK_LINE(687)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(687)
		int tmp3 = _gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(687)
		int tmp4 = _button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(687)
		Float tmp5 = _value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(687)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(687)
		tmp2->ongamepadup(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


Void Engine_obj::ongamepaddevice( int _gamepad,::String _id,int _etype,Float _timestamp){
{
		HX_STACK_FRAME("luxe.Engine","ongamepaddevice",0xb07194a4,"luxe.Engine.ongamepaddevice","luxe/Engine.hx",691,0xb793dd43)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_gamepad,"_gamepad")
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_etype,"_etype")
		HX_STACK_ARG(_timestamp,"_timestamp")
		HX_STACK_LINE(693)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(693)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(693)
		if ((tmp1)){
			HX_STACK_LINE(693)
			return null();
		}
		HX_STACK_LINE(695)
		::luxe::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(695)
		int tmp3 = _gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(695)
		::String tmp4 = _id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(695)
		int tmp5 = _etype;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(695)
		Float tmp6 = _timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(695)
		tmp2->ongamepaddevice(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


Dynamic Engine_obj::config( Dynamic _config){
	HX_STACK_FRAME("luxe.Engine","config",0xf7111b16,"luxe.Engine.config","luxe/Engine.hx",703,0xb793dd43)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_config,"_config")
	HX_STACK_LINE(705)
	bool tmp = (_config->__Field(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(705)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Engine.hx",705,0xb793dd43)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(705)
		Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(705)
		_config->__FieldRef(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d")) = tmp1;
	}
	HX_STACK_LINE(708)
	this->game_config = _config;
	HX_STACK_LINE(711)
	Dynamic tmp1 = this->game_config;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(711)
	tmp1->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = HX_HCSTRING("luxe game","\x9c","\x14","\x33","\xb3");
	HX_STACK_LINE(712)
	Dynamic tmp2 = this->game_config;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(712)
	tmp2->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = (int)960;
	HX_STACK_LINE(713)
	Dynamic tmp3 = this->game_config;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(713)
	tmp3->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = (int)640;
	HX_STACK_LINE(714)
	Dynamic tmp4 = this->game_config;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(714)
	tmp4->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9")) = true;
	HX_STACK_LINE(715)
	Dynamic tmp5 = this->game_config;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(715)
	tmp5->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = false;
	HX_STACK_LINE(716)
	Dynamic tmp6 = this->game_config;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(716)
	tmp6->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17")) = false;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Engine.hx",718,0xb793dd43)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32") , cpp::ArrayBase_obj::__new(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(718)
	Dynamic tmp7 = _Function_1_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(718)
	Dynamic tmp8 = this->game_config;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(718)
	tmp8->__FieldRef(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35")) = tmp7;
	HX_STACK_LINE(729)
	::luxe::Game tmp9 = this->game;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(729)
	Dynamic tmp10 = this->game_config;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(729)
	Dynamic tmp11 = tmp9->config(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(729)
	this->game_config = tmp11;
	HX_STACK_LINE(732)
	Dynamic tmp12 = this->game_config;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(732)
	Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(732)
	return tmp13;
}



Engine_obj::Engine_obj()
{
}

void Engine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Engine);
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(game_config,"game_config");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(build,"build");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(debug,"debug");
	HX_MARK_MEMBER_NAME(io,"io");
	HX_MARK_MEMBER_NAME(draw,"draw");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(resources,"resources");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(physics,"physics");
	HX_MARK_MEMBER_NAME(shutting_down,"shutting_down");
	HX_MARK_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(headless,"headless");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(pixel_scale,"pixel_scale");
	::snow::App_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Engine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(game_config,"game_config");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(build,"build");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(debug,"debug");
	HX_VISIT_MEMBER_NAME(io,"io");
	HX_VISIT_MEMBER_NAME(draw,"draw");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(resources,"resources");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(physics,"physics");
	HX_VISIT_MEMBER_NAME(shutting_down,"shutting_down");
	HX_VISIT_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(headless,"headless");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(pixel_scale,"pixel_scale");
	::snow::App_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Engine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { return io; }
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw; }
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { return build; }
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"physics") ) { return physics; }
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"headless") ) { return headless; }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { return resources; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"ontickend") ) { return ontickend_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"game_config") ) { return game_config; }
		if (HX_FIELD_EQ(inName,"pixel_scale") ) { return pixel_scale; }
		if (HX_FIELD_EQ(inName,"ontickstart") ) { return ontickstart_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { return has_shutdown; }
		if (HX_FIELD_EQ(inName,"runtime_info") ) { return runtime_info_dyn(); }
		if (HX_FIELD_EQ(inName,"window_event") ) { return window_event_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { return shutting_down; }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internal_ready") ) { return internal_ready_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"internal_pre_ready") ) { return internal_pre_ready_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Engine_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { io=inValue.Cast< ::luxe::IO >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::luxe::Game >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draw") ) { draw=inValue.Cast< ::luxe::Draw >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { build=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::luxe::Debug >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::luxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::luxe::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast< ::luxe::Audio >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::luxe::Scene >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::luxe::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::luxe::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::luxe::Emitter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physics") ) { physics=inValue.Cast< ::luxe::Physics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"headless") ) { headless=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { resources=inValue.Cast< ::luxe::Resources >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"game_config") ) { game_config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixel_scale") ) { pixel_scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { has_shutdown=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { shutting_down=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Engine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	outFields->push(HX_HCSTRING("game_config","\xaf","\xb6","\xae","\x4d"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"));
	outFields->push(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"));
	outFields->push(HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"));
	outFields->push(HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"));
	outFields->push(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"));
	outFields->push(HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"));
	outFields->push(HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"));
	outFields->push(HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20"));
	outFields->push(HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e"));
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	outFields->push(HX_HCSTRING("headless","\x79","\x4c","\xd6","\x48"));
	outFields->push(HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"));
	outFields->push(HX_HCSTRING("pixel_scale","\xd1","\x84","\xae","\xb1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Game*/ ,(int)offsetof(Engine_obj,game),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Engine_obj,game_config),HX_HCSTRING("game_config","\xaf","\xb6","\xae","\x4d")},
	{hx::fsString,(int)offsetof(Engine_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(int)offsetof(Engine_obj,build),HX_HCSTRING("build","\x2e","\xdb","\xea","\xba")},
	{hx::fsObject /*::luxe::Emitter*/ ,(int)offsetof(Engine_obj,emitter),HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe")},
	{hx::fsObject /*::luxe::Debug*/ ,(int)offsetof(Engine_obj,debug),HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{hx::fsObject /*::luxe::IO*/ ,(int)offsetof(Engine_obj,io),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00")},
	{hx::fsObject /*::luxe::Draw*/ ,(int)offsetof(Engine_obj,draw),HX_HCSTRING("draw","\x04","\x2c","\x70","\x42")},
	{hx::fsObject /*::luxe::Timer*/ ,(int)offsetof(Engine_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsObject /*::luxe::Events*/ ,(int)offsetof(Engine_obj,events),HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{hx::fsObject /*::luxe::Input*/ ,(int)offsetof(Engine_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::luxe::Audio*/ ,(int)offsetof(Engine_obj,audio),HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsObject /*::luxe::Scene*/ ,(int)offsetof(Engine_obj,scene),HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78")},
	{hx::fsObject /*::luxe::Resources*/ ,(int)offsetof(Engine_obj,resources),HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(Engine_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*::luxe::Screen*/ ,(int)offsetof(Engine_obj,screen),HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{hx::fsObject /*::luxe::Physics*/ ,(int)offsetof(Engine_obj,physics),HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe")},
	{hx::fsBool,(int)offsetof(Engine_obj,shutting_down),HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20")},
	{hx::fsBool,(int)offsetof(Engine_obj,has_shutdown),HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e")},
	{hx::fsBool,(int)offsetof(Engine_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{hx::fsBool,(int)offsetof(Engine_obj,headless),HX_HCSTRING("headless","\x79","\x4c","\xd6","\x48")},
	{hx::fsBool,(int)offsetof(Engine_obj,running),HX_HCSTRING("running","\xff","\x6d","\x69","\xeb")},
	{hx::fsFloat,(int)offsetof(Engine_obj,pixel_scale),HX_HCSTRING("pixel_scale","\xd1","\x84","\xae","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("game_config","\xaf","\xb6","\xae","\x4d"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"),
	HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"),
	HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"),
	HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20"),
	HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e"),
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("headless","\x79","\x4c","\xd6","\x48"),
	HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("runtime_info","\x75","\x10","\x75","\xe7"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("pixel_scale","\xd1","\x84","\xae","\xb1"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("internal_pre_ready","\x45","\xb5","\x6d","\x32"),
	HX_HCSTRING("internal_ready","\xa1","\xda","\xfc","\xd2"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("ontickstart","\xe6","\x62","\x8c","\xec"),
	HX_HCSTRING("ontickend","\x5f","\x89","\x3e","\x25"),
	HX_HCSTRING("window_event","\x4b","\x37","\x88","\x04"),
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
	HX_HCSTRING("oninputdown","\x6d","\x8c","\x2f","\x9f"),
	HX_HCSTRING("oninputup","\xa6","\x51","\x78","\xde"),
	HX_HCSTRING("ongamepadaxis","\x03","\xe7","\xa9","\x64"),
	HX_HCSTRING("ongamepaddown","\xc4","\xc2","\x9e","\x66"),
	HX_HCSTRING("ongamepadup","\x3d","\x74","\xa8","\xdf"),
	HX_HCSTRING("ongamepaddevice","\x78","\x83","\x39","\x9b"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

#endif

hx::Class Engine_obj::__mClass;

void Engine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Engine","\x9a","\x59","\xe2","\x5b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Engine_obj >;
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
