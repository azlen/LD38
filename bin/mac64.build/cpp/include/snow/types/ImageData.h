#ifndef INCLUDED_snow_types_ImageData
#define INCLUDED_snow_types_ImageData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS2(snow,types,ImageData)
namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES  ImageData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ImageData_obj OBJ_;
		ImageData_obj();
		Void __construct(::snow::Snow _app,Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.types.ImageData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ImageData_obj > __new(::snow::Snow _app,Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ImageData","\x05","\xcb","\x6a","\xc6"); }

		::snow::Snow app;
		::String id;
		int width;
		int height;
		int width_actual;
		int height_actual;
		int bpp;
		int bpp_source;
		::snow::api::buffers::ArrayBufferView pixels;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_ImageData */ 
