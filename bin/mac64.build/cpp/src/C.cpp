#include <hxcpp.h>

#ifndef INCLUDED_C
#include <C.h>
#endif
#ifndef INCLUDED_components_Physics
#include <components/Physics.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif

Void C_obj::__construct()
{
	return null();
}

//C_obj::~C_obj() { }

Dynamic C_obj::__CreateEmpty() { return  new C_obj; }
hx::ObjectPtr< C_obj > C_obj::__new()
{  hx::ObjectPtr< C_obj > _result_ = new C_obj();
	_result_->__construct();
	return _result_;}

Dynamic C_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< C_obj > _result_ = new C_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > C_obj::space;


C_obj::C_obj()
{
}

bool C_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { outValue = space; return true;  }
	}
	return false;
}

bool C_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=ioValue.Cast< Array< ::Dynamic > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &C_obj::space,HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(C_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(C_obj::space,"space");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(C_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(C_obj::space,"space");
};

#endif

hx::Class C_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	::String(null()) };

void C_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("C","\x43","\x00","\x00","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &C_obj::__GetStatic;
	__mClass->mSetStaticField = &C_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< C_obj >;
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

void C_obj::__boot()
{
	space= Array_obj< ::Dynamic >::__new();
}

