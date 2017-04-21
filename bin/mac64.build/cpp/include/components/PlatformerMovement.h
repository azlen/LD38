#ifndef INCLUDED_components_PlatformerMovement
#define INCLUDED_components_PlatformerMovement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
HX_DECLARE_CLASS1(components,Physics)
HX_DECLARE_CLASS1(components,PlatformerMovement)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
namespace components{


class HXCPP_CLASS_ATTRIBUTES  PlatformerMovement_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef PlatformerMovement_obj OBJ_;
		PlatformerMovement_obj();
		Void __construct(::components::Physics phys);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="components.PlatformerMovement")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlatformerMovement_obj > __new(::components::Physics phys);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlatformerMovement_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlatformerMovement","\x4f","\xa3","\x9e","\x95"); }

		int speed;
		::components::Physics physicsComponent;
		virtual Void init( );

		virtual Void update( Float dt);

		virtual Void ondestroy( );

		virtual Void onremoved( );

};

} // end namespace components

#endif /* INCLUDED_components_PlatformerMovement */ 
