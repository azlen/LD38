#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_Runtime
#include <snow/core/Runtime.h>
#endif
namespace snow{
namespace core{


static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("window_grab","\xbb","\x11","\x22","\x55"),
	HX_HCSTRING("window_fullscreen","\x6a","\x19","\x9b","\x3c"),
	HX_HCSTRING("window_device_pixel_ratio","\x18","\x25","\x59","\xb3"),
	HX_HCSTRING("window_width","\x37","\x25","\x26","\x59"),
	HX_HCSTRING("window_height","\x96","\xe3","\x89","\x5e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Runtime_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Runtime_obj::__mClass,"__mClass");
};

#endif

hx::Class Runtime_obj::__mClass;

void Runtime_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.Runtime","\x74","\xa7","\x1d","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Runtime_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace core
