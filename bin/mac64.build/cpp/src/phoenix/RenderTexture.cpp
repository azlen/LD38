#include <hxcpp.h>

#include "linc_opengl.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_RenderTarget
#include <phoenix/RenderTarget.h>
#endif
#ifndef INCLUDED_phoenix_RenderTexture
#include <phoenix/RenderTexture.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
namespace phoenix{

Void RenderTexture_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.RenderTexture","new",0xaa824ed8,"phoenix.RenderTexture.new","phoenix/RenderTexture.hx",15,0xd65f2599)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(21)
	this->viewport_scale = ((Float)1);
	HX_STACK_LINE(25)
	_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)5;
	HX_STACK_LINE(27)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	super::__construct(tmp);
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		bool tmp1 = (_options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		if ((tmp1)){
			HX_STACK_LINE(29)
			::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(29)
			int tmp3 = tmp2->screen->get_w();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(29)
			_options->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp4;
		}
		HX_STACK_LINE(29)
		_options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		bool tmp1 = (_options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		if ((tmp1)){
			HX_STACK_LINE(30)
			::luxe::Engine tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			int tmp3 = tmp2->screen->get_h();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(30)
			_options->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp4;
		}
		HX_STACK_LINE(30)
		_options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
	}
	HX_STACK_LINE(33)
	int tmp1 = this->width_actual = _options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	this->width = tmp1;
	HX_STACK_LINE(34)
	int tmp2 = this->height_actual = _options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	this->height = tmp2;
	HX_STACK_LINE(40)
	bool tmp3 = (_options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	if ((tmp3)){
		HX_STACK_LINE(41)
		this->submit(null(),null(),null());
	}
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			int tmp5 = this->filter_min;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			glTexParameteri(tmp4,(int)10241,tmp5);
		}
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			int tmp5 = this->filter_mag;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			glTexParameteri(tmp4,(int)10240,tmp5);
		}
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			int tmp5 = this->clamp_s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			glTexParameteri(tmp4,(int)10242,tmp5);
		}
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			int tmp5 = this->clamp_t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			glTexParameteri(tmp4,(int)10243,tmp5);
		}
	}
	HX_STACK_LINE(47)
	::opengl::GLObject tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		int tmp5 = linc::opengl::webgl::createFramebuffer();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		int _id = tmp5;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(47)
		::opengl::GLObject tmp6 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(47)
	this->framebuffer = tmp4;
	HX_STACK_LINE(49)
	this->bindBuffer();
	HX_STACK_LINE(52)
	::opengl::GLObject tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int tmp6 = linc::opengl::webgl::createRenderbuffer();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		int _id = tmp6;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(52)
		::opengl::GLObject tmp7 = ::opengl::GLObject_obj::__new(_id);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(52)
	this->renderbuffer = tmp5;
	HX_STACK_LINE(54)
	this->bindRenderBuffer();
	HX_STACK_LINE(60)
	int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	glRenderbufferStorage((int)36161,(int)6402,tmp6,tmp7);
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::opengl::GLObject tmp8 = this->texture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		::opengl::GLObject texture = tmp8;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(63)
		bool tmp9 = (texture == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(63)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(63)
		if ((tmp9)){
			HX_STACK_LINE(63)
			tmp10 = (int)0;
		}
		else{
			HX_STACK_LINE(63)
			tmp10 = texture->id;
		}
		HX_STACK_LINE(63)
		glFramebufferTexture2D((int)36160,(int)36064,(int)3553,tmp10,(int)0);
	}
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		::opengl::GLObject tmp8 = this->renderbuffer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		::opengl::GLObject renderbuffer = tmp8;		HX_STACK_VAR(renderbuffer,"renderbuffer");
		HX_STACK_LINE(65)
		bool tmp9 = (renderbuffer == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(65)
		if ((tmp9)){
			HX_STACK_LINE(65)
			tmp10 = (int)0;
		}
		else{
			HX_STACK_LINE(65)
			tmp10 = renderbuffer->id;
		}
		HX_STACK_LINE(65)
		glFramebufferRenderbuffer((int)36160,(int)36096,(int)36161,tmp10);
	}
	HX_STACK_LINE(68)
	int tmp8 = glCheckFramebufferStatus((int)36160);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(68)
	int status = tmp8;		HX_STACK_VAR(status,"status");
	HX_STACK_LINE(70)
	int tmp9 = status;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(70)
	switch( (int)(tmp9)){
		case (int)36053: {
		}
		;break;
		case (int)36054: {
			HX_STACK_LINE(75)
			HX_STACK_DO_THROW(HX_HCSTRING("Incomplete framebuffer: FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xe1","\xd7","\x83","\x5b"));
		}
		;break;
		case (int)36055: {
			HX_STACK_LINE(78)
			HX_STACK_DO_THROW(HX_HCSTRING("Incomplete framebuffer: FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x7a","\x19","\xd9","\xea"));
		}
		;break;
		case (int)36057: {
			HX_STACK_LINE(81)
			HX_STACK_DO_THROW(HX_HCSTRING("Incomplete framebuffer: FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x4b","\x8e","\xb0","\x5a"));
		}
		;break;
		case (int)36061: {
			HX_STACK_LINE(84)
			HX_STACK_DO_THROW(HX_HCSTRING("Incomplete framebuffer: FRAMEBUFFER_UNSUPPORTED","\x12","\x3e","\x42","\x1e"));
		}
		;break;
		default: {
			HX_STACK_LINE(87)
			::String tmp10 = (HX_HCSTRING("Incomplete framebuffer: ","\xf1","\x26","\xa0","\x6c") + status);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(87)
			HX_STACK_DO_THROW(tmp10);
		}
	}
	HX_STACK_LINE(91)
	this->unbindBuffer(null());
	HX_STACK_LINE(92)
	this->unbindRenderBuffer(null());
	HX_STACK_LINE(95)
	::luxe::Resources tmp10 = this->_system;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(95)
	tmp10->add(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//RenderTexture_obj::~RenderTexture_obj() { }

Dynamic RenderTexture_obj::__CreateEmpty() { return  new RenderTexture_obj; }
hx::ObjectPtr< RenderTexture_obj > RenderTexture_obj::__new(Dynamic _options)
{  hx::ObjectPtr< RenderTexture_obj > _result_ = new RenderTexture_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic RenderTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderTexture_obj > _result_ = new RenderTexture_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *RenderTexture_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::phoenix::RenderTarget_obj)) return operator ::phoenix::RenderTarget_obj *();
	return super::__ToInterface(inType);
}

