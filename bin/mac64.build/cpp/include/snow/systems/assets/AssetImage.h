#ifndef INCLUDED_snow_systems_assets_AssetImage
#define INCLUDED_snow_systems_assets_AssetImage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,systems,assets,Asset)
HX_DECLARE_CLASS3(snow,systems,assets,AssetImage)
HX_DECLARE_CLASS3(snow,systems,assets,Assets)
HX_DECLARE_CLASS2(snow,types,ImageData)
namespace snow{
namespace systems{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetImage_obj : public ::snow::systems::assets::Asset_obj{
	public:
		typedef ::snow::systems::assets::Asset_obj super;
		typedef AssetImage_obj OBJ_;
		AssetImage_obj();
		Void __construct(::snow::systems::assets::Assets _system,::String _id,::snow::types::ImageData _image);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.systems.assets.AssetImage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetImage_obj > __new(::snow::systems::assets::Assets _system,::String _id,::snow::types::ImageData _image);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetImage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetImage","\x6b","\x23","\xf8","\x60"); }

		static ::snow::api::Promise load( ::snow::systems::assets::Assets _system,::String _id);
		static Dynamic load_dyn();

		static ::snow::api::Promise load_from_bytes( ::snow::systems::assets::Assets _system,::String _id,::snow::api::buffers::ArrayBufferView _bytes);
		static Dynamic load_from_bytes_dyn();

		static ::snow::systems::assets::AssetImage load_from_pixels( ::snow::systems::assets::Assets _system,::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels);
		static Dynamic load_from_pixels_dyn();

		static ::snow::api::Promise provider( ::snow::Snow _app,::String _path);
		static Dynamic provider_dyn();

		static ::snow::api::Promise processor( ::snow::Snow _app,::String _id,::snow::api::buffers::ArrayBufferView _data);
		static Dynamic processor_dyn();

		::snow::types::ImageData image;
		virtual ::snow::api::Promise reload( );
		Dynamic reload_dyn();

		virtual Void destroy( );

		virtual ::snow::api::Promise reload_from_bytes( ::snow::api::buffers::ArrayBufferView _bytes);
		Dynamic reload_from_bytes_dyn();

		virtual Void reload_from_pixels( int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels);
		Dynamic reload_from_pixels_dyn();

		virtual ::snow::types::ImageData set_image( ::snow::types::ImageData _image);
		Dynamic set_image_dyn();

};

} // end namespace snow
} // end namespace systems
} // end namespace assets

#endif /* INCLUDED_snow_systems_assets_AssetImage */ 
