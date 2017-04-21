#ifndef INCLUDED_C
#define INCLUDED_C

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(C)
HX_DECLARE_CLASS1(components,Physics)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)


class HXCPP_CLASS_ATTRIBUTES  C_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef C_obj OBJ_;
		C_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="C")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< C_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~C_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("C","\x43","\x00","\x00","\x00"); }

		static void __boot();
		static Array< ::Dynamic > space;
};


#endif /* INCLUDED_C */ 
