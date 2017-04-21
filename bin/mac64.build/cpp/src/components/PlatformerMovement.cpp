#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_components_ConnectInput
#include <components/ConnectInput.h>
#endif
#ifndef INCLUDED_components_Physics
#include <components/Physics.h>
#endif
#ifndef INCLUDED_components_PlatformerMovement
#include <components/PlatformerMovement.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace components{

Void PlatformerMovement_obj::__construct(::components::Physics phys)
{
HX_STACK_FRAME("components.PlatformerMovement","new",0xb302d819,"components.PlatformerMovement.new","components/PlatformerMovement.hx",7,0x0a8fb7d6)
HX_STACK_THIS(this)
HX_STACK_ARG(phys,"phys")
{
	HX_STACK_LINE(8)
	this->speed = (int)4;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","components/PlatformerMovement.hx",12,0x0a8fb7d6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("PlatformerMovement","\x4f","\xa3","\x9e","\x95"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(12)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	super::__construct(tmp);
	HX_STACK_LINE(16)
	this->physicsComponent = phys;
}
;
	return null();
}

//PlatformerMovement_obj::~PlatformerMovement_obj() { }

Dynamic PlatformerMovement_obj::__CreateEmpty() { return  new PlatformerMovement_obj; }
hx::ObjectPtr< PlatformerMovement_obj > PlatformerMovement_obj::__new(::components::Physics phys)
{  hx::ObjectPtr< PlatformerMovement_obj > _result_ = new PlatformerMovement_obj();
	_result_->__construct(phys);
	return _result_;}

Dynamic PlatformerMovement_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlatformerMovement_obj > _result_ = new PlatformerMovement_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlatformerMovement_obj::init( ){
{
		HX_STACK_FRAME("components.PlatformerMovement","init",0xec32f537,"components.PlatformerMovement.init","components/PlatformerMovement.hx",19,0x0a8fb7d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		::components::ConnectInput tmp = ::components::ConnectInput_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		this->add(tmp);
	}
return null();
}


Void PlatformerMovement_obj::update( Float dt){
{
		HX_STACK_FRAME("components.PlatformerMovement","update",0x867d57f0,"components.PlatformerMovement.update","components/PlatformerMovement.hx",23,0x0a8fb7d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::components::Physics tmp = this->physicsComponent;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(24)
			::phoenix::Vector _this = tmp->velocity;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(24)
			_this->x = (int)0;
			HX_STACK_LINE(24)
			bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(24)
			if ((tmp1)){
				HX_STACK_LINE(24)
				_this->x;
			}
			else{
				HX_STACK_LINE(24)
				bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(24)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(24)
				if ((tmp2)){
					HX_STACK_LINE(24)
					bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(24)
					bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(24)
					tmp3 = !(tmp5);
				}
				else{
					HX_STACK_LINE(24)
					tmp3 = false;
				}
				HX_STACK_LINE(24)
				if ((tmp3)){
					HX_STACK_LINE(24)
					_this->listen_x((int)0);
				}
				HX_STACK_LINE(24)
				_this->x;
			}
		}
		HX_STACK_LINE(25)
		::luxe::Input tmp = ::Luxe_obj::input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		bool tmp1 = tmp->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		if ((tmp1)){
			HX_STACK_LINE(26)
			::components::Physics tmp2 = this->physicsComponent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			::phoenix::Vector _g = tmp2->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				Float tmp3 = _g->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(26)
				int tmp4 = this->speed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(26)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(26)
				Float _x = tmp5;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(26)
				_g->x = _x;
				HX_STACK_LINE(26)
				bool tmp6 = _g->_construct;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(26)
				if ((tmp6)){
					HX_STACK_LINE(26)
					_g->x;
				}
				else{
					HX_STACK_LINE(26)
					bool tmp7 = (_g->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(26)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(26)
					if ((tmp7)){
						HX_STACK_LINE(26)
						bool tmp9 = _g->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(26)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(26)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(26)
						tmp8 = false;
					}
					HX_STACK_LINE(26)
					if ((tmp8)){
						HX_STACK_LINE(26)
						Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(26)
						_g->listen_x(tmp9);
					}
					HX_STACK_LINE(26)
					_g->x;
				}
			}
		}
		HX_STACK_LINE(28)
		::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		bool tmp3 = tmp2->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		if ((tmp3)){
			HX_STACK_LINE(29)
			::components::Physics tmp4 = this->physicsComponent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(29)
			::phoenix::Vector _g = tmp4->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				Float tmp5 = _g->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(29)
				int tmp6 = this->speed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(29)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(29)
				Float _x = tmp7;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(29)
				_g->x = _x;
				HX_STACK_LINE(29)
				bool tmp8 = _g->_construct;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(29)
				if ((tmp8)){
					HX_STACK_LINE(29)
					_g->x;
				}
				else{
					HX_STACK_LINE(29)
					bool tmp9 = (_g->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(29)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(29)
					if ((tmp9)){
						HX_STACK_LINE(29)
						bool tmp11 = _g->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(29)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(29)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(29)
						tmp10 = false;
					}
					HX_STACK_LINE(29)
					if ((tmp10)){
						HX_STACK_LINE(29)
						Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(29)
						_g->listen_x(tmp11);
					}
					HX_STACK_LINE(29)
					_g->x;
				}
			}
		}
	}
return null();
}


Void PlatformerMovement_obj::ondestroy( ){
{
		HX_STACK_FRAME("components.PlatformerMovement","ondestroy",0xb210d634,"components.PlatformerMovement.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void PlatformerMovement_obj::onremoved( ){
{
		HX_STACK_FRAME("components.PlatformerMovement","onremoved",0x808ac8da,"components.PlatformerMovement.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



PlatformerMovement_obj::PlatformerMovement_obj()
{
}

void PlatformerMovement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlatformerMovement);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(physicsComponent,"physicsComponent");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlatformerMovement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(physicsComponent,"physicsComponent");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlatformerMovement_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"physicsComponent") ) { return physicsComponent; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlatformerMovement_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"physicsComponent") ) { physicsComponent=inValue.Cast< ::components::Physics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlatformerMovement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("physicsComponent","\xf6","\xc6","\xd1","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PlatformerMovement_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsObject /*::components::Physics*/ ,(int)offsetof(PlatformerMovement_obj,physicsComponent),HX_HCSTRING("physicsComponent","\xf6","\xc6","\xd1","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("physicsComponent","\xf6","\xc6","\xd1","\xe4"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlatformerMovement_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlatformerMovement_obj::__mClass,"__mClass");
};

#endif

hx::Class PlatformerMovement_obj::__mClass;

void PlatformerMovement_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("components.PlatformerMovement","\xa7","\xd7","\xa4","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlatformerMovement_obj >;
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
