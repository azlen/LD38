#ifndef INCLUDED_Luxe
#define INCLUDED_Luxe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Luxe)
HX_DECLARE_CLASS1(luxe,Audio)
HX_DECLARE_CLASS1(luxe,Camera)
HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Draw)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Events)
HX_DECLARE_CLASS1(luxe,IO)
HX_DECLARE_CLASS1(luxe,Input)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Physics)
HX_DECLARE_CLASS1(luxe,Resources)
HX_DECLARE_CLASS1(luxe,Scene)
HX_DECLARE_CLASS1(luxe,Screen)
HX_DECLARE_CLASS1(luxe,Timer)
HX_DECLARE_CLASS2(luxe,utils,Utils)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS1(snow,Snow)


class HXCPP_CLASS_ATTRIBUTES  Luxe_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Luxe_obj OBJ_;
		Luxe_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Luxe")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Luxe_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Luxe_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Luxe","\xd6","\x67","\x95","\x32"); }

		static ::luxe::Engine core;
		static ::luxe::Debug debug;
		static ::luxe::IO io;
		static ::luxe::Draw draw;
		static ::luxe::Audio audio;
		static ::luxe::Timer timer;
		static ::luxe::Events events;
		static ::luxe::Input input;
		static ::luxe::Scene scene;
		static ::luxe::utils::Utils utils;
		static ::luxe::Physics physics;
		static ::luxe::Camera camera;
		static ::luxe::Resources resources;
		static ::phoenix::Renderer renderer;
		static Void on( int event,Dynamic handler);
		static Dynamic on_dyn();

		static bool off( int event,Dynamic handler);
		static Dynamic off_dyn();

		static Void next( Dynamic func);
		static Dynamic next_dyn();

		static Void shutdown( );
		static Dynamic shutdown_dyn();

		static Void showConsole( bool _show);
		static Dynamic showConsole_dyn();

		static ::snow::Snow get_snow( );
		static Dynamic get_snow_dyn();

		static ::luxe::Screen get_screen( );
		static Dynamic get_screen_dyn();

		static Float get_time( );
		static Dynamic get_time_dyn();

		static ::String get_version( );
		static Dynamic get_version_dyn();

		static ::String get_build( );
		static Dynamic get_build_dyn();

		static Float get_dt( );
		static Dynamic get_dt_dyn();

		static Float get_frame_start( );
		static Dynamic get_frame_start_dyn();

		static Float get_frame_start_prev( );
		static Dynamic get_frame_start_prev_dyn();

		static Float get_frame_max_delta( );
		static Dynamic get_frame_max_delta_dyn();

		static Float get_update_rate( );
		static Dynamic get_update_rate_dyn();

		static Float get_tick_start( );
		static Dynamic get_tick_start_dyn();

		static Float get_tick_start_prev( );
		static Dynamic get_tick_start_prev_dyn();

		static Float get_tick_delta( );
		static Dynamic get_tick_delta_dyn();

		static Float get_timescale( );
		static Dynamic get_timescale_dyn();

		static Float get_sim_time( );
		static Dynamic get_sim_time_dyn();

		static Float get_sim_delta( );
		static Dynamic get_sim_delta_dyn();

		static Float get_fixed_delta( );
		static Dynamic get_fixed_delta_dyn();

		static bool get_fixed_timestep( );
		static Dynamic get_fixed_timestep_dyn();

		static Float get_fixed_alpha( );
		static Dynamic get_fixed_alpha_dyn();

		static Float get_fixed_frame_time( );
		static Dynamic get_fixed_frame_time_dyn();

		static Float set_timescale( Float _val);
		static Dynamic set_timescale_dyn();

		static Float set_fixed_delta( Float _val);
		static Dynamic set_fixed_delta_dyn();

		static Float set_update_rate( Float _val);
		static Dynamic set_update_rate_dyn();

		static bool set_fixed_timestep( bool _val);
		static Dynamic set_fixed_timestep_dyn();

		static Float set_frame_max_delta( Float _val);
		static Dynamic set_frame_max_delta_dyn();

		static Float set_fixed_frame_time( Float _val);
		static Dynamic set_fixed_frame_time_dyn();

};


#endif /* INCLUDED_Luxe */ 
