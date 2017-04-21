#ifndef INCLUDED_phoenix_Vector
#define INCLUDED_phoenix_Vector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Vector)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Vector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector_obj OBJ_;
		Vector_obj();
		Void __construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Vector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector_obj > __new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Vector","\xe3","\x24","\xf2","\xcb"); }

		Float x;
		Float y;
		Float z;
		Float w;
		Float length;
		Float lengthsq;
		Float angle2D;
		::phoenix::Vector normalized;
		::phoenix::Vector inverted;
		bool ignore_listeners;
		Dynamic listen_x;
		Dynamic &listen_x_dyn() { return listen_x;}
		Dynamic listen_y;
		Dynamic &listen_y_dyn() { return listen_y;}
		Dynamic listen_z;
		Dynamic &listen_z_dyn() { return listen_z;}
		bool _construct;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float set_x( Float _x);
		Dynamic set_x_dyn();

		virtual Float set_y( Float _y);
		Dynamic set_y_dyn();

		virtual Float set_z( Float _z);
		Dynamic set_z_dyn();

		virtual Float set_angle2D( Float value);
		Dynamic set_angle2D_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Vector */ 
