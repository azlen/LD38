#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_State
#include <luxe/State.h>
#endif
#ifndef INCLUDED_luxe_States
#include <luxe/States.h>
#endif
#ifndef INCLUDED_states_Play
#include <states/Play.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",9,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->initialState = HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a");
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::config( Dynamic config){
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",15,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(18)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = HX_HCSTRING("LD38","\x1d","\xfd","\x6f","\x32");
	HX_STACK_LINE(19)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = (int)960;
	HX_STACK_LINE(20)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = (int)640;
	HX_STACK_LINE(21)
	config->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = false;
	HX_STACK_LINE(23)
	Dynamic tmp = config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	return tmp;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",31,0x087e5c05)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",45,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::luxe::States tmp1 = ::luxe::States_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::Main_obj::state = tmp1;
		HX_STACK_LINE(48)
		::luxe::States tmp2 = ::Main_obj::state;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",48,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(48)
		Dynamic tmp3 = _Function_1_2::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		::states::Play tmp4 = ::states::Play_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		tmp2->add(tmp4);
		HX_STACK_LINE(51)
		::luxe::States tmp5 = ::Main_obj::state;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		::String tmp6 = this->initialState;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		tmp5->set(tmp6,null(),null());
	}
return null();
}


::luxe::States Main_obj::state;


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(initialState,"initialState");
	::luxe::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(initialState,"initialState");
	::luxe::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { return initialState; }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { outValue = state; return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { initialState=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=ioValue.Cast< ::luxe::States >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("initialState","\xed","\x76","\x1b","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Main_obj,initialState),HX_HCSTRING("initialState","\xed","\x76","\x1b","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::luxe::States*/ ,(void *) &Main_obj::state,HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("initialState","\xed","\x76","\x1b","\x48"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::state,"state");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::state,"state");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

