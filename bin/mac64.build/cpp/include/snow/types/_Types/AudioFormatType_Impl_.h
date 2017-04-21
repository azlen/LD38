#ifndef INCLUDED_snow_types__Types_AudioFormatType_Impl_
#define INCLUDED_snow_types__Types_AudioFormatType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,AudioFormatType_Impl_)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  AudioFormatType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioFormatType_Impl__obj OBJ_;
		AudioFormatType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types._Types.AudioFormatType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AudioFormatType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioFormatType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AudioFormatType_Impl_","\xc7","\x65","\x2d","\xfe"); }

		static void __boot();
		static Dynamic af_unknown;
		static Dynamic af_custom;
		static Dynamic af_ogg;
		static Dynamic af_wav;
		static Dynamic af_pcm;
		static ::String toString( Dynamic this1);
		static Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_AudioFormatType_Impl_ */ 
