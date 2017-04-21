#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void Vector_obj::__construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w)
{
HX_STACK_FRAME("phoenix.Vector","new",0x8c9315d4,"phoenix.Vector.new","phoenix/Vector.hx",6,0x5d0bf7fb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__x,"_x")
HX_STACK_ARG(__o__y,"_y")
HX_STACK_ARG(__o__z,"_z")
HX_STACK_ARG(__o__w,"_w")
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
Float _z = __o__z.Default(0);
Float _w = __o__w.Default(0);
{
	HX_STACK_LINE(25)
	this->_construct = false;
	HX_STACK_LINE(19)
	this->ignore_listeners = false;
	HX_STACK_LINE(11)
	this->w = ((Float)0);
	HX_STACK_LINE(10)
	this->z = ((Float)0);
	HX_STACK_LINE(9)
	this->y = ((Float)0);
	HX_STACK_LINE(8)
	this->x = ((Float)0);
	HX_STACK_LINE(29)
	this->_construct = true;
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		this->x = _x;
		HX_STACK_LINE(31)
		bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		if ((tmp)){
			HX_STACK_LINE(31)
			this->x;
		}
		else{
			HX_STACK_LINE(31)
			Dynamic tmp1 = this->listen_x_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(31)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			if ((tmp2)){
				HX_STACK_LINE(31)
				bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(31)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(31)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(31)
				tmp3 = !(tmp6);
			}
			else{
				HX_STACK_LINE(31)
				tmp3 = false;
			}
			HX_STACK_LINE(31)
			if ((tmp3)){
				HX_STACK_LINE(31)
				Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(31)
				this->listen_x(tmp4);
			}
			HX_STACK_LINE(31)
			this->x;
		}
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		this->y = _y;
		HX_STACK_LINE(32)
		bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		if ((tmp)){
			HX_STACK_LINE(32)
			this->y;
		}
		else{
			HX_STACK_LINE(32)
			Dynamic tmp1 = this->listen_y_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(32)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			if ((tmp2)){
				HX_STACK_LINE(32)
				bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(32)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(32)
				tmp3 = !(tmp6);
			}
			else{
				HX_STACK_LINE(32)
				tmp3 = false;
			}
			HX_STACK_LINE(32)
			if ((tmp3)){
				HX_STACK_LINE(32)
				Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				this->listen_y(tmp4);
			}
			HX_STACK_LINE(32)
			this->y;
		}
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		this->z = _z;
		HX_STACK_LINE(33)
		bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(33)
			this->z;
		}
		else{
			HX_STACK_LINE(33)
			Dynamic tmp1 = this->listen_z_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			if ((tmp2)){
				HX_STACK_LINE(33)
				bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(33)
				tmp3 = !(tmp6);
			}
			else{
				HX_STACK_LINE(33)
				tmp3 = false;
			}
			HX_STACK_LINE(33)
			if ((tmp3)){
				HX_STACK_LINE(33)
				Float tmp4 = _z;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				this->listen_z(tmp4);
			}
			HX_STACK_LINE(33)
			this->z;
		}
	}
	HX_STACK_LINE(34)
	this->w = _w;
	HX_STACK_LINE(36)
	this->_construct = false;
}
;
	return null();
}

//Vector_obj::~Vector_obj() { }

Dynamic Vector_obj::__CreateEmpty() { return  new Vector_obj; }
hx::ObjectPtr< Vector_obj > Vector_obj::__new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w)
{  hx::ObjectPtr< Vector_obj > _result_ = new Vector_obj();
	_result_->__construct(__o__x,__o__y,__o__z,__o__w);
	return _result_;}

