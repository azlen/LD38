#include <hxcpp.h>

#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_phoenix_Backbuffer
#include <phoenix/Backbuffer.h>
#endif
#ifndef INCLUDED_phoenix_RenderTarget
#include <phoenix/RenderTarget.h>
#endif
namespace phoenix{

Void Backbuffer_obj::__construct(int _render_w,int _render_h,Float _render_scale,::opengl::GLObject _fb,::opengl::GLObject _rb)
{
HX_STACK_FRAME("phoenix.Backbuffer","new",0xa1fa70f8,"phoenix.Backbuffer.new","phoenix/Renderer.hx",56,0x3d4c7b7b)
HX_STACK_THIS(this)
HX_STACK_ARG(_render_w,"_render_w")
HX_STACK_ARG(_render_h,"_render_h")
HX_STACK_ARG(_render_scale,"_render_scale")
HX_STACK_ARG(_fb,"_fb")
HX_STACK_ARG(_rb,"_rb")
{
	HX_STACK_LINE(57)
	this->width = _render_w;
	HX_STACK_LINE(58)
	this->height = _render_h;
	HX_STACK_LINE(59)
	this->viewport_scale = _render_scale;
	HX_STACK_LINE(60)
	this->framebuffer = _fb;
	HX_STACK_LINE(61)
	this->renderbuffer = _rb;
}
;
	return null();
}

//Backbuffer_obj::~Backbuffer_obj() { }

Dynamic Backbuffer_obj::__CreateEmpty() { return  new Backbuffer_obj; }
hx::ObjectPtr< Backbuffer_obj > Backbuffer_obj::__new(int _render_w,int _render_h,Float _render_scale,::opengl::GLObject _fb,::opengl::GLObject _rb)
{  hx::ObjectPtr< Backbuffer_obj > _result_ = new Backbuffer_obj();
	_result_->__construct(_render_w,_render_h,_render_scale,_fb,_rb);
	return _result_;}

Dynamic Backbuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Backbuffer_obj > _result_ = new Backbuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

hx::Object *Backbuffer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::phoenix::RenderTarget_obj)) return operator ::phoenix::RenderTarget_obj *();
	return super::__ToInterface(inType);
}

Backbuffer_obj::operator ::phoenix::RenderTarget_obj *()
	{ return new ::phoenix::RenderTarget_delegate_< Backbuffer_obj >(this); }

Backbuffer_obj::Backbuffer_obj()
{
}

void Backbuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Backbuffer);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(viewport_scale,"viewport_scale");
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_MARK_END_CLASS();
}

void Backbuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(viewport_scale,"viewport_scale");
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
}

Dynamic Backbuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"viewport_scale") ) { return viewport_scale; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Backbuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::opengl::GLObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"viewport_scale") ) { viewport_scale=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Backbuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("viewport_scale","\xb1","\xb2","\xe9","\x8b"));
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Backbuffer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Backbuffer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(Backbuffer_obj,viewport_scale),HX_HCSTRING("viewport_scale","\xb1","\xb2","\xe9","\x8b")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Backbuffer_obj,framebuffer),HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(Backbuffer_obj,renderbuffer),HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("viewport_scale","\xb1","\xb2","\xe9","\x8b"),
	HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"),
	HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Backbuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Backbuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class Backbuffer_obj::__mClass;

void Backbuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Backbuffer","\x06","\xd5","\x48","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Backbuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace phoenix
