#ifndef INCLUDED_snow_core_native_audio_OGG
#define INCLUDED_snow_core_native_audio_OGG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <linc_sdl.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,audio,AudioDataOGG)
HX_DECLARE_CLASS4(snow,core,native,audio,OGG)
HX_DECLARE_CLASS2(snow,types,AudioData)
namespace snow{
namespace core{
namespace native{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  OGG_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OGG_obj OBJ_;
		OGG_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.core.native.audio.OGG")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OGG_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OGG_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OGG","\x2f","\x30","\x3c","\x00"); }

		static ::snow::types::AudioData from_file( ::snow::Snow app,::String _path,bool _is_stream);
		static Dynamic from_file_dyn();

		static ::snow::types::AudioData from_bytes( ::snow::Snow app,::String _path,::snow::api::buffers::ArrayBufferView _bytes);
		static Dynamic from_bytes_dyn();

		static ::snow::types::AudioData from_file_handle( ::snow::Snow app,::cpp::Pointer< SDL_RWops > _handle,::String _path,bool _is_stream);
		static Dynamic from_file_handle_dyn();

		static ::String code( int _code);
		static Dynamic code_dyn();

		static int ogg_read( ::snow::core::native::audio::AudioDataOGG _ogg,int size,int nmemb,Array< unsigned char > data);
		static Dynamic ogg_read_dyn();

		static Void ogg_seek( ::snow::core::native::audio::AudioDataOGG _ogg,int offset,int whence);
		static Dynamic ogg_seek_dyn();

		static int ogg_tell( ::snow::core::native::audio::AudioDataOGG _ogg);
		static Dynamic ogg_tell_dyn();

};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio

#endif /* INCLUDED_snow_core_native_audio_OGG */ 
