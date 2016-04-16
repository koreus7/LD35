#ifndef INCLUDED_MainScene
#define INCLUDED_MainScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
HX_DECLARE_CLASS0(MainScene)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)


class HXCPP_CLASS_ATTRIBUTES  MainScene_obj : public ::com::haxepunk::Scene_obj{
	public:
		typedef ::com::haxepunk::Scene_obj super;
		typedef MainScene_obj OBJ_;
		MainScene_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="MainScene")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MainScene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MainScene_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MainScene","\x33","\x82","\x48","\x34"); }

		virtual Void begin( );

};


#endif /* INCLUDED_MainScene */ 