RenderTexture_obj::operator ::phoenix::RenderTarget_obj *()
	{ return new ::phoenix::RenderTarget_delegate_< RenderTexture_obj >(this); }
Void RenderTexture_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.RenderTexture","clear",0xba007e05,"phoenix.RenderTexture.clear","phoenix/RenderTexture.hx",99,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		this->super::clear();
		HX_STACK_LINE(103)
		::opengl::GLObject tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		if ((tmp1)){
			HX_STACK_LINE(104)
			::opengl::GLObject tmp2 = this->framebuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			::opengl::GLObject framebuffer = tmp2;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(104)
			bool tmp3 = (framebuffer == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			if ((tmp3)){
				HX_STACK_LINE(104)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(104)
				tmp4 = framebuffer->id;
			}
			HX_STACK_LINE(104)
			linc::opengl::webgl::deleteFramebuffer(tmp4);
		}
		HX_STACK_LINE(107)
		::opengl::GLObject tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		if ((tmp3)){
			HX_STACK_LINE(108)
			::opengl::GLObject tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			::opengl::GLObject renderbuffer = tmp4;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(108)
			bool tmp5 = (renderbuffer == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			if ((tmp5)){
				HX_STACK_LINE(108)
				tmp6 = (int)0;
			}
			else{
				HX_STACK_LINE(108)
				tmp6 = renderbuffer->id;
			}
			HX_STACK_LINE(108)
			linc::opengl::webgl::deleteRenderbuffer(tmp6);
		}
	}
return null();
}


