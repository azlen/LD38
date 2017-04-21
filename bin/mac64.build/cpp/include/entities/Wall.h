#ifndef INCLUDED_entities_Wall
#define INCLUDED_entities_Wall

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
HX_DECLARE_CLASS1(entities,Wall)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Wall_obj : public ::luxe::Sprite_obj{
	public:
		typedef ::luxe::Sprite_obj super;
		typedef Wall_obj OBJ_;
		Wall_obj();
		Void __construct(Dynamic pref);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="entities.Wall")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Wall_obj > __new(Dynamic pref);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Wall_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Wall","\x2a","\x89","\xcb","\x39"); }

		virtual Void init( );

		virtual Void ondestroy( );

};

} // end namespace entities

#endif /* INCLUDED_entities_Wall */ 
