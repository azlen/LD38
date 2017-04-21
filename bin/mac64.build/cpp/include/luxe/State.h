#ifndef INCLUDED_luxe_State
#define INCLUDED_luxe_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,GamepadEvent)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,InputEvent)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,State)
HX_DECLARE_CLASS1(luxe,States)
HX_DECLARE_CLASS1(luxe,TextEvent)
HX_DECLARE_CLASS1(luxe,TouchEvent)
HX_DECLARE_CLASS2(snow,types,WindowEvent)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  State_obj : public ::luxe::ID_obj{
	public:
		typedef ::luxe::ID_obj super;
		typedef State_obj OBJ_;
		State_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.State")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< State_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~State_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("State","\xf1","\xe5","\x38","\x17"); }

		::luxe::States machine;
		bool active;
		bool enabled;
		bool inited;
		virtual Void enable( Dynamic _enable_with);
		Dynamic enable_dyn();

		virtual Void disable( Dynamic _disable_with);
		Dynamic disable_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void onfixedupdate( );
		Dynamic onfixedupdate_dyn();

		virtual Void onleave( Dynamic d);
		Dynamic onleave_dyn();

		virtual Void onenter( Dynamic d);
		Dynamic onenter_dyn();

		virtual Void onenabled( Dynamic d);
		Dynamic onenabled_dyn();

		virtual Void ondisabled( Dynamic d);
		Dynamic ondisabled_dyn();

		virtual Void onadded( );
		Dynamic onadded_dyn();

		virtual Void onremoved( );
		Dynamic onremoved_dyn();

		virtual Void onrender( );
		Dynamic onrender_dyn();

		virtual Void onprerender( );
		Dynamic onprerender_dyn();

		virtual Void onpostrender( );
		Dynamic onpostrender_dyn();

		virtual Void onreset( );
		Dynamic onreset_dyn();

		virtual Void ondestroy( );
		Dynamic ondestroy_dyn();

		virtual Void onkeyup( ::luxe::KeyEvent event);
		Dynamic onkeyup_dyn();

		virtual Void onkeydown( ::luxe::KeyEvent event);
		Dynamic onkeydown_dyn();

		virtual Void ontextinput( ::luxe::TextEvent event);
		Dynamic ontextinput_dyn();

		virtual Void oninputdown( ::luxe::InputEvent event);
		Dynamic oninputdown_dyn();

		virtual Void oninputup( ::luxe::InputEvent event);
		Dynamic oninputup_dyn();

		virtual Void onmousedown( ::luxe::MouseEvent event);
		Dynamic onmousedown_dyn();

		virtual Void onmouseup( ::luxe::MouseEvent event);
		Dynamic onmouseup_dyn();

		virtual Void onmousemove( ::luxe::MouseEvent event);
		Dynamic onmousemove_dyn();

		virtual Void onmousewheel( ::luxe::MouseEvent event);
		Dynamic onmousewheel_dyn();

		virtual Void ontouchdown( ::luxe::TouchEvent event);
		Dynamic ontouchdown_dyn();

		virtual Void ontouchup( ::luxe::TouchEvent event);
		Dynamic ontouchup_dyn();

		virtual Void ontouchmove( ::luxe::TouchEvent event);
		Dynamic ontouchmove_dyn();

		virtual Void ongamepadup( ::luxe::GamepadEvent event);
		Dynamic ongamepadup_dyn();

		virtual Void ongamepaddown( ::luxe::GamepadEvent event);
		Dynamic ongamepaddown_dyn();

		virtual Void ongamepadaxis( ::luxe::GamepadEvent event);
		Dynamic ongamepadaxis_dyn();

		virtual Void ongamepaddevice( ::luxe::GamepadEvent event);
		Dynamic ongamepaddevice_dyn();

		virtual Void onwindowmoved( ::snow::types::WindowEvent event);
		Dynamic onwindowmoved_dyn();

		virtual Void onwindowresized( ::snow::types::WindowEvent event);
		Dynamic onwindowresized_dyn();

		virtual Void onwindowsized( ::snow::types::WindowEvent event);
		Dynamic onwindowsized_dyn();

		virtual Void onwindowminimized( ::snow::types::WindowEvent event);
		Dynamic onwindowminimized_dyn();

		virtual Void onwindowrestored( ::snow::types::WindowEvent event);
		Dynamic onwindowrestored_dyn();

		virtual Void _init( );
		Dynamic _init_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_State */ 
