#ifndef INCLUDED_luxe_GamepadEvent
#define INCLUDED_luxe_GamepadEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,GamepadEvent)
HX_DECLARE_CLASS1(luxe,GamepadEventType)
HX_DECLARE_CLASS1(luxe,InteractState)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  GamepadEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GamepadEvent_obj OBJ_;
		GamepadEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.GamepadEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GamepadEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GamepadEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GamepadEvent","\xd9","\xbb","\xa7","\xf5"); }

		Float timestamp;
		::luxe::GamepadEventType type;
		::luxe::InteractState state;
		int gamepad;
		int button;
		int axis;
		Float value;
		::String id;
		virtual Void set_axis( int _gamepad,int _axis,Float _value,Float _timestamp);
		Dynamic set_axis_dyn();

		virtual Void set_button( int _gamepad,int _button,Float _value,::luxe::InteractState _state,Float _timestamp);
		Dynamic set_button_dyn();

		virtual Void set_device( int _gamepad,::String _id,::luxe::GamepadEventType _type,Float _timestamp);
		Dynamic set_device_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_GamepadEvent */ 
