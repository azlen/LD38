#ifndef INCLUDED_entities_Player
#define INCLUDED_entities_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
HX_DECLARE_CLASS1(components,Physics)
HX_DECLARE_CLASS1(entities,Player)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::luxe::Sprite_obj{
	public:
		typedef ::luxe::Sprite_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="entities.Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		::components::Physics physicsComponent;
		virtual Void init( );

		virtual Void ondestroy( );

};

} // end namespace entities

#endif /* INCLUDED_entities_Player */ 
