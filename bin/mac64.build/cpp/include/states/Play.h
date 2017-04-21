#ifndef INCLUDED_states_Play
#define INCLUDED_states_Play

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_State
#include <luxe/State.h>
#endif
HX_DECLARE_CLASS1(entities,Player)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,State)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(states,Play)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  Play_obj : public ::luxe::State_obj{
	public:
		typedef ::luxe::State_obj super;
		typedef Play_obj OBJ_;
		Play_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="states.Play")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Play_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Play_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Play","\x14","\x5a","\x33","\x35"); }

		::entities::Player player;
		virtual Void onenter( Dynamic _);

		virtual Void update( Float dt);

		virtual Void onleave( Dynamic _);

		virtual Void onmousemove( ::luxe::MouseEvent event);

		virtual Void onkeyup( ::luxe::KeyEvent e);

};

} // end namespace states

#endif /* INCLUDED_states_Play */ 
