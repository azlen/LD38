#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_components_ConnectInput
#include <components/ConnectInput.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
namespace components{

Void ConnectInput_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("components.ConnectInput","new",0x0778d32a,"components.ConnectInput.new","components/ConnectInput.hx",6,0x369368a5)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(6)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	super::__construct(tmp);
}
;
	return null();
}

//ConnectInput_obj::~ConnectInput_obj() { }

Dynamic ConnectInput_obj::__CreateEmpty() { return  new ConnectInput_obj; }
hx::ObjectPtr< ConnectInput_obj > ConnectInput_obj::__new(Dynamic _options)
{  hx::ObjectPtr< ConnectInput_obj > _result_ = new ConnectInput_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic ConnectInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConnectInput_obj > _result_ = new ConnectInput_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ConnectInput_obj::init( ){
{
		HX_STACK_FRAME("components.ConnectInput","init",0x7ef8a906,"components.ConnectInput.init","components/ConnectInput.hx",8,0x369368a5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9)
		::luxe::Input tmp = ::Luxe_obj::input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9)
		tmp->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),(int)1073741904);
		HX_STACK_LINE(10)
		::luxe::Input tmp1 = ::Luxe_obj::input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10)
		tmp1->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),(int)97);
		HX_STACK_LINE(12)
		::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12)
		tmp2->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),(int)1073741903);
		HX_STACK_LINE(13)
		::luxe::Input tmp3 = ::Luxe_obj::input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13)
		tmp3->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),(int)100);
		HX_STACK_LINE(15)
		::luxe::Input tmp4 = ::Luxe_obj::input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		tmp4->bind_key(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),(int)1073741906);
		HX_STACK_LINE(16)
		::luxe::Input tmp5 = ::Luxe_obj::input;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		tmp5->bind_key(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),(int)119);
		HX_STACK_LINE(18)
		::luxe::Input tmp6 = ::Luxe_obj::input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(18)
		tmp6->bind_key(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),(int)1073741905);
		HX_STACK_LINE(19)
		::luxe::Input tmp7 = ::Luxe_obj::input;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(19)
		tmp7->bind_key(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),(int)115);
		HX_STACK_LINE(21)
		::luxe::Input tmp8 = ::Luxe_obj::input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(21)
		tmp8->bind_key(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),(int)32);
	}
return null();
}


Void ConnectInput_obj::ondestroy( ){
{
		HX_STACK_FRAME("components.ConnectInput","ondestroy",0x9aa1f405,"components.ConnectInput.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void ConnectInput_obj::onremoved( ){
{
		HX_STACK_FRAME("components.ConnectInput","onremoved",0x691be6ab,"components.ConnectInput.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



ConnectInput_obj::ConnectInput_obj()
{
}

Dynamic ConnectInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConnectInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConnectInput_obj::__mClass,"__mClass");
};

#endif

hx::Class ConnectInput_obj::__mClass;

void ConnectInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("components.ConnectInput","\x38","\xb6","\x39","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConnectInput_obj >;
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

} // end namespace components
