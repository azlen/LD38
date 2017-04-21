#ifndef INCLUDED_luxe_States
#define INCLUDED_luxe_States

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
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


class HXCPP_CLASS_ATTRIBUTES  States_obj : public ::luxe::Objects_obj{
	public:
		typedef ::luxe::Objects_obj super;
		typedef States_obj OBJ_;
		States_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.States")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< States_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~States_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("States","\x62","\x4d","\x90","\x3a"); }

		::haxe::ds::StringMap _states;
		Array< ::Dynamic > active_states;
		::luxe::State current_state;
		int active_count;
		int _state_count;
		virtual Dynamic add( Dynamic _state);
		Dynamic add_dyn();

		virtual Dynamic remove( ::String _name,Dynamic _leave_with);
		Dynamic remove_dyn();

		virtual Void kill( ::String _name);
		Dynamic kill_dyn();

		virtual bool enabled( ::String _name);
		Dynamic enabled_dyn();

		virtual Void enable( ::String _name,Dynamic _enable_with);
		Dynamic enable_dyn();

		virtual Void disable( ::String _name,Dynamic _disable_with);
		Dynamic disable_dyn();

		virtual Void enter( ::luxe::State _state,Dynamic _enter_with);
		Dynamic enter_dyn();

		virtual Void leave( ::luxe::State _state,Dynamic _leave_with);
		Dynamic leave_dyn();

		virtual bool set( ::String name,Dynamic _enter_with,Dynamic _leave_with);
		Dynamic set_dyn();

		virtual Void unset( Dynamic _leave_with);
		Dynamic unset_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void init( Dynamic _);
		Dynamic init_dyn();

		virtual Void reset( Dynamic _);
		Dynamic reset_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void ondestroy( Dynamic _);
		Dynamic ondestroy_dyn();

		virtual Void render( Dynamic _);
		Dynamic render_dyn();

		virtual Void prerender( Dynamic _);
		Dynamic prerender_dyn();

		virtual Void postrender( Dynamic _);
		Dynamic postrender_dyn();

		virtual Void keydown( ::luxe::KeyEvent _event);
		Dynamic keydown_dyn();

		virtual Void keyup( ::luxe::KeyEvent _event);
		Dynamic keyup_dyn();

		virtual Void textinput( ::luxe::TextEvent _event);
		Dynamic textinput_dyn();

		virtual Void inputup( ::luxe::InputEvent _event);
		Dynamic inputup_dyn();

		virtual Void inputdown( ::luxe::InputEvent _event);
		Dynamic inputdown_dyn();

		virtual Void mousedown( ::luxe::MouseEvent _event);
		Dynamic mousedown_dyn();

		virtual Void mousewheel( ::luxe::MouseEvent _event);
		Dynamic mousewheel_dyn();

		virtual Void mouseup( ::luxe::MouseEvent _event);
		Dynamic mouseup_dyn();

		virtual Void mousemove( ::luxe::MouseEvent _event);
		Dynamic mousemove_dyn();

		virtual Void touchdown( ::luxe::TouchEvent _event);
		Dynamic touchdown_dyn();

		virtual Void touchup( ::luxe::TouchEvent _event);
		Dynamic touchup_dyn();

		virtual Void touchmove( ::luxe::TouchEvent _event);
		Dynamic touchmove_dyn();

		virtual Void gamepadaxis( ::luxe::GamepadEvent _event);
		Dynamic gamepadaxis_dyn();

		virtual Void gamepadup( ::luxe::GamepadEvent _event);
		Dynamic gamepadup_dyn();

		virtual Void gamepaddown( ::luxe::GamepadEvent _event);
		Dynamic gamepaddown_dyn();

		virtual Void gamepaddevice( ::luxe::GamepadEvent _event);
		Dynamic gamepaddevice_dyn();

		virtual Void windowmoved( ::snow::types::WindowEvent _event);
		Dynamic windowmoved_dyn();

		virtual Void windowresized( ::snow::types::WindowEvent _event);
		Dynamic windowresized_dyn();

		virtual Void windowsized( ::snow::types::WindowEvent _event);
		Dynamic windowsized_dyn();

		virtual Void windowminimized( ::snow::types::WindowEvent _event);
		Dynamic windowminimized_dyn();

		virtual Void windowrestored( ::snow::types::WindowEvent _event);
		Dynamic windowrestored_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_States */ 
