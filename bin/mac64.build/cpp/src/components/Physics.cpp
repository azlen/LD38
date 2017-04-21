#include <hxcpp.h>

#ifndef INCLUDED_C
#include <C.h>
#endif
#ifndef INCLUDED_Util
#include <Util.h>
#endif
#ifndef INCLUDED_components_Physics
#include <components/Physics.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace components{

Void Physics_obj::__construct()
{
HX_STACK_FRAME("components.Physics","new",0xb9c391c1,"components.Physics.new","components/Physics.hx",9,0x2f0c0c10)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->velocity = ::phoenix::Vector_obj::__new(((Float)0.0),((Float)0.0),null(),null());
	HX_STACK_LINE(12)
	this->gravity = ((Float)0.05);
	HX_STACK_LINE(11)
	this->collisionsEnabled = true;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","components/Physics.hx",20,0x2f0c0c10)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("Physics","\xa7","\x60","\xa2","\x8b"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(20)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	super::__construct(tmp);
}
;
	return null();
}

//Physics_obj::~Physics_obj() { }

Dynamic Physics_obj::__CreateEmpty() { return  new Physics_obj; }
hx::ObjectPtr< Physics_obj > Physics_obj::__new()
{  hx::ObjectPtr< Physics_obj > _result_ = new Physics_obj();
	_result_->__construct();
	return _result_;}

Dynamic Physics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Physics_obj > _result_ = new Physics_obj();
	_result_->__construct();
	return _result_;}

