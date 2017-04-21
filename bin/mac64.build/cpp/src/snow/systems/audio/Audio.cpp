#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_Emitter
#include <snow/api/Emitter.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_openal_Audio
#include <snow/modules/openal/Audio.h>
#endif
#ifndef INCLUDED_snow_systems_audio_Audio
#include <snow/systems/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_systems_audio_AudioInstance
#include <snow/systems/audio/AudioInstance.h>
#endif
#ifndef INCLUDED_snow_systems_audio_AudioSource
#include <snow/systems/audio/AudioSource.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif
namespace snow{
namespace systems{
namespace audio{

Void Audio_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.systems.audio.Audio","new",0xbc61065b,"snow.systems.audio.Audio.new","snow/systems/audio/Audio.hx",12,0x2dd90ef8)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(19)
	this->active = false;
	HX_STACK_LINE(26)
	this->app = _app;
	HX_STACK_LINE(27)
	::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::snow::modules::openal::Audio tmp1 = ::snow::modules::openal::Audio_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	this->module = tmp1;
	HX_STACK_LINE(28)
	::snow::api::Emitter tmp2 = ::snow::api::Emitter_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	this->emitter = tmp2;
	HX_STACK_LINE(29)
	::snow::modules::openal::Audio tmp3 = this->module;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	this->active = tmp3->active;
}
;
	return null();
}

//Audio_obj::~Audio_obj() { }

Dynamic Audio_obj::__CreateEmpty() { return  new Audio_obj; }
hx::ObjectPtr< Audio_obj > Audio_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Audio_obj::off_snow_systems_audio_AudioSource( int _event,Dynamic _handler){
	HX_STACK_FRAME("snow.systems.audio.Audio","off_snow_systems_audio_AudioSource",0x1cf74ae6,"snow.systems.audio.Audio.off_snow_systems_audio_AudioSource","snow/systems/audio/Audio.hx",43,0x2dd90ef8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(45)
	::snow::api::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	Dynamic tmp2 = _handler;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	bool tmp3 = tmp->off(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,off_snow_systems_audio_AudioSource,return )

bool Audio_obj::off_Int( int _event,Dynamic _handler){
	HX_STACK_FRAME("snow.systems.audio.Audio","off_Int",0xd2f6d03a,"snow.systems.audio.Audio.off_Int","snow/systems/audio/Audio.hx",43,0x2dd90ef8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(45)
	::snow::api::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	Dynamic tmp2 = _handler;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	bool tmp3 = tmp->off(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,off_Int,return )

Void Audio_obj::emit_snow_systems_audio_AudioSource( int _event,::snow::systems::audio::AudioSource _data){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","emit_snow_systems_audio_AudioSource",0xc4368418,"snow.systems.audio.Audio.emit_snow_systems_audio_AudioSource","snow/systems/audio/Audio.hx",50,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_data,"_data")
		HX_STACK_LINE(52)
		::snow::api::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		int tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::snow::systems::audio::AudioSource tmp2 = _data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		tmp->emit(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,emit_snow_systems_audio_AudioSource,(void))

Void Audio_obj::emit_Int( int _event,Dynamic _data){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","emit_Int",0x050809c8,"snow.systems.audio.Audio.emit_Int","snow/systems/audio/Audio.hx",50,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_data,"_data")
		HX_STACK_LINE(52)
		::snow::api::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		int tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		Dynamic tmp2 = _data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		tmp->emit(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,emit_Int,(void))

Void Audio_obj::on_snow_systems_audio_AudioSource( int _event,Dynamic _handler){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","on_snow_systems_audio_AudioSource",0xd6846a0c,"snow.systems.audio.Audio.on_snow_systems_audio_AudioSource","snow/systems/audio/Audio.hx",36,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(38)
		::snow::api::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		int tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		Dynamic tmp2 = _handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		tmp->on(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,on_snow_systems_audio_AudioSource,(void))

Void Audio_obj::on_Int( int _event,Dynamic _handler){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","on_Int",0x2efe5f54,"snow.systems.audio.Audio.on_Int","snow/systems/audio/Audio.hx",36,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(38)
		::snow::api::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		int tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		Dynamic tmp2 = _handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		tmp->on(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,on_Int,(void))

Dynamic Audio_obj::play( ::snow::systems::audio::AudioSource _source,Dynamic __o__volume,Dynamic __o__paused){
Dynamic _volume = __o__volume.Default(((Float)1.0));
Dynamic _paused = __o__paused.Default(false);
	HX_STACK_FRAME("snow.systems.audio.Audio","play",0x19dc3399,"snow.systems.audio.Audio.play","snow/systems/audio/Audio.hx",56,0x2dd90ef8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_source,"_source")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_ARG(_paused,"_paused")
{
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			bool tmp = (_source != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(58)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			if ((tmp1)){
				HX_STACK_LINE(214)
				::String tmp2 = HX_HCSTRING(" ( audio source must not be null","\xe3","\x16","\xf7","\xbb");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(214)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				::String tmp4 = (HX_HCSTRING("_source != null","\x85","\x90","\x7f","\x9d") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				::snow::api::DebugError tmp5 = ::snow::api::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(60)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		if ((tmp1)){
			HX_STACK_LINE(61)
			return (int)-1;
		}
		HX_STACK_LINE(64)
		::snow::modules::openal::Audio tmp2 = this->module;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::snow::systems::audio::AudioSource tmp3 = _source;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		Dynamic tmp4 = _volume;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		Dynamic tmp5 = _paused;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		Dynamic tmp6 = tmp2->play(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,play,return )

Dynamic Audio_obj::loop( ::snow::systems::audio::AudioSource _source,Dynamic __o__volume,Dynamic __o__paused){
Dynamic _volume = __o__volume.Default(((Float)1.0));
Dynamic _paused = __o__paused.Default(false);
	HX_STACK_FRAME("snow.systems.audio.Audio","loop",0x1739ac09,"snow.systems.audio.Audio.loop","snow/systems/audio/Audio.hx",69,0x2dd90ef8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_source,"_source")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_ARG(_paused,"_paused")
{
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			bool tmp = (_source != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(71)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			if ((tmp1)){
				HX_STACK_LINE(214)
				::String tmp2 = HX_HCSTRING(" ( audio source must not be null","\xe3","\x16","\xf7","\xbb");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(214)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				::String tmp4 = (HX_HCSTRING("_source != null","\x85","\x90","\x7f","\x9d") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(71)
				::snow::api::DebugError tmp5 = ::snow::api::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(71)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(73)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(74)
			return (int)-1;
		}
		HX_STACK_LINE(77)
		::snow::modules::openal::Audio tmp2 = this->module;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		::snow::systems::audio::AudioSource tmp3 = _source;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		Dynamic tmp4 = _volume;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		Dynamic tmp5 = _paused;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		Dynamic tmp6 = tmp2->loop(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,loop,return )

Void Audio_obj::pause( Dynamic _handle){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","pause",0x7f9ac1b1,"snow.systems.audio.Audio.pause","snow/systems/audio/Audio.hx",81,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_LINE(82)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		if ((tmp3)){
			HX_STACK_LINE(82)
			tmp4 = (_handle == null());
		}
		else{
			HX_STACK_LINE(82)
			tmp4 = true;
		}
		HX_STACK_LINE(82)
		if ((tmp4)){
			HX_STACK_LINE(82)
			return null();
		}
		HX_STACK_LINE(83)
		::snow::modules::openal::Audio tmp5 = this->module;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		Dynamic tmp6 = _handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		tmp5->pause(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pause,(void))

Void Audio_obj::unpause( Dynamic _handle){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","unpause",0xc2c81d78,"snow.systems.audio.Audio.unpause","snow/systems/audio/Audio.hx",86,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_LINE(87)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		if ((tmp3)){
			HX_STACK_LINE(87)
			tmp4 = (_handle == null());
		}
		else{
			HX_STACK_LINE(87)
			tmp4 = true;
		}
		HX_STACK_LINE(87)
		if ((tmp4)){
			HX_STACK_LINE(87)
			return null();
		}
		HX_STACK_LINE(88)
		::snow::modules::openal::Audio tmp5 = this->module;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		Dynamic tmp6 = _handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		tmp5->unpause(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,unpause,(void))

Void Audio_obj::stop( Dynamic _handle){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","stop",0x1bddf5a7,"snow.systems.audio.Audio.stop","snow/systems/audio/Audio.hx",91,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_LINE(92)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		if ((tmp3)){
			HX_STACK_LINE(92)
			tmp4 = (_handle == null());
		}
		else{
			HX_STACK_LINE(92)
			tmp4 = true;
		}
		HX_STACK_LINE(92)
		if ((tmp4)){
			HX_STACK_LINE(92)
			return null();
		}
		HX_STACK_LINE(93)
		::snow::modules::openal::Audio tmp5 = this->module;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		Dynamic tmp6 = _handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		tmp5->stop(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,stop,(void))

Void Audio_obj::volume( Dynamic _handle,Float _volume){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","volume",0x979da2bf,"snow.systems.audio.Audio.volume","snow/systems/audio/Audio.hx",96,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_volume,"_volume")
		HX_STACK_LINE(97)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		if ((tmp3)){
			HX_STACK_LINE(97)
			tmp4 = (_handle == null());
		}
		else{
			HX_STACK_LINE(97)
			tmp4 = true;
		}
		HX_STACK_LINE(97)
		if ((tmp4)){
			HX_STACK_LINE(97)
			return null();
		}
		HX_STACK_LINE(98)
		::snow::modules::openal::Audio tmp5 = this->module;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		Dynamic tmp6 = _handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		Float tmp7 = _volume;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		tmp5->volume(tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,volume,(void))

Void Audio_obj::pan( Dynamic _handle,Float _pan){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","pan",0xbc628758,"snow.systems.audio.Audio.pan","snow/systems/audio/Audio.hx",101,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_pan,"_pan")
		HX_STACK_LINE(102)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		if ((tmp3)){
			HX_STACK_LINE(102)
			tmp4 = (_handle == null());
		}
		else{
			HX_STACK_LINE(102)
			tmp4 = true;
		}
		HX_STACK_LINE(102)
		if ((tmp4)){
			HX_STACK_LINE(102)
			return null();
		}
		HX_STACK_LINE(103)
		::snow::modules::openal::Audio tmp5 = this->module;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		Dynamic tmp6 = _handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		Float tmp7 = _pan;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(103)
		tmp5->pan(tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pan,(void))

Void Audio_obj::pitch( Dynamic _handle,Float _pitch){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","pitch",0x84e3a67b,"snow.systems.audio.Audio.pitch","snow/systems/audio/Audio.hx",106,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_pitch,"_pitch")
		HX_STACK_LINE(107)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		if ((tmp3)){
			HX_STACK_LINE(107)
			tmp4 = (_handle == null());
		}
		else{
			HX_STACK_LINE(107)
			tmp4 = true;
		}
		HX_STACK_LINE(107)
		if ((tmp4)){
			HX_STACK_LINE(107)
			return null();
		}
		HX_STACK_LINE(108)
		::snow::modules::openal::Audio tmp5 = this->module;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		Dynamic tmp6 = _handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		Float tmp7 = _pitch;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		tmp5->pitch(tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pitch,(void))

Void Audio_obj::position( Dynamic _handle,Float _position){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","position",0x8580dcce,"snow.systems.audio.Audio.position","snow/systems/audio/Audio.hx",111,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_position,"_position")
		HX_STACK_LINE(112)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		if ((tmp3)){
			HX_STACK_LINE(112)
			tmp4 = (_handle == null());
		}
		else{
			HX_STACK_LINE(112)
			tmp4 = true;
		}
		HX_STACK_LINE(112)
		if ((tmp4)){
			HX_STACK_LINE(112)
			return null();
		}
		HX_STACK_LINE(113)
		::snow::modules::openal::Audio tmp5 = this->module;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		Dynamic tmp6 = _handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(113)
		Float tmp7 = _position;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(113)
		tmp5->position(tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,position,(void))

int Audio_obj::state_of( Dynamic _handle){
	HX_STACK_FRAME("snow.systems.audio.Audio","state_of",0x1a0d9dea,"snow.systems.audio.Audio.state_of","snow/systems/audio/Audio.hx",116,0x2dd90ef8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(117)
	::snow::modules::openal::Audio tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	int tmp2 = tmp->state_of(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,state_of,return )

bool Audio_obj::loop_of( Dynamic _handle){
	HX_STACK_FRAME("snow.systems.audio.Audio","loop_of",0x295536cd,"snow.systems.audio.Audio.loop_of","snow/systems/audio/Audio.hx",120,0x2dd90ef8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		if ((tmp1)){
			HX_STACK_LINE(214)
			::String tmp2 = HX_HCSTRING(" ( audio is suspended, queries are invalid","\x56","\x40","\x1f","\x32");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			::String tmp4 = (HX_HCSTRING("active","\xc6","\x41","\x46","\x16") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			::snow::api::DebugError tmp5 = ::snow::api::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(122)
	::snow::modules::openal::Audio tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	bool tmp2 = tmp->loop_of(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,loop_of,return )

::snow::systems::audio::AudioInstance Audio_obj::instance_of( Dynamic _handle){
	HX_STACK_FRAME("snow.systems.audio.Audio","instance_of",0x079dabbc,"snow.systems.audio.Audio.instance_of","snow/systems/audio/Audio.hx",125,0x2dd90ef8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		if ((tmp1)){
			HX_STACK_LINE(214)
			::String tmp2 = HX_HCSTRING(" ( audio is suspended, queries are invalid","\x56","\x40","\x1f","\x32");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			::String tmp4 = (HX_HCSTRING("active","\xc6","\x41","\x46","\x16") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			::snow::api::DebugError tmp5 = ::snow::api::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(127)
	::snow::modules::openal::Audio tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	::snow::systems::audio::AudioInstance tmp2 = tmp->instance_of(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,instance_of,return )

Float Audio_obj::volume_of( Dynamic _handle){
	HX_STACK_FRAME("snow.systems.audio.Audio","volume_of",0xdb9bd5d7,"snow.systems.audio.Audio.volume_of","snow/systems/audio/Audio.hx",130,0x2dd90ef8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		if ((tmp1)){
			HX_STACK_LINE(214)
			::String tmp2 = HX_HCSTRING(" ( audio is suspended, queries are invalid","\x56","\x40","\x1f","\x32");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			::String tmp4 = (HX_HCSTRING("active","\xc6","\x41","\x46","\x16") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			::snow::api::DebugError tmp5 = ::snow::api::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(132)
	::snow::modules::openal::Audio tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	Float tmp2 = tmp->volume_of(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,volume_of,return )

Float Audio_obj::pan_of( Dynamic _handle){
	HX_STACK_FRAME("snow.systems.audio.Audio","pan_of",0x231f16de,"snow.systems.audio.Audio.pan_of","snow/systems/audio/Audio.hx",135,0x2dd90ef8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		if ((tmp1)){
			HX_STACK_LINE(214)
			::String tmp2 = HX_HCSTRING(" ( audio is suspended, queries are invalid","\x56","\x40","\x1f","\x32");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			::String tmp4 = (HX_HCSTRING("active","\xc6","\x41","\x46","\x16") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			::snow::api::DebugError tmp5 = ::snow::api::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(137)
	::snow::modules::openal::Audio tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	Float tmp2 = tmp->pan_of(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pan_of,return )

Float Audio_obj::pitch_of( Dynamic _handle){
	HX_STACK_FRAME("snow.systems.audio.Audio","pitch_of",0x75fdcf9b,"snow.systems.audio.Audio.pitch_of","snow/systems/audio/Audio.hx",140,0x2dd90ef8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		if ((tmp1)){
			HX_STACK_LINE(214)
			::String tmp2 = HX_HCSTRING(" ( audio is suspended, queries are invalid","\x56","\x40","\x1f","\x32");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			::String tmp4 = (HX_HCSTRING("active","\xc6","\x41","\x46","\x16") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			::snow::api::DebugError tmp5 = ::snow::api::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(142)
	::snow::modules::openal::Audio tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	Float tmp2 = tmp->pitch_of(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pitch_of,return )

Float Audio_obj::position_of( Dynamic _handle){
	HX_STACK_FRAME("snow.systems.audio.Audio","position_of",0xdde30f28,"snow.systems.audio.Audio.position_of","snow/systems/audio/Audio.hx",145,0x2dd90ef8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(214)
			::String tmp2 = HX_HCSTRING(" ( audio is suspended, queries are invalid","\x56","\x40","\x1f","\x32");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			::String tmp4 = (HX_HCSTRING("active","\xc6","\x41","\x46","\x16") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			::snow::api::DebugError tmp5 = ::snow::api::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(146)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(147)
	::snow::modules::openal::Audio tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	Float tmp2 = tmp->position_of(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,position_of,return )

Void Audio_obj::suspend( ){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","suspend",0x002e7ef7,"snow.systems.audio.Audio.suspend","snow/systems/audio/Audio.hx",150,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		if ((tmp1)){
			HX_STACK_LINE(153)
			return null();
		}
		HX_STACK_LINE(157)
		this->active = false;
		HX_STACK_LINE(158)
		::snow::modules::openal::Audio tmp2 = this->module;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		tmp2->suspend();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,suspend,(void))

Void Audio_obj::resume( ){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","resume",0x40cee292,"snow.systems.audio.Audio.resume","snow/systems/audio/Audio.hx",162,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		if ((tmp1)){
			HX_STACK_LINE(164)
			::snow::modules::openal::Audio tmp3 = this->module;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			::snow::modules::openal::Audio tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			bool tmp5 = tmp4->active;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			tmp2 = !(tmp6);
		}
		else{
			HX_STACK_LINE(164)
			tmp2 = true;
		}
		HX_STACK_LINE(164)
		if ((tmp2)){
			HX_STACK_LINE(165)
			return null();
		}
		HX_STACK_LINE(169)
		this->active = true;
		HX_STACK_LINE(170)
		::snow::modules::openal::Audio tmp3 = this->module;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		tmp3->resume();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,resume,(void))

Void Audio_obj::onevent( ::snow::types::SystemEvent _event){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","onevent",0x81b44616,"snow.systems.audio.Audio.onevent","snow/systems/audio/Audio.hx",177,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(179)
		::snow::modules::openal::Audio tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		::snow::types::SystemEvent tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		tmp->onevent(tmp1);
		HX_STACK_LINE(181)
		bool tmp2 = (_event->type == (int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		if ((tmp2)){
			HX_STACK_LINE(182)
			int tmp3 = _event->window->type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(182)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(182)
			switch( (int)(tmp4)){
				case (int)7: {
					HX_STACK_LINE(184)
					this->suspend();
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(186)
					this->resume();
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,onevent,(void))

Void Audio_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.systems.audio.Audio","shutdown",0x259238bb,"snow.systems.audio.Audio.shutdown","snow/systems/audio/Audio.hx",194,0x2dd90ef8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		this->active = false;
		HX_STACK_LINE(197)
		::snow::modules::openal::Audio tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		tmp->shutdown();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,shutdown,(void))


Audio_obj::Audio_obj()
{
}

void Audio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Audio);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_END_CLASS();
}

void Audio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(module,"module");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
}

Dynamic Audio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		if (HX_FIELD_EQ(inName,"pan") ) { return pan_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"pitch") ) { return pitch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"on_Int") ) { return on_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"module") ) { return module; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"volume") ) { return volume_dyn(); }
		if (HX_FIELD_EQ(inName,"pan_of") ) { return pan_of_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"off_Int") ) { return off_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"unpause") ) { return unpause_dyn(); }
		if (HX_FIELD_EQ(inName,"loop_of") ) { return loop_of_dyn(); }
		if (HX_FIELD_EQ(inName,"suspend") ) { return suspend_dyn(); }
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emit_Int") ) { return emit_Int_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position_dyn(); }
		if (HX_FIELD_EQ(inName,"state_of") ) { return state_of_dyn(); }
		if (HX_FIELD_EQ(inName,"pitch_of") ) { return pitch_of_dyn(); }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"volume_of") ) { return volume_of_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instance_of") ) { return instance_of_dyn(); }
		if (HX_FIELD_EQ(inName,"position_of") ) { return position_of_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"on_snow_systems_audio_AudioSource") ) { return on_snow_systems_audio_AudioSource_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"off_snow_systems_audio_AudioSource") ) { return off_snow_systems_audio_AudioSource_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"emit_snow_systems_audio_AudioSource") ) { return emit_snow_systems_audio_AudioSource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Audio_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast< ::snow::modules::openal::Audio >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::snow::api::Emitter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Audio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Audio_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsObject /*::snow::modules::openal::Audio*/ ,(int)offsetof(Audio_obj,module),HX_HCSTRING("module","\xac","\x34","\xd3","\xc0")},
	{hx::fsBool,(int)offsetof(Audio_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*::snow::api::Emitter*/ ,(int)offsetof(Audio_obj,emitter),HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("off_snow_systems_audio_AudioSource","\x81","\xb4","\x3e","\x49"),
	HX_HCSTRING("off_Int","\xbf","\x80","\x17","\xca"),
	HX_HCSTRING("emit_snow_systems_audio_AudioSource","\x1d","\x82","\x6b","\x56"),
	HX_HCSTRING("emit_Int","\xa3","\xcd","\x81","\x4a"),
	HX_HCSTRING("on_snow_systems_audio_AudioSource","\xd1","\x6c","\xdf","\x99"),
	HX_HCSTRING("on_Int","\x6f","\xe6","\xb3","\xf6"),
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("unpause","\xfd","\xcd","\xe8","\xb9"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),
	HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("state_of","\xc5","\x61","\x87","\x5f"),
	HX_HCSTRING("loop_of","\x52","\xe7","\x75","\x20"),
	HX_HCSTRING("instance_of","\xc1","\x82","\x21","\x29"),
	HX_HCSTRING("volume_of","\x9c","\x71","\xad","\x60"),
	HX_HCSTRING("pan_of","\xf9","\x9d","\xd4","\xea"),
	HX_HCSTRING("pitch_of","\x76","\x93","\x77","\xbb"),
	HX_HCSTRING("position_of","\x2d","\xe6","\x66","\xff"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#endif

hx::Class Audio_obj::__mClass;

void Audio_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.systems.audio.Audio","\xe9","\x3c","\x7a","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Audio_obj >;
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

} // end namespace snow
} // end namespace systems
} // end namespace audio
