#ifndef INCLUDED_snow_systems_assets_AssetAudio
#define INCLUDED_snow_systems_assets_AssetAudio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,systems,assets,Asset)
HX_DECLARE_CLASS3(snow,systems,assets,AssetAudio)
HX_DECLARE_CLASS3(snow,systems,assets,Assets)
HX_DECLARE_CLASS2(snow,types,AudioData)
namespace snow{
namespace systems{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetAudio_obj : public ::snow::systems::assets::Asset_obj{
	public:
		typedef ::snow::systems::assets::Asset_obj super;
		typedef AssetAudio_obj OBJ_;
		AssetAudio_obj();
		Void __construct(::snow::systems::assets::Assets _system,::String _id,::snow::types::AudioData _audio);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.systems.assets.AssetAudio")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetAudio_obj > __new(::snow::systems::assets::Assets _system,::String _id,::snow::types::AudioData _audio);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetAudio_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetAudio","\xe6","\x7c","\x0f","\xcb"); }

		static ::snow::api::Promise load( ::snow::systems::assets::Assets _system,::String _id,Dynamic _is_stream);
		static Dynamic load_dyn();

		static ::snow::api::Promise load_from_bytes( ::snow::systems::assets::Assets _system,::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format);
		static Dynamic load_from_bytes_dyn();

		::snow::types::AudioData audio;
		virtual ::snow::api::Promise reload( Dynamic _is_stream);
		Dynamic reload_dyn();

		virtual Void destroy( );

		virtual ::snow::api::Promise reload_from_bytes( ::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format);
		Dynamic reload_from_bytes_dyn();

		virtual ::snow::types::AudioData set_audio( ::snow::types::AudioData _audio);
		Dynamic set_audio_dyn();

};

} // end namespace snow
} // end namespace systems
} // end namespace assets

#endif /* INCLUDED_snow_systems_assets_AssetAudio */ 
