#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
namespace openfl{
namespace text{

::openfl::text::TextFieldType TextFieldType_obj::DYNAMIC;

::openfl::text::TextFieldType TextFieldType_obj::INPUT;

HX_DEFINE_CREATE_ENUM(TextFieldType_obj)

int TextFieldType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5")) return 0;
	if (inName==HX_HCSTRING("INPUT","\xea","\xfb","\x0b","\x3c")) return 1;
	return super::__FindIndex(inName);
}

int TextFieldType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5")) return 0;
	if (inName==HX_HCSTRING("INPUT","\xea","\xfb","\x0b","\x3c")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TextFieldType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5")) return DYNAMIC;
	if (inName==HX_HCSTRING("INPUT","\xea","\xfb","\x0b","\x3c")) return INPUT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5"),
	HX_HCSTRING("INPUT","\xea","\xfb","\x0b","\x3c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldType_obj::DYNAMIC,"DYNAMIC");
	HX_MARK_MEMBER_NAME(TextFieldType_obj::INPUT,"INPUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFieldType_obj::DYNAMIC,"DYNAMIC");
	HX_VISIT_MEMBER_NAME(TextFieldType_obj::INPUT,"INPUT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TextFieldType_obj::__mClass;

Dynamic __Create_TextFieldType_obj() { return new TextFieldType_obj; }

void TextFieldType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.text.TextFieldType","\xa4","\xf4","\x9c","\xd6"), hx::TCanCast< TextFieldType_obj >,sStaticFields,sMemberFields,
	&__Create_TextFieldType_obj, &__Create,
	&super::__SGetClass(), &CreateTextFieldType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TextFieldType_obj::__boot()
{
hx::Static(DYNAMIC) = hx::CreateEnum< TextFieldType_obj >(HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5"),0);
hx::Static(INPUT) = hx::CreateEnum< TextFieldType_obj >(HX_HCSTRING("INPUT","\xea","\xfb","\x0b","\x3c"),1);
}


} // end namespace openfl
} // end namespace text
