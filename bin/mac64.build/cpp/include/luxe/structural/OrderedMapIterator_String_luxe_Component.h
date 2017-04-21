#ifndef INCLUDED_luxe_structural_OrderedMapIterator_String_luxe_Component
#define INCLUDED_luxe_structural_OrderedMapIterator_String_luxe_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS2(luxe,structural,OrderedMapIterator_String_luxe_Component)
HX_DECLARE_CLASS2(luxe,structural,OrderedMap_String_luxe_Component)
namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES  OrderedMapIterator_String_luxe_Component_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OrderedMapIterator_String_luxe_Component_obj OBJ_;
		OrderedMapIterator_String_luxe_Component_obj();
		Void __construct(::luxe::structural::OrderedMap_String_luxe_Component omap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.structural.OrderedMapIterator_String_luxe_Component")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OrderedMapIterator_String_luxe_Component_obj > __new(::luxe::structural::OrderedMap_String_luxe_Component omap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OrderedMapIterator_String_luxe_Component_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("OrderedMapIterator_String_luxe_Component","\xc0","\x1e","\x89","\x9a"); }

		::luxe::structural::OrderedMap_String_luxe_Component map;
		int index;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::luxe::Component next( );
		Dynamic next_dyn();

};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_OrderedMapIterator_String_luxe_Component */ 
