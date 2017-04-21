#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
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
namespace snow{
namespace modules{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("data_from_load","\xc6","\x1a","\x6f","\x90"),
	HX_HCSTRING("data_from_bytes","\xcb","\x13","\x71","\x15"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("unpause","\xfd","\xcd","\xe8","\xb9"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),
	HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("volume_of","\x9c","\x71","\xad","\x60"),
	HX_HCSTRING("pan_of","\xf9","\x9d","\xd4","\xea"),
	HX_HCSTRING("pitch_of","\x76","\x93","\x77","\xbb"),
	HX_HCSTRING("position_of","\x2d","\xe6","\x66","\xff"),
	HX_HCSTRING("state_of","\xc5","\x61","\x87","\x5f"),
	HX_HCSTRING("loop_of","\x52","\xe7","\x75","\x20"),
	HX_HCSTRING("instance_of","\xc1","\x82","\x21","\x29"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
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
	__mClass->mName = HX_HCSTRING("snow.modules.interfaces.Audio","\x34","\x35","\x4a","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Audio_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace modules
} // end namespace interfaces
