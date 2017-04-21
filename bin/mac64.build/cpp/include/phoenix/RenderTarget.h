#ifndef INCLUDED_phoenix_RenderTarget
#define INCLUDED_phoenix_RenderTarget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS1(phoenix,RenderTarget)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  RenderTarget_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef RenderTarget_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
};



template<typename IMPL>
class RenderTarget_delegate_ : public RenderTarget_obj
{
	protected:
		IMPL *mDelegate;
	public:
		RenderTarget_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_RenderTarget */ 
