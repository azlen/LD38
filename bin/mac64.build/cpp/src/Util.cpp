#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Util
#include <Util.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif

Void Util_obj::__construct()
{
	return null();
}

//Util_obj::~Util_obj() { }

Dynamic Util_obj::__CreateEmpty() { return  new Util_obj; }
hx::ObjectPtr< Util_obj > Util_obj::__new()
{  hx::ObjectPtr< Util_obj > _result_ = new Util_obj();
	_result_->__construct();
	return _result_;}

Dynamic Util_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Util_obj > _result_ = new Util_obj();
	_result_->__construct();
	return _result_;}

Dynamic Util_obj::GetSweptBroadphaseBox( ::components::Physics b){
	HX_STACK_FRAME("Util","GetSweptBroadphaseBox",0x6be90fd7,"Util.GetSweptBroadphaseBox","Util.hx",8,0xec9f7fdc)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(10)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Vector &tmp,::phoenix::Vector &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Util.hx",9,0xec9f7fdc)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(9)
	Dynamic tmp2 = _Function_1_1::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(9)
	Dynamic broadphasebox = tmp2;		HX_STACK_VAR(broadphasebox,"broadphasebox");
	HX_STACK_LINE(13)
	{
		HX_STACK_LINE(13)
		::phoenix::Vector _this = broadphasebox->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(13)
		Float tmp3 = b->velocity->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(13)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(13)
		if ((tmp4)){
			HX_STACK_LINE(13)
			::phoenix::Vector tmp6 = b->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(13)
			tmp5 = tmp6->x;
		}
		else{
			HX_STACK_LINE(13)
			::phoenix::Vector tmp6 = b->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(13)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(13)
			Float tmp8 = b->velocity->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(13)
			tmp5 = (tmp7 + tmp8);
		}
		HX_STACK_LINE(13)
		Float _x = tmp5;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(13)
		_this->x = _x;
		HX_STACK_LINE(13)
		bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(13)
		if ((tmp6)){
			HX_STACK_LINE(13)
			_this->x;
		}
		else{
			HX_STACK_LINE(13)
			bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(13)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(13)
			if ((tmp7)){
				HX_STACK_LINE(13)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(13)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(13)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(13)
				tmp8 = false;
			}
			HX_STACK_LINE(13)
			if ((tmp8)){
				HX_STACK_LINE(13)
				Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(13)
				_this->listen_x(tmp9);
			}
			HX_STACK_LINE(13)
			_this->x;
		}
	}
	HX_STACK_LINE(14)
	{
		HX_STACK_LINE(14)
		::phoenix::Vector _this = broadphasebox->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(14)
		Float tmp3 = b->velocity->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(14)
		if ((tmp4)){
			HX_STACK_LINE(14)
			::phoenix::Vector tmp6 = b->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(14)
			tmp5 = tmp6->y;
		}
		else{
			HX_STACK_LINE(14)
			::phoenix::Vector tmp6 = b->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(14)
			Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(14)
			Float tmp8 = b->velocity->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(14)
			tmp5 = (tmp7 + tmp8);
		}
		HX_STACK_LINE(14)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(14)
		_this->y = _y;
		HX_STACK_LINE(14)
		bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(14)
		if ((tmp6)){
			HX_STACK_LINE(14)
			_this->y;
		}
		else{
			HX_STACK_LINE(14)
			bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(14)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(14)
			if ((tmp7)){
				HX_STACK_LINE(14)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(14)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(14)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(14)
				tmp8 = false;
			}
			HX_STACK_LINE(14)
			if ((tmp8)){
				HX_STACK_LINE(14)
				Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(14)
				_this->listen_y(tmp9);
			}
			HX_STACK_LINE(14)
			_this->y;
		}
	}
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::phoenix::Vector _this = broadphasebox->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(15)
		Float tmp3 = b->velocity->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(15)
		if ((tmp4)){
			HX_STACK_LINE(15)
			Float tmp6 = b->velocity->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(15)
			Float tmp7 = b->size->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(15)
			tmp5 = (tmp6 + tmp7);
		}
		else{
			HX_STACK_LINE(15)
			Float tmp6 = b->size->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(15)
			Float tmp7 = b->velocity->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(15)
			tmp5 = (tmp6 - tmp7);
		}
		HX_STACK_LINE(15)
		Float _x = tmp5;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(15)
		_this->x = _x;
		HX_STACK_LINE(15)
		bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(15)
		if ((tmp6)){
			HX_STACK_LINE(15)
			_this->x;
		}
		else{
			HX_STACK_LINE(15)
			bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(15)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(15)
			if ((tmp7)){
				HX_STACK_LINE(15)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(15)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(15)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(15)
				tmp8 = false;
			}
			HX_STACK_LINE(15)
			if ((tmp8)){
				HX_STACK_LINE(15)
				Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(15)
				_this->listen_x(tmp9);
			}
			HX_STACK_LINE(15)
			_this->x;
		}
	}
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::phoenix::Vector _this = broadphasebox->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(16)
		Float tmp3 = b->velocity->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		if ((tmp4)){
			HX_STACK_LINE(16)
			Float tmp6 = b->velocity->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(16)
			Float tmp7 = b->size->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(16)
			tmp5 = (tmp6 + tmp7);
		}
		else{
			HX_STACK_LINE(16)
			Float tmp6 = b->size->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(16)
			Float tmp7 = b->velocity->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(16)
			tmp5 = (tmp6 - tmp7);
		}
		HX_STACK_LINE(16)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(16)
		_this->y = _y;
		HX_STACK_LINE(16)
		bool tmp6 = _this->_construct;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16)
		if ((tmp6)){
			HX_STACK_LINE(16)
			_this->y;
		}
		else{
			HX_STACK_LINE(16)
			bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(16)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16)
			if ((tmp7)){
				HX_STACK_LINE(16)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(16)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(16)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(16)
				tmp8 = false;
			}
			HX_STACK_LINE(16)
			if ((tmp8)){
				HX_STACK_LINE(16)
				Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(16)
				_this->listen_y(tmp9);
			}
			HX_STACK_LINE(16)
			_this->y;
		}
	}
	HX_STACK_LINE(18)
	Dynamic tmp3 = broadphasebox;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(18)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,GetSweptBroadphaseBox,return )

