#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_entities_Player
#include <entities/Player.h>
#endif
#ifndef INCLUDED_entities_Wall
#include <entities/Wall.h>
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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_State
#include <luxe/State.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_states_Play
#include <states/Play.h>
#endif
namespace states{

Void Play_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("states.Play","new",0x7a7c61b2,"states.Play.new","states/Play.hx",13,0xd4b94c1d)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(13)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	super::__construct(tmp);
}
;
	return null();
}

//Play_obj::~Play_obj() { }

Dynamic Play_obj::__CreateEmpty() { return  new Play_obj; }
hx::ObjectPtr< Play_obj > Play_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Play_obj > _result_ = new Play_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Play_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Play_obj > _result_ = new Play_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Play_obj::onenter( Dynamic _){
{
		HX_STACK_FRAME("states.Play","onenter",0x72b73deb,"states.Play.onenter","states/Play.hx",20,0xd4b94c1d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(21)
		::entities::Player tmp = ::entities::Player_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		this->player = tmp;
		HX_STACK_LINE(23)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new((int)0,(int)500,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		::phoenix::Color tmp2 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		::phoenix::Color tmp3 = tmp2->rgb((int)10066329);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new((int)1000,(int)10,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &tmp4,::phoenix::Color &tmp3,::phoenix::Vector &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/Play.hx",22,0xd4b94c1d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp1,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp3,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(22)
		Dynamic tmp5 = _Function_1_1::Block(tmp4,tmp3,tmp1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		::entities::Wall_obj::__new(tmp5);
	}
return null();
}


Void Play_obj::update( Float dt){
{
		HX_STACK_FRAME("states.Play","update",0xe40113f7,"states.Play.update","states/Play.hx",29,0xd4b94c1d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


Void Play_obj::onleave( Dynamic _){
{
		HX_STACK_FRAME("states.Play","onleave",0x748405ca,"states.Play.onleave","states/Play.hx",33,0xd4b94c1d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(34)
		::entities::Player tmp = this->player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		tmp->destroy(null());
	}
return null();
}


Void Play_obj::onmousemove( ::luxe::MouseEvent event){
{
		HX_STACK_FRAME("states.Play","onmousemove",0xba41a609,"states.Play.onmousemove","states/Play.hx",37,0xd4b94c1d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


Void Play_obj::onkeyup( ::luxe::KeyEvent e){
{
		HX_STACK_FRAME("states.Play","onkeyup",0xe12fa68d,"states.Play.onkeyup","states/Play.hx",41,0xd4b94c1d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(43)
		bool tmp = (e->keycode == (int)27);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		if ((tmp)){
			HX_STACK_LINE(44)
			::luxe::Engine tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			tmp1->shutdown();
		}
	}
return null();
}



Play_obj::Play_obj()
{
}

void Play_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Play);
	HX_MARK_MEMBER_NAME(player,"player");
	::luxe::State_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Play_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	::luxe::State_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Play_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onenter") ) { return onenter_dyn(); }
		if (HX_FIELD_EQ(inName,"onleave") ) { return onleave_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Play_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::entities::Player >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Play_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::entities::Player*/ ,(int)offsetof(Play_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("onenter","\x99","\x9b","\x96","\x73"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onleave","\x78","\x63","\x63","\x75"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Play_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Play_obj::__mClass,"__mClass");
};

#endif

hx::Class Play_obj::__mClass;

void Play_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("states.Play","\xc0","\x60","\xa1","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Play_obj >;
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

} // end namespace states
