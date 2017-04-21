#ifndef INCLUDED_components_ConnectInput
#define INCLUDED_components_ConnectInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
HX_DECLARE_CLASS1(components,ConnectInput)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
namespace components{


class HXCPP_CLASS_ATTRIBUTES  ConnectInput_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef ConnectInput_obj OBJ_;
		ConnectInput_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="components.ConnectInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConnectInput_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConnectInput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ConnectInput","\xe0","\xd3","\xa9","\xb1"); }

		virtual Void init( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};

} // end namespace components

#endif /* INCLUDED_components_ConnectInput */ 