bool Util_obj::AABBCheck( ::components::Physics b1,::components::Physics b2){
	HX_STACK_FRAME("Util","AABBCheck",0x2b9566bc,"Util.AABBCheck","Util.hx",21,0xec9f7fdc)
	HX_STACK_ARG(b1,"b1")
	HX_STACK_ARG(b2,"b2")
	HX_STACK_LINE(22)
	::phoenix::Vector tmp = b1->get_pos();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	Float tmp2 = b1->size->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	::phoenix::Vector tmp4 = b2->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(22)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(22)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(22)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(22)
	if ((tmp8)){
		HX_STACK_LINE(22)
		::phoenix::Vector tmp10 = b1->get_pos();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(22)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp14 = b2->get_pos();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(22)
		Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(22)
		Float tmp18 = b2->size->x;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(22)
		Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(22)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(22)
		Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(22)
		Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(22)
		Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(22)
		tmp9 = (tmp13 > tmp23);
	}
	else{
		HX_STACK_LINE(22)
		tmp9 = true;
	}
	HX_STACK_LINE(22)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(22)
	bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(22)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(22)
	if ((tmp11)){
		HX_STACK_LINE(22)
		::phoenix::Vector tmp13 = b1->get_pos();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(22)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(22)
		Float tmp17 = b1->size->y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(22)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(22)
		Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(22)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(22)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(22)
		Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp23 = b2->get_pos();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(22)
		Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(22)
		tmp12 = (tmp22 < tmp26);
	}
	else{
		HX_STACK_LINE(22)
		tmp12 = true;
	}
	HX_STACK_LINE(22)
	bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(22)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(22)
	if ((tmp13)){
		HX_STACK_LINE(22)
		::phoenix::Vector tmp15 = b1->get_pos();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(22)
		Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp18 = b2->get_pos();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(22)
		::phoenix::Vector tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(22)
		Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(22)
		Float tmp21 = b2->size->y;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(22)
		Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(22)
		Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(22)
		Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(22)
		tmp14 = (tmp17 > tmp24);
	}
	else{
		HX_STACK_LINE(22)
		tmp14 = true;
	}
	HX_STACK_LINE(22)
	bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(22)
	return tmp15;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,AABBCheck,return )

