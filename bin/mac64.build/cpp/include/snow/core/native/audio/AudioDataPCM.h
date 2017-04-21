#ifndef INCLUDED_snow_core_native_audio_AudioDataPCM
#define INCLUDED_snow_core_native_audio_AudioDataPCM

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif
#include <linc_sdl.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,audio,AudioDataPCM)
HX_DECLARE_CLASS2(snow,types,AudioData)
namespace snow{
namespace core{
namespace native{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  AudioDataPCM_obj : public ::snow::types::AudioData_obj{
	public:
		typedef ::snow::types::AudioData_obj super;
		typedef AudioDataPCM_obj OBJ_;
		AudioDataPCM_obj();
		Void __construct(::snow::Snow _app,::cpp::Pointer< SDL_RWops > _handle,Dynamic _opt);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.core.native.audio.AudioDataPCM")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AudioDataPCM_obj > __new(::snow::Snow _app,::cpp::Pointer< SDL_RWops > _handle,Dynamic _opt);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioDataPCM_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AudioDataPCM","\xfa","\xb0","\x63","\xe5"); }

		::cpp::Pointer< SDL_RWops > handle;
		virtual Void destroy( );

		virtual bool seek( int _to);

		virtual Array< int > portion( ::snow::api::buffers::ArrayBufferView _into,int _start,int _len,Array< int > _into_result);

};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio

#endif /* INCLUDED_snow_core_native_audio_AudioDataPCM */ 
