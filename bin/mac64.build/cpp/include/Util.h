#ifndef INCLUDED_Util
#define INCLUDED_Util

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Util)
HX_DECLARE_CLASS1(components,Physics)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)


class HXCPP_CLASS_ATTRIBUTES  Util_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Util_obj OBJ_;
		Util_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Util")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Util_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Util_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Util","\x22","\x84","\x87","\x38"); }

		static Dynamic GetSweptBroadphaseBox( ::components::Physics b);
		static Dynamic GetSweptBroadphaseBox_dyn();

		static bool AABBCheck( ::components::Physics b1,::components::Physics b2);
		static Dynamic AABBCheck_dyn();

		static bool AABBCheckWithBroadphaseBox( ::components::Physics b1,Dynamic b2);
		static Dynamic AABBCheckWithBroadphaseBox_dyn();

		static Dynamic SweptAABB( ::components::Physics b1,::components::Physics b2);
		static Dynamic SweptAABB_dyn();

};


#endif /* INCLUDED_Util */ 