bool Util_obj::AABBCheckWithBroadphaseBox( ::components::Physics b1,Dynamic b2){
	HX_STACK_FRAME("Util","AABBCheckWithBroadphaseBox",0x2eacc590,"Util.AABBCheckWithBroadphaseBox","Util.hx",25,0xec9f7fdc)
	HX_STACK_ARG(b1,"b1")
	HX_STACK_ARG(b2,"b2")
	HX_STACK_LINE(26)
	::phoenix::Vector tmp = b1->get_pos();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	Float tmp2 = b1->size->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	Float tmp4 = b2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(26)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	if ((tmp7)){
		HX_STACK_LINE(26)
		::phoenix::Vector tmp9 = b1->get_pos();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(26)
		::phoenix::Vector tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(26)
		::phoenix::Vector tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(26)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(26)
		Float tmp13 = b2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(26)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(26)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(26)
		Float tmp16 = b2->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(26)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(26)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(26)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(26)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(26)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(26)
		tmp8 = (tmp12 > tmp21);
	}
	else{
		HX_STACK_LINE(26)
		tmp8 = true;
	}
	HX_STACK_LINE(26)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(26)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(26)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(26)
	if ((tmp10)){
		HX_STACK_LINE(26)
		::phoenix::Vector tmp12 = b1->get_pos();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(26)
		::phoenix::Vector tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(26)
		::phoenix::Vector tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(26)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(26)
		Float tmp16 = b1->size->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(26)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(26)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(26)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(26)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(26)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(26)
		Float tmp22 = b2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(26)
		Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(26)
		Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(26)
		tmp11 = (tmp21 < tmp24);
	}
	else{
		HX_STACK_LINE(26)
		tmp11 = true;
	}
	HX_STACK_LINE(26)
	bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(26)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(26)
	if ((tmp12)){
		HX_STACK_LINE(26)
		::phoenix::Vector tmp14 = b1->get_pos();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(26)
		::phoenix::Vector tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(26)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(26)
		Float tmp17 = b2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(26)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(26)
		Float tmp19 = b2->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(26)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(26)
		Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(26)
		Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(26)
		tmp13 = (tmp16 > tmp22);
	}
	else{
		HX_STACK_LINE(26)
		tmp13 = true;
	}
	HX_STACK_LINE(26)
	bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(26)
	return tmp14;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,AABBCheckWithBroadphaseBox,return )

