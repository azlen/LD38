#include <hxcpp.h>

#ifndef INCLUDED_components_Physics
#include <components/Physics.h>
#endif
#ifndef INCLUDED_components_PlatformerMovement
#include <components/PlatformerMovement.h>
#endif
#ifndef INCLUDED_entities_Player
#include <entities/Player.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace entities{

Void Player_obj::__construct()
{
HX_STACK_FRAME("entities.Player","new",0x0cad9a00,"entities.Player.new","entities/Player.hx",14,0x7a521d4f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new((int)200,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	::phoenix::Color tmp1 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	::phoenix::Color tmp2 = tmp1->rgb((int)16337668);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new((int)32,(int)64,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Vector &tmp,::phoenix::Color &tmp2,::phoenix::Vector &tmp3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","entities/Player.hx",15,0x7a521d4f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp2,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp3,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(15)
	Dynamic tmp4 = _Function_1_1::Block(tmp,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(15)
	super::__construct(tmp4);
	HX_STACK_LINE(21)
	this->set_centered(false);
	HX_STACK_LINE(23)
	::components::Physics tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::components::Physics tmp6 = ::components::Physics_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		::components::Physics _component = tmp6;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(23)
		(this->component_count)++;
		HX_STACK_LINE(23)
		::luxe::components::Components tmp7 = this->_components;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		::components::Physics tmp8 = _component;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(23)
		tmp5 = tmp7->add(tmp8);
	}
	HX_STACK_LINE(23)
	this->physicsComponent = tmp5;
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::components::Physics tmp6 = this->physicsComponent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		::components::PlatformerMovement tmp7 = ::components::PlatformerMovement_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(24)
		::components::PlatformerMovement _component = tmp7;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(24)
		(this->component_count)++;
		HX_STACK_LINE(24)
		::luxe::components::Components tmp8 = this->_components;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(24)
		::components::PlatformerMovement tmp9 = _component;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(24)
		tmp8->add(tmp9);
	}
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

Void Player_obj::init( ){
{
		HX_STACK_FRAME("entities.Player","init",0x07f1dd70,"entities.Player.init","entities/Player.hx",27,0x7a521d4f)
		HX_STACK_THIS(this)
	}
return null();
}


Void Player_obj::ondestroy( ){
{
		HX_STACK_FRAME("entities.Player","ondestroy",0xdba07f5b,"entities.Player.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(physicsComponent,"physicsComponent");
	::luxe::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(physicsComponent,"physicsComponent");
	::luxe::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"physicsComponent") ) { return physicsComponent; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"physicsComponent") ) { physicsComponent=inValue.Cast< ::components::Physics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("physicsComponent","\xf6","\xc6","\xd1","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::components::Physics*/ ,(int)offsetof(Player_obj,physicsComponent),HX_HCSTRING("physicsComponent","\xf6","\xc6","\xd1","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("physicsComponent","\xf6","\xc6","\xd1","\xe4"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("entities.Player","\x0e","\xda","\xe0","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

} // end namespace entities
