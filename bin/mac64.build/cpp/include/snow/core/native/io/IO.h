#ifndef INCLUDED_snow_core_native_io_IO
#define INCLUDED_snow_core_native_io_IO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#include <linc_sdl.h>
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,io,IO)
HX_DECLARE_CLASS3(snow,modules,interfaces,IO)
HX_DECLARE_CLASS2(snow,types,SystemEvent)
namespace snow{
namespace core{
namespace native{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  IO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IO_obj OBJ_;
		IO_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.core.native.io.IO")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IO_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IO_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::snow::modules::interfaces::IO_obj *();
		::String __ToString() const { return HX_HCSTRING("IO","\xe6","\x3f","\x00","\x00"); }

		::snow::Snow app;
		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual Void onevent( ::snow::types::SystemEvent _event);
		Dynamic onevent_dyn();

		virtual ::String app_path( );
		Dynamic app_path_dyn();

		virtual ::String app_path_prefs( );
		Dynamic app_path_prefs_dyn();

		virtual Void url_open( ::String _url);
		Dynamic url_open_dyn();

		virtual ::snow::api::Promise data_load( ::String _path,Dynamic _options);
		Dynamic data_load_dyn();

		virtual bool data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options);
		Dynamic data_save_dyn();

		virtual ::String string_save_path( Dynamic _slot);
		Dynamic string_save_path_dyn();

		virtual bool string_slot_destroy( Dynamic _slot);
		Dynamic string_slot_destroy_dyn();

		virtual bool string_slot_save( Dynamic _slot,::String _contents);
		Dynamic string_slot_save_dyn();

		virtual ::String string_slot_load( Dynamic _slot);
		Dynamic string_slot_load_dyn();

		virtual ::String string_slot_encode( ::String _string);
		Dynamic string_slot_encode_dyn();

		virtual ::String string_slot_decode( ::String _string);
		Dynamic string_slot_decode_dyn();

		virtual ::cpp::Pointer< SDL_RWops > file_handle( ::String _path,::String _mode);
		Dynamic file_handle_dyn();

		virtual ::cpp::Pointer< SDL_RWops > file_handle_from_mem( ::snow::api::buffers::ArrayBufferView mem,int size);
		Dynamic file_handle_from_mem_dyn();

		virtual int file_read( ::cpp::Pointer< SDL_RWops > handle,::snow::api::buffers::ArrayBufferView dest,int size,int maxnum);
		Dynamic file_read_dyn();

		virtual int file_write( ::cpp::Pointer< SDL_RWops > handle,::snow::api::buffers::ArrayBufferView src,int size,int num);
		Dynamic file_write_dyn();

		virtual int file_seek( ::cpp::Pointer< SDL_RWops > handle,int offset,int whence);
		Dynamic file_seek_dyn();

		virtual int file_tell( ::cpp::Pointer< SDL_RWops > handle);
		Dynamic file_tell_dyn();

		virtual int file_close( ::cpp::Pointer< SDL_RWops > handle);
		Dynamic file_close_dyn();

		virtual int file_size( ::cpp::Pointer< SDL_RWops > handle);
		Dynamic file_size_dyn();

		virtual ::snow::api::buffers::ArrayBufferView _data_load( ::String _path,Dynamic _options);
		Dynamic _data_load_dyn();

};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace io

#endif /* INCLUDED_snow_core_native_io_IO */ 