Void Physics_obj::onadded( ){
{
		HX_STACK_FRAME("components.Physics","onadded",0xec168922,"components.Physics.onadded","components/Physics.hx",25,0x2f0c0c10)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		::C_obj::space->push(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(27)
		::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		this->sprite = ((::luxe::Sprite)(tmp));
		HX_STACK_LINE(28)
		::luxe::Sprite tmp1 = this->sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		this->size = tmp1->size;
	}
return null();
}


Void Physics_obj::update( Float dt){
{
		HX_STACK_FRAME("components.Physics","update",0xef421748,"components.Physics.update","components/Physics.hx",31,0x2f0c0c10)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			::phoenix::Vector tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(32)
			::phoenix::Vector _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				Float tmp1 = _g->y;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(32)
				Float tmp2 = this->gravity;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(32)
				Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(32)
				Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(32)
				_g->y = _y;
				HX_STACK_LINE(32)
				bool tmp4 = _g->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				if ((tmp4)){
					HX_STACK_LINE(32)
					_g->y;
				}
				else{
					HX_STACK_LINE(32)
					bool tmp5 = (_g->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(32)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(32)
					if ((tmp5)){
						HX_STACK_LINE(32)
						bool tmp7 = _g->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(32)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(32)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(32)
						tmp6 = false;
					}
					HX_STACK_LINE(32)
					if ((tmp6)){
						HX_STACK_LINE(32)
						Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(32)
						_g->listen_y(tmp7);
					}
					HX_STACK_LINE(32)
					_g->y;
				}
			}
		}
		HX_STACK_LINE(34)
		bool tmp = this->collisionsEnabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		if ((tmp)){
			HX_STACK_LINE(34)
			::phoenix::Vector tmp2 = this->velocity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			::phoenix::Vector tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(34)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(34)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(34)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(34)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(34)
			if ((tmp10)){
				HX_STACK_LINE(34)
				::phoenix::Vector tmp11 = this->velocity;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(34)
				::phoenix::Vector tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(34)
				::phoenix::Vector tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(34)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(34)
				tmp1 = (tmp14 > (int)0);
			}
			else{
				HX_STACK_LINE(34)
				tmp1 = true;
			}
		}
		else{
			HX_STACK_LINE(34)
			tmp1 = false;
		}
		HX_STACK_LINE(34)
		if ((tmp1)){
			HX_STACK_LINE(35)
			Float collisiontime = ((Float)1.0);		HX_STACK_VAR(collisiontime,"collisiontime");
			HX_STACK_LINE(36)
			Float normalx = ((Float)0.0);		HX_STACK_VAR(normalx,"normalx");
			HX_STACK_LINE(37)
			Float normaly = ((Float)0.0);		HX_STACK_VAR(normaly,"normaly");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(38)
				Array< ::Dynamic > _g1 = ::C_obj::space;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(38)
				while((true)){
					HX_STACK_LINE(38)
					bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(38)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(38)
					if ((tmp3)){
						HX_STACK_LINE(38)
						break;
					}
					HX_STACK_LINE(38)
					::components::Physics tmp4 = _g1->__get(_g).StaticCast< ::components::Physics >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(38)
					::components::Physics spr = tmp4;		HX_STACK_VAR(spr,"spr");
					HX_STACK_LINE(38)
					++(_g);
					HX_STACK_LINE(39)
					bool tmp5 = (hx::ObjectPtr<OBJ_>(this) == spr);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(39)
					if ((tmp5)){
						HX_STACK_LINE(40)
						continue;
					}
					HX_STACK_LINE(42)
					Dynamic tmp6 = ::Util_obj::GetSweptBroadphaseBox(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(42)
					Dynamic broadphasebox = tmp6;		HX_STACK_VAR(broadphasebox,"broadphasebox");
					HX_STACK_LINE(43)
					Dynamic tmp7 = broadphasebox;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(43)
					bool tmp8 = ::Util_obj::AABBCheckWithBroadphaseBox(hx::ObjectPtr<OBJ_>(this),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(43)
					if ((tmp8)){
						HX_STACK_LINE(45)
						::components::Physics tmp9 = spr;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(45)
						Dynamic tmp10 = ::Util_obj::SweptAABB(hx::ObjectPtr<OBJ_>(this),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(45)
						Dynamic sweptAABB = tmp10;		HX_STACK_VAR(sweptAABB,"sweptAABB");
						HX_STACK_LINE(47)
						bool tmp11 = (sweptAABB->__Field(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"), hx::paccDynamic ) < collisiontime);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(47)
						if ((tmp11)){
							HX_STACK_LINE(48)
							collisiontime = sweptAABB->__Field(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"), hx::paccDynamic );
							HX_STACK_LINE(49)
							normalx = sweptAABB->__Field(HX_HCSTRING("normalx","\x71","\x70","\xda","\x2b"), hx::paccDynamic );
							HX_STACK_LINE(50)
							normaly = sweptAABB->__Field(HX_HCSTRING("normaly","\x72","\x70","\xda","\x2b"), hx::paccDynamic );
						}
					}
				}
			}
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				::phoenix::Vector tmp2 = this->get_pos();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				::phoenix::Vector _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					Float tmp3 = _g->x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(57)
					::phoenix::Vector tmp4 = this->velocity;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(57)
					Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(57)
					Float tmp6 = collisiontime;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(57)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(57)
					Float tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(57)
					Float _x = tmp8;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(57)
					_g->x = _x;
					HX_STACK_LINE(57)
					bool tmp9 = _g->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(57)
					if ((tmp9)){
						HX_STACK_LINE(57)
						_g->x;
					}
					else{
						HX_STACK_LINE(57)
						bool tmp10 = (_g->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(57)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(57)
						if ((tmp10)){
							HX_STACK_LINE(57)
							bool tmp12 = _g->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(57)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(57)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(57)
							tmp11 = false;
						}
						HX_STACK_LINE(57)
						if ((tmp11)){
							HX_STACK_LINE(57)
							Float tmp12 = _x;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(57)
							_g->listen_x(tmp12);
						}
						HX_STACK_LINE(57)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				::phoenix::Vector tmp2 = this->get_pos();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(58)
				::phoenix::Vector _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					Float tmp3 = _g->y;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(58)
					::phoenix::Vector tmp4 = this->velocity;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(58)
					Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(58)
					Float tmp6 = collisiontime;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(58)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(58)
					Float tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(58)
					Float _y = tmp8;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(58)
					_g->y = _y;
					HX_STACK_LINE(58)
					bool tmp9 = _g->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(58)
					if ((tmp9)){
						HX_STACK_LINE(58)
						_g->y;
					}
					else{
						HX_STACK_LINE(58)
						bool tmp10 = (_g->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(58)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						if ((tmp10)){
							HX_STACK_LINE(58)
							bool tmp12 = _g->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(58)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(58)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(58)
							tmp11 = false;
						}
						HX_STACK_LINE(58)
						if ((tmp11)){
							HX_STACK_LINE(58)
							Float tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(58)
							_g->listen_y(tmp12);
						}
						HX_STACK_LINE(58)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(60)
			bool tmp2 = (collisiontime != ((Float)1.0));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			if ((tmp2)){
				HX_STACK_LINE(61)
				Float tmp3 = (((Float)1.0) - collisiontime);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(61)
				Float remainingtime = tmp3;		HX_STACK_VAR(remainingtime,"remainingtime");
				HX_STACK_LINE(64)
				::phoenix::Vector tmp4 = this->velocity;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(64)
				Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(64)
				Float tmp6 = normaly;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(64)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(64)
				::phoenix::Vector tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(64)
				Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(64)
				Float tmp10 = normalx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(64)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(64)
				Float tmp12 = (tmp7 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(64)
				Float tmp13 = remainingtime;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(64)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(64)
				Float dotprod = tmp14;		HX_STACK_VAR(dotprod,"dotprod");
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					::phoenix::Vector tmp15 = this->velocity;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(65)
					::phoenix::Vector _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(65)
					Float tmp16 = (dotprod * normaly);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(65)
					Float _x = tmp16;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(65)
					_this->x = _x;
					HX_STACK_LINE(65)
					bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(65)
					if ((tmp17)){
						HX_STACK_LINE(65)
						_this->x;
					}
					else{
						HX_STACK_LINE(65)
						bool tmp18 = (_this->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(65)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(65)
						if ((tmp18)){
							HX_STACK_LINE(65)
							bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(65)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(65)
							tmp19 = !(tmp21);
						}
						else{
							HX_STACK_LINE(65)
							tmp19 = false;
						}
						HX_STACK_LINE(65)
						if ((tmp19)){
							HX_STACK_LINE(65)
							Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(65)
							_this->listen_x(tmp20);
						}
						HX_STACK_LINE(65)
						_this->x;
					}
				}
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					::phoenix::Vector tmp15 = this->velocity;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(66)
					::phoenix::Vector _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(66)
					Float tmp16 = (dotprod * normalx);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(66)
					Float _y = tmp16;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(66)
					_this->y = _y;
					HX_STACK_LINE(66)
					bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(66)
					if ((tmp17)){
						HX_STACK_LINE(66)
						_this->y;
					}
					else{
						HX_STACK_LINE(66)
						bool tmp18 = (_this->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(66)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(66)
						if ((tmp18)){
							HX_STACK_LINE(66)
							bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(66)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(66)
							tmp19 = !(tmp21);
						}
						else{
							HX_STACK_LINE(66)
							tmp19 = false;
						}
						HX_STACK_LINE(66)
						if ((tmp19)){
							HX_STACK_LINE(66)
							Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(66)
							_this->listen_y(tmp20);
						}
						HX_STACK_LINE(66)
						_this->y;
					}
				}
			}
		}
	}
return null();
}


Void Physics_obj::destroy( ){
{
		HX_STACK_FRAME("components.Physics","destroy",0xf148b2db,"components.Physics.destroy","components/Physics.hx",72,0x2f0c0c10)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		::C_obj::space->remove(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,destroy,(void))

Void Physics_obj::init( ){
{
		HX_STACK_FRAME("components.Physics","init",0xce14ae8f,"components.Physics.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void Physics_obj::ondestroy( ){
{
		HX_STACK_FRAME("components.Physics","ondestroy",0x95b83ddc,"components.Physics.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void Physics_obj::onremoved( ){
{
		HX_STACK_FRAME("components.Physics","onremoved",0x64323082,"components.Physics.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



Physics_obj::Physics_obj()
{
}

void Physics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Physics);
	HX_MARK_MEMBER_NAME(collisionsEnabled,"collisionsEnabled");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Physics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collisionsEnabled,"collisionsEnabled");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Physics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return gravity; }
		if (HX_FIELD_EQ(inName,"onadded") ) { return onadded_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"collisionsEnabled") ) { return collisionsEnabled; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Physics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"collisionsEnabled") ) { collisionsEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Physics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collisionsEnabled","\xc0","\xda","\xce","\xfe"));
	outFields->push(HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Physics_obj,collisionsEnabled),HX_HCSTRING("collisionsEnabled","\xc0","\xda","\xce","\xfe")},
	{hx::fsFloat,(int)offsetof(Physics_obj,gravity),HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Physics_obj,velocity),HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Physics_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Physics_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collisionsEnabled","\xc0","\xda","\xce","\xfe"),
	HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
};

#endif

hx::Class Physics_obj::__mClass;

void Physics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("components.Physics","\x4f","\x9d","\xcd","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Physics_obj >;
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
