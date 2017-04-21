#ifndef INCLUDED_ogg__Ogg_Ogg_helper
#define INCLUDED_ogg__Ogg_Ogg_helper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <linc_ogg.h>
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(ogg,_Ogg,Ogg_helper)
namespace ogg{
namespace _Ogg{


class HXCPP_CLASS_ATTRIBUTES  Ogg_helper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Ogg_helper_obj OBJ_;
		Ogg_helper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ogg._Ogg.Ogg_helper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Ogg_helper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ogg_helper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Ogg_helper","\xbe","\xb6","\x2d","\xac"); }

		static void __boot();
		static bool callbacks_set;
		static ::haxe::ds::IntMap callbacks;
		static int cb_seq;
		static int ov_open_callbacks( Dynamic userdata,::cpp::Pointer< OggVorbis_File > file,Array< unsigned char > initial,int ibytes,Dynamic _callbacks);
		static Dynamic ov_open_callbacks_dyn();

		static int read_callback( int cb_id,int size,int nmemb,Array< unsigned char > data);
		static Dynamic read_callback_dyn();

		static int seek_callback( int cb_id,int offset,int whence);
		static Dynamic seek_callback_dyn();

		static int close_callback( int cb_id);
		static Dynamic close_callback_dyn();

		static int tell_callback( int cb_id);
		static Dynamic tell_callback_dyn();

};

} // end namespace ogg
} // end namespace _Ogg

#endif /* INCLUDED_ogg__Ogg_Ogg_helper */ 
