#ifndef INCLUDED_openfl__legacy_display_BitmapData
#define INCLUDED_openfl__legacy_display_BitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  BitmapData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapData_obj OBJ_;
		BitmapData_obj();
		Void __construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor,Dynamic gpuMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.BitmapData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapData_obj > __new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor,Dynamic gpuMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::_legacy::display::IBitmapDrawable_obj *();
		::String __ToString() const { return HX_HCSTRING("BitmapData","\xd9","\xb9","\x71","\x2a"); }

		static void __boot();
		int height;
		::openfl::_legacy::geom::Rectangle rect;
		bool transparent;
		int width;
		Dynamic __handle;
		bool __transparent;
		virtual Void applyFilter( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,::openfl::_legacy::filters::BitmapFilter filter);
		Dynamic applyFilter_dyn();

		virtual Void clear( int color);
		Dynamic clear_dyn();

		virtual ::openfl::_legacy::display::BitmapData clone( );
		Dynamic clone_dyn();

		virtual Void colorTransform( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::ColorTransform colorTransform);
		Dynamic colorTransform_dyn();

		virtual Void copyChannel( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,int sourceChannel,int destChannel);
		Dynamic copyChannel_dyn();

		virtual Void copyPixels( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,::openfl::_legacy::display::BitmapData alphaBitmapData,::openfl::_legacy::geom::Point alphaPoint,hx::Null< bool >  mergeAlpha);
		Dynamic copyPixels_dyn();

		virtual Void createHardwareSurface( );
		Dynamic createHardwareSurface_dyn();

		virtual Void destroyHardwareSurface( );
		Dynamic destroyHardwareSurface_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void draw( ::openfl::_legacy::display::IBitmapDrawable source,::openfl::_legacy::geom::Matrix matrix,::openfl::_legacy::geom::ColorTransform colorTransform,::openfl::_legacy::display::BlendMode blendMode,::openfl::_legacy::geom::Rectangle clipRect,hx::Null< bool >  smoothing);
		Dynamic draw_dyn();

		virtual Void dumpBits( );
		Dynamic dumpBits_dyn();

		virtual ::openfl::_legacy::utils::ByteArray encode( Dynamic rectOrFormat,Dynamic compressorOrQuality,::openfl::_legacy::utils::ByteArray byteArray);
		Dynamic encode_dyn();

		virtual Void fillRect( ::openfl::_legacy::geom::Rectangle rect,int color);
		Dynamic fillRect_dyn();

		virtual Void fillRectEx( ::openfl::_legacy::geom::Rectangle rect,int color,hx::Null< int >  alpha);
		Dynamic fillRectEx_dyn();

		virtual Void floodFill( int x,int y,int color);
		Dynamic floodFill_dyn();

		virtual ::openfl::_legacy::geom::Rectangle generateFilterRect( ::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::filters::BitmapFilter filter);
		Dynamic generateFilterRect_dyn();

		virtual ::openfl::_legacy::geom::Rectangle getColorBoundsRect( int mask,int color,hx::Null< bool >  findColor);
		Dynamic getColorBoundsRect_dyn();

		virtual int getPixel( int x,int y);
		Dynamic getPixel_dyn();

		virtual int getPixel32( int x,int y);
		Dynamic getPixel32_dyn();

		virtual ::openfl::_legacy::utils::ByteArray getPixels( ::openfl::_legacy::geom::Rectangle rect);
		Dynamic getPixels_dyn();

		virtual Array< int > getVector( ::openfl::_legacy::geom::Rectangle rect);
		Dynamic getVector_dyn();

		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Void merge( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		Dynamic merge_dyn();

		virtual Void multiplyAlpha( );
		Dynamic multiplyAlpha_dyn();

		virtual Void noise( int randomSeed,hx::Null< int >  low,hx::Null< int >  high,hx::Null< int >  channelOptions,hx::Null< bool >  grayScale);
		Dynamic noise_dyn();

		virtual Void paletteMap( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray);
		Dynamic paletteMap_dyn();

		virtual Void perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  channelOptions,hx::Null< bool >  grayScale,Array< ::Dynamic > offsets);
		Dynamic perlinNoise_dyn();

		virtual Void scroll( int x,int y);
		Dynamic scroll_dyn();

		virtual Void setFlags( int flags);
		Dynamic setFlags_dyn();

		virtual Void setFormat( int format);
		Dynamic setFormat_dyn();

		virtual Void setPixel( int x,int y,int color);
		Dynamic setPixel_dyn();

		virtual Void setPixel32( int x,int y,int color);
		Dynamic setPixel32_dyn();

		virtual Void setPixels( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::utils::ByteArray pixels);
		Dynamic setPixels_dyn();

		virtual Void setVector( ::openfl::_legacy::geom::Rectangle rect,Array< int > pixels);
		Dynamic setVector_dyn();

		virtual int threshold( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  color,hx::Null< int >  mask,hx::Null< bool >  copySource);
		Dynamic threshold_dyn();

		virtual Void unlock( ::openfl::_legacy::geom::Rectangle changeRect);
		Dynamic unlock_dyn();

		virtual Void unmultiplyAlpha( );
		Dynamic unmultiplyAlpha_dyn();

		virtual Void __drawToSurface( Dynamic surface,::openfl::_legacy::geom::Matrix matrix,::openfl::_legacy::geom::ColorTransform colorTransform,::String blendMode,::openfl::_legacy::geom::Rectangle clipRect,bool smoothing);
		Dynamic __drawToSurface_dyn();

		virtual Void __loadFromBytes( ::openfl::_legacy::utils::ByteArray bytes,::openfl::_legacy::utils::ByteArray rawAlpha);
		Dynamic __loadFromBytes_dyn();

		virtual bool get_premultipliedAlpha( );
		Dynamic get_premultipliedAlpha_dyn();

		virtual bool set_premultipliedAlpha( bool value);
		Dynamic set_premultipliedAlpha_dyn();

		virtual ::openfl::_legacy::geom::Rectangle get_rect( );
		Dynamic get_rect_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual bool get_transparent( );
		Dynamic get_transparent_dyn();

		static int CLEAR;
		static int BLACK;
		static int WHITE;
		static int RED;
		static int GREEN;
		static int BLUE;
		static ::String PNG;
		static ::String JPG;
		static int TRANSPARENT;
		static int HARDWARE;
		static int FORMAT_8888;
		static int FORMAT_4444;
		static int FORMAT_565;
		static int createColor( int rgb,hx::Null< int >  alpha);
		static Dynamic createColor_dyn();

		static int extractAlpha( int argb);
		static Dynamic extractAlpha_dyn();

		static int extractColor( int argb);
		static Dynamic extractColor_dyn();

		static ::openfl::_legacy::utils::ByteArray getRGBAPixels( ::openfl::_legacy::display::BitmapData bitmapData);
		static Dynamic getRGBAPixels_dyn();

		static ::openfl::_legacy::display::BitmapData load( ::String filename,hx::Null< int >  format);
		static Dynamic load_dyn();

		static ::openfl::_legacy::display::BitmapData loadFromBytes( ::openfl::_legacy::utils::ByteArray bytes,::openfl::_legacy::utils::ByteArray rawAlpha);
		static Dynamic loadFromBytes_dyn();

		static ::openfl::_legacy::display::BitmapData loadFromHaxeBytes( ::haxe::io::Bytes bytes,::haxe::io::Bytes rawAlpha);
		static Dynamic loadFromHaxeBytes_dyn();

		static bool sameValue( int a,int b);
		static Dynamic sameValue_dyn();

		static int __flipPixel( int pixel);
		static Dynamic __flipPixel_dyn();

		static int __ucompare( int n1,int n2);
		static Dynamic __ucompare_dyn();

		static Dynamic lime_bitmap_data_create;
		static Dynamic &lime_bitmap_data_create_dyn() { return lime_bitmap_data_create;}
		static Dynamic lime_bitmap_data_load;
		static Dynamic &lime_bitmap_data_load_dyn() { return lime_bitmap_data_load;}
		static Dynamic lime_bitmap_data_from_bytes;
		static Dynamic &lime_bitmap_data_from_bytes_dyn() { return lime_bitmap_data_from_bytes;}
		static Dynamic lime_bitmap_data_clear;
		static Dynamic &lime_bitmap_data_clear_dyn() { return lime_bitmap_data_clear;}
		static Dynamic lime_bitmap_data_clone;
		static Dynamic &lime_bitmap_data_clone_dyn() { return lime_bitmap_data_clone;}
		static Dynamic lime_bitmap_data_apply_filter;
		static Dynamic &lime_bitmap_data_apply_filter_dyn() { return lime_bitmap_data_apply_filter;}
		static Dynamic lime_bitmap_data_color_transform;
		static Dynamic &lime_bitmap_data_color_transform_dyn() { return lime_bitmap_data_color_transform;}
		static Dynamic lime_bitmap_data_copy;
		static Dynamic &lime_bitmap_data_copy_dyn() { return lime_bitmap_data_copy;}
		static Dynamic lime_bitmap_data_copy_channel;
		static Dynamic &lime_bitmap_data_copy_channel_dyn() { return lime_bitmap_data_copy_channel;}
		static Dynamic lime_bitmap_data_fill;
		static Dynamic &lime_bitmap_data_fill_dyn() { return lime_bitmap_data_fill;}
		static Dynamic lime_bitmap_data_get_pixels;
		static Dynamic &lime_bitmap_data_get_pixels_dyn() { return lime_bitmap_data_get_pixels;}
		static Dynamic lime_bitmap_data_get_pixel;
		static Dynamic &lime_bitmap_data_get_pixel_dyn() { return lime_bitmap_data_get_pixel;}
		static Dynamic lime_bitmap_data_get_pixel32;
		static Dynamic &lime_bitmap_data_get_pixel32_dyn() { return lime_bitmap_data_get_pixel32;}
		static Dynamic lime_bitmap_data_get_pixel_rgba;
		static Dynamic lime_bitmap_data_get_array;
		static Dynamic &lime_bitmap_data_get_array_dyn() { return lime_bitmap_data_get_array;}
		static Dynamic lime_bitmap_data_get_color_bounds_rect;
		static Dynamic &lime_bitmap_data_get_color_bounds_rect_dyn() { return lime_bitmap_data_get_color_bounds_rect;}
		static Dynamic lime_bitmap_data_scroll;
		static Dynamic &lime_bitmap_data_scroll_dyn() { return lime_bitmap_data_scroll;}
		static Dynamic lime_bitmap_data_set_pixel;
		static Dynamic &lime_bitmap_data_set_pixel_dyn() { return lime_bitmap_data_set_pixel;}
		static Dynamic lime_bitmap_data_set_pixel32;
		static Dynamic &lime_bitmap_data_set_pixel32_dyn() { return lime_bitmap_data_set_pixel32;}
		static Dynamic lime_bitmap_data_set_pixel_rgba;
		static Dynamic lime_bitmap_data_set_bytes;
		static Dynamic &lime_bitmap_data_set_bytes_dyn() { return lime_bitmap_data_set_bytes;}
		static Dynamic lime_bitmap_data_set_format;
		static Dynamic &lime_bitmap_data_set_format_dyn() { return lime_bitmap_data_set_format;}
		static Dynamic lime_bitmap_data_set_array;
		static Dynamic &lime_bitmap_data_set_array_dyn() { return lime_bitmap_data_set_array;}
		static Dynamic lime_bitmap_data_create_hardware_surface;
		static Dynamic &lime_bitmap_data_create_hardware_surface_dyn() { return lime_bitmap_data_create_hardware_surface;}
		static Dynamic lime_bitmap_data_destroy_hardware_surface;
		static Dynamic &lime_bitmap_data_destroy_hardware_surface_dyn() { return lime_bitmap_data_destroy_hardware_surface;}
		static Dynamic lime_bitmap_data_dispose;
		static Dynamic &lime_bitmap_data_dispose_dyn() { return lime_bitmap_data_dispose;}
		static Dynamic lime_bitmap_data_generate_filter_rect;
		static Dynamic &lime_bitmap_data_generate_filter_rect_dyn() { return lime_bitmap_data_generate_filter_rect;}
		static Dynamic lime_render_surface_to_surface;
		static Dynamic &lime_render_surface_to_surface_dyn() { return lime_render_surface_to_surface;}
		static Dynamic lime_bitmap_data_height;
		static Dynamic &lime_bitmap_data_height_dyn() { return lime_bitmap_data_height;}
		static Dynamic lime_bitmap_data_width;
		static Dynamic &lime_bitmap_data_width_dyn() { return lime_bitmap_data_width;}
		static Dynamic lime_bitmap_data_get_transparent;
		static Dynamic lime_bitmap_data_set_flags;
		static Dynamic &lime_bitmap_data_set_flags_dyn() { return lime_bitmap_data_set_flags;}
		static Dynamic lime_bitmap_data_encode;
		static Dynamic &lime_bitmap_data_encode_dyn() { return lime_bitmap_data_encode;}
		static Dynamic lime_bitmap_data_dump_bits;
		static Dynamic &lime_bitmap_data_dump_bits_dyn() { return lime_bitmap_data_dump_bits;}
		static Dynamic lime_bitmap_data_flood_fill;
		static Dynamic &lime_bitmap_data_flood_fill_dyn() { return lime_bitmap_data_flood_fill;}
		static Dynamic lime_bitmap_data_noise;
		static Dynamic &lime_bitmap_data_noise_dyn() { return lime_bitmap_data_noise;}
		static Dynamic lime_bitmap_data_unmultiply_alpha;
		static Dynamic &lime_bitmap_data_unmultiply_alpha_dyn() { return lime_bitmap_data_unmultiply_alpha;}
		static Dynamic lime_bitmap_data_multiply_alpha;
		static Dynamic &lime_bitmap_data_multiply_alpha_dyn() { return lime_bitmap_data_multiply_alpha;}
		static Dynamic lime_bitmap_data_get_prem_alpha;
		static Dynamic &lime_bitmap_data_get_prem_alpha_dyn() { return lime_bitmap_data_get_prem_alpha;}
		static Dynamic lime_bitmap_data_set_prem_alpha;
		static Dynamic &lime_bitmap_data_set_prem_alpha_dyn() { return lime_bitmap_data_set_prem_alpha;}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_BitmapData */ 