Void RenderTexture_obj::bindBuffer( ){
{
		HX_STACK_FRAME("phoenix.RenderTexture","bindBuffer",0xb4215325,"phoenix.RenderTexture.bindBuffer","phoenix/RenderTexture.hx",113,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		::opengl::GLObject tmp1 = this->framebuffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		tmp->state->bindFramebuffer(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,bindBuffer,(void))

Void RenderTexture_obj::unbindBuffer( ::opengl::GLObject _other){
{
		HX_STACK_FRAME("phoenix.RenderTexture","unbindBuffer",0xcec7b4be,"phoenix.RenderTexture.unbindBuffer","phoenix/RenderTexture.hx",119,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_other,"_other")
		HX_STACK_LINE(121)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		::opengl::GLObject tmp1 = _other;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		tmp->state->bindFramebuffer(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderTexture_obj,unbindBuffer,(void))

Void RenderTexture_obj::bindRenderBuffer( ){
{
		HX_STACK_FRAME("phoenix.RenderTexture","bindRenderBuffer",0xeaa600db,"phoenix.RenderTexture.bindRenderBuffer","phoenix/RenderTexture.hx",125,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		::opengl::GLObject tmp1 = this->renderbuffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		tmp->state->bindRenderbuffer(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,bindRenderBuffer,(void))

Void RenderTexture_obj::unbindRenderBuffer( ::opengl::GLObject _other){
{
		HX_STACK_FRAME("phoenix.RenderTexture","unbindRenderBuffer",0x021f1b34,"phoenix.RenderTexture.unbindRenderBuffer","phoenix/RenderTexture.hx",131,0xd65f2599)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_other,"_other")
		HX_STACK_LINE(133)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::opengl::GLObject tmp1 = _other;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		tmp->state->bindRenderbuffer(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RenderTexture_obj,unbindRenderBuffer,(void))


RenderTexture_obj::RenderTexture_obj()
{
}

void RenderTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderTexture);
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_MARK_MEMBER_NAME(viewport_scale,"viewport_scale");
	::phoenix::Texture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_VISIT_MEMBER_NAME(viewport_scale,"viewport_scale");
	::phoenix::Texture_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RenderTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { return bindBuffer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"unbindBuffer") ) { return unbindBuffer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"viewport_scale") ) { return viewport_scale; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bindRenderBuffer") ) { return bindRenderBuffer_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"unbindRenderBuffer") ) { return unbindRenderBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
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

void RenderTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"));
	outFields->push(HX_HCSTRING("viewport_scale","\xb1","\xb2","\xe9","\x8b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(RenderTexture_obj,framebuffer),HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a")},
	{hx::fsObject /*::opengl::GLObject*/ ,(int)offsetof(RenderTexture_obj,renderbuffer),HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b")},
	{hx::fsFloat,(int)offsetof(RenderTexture_obj,viewport_scale),HX_HCSTRING("viewport_scale","\xb1","\xb2","\xe9","\x8b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"),
	HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"),
	HX_HCSTRING("viewport_scale","\xb1","\xb2","\xe9","\x8b"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("bindBuffer","\x9d","\x92","\xbe","\xf8"),
	HX_HCSTRING("unbindBuffer","\x36","\xc2","\xcd","\x64"),
	HX_HCSTRING("bindRenderBuffer","\x53","\x2a","\x4c","\x49"),
	HX_HCSTRING("unbindRenderBuffer","\xac","\x92","\xbc","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderTexture_obj::__mClass;

void RenderTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.RenderTexture","\xe6","\x42","\x54","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderTexture_obj >;
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
