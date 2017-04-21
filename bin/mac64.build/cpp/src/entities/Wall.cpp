#include <hxcpp.h>

#ifndef INCLUDED_components_Physics
#include <components/Physics.h>
#endif
#ifndef INCLUDED_entities_Wall
#include <entities/Wall.h>
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
namespace entities{

Void Wall_obj::__construct(Dynamic pref)
{
HX_STACK_FRAME("entities.Wall","new",0xfda4fee9,"entities.Wall.new","entities/Wall.hx",11,0x93e082c6)
HX_STACK_THIS(this)
HX_STACK_ARG(pref,"pref")
{
	HX_STACK_LINE(12)
	Dynamic tmp = pref;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	super::__construct(tmp);
	HX_STACK_LINE(14)
	this->set_centered(false);
	HX_STACK_LINE(16)
	::components::Physics tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::components::Physics tmp2 = ::components::Physics_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		::components::Physics _component = tmp2;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(16)
		(this->component_count)++;
		HX_STACK_LINE(16)
		::luxe::components::Components tmp3 = this->_components;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		::components::Physics tmp4 = _component;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		tmp1 = tmp3->add(tmp4);
	}
	HX_STACK_LINE(16)
	::components::Physics physics = tmp1;		HX_STACK_VAR(physics,"physics");
	HX_STACK_LINE(17)
	physics->gravity = (int)0;
}
;
	return null();
}

//Wall_obj::~Wall_obj() { }

Dynamic Wall_obj::__CreateEmpty() { return  new Wall_obj; }
hx::ObjectPtr< Wall_obj > Wall_obj::__new(Dynamic pref)
{  hx::ObjectPtr< Wall_obj > _result_ = new Wall_obj();
	_result_->__construct(pref);
	return _result_;}

Dynamic Wall_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Wall_obj > _result_ = new Wall_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Wall_obj::init( ){
{
		HX_STACK_FRAME("entities.Wall","init",0xef72c467,"entities.Wall.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Wall_obj::ondestroy( ){
{
		HX_STACK_FRAME("entities.Wall","ondestroy",0x9b43f904,"entities.Wall.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Wall_obj::Wall_obj()
{
}

Dynamic Wall_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
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
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Wall_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Wall_obj::__mClass,"__mClass");
};

#endif

hx::Class Wall_obj::__mClass;

void Wall_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("entities.Wall","\x77","\x56","\xd7","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Wall_obj >;
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