Dynamic Vector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_obj > _result_ = new Vector_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String Vector_obj::toString( ){
	HX_STACK_FRAME("phoenix.Vector","toString",0xe91b46b8,"phoenix.Vector.toString","phoenix/Vector.hx",213,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	::String tmp1 = (HX_HCSTRING("{ x:","\x47","\xef","\x65","\x51") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	::String tmp2 = (tmp1 + HX_HCSTRING(", y:","\x15","\x15","\x2e","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(215)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(215)
	::String tmp5 = (tmp4 + HX_HCSTRING(", z:","\xf4","\x15","\x2e","\x1d"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(215)
	Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(215)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(215)
	::String tmp8 = (tmp7 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(215)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,toString,return )

Float Vector_obj::set_x( Float _x){
	HX_STACK_FRAME("phoenix.Vector","set_x",0x08e225cf,"phoenix.Vector.set_x","phoenix/Vector.hx",529,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_LINE(531)
	this->x = _x;
	HX_STACK_LINE(533)
	bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(533)
	if ((tmp)){
		HX_STACK_LINE(533)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(533)
		return tmp1;
	}
	HX_STACK_LINE(535)
	Dynamic tmp1 = this->listen_x_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(535)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(535)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(535)
	if ((tmp2)){
		HX_STACK_LINE(535)
		bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(535)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(535)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(535)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(535)
		tmp3 = false;
	}
	HX_STACK_LINE(535)
	if ((tmp3)){
		HX_STACK_LINE(535)
		Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(535)
		this->listen_x(tmp4);
	}
	HX_STACK_LINE(537)
	Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(537)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_x,return )

Float Vector_obj::set_y( Float _y){
	HX_STACK_FRAME("phoenix.Vector","set_y",0x08e225d0,"phoenix.Vector.set_y","phoenix/Vector.hx",542,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(544)
	this->y = _y;
	HX_STACK_LINE(546)
	bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(546)
	if ((tmp)){
		HX_STACK_LINE(546)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(546)
		return tmp1;
	}
	HX_STACK_LINE(548)
	Dynamic tmp1 = this->listen_y_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(548)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(548)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(548)
	if ((tmp2)){
		HX_STACK_LINE(548)
		bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(548)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(548)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(548)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(548)
		tmp3 = false;
	}
	HX_STACK_LINE(548)
	if ((tmp3)){
		HX_STACK_LINE(548)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(548)
		this->listen_y(tmp4);
	}
	HX_STACK_LINE(550)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(550)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_y,return )

Float Vector_obj::set_z( Float _z){
	HX_STACK_FRAME("phoenix.Vector","set_z",0x08e225d1,"phoenix.Vector.set_z","phoenix/Vector.hx",555,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(557)
	this->z = _z;
	HX_STACK_LINE(559)
	bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(559)
	if ((tmp)){
		HX_STACK_LINE(559)
		Float tmp1 = this->z;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(559)
		return tmp1;
	}
	HX_STACK_LINE(561)
	Dynamic tmp1 = this->listen_z_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(561)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(561)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(561)
	if ((tmp2)){
		HX_STACK_LINE(561)
		bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(561)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(561)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(561)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(561)
		tmp3 = false;
	}
	HX_STACK_LINE(561)
	if ((tmp3)){
		HX_STACK_LINE(561)
		Float tmp4 = _z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(561)
		this->listen_z(tmp4);
	}
	HX_STACK_LINE(563)
	Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(563)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_z,return )

Float Vector_obj::set_angle2D( Float value){
	HX_STACK_FRAME("phoenix.Vector","set_angle2D",0xed308afc,"phoenix.Vector.set_angle2D","phoenix/Vector.hx",578,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(580)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(580)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(580)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(580)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(580)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(580)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(580)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(580)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(580)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(580)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(580)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(580)
	Float len = tmp11;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(582)
	{
		HX_STACK_LINE(582)
		Float tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(582)
		Float tmp13 = ::Math_obj::cos(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(582)
		Float tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(582)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(582)
		Float _x = tmp15;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(582)
		Float tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(582)
		Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(582)
		Float tmp18 = len;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(582)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(582)
		Float _y = tmp19;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(582)
		bool tmp20 = this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(582)
		bool prev = tmp20;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(582)
		this->ignore_listeners = true;
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			this->x = _x;
			HX_STACK_LINE(582)
			bool tmp21 = this->_construct;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(582)
			if ((tmp21)){
				HX_STACK_LINE(582)
				this->x;
			}
			else{
				HX_STACK_LINE(582)
				Dynamic tmp22 = this->listen_x_dyn();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(582)
				bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(582)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(582)
				if ((tmp23)){
					HX_STACK_LINE(582)
					bool tmp25 = this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(582)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(582)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(582)
					tmp24 = !(tmp27);
				}
				else{
					HX_STACK_LINE(582)
					tmp24 = false;
				}
				HX_STACK_LINE(582)
				if ((tmp24)){
					HX_STACK_LINE(582)
					Float tmp25 = _x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(582)
					this->listen_x(tmp25);
				}
				HX_STACK_LINE(582)
				this->x;
			}
		}
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			this->y = _y;
			HX_STACK_LINE(582)
			bool tmp21 = this->_construct;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(582)
			if ((tmp21)){
				HX_STACK_LINE(582)
				this->y;
			}
			else{
				HX_STACK_LINE(582)
				Dynamic tmp22 = this->listen_y_dyn();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(582)
				bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(582)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(582)
				if ((tmp23)){
					HX_STACK_LINE(582)
					bool tmp25 = this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(582)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(582)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(582)
					tmp24 = !(tmp27);
				}
				else{
					HX_STACK_LINE(582)
					tmp24 = false;
				}
				HX_STACK_LINE(582)
				if ((tmp24)){
					HX_STACK_LINE(582)
					Float tmp25 = _y;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(582)
					this->listen_y(tmp25);
				}
				HX_STACK_LINE(582)
				this->y;
			}
		}
		HX_STACK_LINE(582)
		this->ignore_listeners = prev;
		HX_STACK_LINE(582)
		Dynamic tmp21 = this->listen_x_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(582)
		bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(582)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(582)
		if ((tmp22)){
			HX_STACK_LINE(582)
			bool tmp24 = this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(582)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(582)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(582)
			tmp23 = !(tmp26);
		}
		else{
			HX_STACK_LINE(582)
			tmp23 = false;
		}
		HX_STACK_LINE(582)
		if ((tmp23)){
			HX_STACK_LINE(582)
			Float tmp24 = this->x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(582)
			this->listen_x(tmp24);
		}
		HX_STACK_LINE(582)
		Dynamic tmp24 = this->listen_y_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(582)
		bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(582)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(582)
		if ((tmp25)){
			HX_STACK_LINE(582)
			bool tmp27 = this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(582)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(582)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(582)
			tmp26 = !(tmp29);
		}
		else{
			HX_STACK_LINE(582)
			tmp26 = false;
		}
		HX_STACK_LINE(582)
		if ((tmp26)){
			HX_STACK_LINE(582)
			Float tmp27 = this->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(582)
			this->listen_y(tmp27);
		}
		HX_STACK_LINE(582)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(584)
	Float tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(584)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_angle2D,return )


Vector_obj::Vector_obj()
{
}

void Vector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lengthsq,"lengthsq");
	HX_MARK_MEMBER_NAME(angle2D,"angle2D");
	HX_MARK_MEMBER_NAME(normalized,"normalized");
	HX_MARK_MEMBER_NAME(inverted,"inverted");
	HX_MARK_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_MARK_MEMBER_NAME(listen_x,"listen_x");
	HX_MARK_MEMBER_NAME(listen_y,"listen_y");
	HX_MARK_MEMBER_NAME(listen_z,"listen_z");
	HX_MARK_MEMBER_NAME(_construct,"_construct");
	HX_MARK_END_CLASS();
}

void Vector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(lengthsq,"lengthsq");
	HX_VISIT_MEMBER_NAME(angle2D,"angle2D");
	HX_VISIT_MEMBER_NAME(normalized,"normalized");
	HX_VISIT_MEMBER_NAME(inverted,"inverted");
	HX_VISIT_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_VISIT_MEMBER_NAME(listen_x,"listen_x");
	HX_VISIT_MEMBER_NAME(listen_y,"listen_y");
	HX_VISIT_MEMBER_NAME(listen_z,"listen_z");
	HX_VISIT_MEMBER_NAME(_construct,"_construct");
}

Dynamic Vector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"angle2D") ) { return angle2D; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lengthsq") ) { return lengthsq; }
		if (HX_FIELD_EQ(inName,"inverted") ) { return inverted; }
		if (HX_FIELD_EQ(inName,"listen_x") ) { return listen_x; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { return listen_y; }
		if (HX_FIELD_EQ(inName,"listen_z") ) { return listen_z; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { return normalized; }
		if (HX_FIELD_EQ(inName,"_construct") ) { return _construct; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_angle2D") ) { return set_angle2D_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { return ignore_listeners; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return set_z(inValue);z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"angle2D") ) { if (inCallProp == hx::paccAlways) return set_angle2D(inValue);angle2D=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lengthsq") ) { lengthsq=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inverted") ) { inverted=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_x") ) { listen_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { listen_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_z") ) { listen_z=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { normalized=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_construct") ) { _construct=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { ignore_listeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("lengthsq","\x04","\x7f","\xc3","\x1f"));
	outFields->push(HX_HCSTRING("angle2D","\x65","\x4a","\xd9","\x52"));
	outFields->push(HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"));
	outFields->push(HX_HCSTRING("inverted","\xf5","\xb0","\x31","\xf5"));
	outFields->push(HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7"));
	outFields->push(HX_HCSTRING("_construct","\xd8","\xd3","\x4f","\xab"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Vector_obj,lengthsq),HX_HCSTRING("lengthsq","\x04","\x7f","\xc3","\x1f")},
	{hx::fsFloat,(int)offsetof(Vector_obj,angle2D),HX_HCSTRING("angle2D","\x65","\x4a","\xd9","\x52")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vector_obj,normalized),HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vector_obj,inverted),HX_HCSTRING("inverted","\xf5","\xb0","\x31","\xf5")},
	{hx::fsBool,(int)offsetof(Vector_obj,ignore_listeners),HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_x),HX_HCSTRING("listen_x","\x40","\xfb","\x31","\x38")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_y),HX_HCSTRING("listen_y","\x41","\xfb","\x31","\x38")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_z),HX_HCSTRING("listen_z","\x42","\xfb","\x31","\x38")},
	{hx::fsBool,(int)offsetof(Vector_obj,_construct),HX_HCSTRING("_construct","\xd8","\xd3","\x4f","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("lengthsq","\x04","\x7f","\xc3","\x1f"),
	HX_HCSTRING("angle2D","\x65","\x4a","\xd9","\x52"),
	HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"),
	HX_HCSTRING("inverted","\xf5","\xb0","\x31","\xf5"),
	HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7"),
	HX_HCSTRING("listen_x","\x40","\xfb","\x31","\x38"),
	HX_HCSTRING("listen_y","\x41","\xfb","\x31","\x38"),
	HX_HCSTRING("listen_z","\x42","\xfb","\x31","\x38"),
	HX_HCSTRING("_construct","\xd8","\xd3","\x4f","\xab"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_z","\x5d","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_angle2D","\x88","\xb1","\x40","\xe3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

#endif

hx::Class Vector_obj::__mClass;

void Vector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Vector","\xe2","\xdb","\x3e","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector_obj >;
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

} // end namespace phoenix
