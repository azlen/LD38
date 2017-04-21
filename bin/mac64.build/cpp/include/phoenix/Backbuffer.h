#ifndef INCLUDED_phoenix_Backbuffer
#define INCLUDED_phoenix_Backbuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_RenderTarget
#include <phoenix/RenderTarget.h>
#endif
HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS1(phoenix,Backbuffer)
HX_DECLARE_CLASS1(phoenix,RenderTarget)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Backbuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Backbuffer_obj OBJ_;
		Backbuffer_obj();
		Void __construct(int _render_w,int _render_h,Float _render_scale,::opengl::GLObject _fb,::opengl::GLObject _rb);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Backbuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Backbuffer_obj > __new(int _render_w,int _render_h,Float _render_scale,::opengl::GLObject _fb,::opengl::GLObject _rb);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Backbuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::phoenix::RenderTarget_obj *();
		::String __ToString() const { return HX_HCSTRING("Backbuffer","\x87","\x32","\x3b","\xd1"); }

		int width;
		int height;
		Float viewport_scale;
		::opengl::GLObject framebuffer;
		::opengl::GLObject renderbuffer;
};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Backbuffer */ 
