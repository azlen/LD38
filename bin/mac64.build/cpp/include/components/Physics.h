#ifndef INCLUDED_components_Physics
#define INCLUDED_components_Physics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
HX_DECLARE_CLASS1(components,Physics)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace components{


class HXCPP_CLASS_ATTRIBUTES  Physics_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef Physics_obj OBJ_;
		Physics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="components.Physics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Physics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Physics_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Physics","\xa7","\x60","\xa2","\x8b"); }

		bool collisionsEnabled;
		Float gravity;
		::phoenix::Vector velocity;
		::phoenix::Vector size;
		::luxe::Sprite sprite;
		virtual Void onadded( );

		virtual Void update( Float dt);

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void init( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};

} // end namespace components

#endif /* INCLUDED_components_Physics */ 
