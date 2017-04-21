#ifndef INCLUDED_luxe_InputEventType
#define INCLUDED_luxe_InputEventType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,InputEventType)
namespace luxe{


class InputEventType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef InputEventType_obj OBJ_;

	public:
		InputEventType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("luxe.InputEventType","\x62","\xf0","\xe2","\x2b"); }
		::String __ToString() const { return HX_HCSTRING("InputEventType.","\x44","\x7a","\x8e","\xa5") + tag; }

		static ::luxe::InputEventType gamepad;
		static inline ::luxe::InputEventType gamepad_dyn() { return gamepad; }
		static ::luxe::InputEventType key;
		static inline ::luxe::InputEventType key_dyn() { return key; }
		static ::luxe::InputEventType mouse;
		static inline ::luxe::InputEventType mouse_dyn() { return mouse; }
		static ::luxe::InputEventType touch;
		static inline ::luxe::InputEventType touch_dyn() { return touch; }
		static ::luxe::InputEventType unknown;
		static inline ::luxe::InputEventType unknown_dyn() { return unknown; }
};

} // end namespace luxe

#endif /* INCLUDED_luxe_InputEventType */ 
