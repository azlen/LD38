#ifndef INCLUDED_phoenix_Camera
#define INCLUDED_phoenix_Camera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,FOVType)
HX_DECLARE_CLASS1(phoenix,Matrix)
HX_DECLARE_CLASS1(phoenix,ProjectionType)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Ray)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Transform)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Camera_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Camera_obj OBJ_;
		Camera_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Camera")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Camera_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Camera_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Camera","\xc5","\xba","\x20","\xec"); }

		::String name;
		::phoenix::Rectangle viewport;
		::phoenix::Vector center;
		Float zoom;
		Float near;
		Float far;
		Float fov;
		::phoenix::FOVType fov_type;
		Float aspect;
		::phoenix::Vector target;
		::phoenix::Vector pos;
		::phoenix::Transform transform;
		bool cull_backfaces;
		bool depth_test;
		Float minimum_zoom;
		::phoenix::Matrix projection_matrix;
		::phoenix::Matrix view_matrix;
		::phoenix::Matrix view_matrix_inverse;
		::phoenix::Matrix look_at_matrix;
		::phoenix::ProjectionType projection;
		Dynamic ortho_left;
		Dynamic ortho_right;
		Dynamic ortho_top;
		Dynamic ortho_bottom;
		::snow::api::buffers::ArrayBufferView proj_arr;
		::snow::api::buffers::ArrayBufferView view_inverse_arr;
		Float fov_y;
		bool transform_dirty;
		bool projection_dirty;
		bool look_at_dirty;
		bool setup_;
		virtual Void set_ortho( Dynamic _options);
		Dynamic set_ortho_dyn();

		virtual Void set_perspective( Dynamic _options);
		Dynamic set_perspective_dyn();

		virtual ::phoenix::Vector project( ::phoenix::Vector _vector);
		Dynamic project_dyn();

		virtual ::phoenix::Vector unproject( ::phoenix::Vector _vector);
		Dynamic unproject_dyn();

		virtual ::phoenix::Ray screen_point_to_ray( ::phoenix::Vector _vector);
		Dynamic screen_point_to_ray_dyn();

		virtual ::phoenix::Vector screen_point_to_world( ::phoenix::Vector _vector);
		Dynamic screen_point_to_world_dyn();

		virtual ::phoenix::Vector world_point_to_screen( ::phoenix::Vector _vector,::phoenix::Rectangle _viewport);
		Dynamic world_point_to_screen_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void update_matrices( );
		Dynamic update_matrices_dyn();

		virtual Void on_transform_cleaned( ::phoenix::Transform t);
		Dynamic on_transform_cleaned_dyn();

		::phoenix::Vector up_;
		virtual Void update_look_at( );
		Dynamic update_look_at_dyn();

		virtual Void update_view_matrix( );
		Dynamic update_view_matrix_dyn();

		virtual Void update_projection_matrix( );
		Dynamic update_projection_matrix_dyn();

		virtual Void apply_state( int state,bool value);
		Dynamic apply_state_dyn();

		virtual Void apply_default_camera_options( );
		Dynamic apply_default_camera_options_dyn();

		virtual Dynamic default_camera_options( );
		Dynamic default_camera_options_dyn();

		virtual ::phoenix::Vector ortho_screen_to_world( ::phoenix::Vector _vector);
		Dynamic ortho_screen_to_world_dyn();

		virtual ::phoenix::Vector ortho_world_to_screen( ::phoenix::Vector _vector);
		Dynamic ortho_world_to_screen_dyn();

		virtual ::phoenix::Vector persepective_world_to_screen( ::phoenix::Vector _vector,::phoenix::Rectangle _viewport);
		Dynamic persepective_world_to_screen_dyn();

		virtual ::phoenix::Vector set_target( ::phoenix::Vector _target);
		Dynamic set_target_dyn();

		virtual Float set_fov( Float _fov);
		Dynamic set_fov_dyn();

		virtual ::phoenix::FOVType set_fov_type( ::phoenix::FOVType _fov_type);
		Dynamic set_fov_type_dyn();

		virtual Float set_aspect( Float _aspect);
		Dynamic set_aspect_dyn();

		virtual Float set_near( Float _near);
		Dynamic set_near_dyn();

		virtual Float set_far( Float _far);
		Dynamic set_far_dyn();

		virtual Dynamic set_ortho_left( Dynamic _val);
		Dynamic set_ortho_left_dyn();

		virtual Dynamic set_ortho_right( Dynamic _val);
		Dynamic set_ortho_right_dyn();

		virtual Dynamic set_ortho_top( Dynamic _val);
		Dynamic set_ortho_top_dyn();

		virtual Dynamic set_ortho_bottom( Dynamic _val);
		Dynamic set_ortho_bottom_dyn();

		virtual Float set_zoom( Float _z);
		Dynamic set_zoom_dyn();

		bool refresh_pos_;
		virtual ::phoenix::Vector set_center( ::phoenix::Vector _p);
		Dynamic set_center_dyn();

		virtual ::phoenix::Vector get_center( );
		Dynamic get_center_dyn();

		virtual ::phoenix::Vector get_pos( );
		Dynamic get_pos_dyn();

		virtual ::phoenix::Quaternion get_rotation( );
		Dynamic get_rotation_dyn();

		virtual ::phoenix::Vector get_scale( );
		Dynamic get_scale_dyn();

		virtual ::phoenix::Rectangle get_viewport( );
		Dynamic get_viewport_dyn();

		virtual ::phoenix::Rectangle set_viewport( ::phoenix::Rectangle _r);
		Dynamic set_viewport_dyn();

		virtual ::phoenix::Quaternion set_rotation( ::phoenix::Quaternion _q);
		Dynamic set_rotation_dyn();

		virtual ::phoenix::Vector set_scale( ::phoenix::Vector _s);
		Dynamic set_scale_dyn();

		virtual ::phoenix::Vector set_pos( ::phoenix::Vector _p);
		Dynamic set_pos_dyn();

		virtual Void _merge_options( Dynamic _o);
		Dynamic _merge_options_dyn();

		virtual Void _pos_changed( Float v);
		Dynamic _pos_changed_dyn();

		virtual Void _center_changed( Float v);
		Dynamic _center_changed_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Camera */ 