Dynamic Util_obj::SweptAABB( ::components::Physics b1,::components::Physics b2){
	HX_STACK_FRAME("Util","SweptAABB",0x41cc5d39,"Util.SweptAABB","Util.hx",31,0xec9f7fdc)
	HX_STACK_ARG(b1,"b1")
	HX_STACK_ARG(b2,"b2")
	HX_STACK_LINE(32)
	Float xInvEntry;		HX_STACK_VAR(xInvEntry,"xInvEntry");
	HX_STACK_LINE(32)
	Float yInvEntry;		HX_STACK_VAR(yInvEntry,"yInvEntry");
	HX_STACK_LINE(33)
	Float xInvExit;		HX_STACK_VAR(xInvExit,"xInvExit");
	HX_STACK_LINE(33)
	Float yInvExit;		HX_STACK_VAR(yInvExit,"yInvExit");
	HX_STACK_LINE(36)
	Float tmp = b1->velocity->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	if ((tmp1)){
		HX_STACK_LINE(37)
		::phoenix::Vector tmp2 = b2->get_pos();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		::phoenix::Vector tmp4 = b1->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		Float tmp6 = b1->size->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		xInvEntry = tmp8;
		HX_STACK_LINE(38)
		::phoenix::Vector tmp9 = b2->get_pos();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		Float tmp11 = b2->size->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(38)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(38)
		::phoenix::Vector tmp13 = b1->get_pos();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(38)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(38)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(38)
		xInvExit = tmp15;
	}
	else{
		HX_STACK_LINE(40)
		::phoenix::Vector tmp2 = b2->get_pos();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		Float tmp4 = b2->size->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		::phoenix::Vector tmp6 = b1->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(40)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		xInvEntry = tmp8;
		HX_STACK_LINE(41)
		::phoenix::Vector tmp9 = b2->get_pos();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		::phoenix::Vector tmp11 = b1->get_pos();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		Float tmp13 = b1->size->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(41)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(41)
		Float tmp15 = (tmp10 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(41)
		xInvExit = tmp15;
	}
	HX_STACK_LINE(44)
	Float tmp2 = b1->velocity->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	bool tmp3 = (tmp2 > ((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	if ((tmp3)){
		HX_STACK_LINE(45)
		::phoenix::Vector tmp4 = b2->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		::phoenix::Vector tmp6 = b1->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		Float tmp8 = b1->size->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		Float tmp10 = (tmp5 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		yInvEntry = tmp10;
		HX_STACK_LINE(46)
		::phoenix::Vector tmp11 = b2->get_pos();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(46)
		Float tmp13 = b2->size->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(46)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(46)
		::phoenix::Vector tmp15 = b1->get_pos();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(46)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(46)
		Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(46)
		yInvExit = tmp17;
	}
	else{
		HX_STACK_LINE(48)
		::phoenix::Vector tmp4 = b2->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		Float tmp6 = b2->size->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		::phoenix::Vector tmp8 = b1->get_pos();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(48)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(48)
		Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(48)
		yInvEntry = tmp10;
		HX_STACK_LINE(49)
		::phoenix::Vector tmp11 = b2->get_pos();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(49)
		Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(49)
		::phoenix::Vector tmp13 = b1->get_pos();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(49)
		Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(49)
		Float tmp15 = b1->size->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(49)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(49)
		Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(49)
		yInvExit = tmp17;
	}
	HX_STACK_LINE(53)
	Float xEntry;		HX_STACK_VAR(xEntry,"xEntry");
	HX_STACK_LINE(53)
	Float yEntry;		HX_STACK_VAR(yEntry,"yEntry");
	HX_STACK_LINE(54)
	Float xExit;		HX_STACK_VAR(xExit,"xExit");
	HX_STACK_LINE(54)
	Float yExit;		HX_STACK_VAR(yExit,"yExit");
	HX_STACK_LINE(56)
	Float tmp4 = b1->velocity->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	bool tmp5 = (tmp4 == ((Float)0.0));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	if ((tmp5)){
		HX_STACK_LINE(57)
		Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		xEntry = tmp6;
		HX_STACK_LINE(58)
		Float tmp7 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		xExit = tmp7;
	}
	else{
		HX_STACK_LINE(60)
		Float tmp6 = xInvEntry;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		Float tmp7 = b1->velocity->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		xEntry = tmp8;
		HX_STACK_LINE(61)
		Float tmp9 = xInvExit;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		Float tmp10 = b1->velocity->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		xExit = tmp11;
	}
	HX_STACK_LINE(64)
	Float tmp6 = b1->velocity->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(64)
	bool tmp7 = (tmp6 == ((Float)0.0));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(64)
	if ((tmp7)){
		HX_STACK_LINE(65)
		Float tmp8 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		yEntry = tmp8;
		HX_STACK_LINE(66)
		Float tmp9 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(66)
		yExit = tmp9;
	}
	else{
		HX_STACK_LINE(68)
		Float tmp8 = yInvEntry;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		Float tmp9 = b1->velocity->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(68)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(68)
		yEntry = tmp10;
		HX_STACK_LINE(69)
		Float tmp11 = yInvExit;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(69)
		Float tmp12 = b1->velocity->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(69)
		Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		yExit = tmp13;
	}
	HX_STACK_LINE(73)
	Float tmp8 = xEntry;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(73)
	Float tmp9 = yEntry;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(73)
	Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(73)
	Float entryTime = tmp10;		HX_STACK_VAR(entryTime,"entryTime");
	HX_STACK_LINE(74)
	Float tmp11 = xExit;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(74)
	Float tmp12 = yExit;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(74)
	Float tmp13 = ::Math_obj::min(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(74)
	Float exitTime = tmp13;		HX_STACK_VAR(exitTime,"exitTime");
	HX_STACK_LINE(76)
	Float normalx;		HX_STACK_VAR(normalx,"normalx");
	HX_STACK_LINE(76)
	Float normaly;		HX_STACK_VAR(normaly,"normaly");
	HX_STACK_LINE(78)
	bool tmp14 = (entryTime > exitTime);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(78)
	bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(78)
	bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(78)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(78)
	if ((tmp16)){
		HX_STACK_LINE(78)
		bool tmp18 = (xEntry < ((Float)0.0));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(78)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(78)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(78)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(78)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(78)
		if ((tmp22)){
			HX_STACK_LINE(78)
			tmp17 = (yEntry < ((Float)0.0));
		}
		else{
			HX_STACK_LINE(78)
			tmp17 = false;
		}
	}
	else{
		HX_STACK_LINE(78)
		tmp17 = true;
	}
	HX_STACK_LINE(78)
	bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(78)
	bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(78)
	bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(78)
	if ((tmp19)){
		HX_STACK_LINE(78)
		tmp20 = (xEntry > ((Float)1.0));
	}
	else{
		HX_STACK_LINE(78)
		tmp20 = true;
	}
	HX_STACK_LINE(78)
	bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(78)
	bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(78)
	if ((tmp21)){
		HX_STACK_LINE(78)
		tmp22 = (yEntry > ((Float)1.0));
	}
	else{
		HX_STACK_LINE(78)
		tmp22 = true;
	}
	HX_STACK_LINE(78)
	if ((tmp22)){
		HX_STACK_LINE(79)
		normalx = ((Float)0.0);
		HX_STACK_LINE(80)
		normaly = ((Float)0.0);
		struct _Function_2_1{
			inline static Dynamic Block( Float &normalx,Float &normaly){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Util.hx",81,0xec9f7fdc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c") , ((Float)1.0),false);
					__result->Add(HX_HCSTRING("normalx","\x71","\x70","\xda","\x2b") , normalx,false);
					__result->Add(HX_HCSTRING("normaly","\x72","\x70","\xda","\x2b") , normaly,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(81)
		Dynamic tmp23 = _Function_2_1::Block(normalx,normaly);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(81)
		return tmp23;
	}
	else{
		HX_STACK_LINE(88)
		bool tmp23 = (xEntry > yEntry);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(88)
		if ((tmp23)){
			HX_STACK_LINE(89)
			bool tmp24 = (xInvEntry < ((Float)0.0));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(89)
			if ((tmp24)){
				HX_STACK_LINE(90)
				normalx = ((Float)1.0);
				HX_STACK_LINE(91)
				normaly = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(93)
				normalx = ((Float)-1.0);
				HX_STACK_LINE(94)
				normaly = ((Float)0.0);
			}
		}
		else{
			HX_STACK_LINE(97)
			bool tmp24 = (yInvEntry < ((Float)0.0));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(97)
			if ((tmp24)){
				HX_STACK_LINE(98)
				normalx = ((Float)0.0);
				HX_STACK_LINE(99)
				normaly = ((Float)1.0);
			}
			else{
				HX_STACK_LINE(101)
				normalx = ((Float)0.0);
				HX_STACK_LINE(102)
				normaly = ((Float)-1.0);
			}
		}
		struct _Function_2_1{
			inline static Dynamic Block( Float &entryTime,Float &normalx,Float &normaly){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Util.hx",107,0xec9f7fdc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c") , entryTime,false);
					__result->Add(HX_HCSTRING("normalx","\x71","\x70","\xda","\x2b") , normalx,false);
					__result->Add(HX_HCSTRING("normaly","\x72","\x70","\xda","\x2b") , normaly,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(107)
		Dynamic tmp24 = _Function_2_1::Block(entryTime,normalx,normaly);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(107)
		return tmp24;
	}
	HX_STACK_LINE(78)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,SweptAABB,return )


Util_obj::Util_obj()
{
}

bool Util_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"AABBCheck") ) { outValue = AABBCheck_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"SweptAABB") ) { outValue = SweptAABB_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"GetSweptBroadphaseBox") ) { outValue = GetSweptBroadphaseBox_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"AABBCheckWithBroadphaseBox") ) { outValue = AABBCheckWithBroadphaseBox_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Util_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Util_obj::__mClass,"__mClass");
};

#endif

hx::Class Util_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GetSweptBroadphaseBox","\x23","\x85","\xce","\xd9"),
	HX_HCSTRING("AABBCheck","\x08","\x1a","\x15","\x0a"),
	HX_HCSTRING("AABBCheckWithBroadphaseBox","\xc4","\x9c","\xfe","\x66"),
	HX_HCSTRING("SweptAABB","\x85","\x10","\x4c","\x20"),
	::String(null()) };

void Util_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Util","\x22","\x84","\x87","\x38");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Util_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Util_obj >;
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

