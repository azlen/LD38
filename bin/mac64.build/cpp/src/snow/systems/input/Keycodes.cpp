#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_snow_systems_input_Keycodes
#include <snow/systems/input/Keycodes.h>
#endif
#ifndef INCLUDED_snow_systems_input_Scancodes
#include <snow/systems/input/Scancodes.h>
#endif
namespace snow{
namespace systems{
namespace input{

Void Keycodes_obj::__construct()
{
	return null();
}

//Keycodes_obj::~Keycodes_obj() { }

Dynamic Keycodes_obj::__CreateEmpty() { return  new Keycodes_obj; }
hx::ObjectPtr< Keycodes_obj > Keycodes_obj::__new()
{  hx::ObjectPtr< Keycodes_obj > _result_ = new Keycodes_obj();
	_result_->__construct();
	return _result_;}

Dynamic Keycodes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Keycodes_obj > _result_ = new Keycodes_obj();
	_result_->__construct();
	return _result_;}

int Keycodes_obj::from_scan( int scancode){
	HX_STACK_FRAME("snow.systems.input.Keycodes","from_scan",0xd1369284,"snow.systems.input.Keycodes.from_scan","snow/systems/input/Keycodes.hx",9,0x173a785b)
	HX_STACK_ARG(scancode,"scancode")
	HX_STACK_LINE(11)
	int tmp = (int(scancode) | int((int)1073741824));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keycodes_obj,from_scan,return )

int Keycodes_obj::to_scan( int keycode){
	HX_STACK_FRAME("snow.systems.input.Keycodes","to_scan",0x5e163c53,"snow.systems.input.Keycodes.to_scan","snow/systems/input/Keycodes.hx",18,0x173a785b)
	HX_STACK_ARG(keycode,"keycode")
	HX_STACK_LINE(22)
	int tmp = (int(keycode) & int((int)1073741824));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	if ((tmp1)){
		HX_STACK_LINE(23)
		int tmp2 = keycode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		int tmp3 = (int)-1073741825;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		int tmp4 = (int(tmp2) & int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		return tmp4;
	}
	HX_STACK_LINE(28)
	int tmp2 = keycode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	switch( (int)(tmp2)){
		case (int)13: {
			HX_STACK_LINE(29)
			return (int)40;
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(30)
			return (int)41;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(31)
			return (int)42;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(32)
			return (int)43;
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(33)
			return (int)44;
		}
		;break;
		case (int)47: {
			HX_STACK_LINE(34)
			return (int)56;
		}
		;break;
		case (int)48: {
			HX_STACK_LINE(35)
			return (int)39;
		}
		;break;
		case (int)49: {
			HX_STACK_LINE(36)
			return (int)30;
		}
		;break;
		case (int)50: {
			HX_STACK_LINE(37)
			return (int)31;
		}
		;break;
		case (int)51: {
			HX_STACK_LINE(38)
			return (int)32;
		}
		;break;
		case (int)52: {
			HX_STACK_LINE(39)
			return (int)33;
		}
		;break;
		case (int)53: {
			HX_STACK_LINE(40)
			return (int)34;
		}
		;break;
		case (int)54: {
			HX_STACK_LINE(41)
			return (int)35;
		}
		;break;
		case (int)55: {
			HX_STACK_LINE(42)
			return (int)36;
		}
		;break;
		case (int)56: {
			HX_STACK_LINE(43)
			return (int)37;
		}
		;break;
		case (int)57: {
			HX_STACK_LINE(44)
			return (int)38;
		}
		;break;
		case (int)59: {
			HX_STACK_LINE(45)
			return (int)51;
		}
		;break;
		case (int)61: {
			HX_STACK_LINE(46)
			return (int)46;
		}
		;break;
		case (int)91: {
			HX_STACK_LINE(47)
			return (int)47;
		}
		;break;
		case (int)92: {
			HX_STACK_LINE(48)
			return (int)49;
		}
		;break;
		case (int)93: {
			HX_STACK_LINE(49)
			return (int)48;
		}
		;break;
		case (int)96: {
			HX_STACK_LINE(50)
			return (int)53;
		}
		;break;
		case (int)97: {
			HX_STACK_LINE(51)
			return (int)4;
		}
		;break;
		case (int)98: {
			HX_STACK_LINE(52)
			return (int)5;
		}
		;break;
		case (int)99: {
			HX_STACK_LINE(53)
			return (int)6;
		}
		;break;
		case (int)100: {
			HX_STACK_LINE(54)
			return (int)7;
		}
		;break;
		case (int)101: {
			HX_STACK_LINE(55)
			return (int)8;
		}
		;break;
		case (int)102: {
			HX_STACK_LINE(56)
			return (int)9;
		}
		;break;
		case (int)103: {
			HX_STACK_LINE(57)
			return (int)10;
		}
		;break;
		case (int)104: {
			HX_STACK_LINE(58)
			return (int)11;
		}
		;break;
		case (int)105: {
			HX_STACK_LINE(59)
			return (int)12;
		}
		;break;
		case (int)106: {
			HX_STACK_LINE(60)
			return (int)13;
		}
		;break;
		case (int)107: {
			HX_STACK_LINE(61)
			return (int)14;
		}
		;break;
		case (int)108: {
			HX_STACK_LINE(62)
			return (int)15;
		}
		;break;
		case (int)109: {
			HX_STACK_LINE(63)
			return (int)16;
		}
		;break;
		case (int)110: {
			HX_STACK_LINE(64)
			return (int)17;
		}
		;break;
		case (int)111: {
			HX_STACK_LINE(65)
			return (int)18;
		}
		;break;
		case (int)112: {
			HX_STACK_LINE(66)
			return (int)19;
		}
		;break;
		case (int)113: {
			HX_STACK_LINE(67)
			return (int)20;
		}
		;break;
		case (int)114: {
			HX_STACK_LINE(68)
			return (int)21;
		}
		;break;
		case (int)115: {
			HX_STACK_LINE(69)
			return (int)22;
		}
		;break;
		case (int)116: {
			HX_STACK_LINE(70)
			return (int)23;
		}
		;break;
		case (int)117: {
			HX_STACK_LINE(71)
			return (int)24;
		}
		;break;
		case (int)118: {
			HX_STACK_LINE(72)
			return (int)25;
		}
		;break;
		case (int)119: {
			HX_STACK_LINE(73)
			return (int)26;
		}
		;break;
		case (int)120: {
			HX_STACK_LINE(74)
			return (int)27;
		}
		;break;
		case (int)121: {
			HX_STACK_LINE(75)
			return (int)28;
		}
		;break;
		case (int)122: {
			HX_STACK_LINE(76)
			return (int)29;
		}
		;break;
	}
	HX_STACK_LINE(108)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keycodes_obj,to_scan,return )

::String Keycodes_obj::name( int keycode){
	HX_STACK_FRAME("snow.systems.input.Keycodes","name",0xfa48e4b9,"snow.systems.input.Keycodes.name","snow/systems/input/Keycodes.hx",113,0x173a785b)
	HX_STACK_ARG(keycode,"keycode")
	HX_STACK_LINE(118)
	int tmp = (int(keycode) & int((int)1073741824));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	if ((tmp1)){
		HX_STACK_LINE(119)
		int tmp2 = keycode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		int tmp3 = (int)-1073741825;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		int tmp4 = (int(tmp2) & int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		::String tmp5 = ::snow::systems::input::Scancodes_obj::name(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		return tmp5;
	}
	HX_STACK_LINE(122)
	int tmp2 = keycode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	switch( (int)(tmp2)){
		case (int)13: {
			HX_STACK_LINE(124)
			::String tmp3 = ::snow::systems::input::Scancodes_obj::name((int)40);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			return tmp3;
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(125)
			::String tmp3 = ::snow::systems::input::Scancodes_obj::name((int)41);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			return tmp3;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(126)
			::String tmp3 = ::snow::systems::input::Scancodes_obj::name((int)42);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			return tmp3;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(127)
			::String tmp3 = ::snow::systems::input::Scancodes_obj::name((int)43);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			return tmp3;
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(128)
			::String tmp3 = ::snow::systems::input::Scancodes_obj::name((int)44);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			return tmp3;
		}
		;break;
		case (int)127: {
			HX_STACK_LINE(129)
			::String tmp3 = ::snow::systems::input::Scancodes_obj::name((int)76);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(129)
			return tmp3;
		}
		;break;
		default: {
			HX_STACK_LINE(133)
			::haxe::Utf8 tmp3 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			::haxe::Utf8 decoder = tmp3;		HX_STACK_VAR(decoder,"decoder");
			HX_STACK_LINE(134)
			int tmp4 = keycode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			decoder->addChar(tmp4);
			HX_STACK_LINE(136)
			::String tmp5 = decoder->toString();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			return tmp5;
		}
	}
	HX_STACK_LINE(122)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keycodes_obj,name,return )

int Keycodes_obj::unknown;

int Keycodes_obj::enter;

int Keycodes_obj::escape;

int Keycodes_obj::backspace;

int Keycodes_obj::tab;

int Keycodes_obj::space;

int Keycodes_obj::exclaim;

int Keycodes_obj::quotedbl;

int Keycodes_obj::hash;

int Keycodes_obj::percent;

int Keycodes_obj::dollar;

int Keycodes_obj::ampersand;

int Keycodes_obj::quote;

int Keycodes_obj::leftparen;

int Keycodes_obj::rightparen;

int Keycodes_obj::asterisk;

int Keycodes_obj::plus;

int Keycodes_obj::comma;

int Keycodes_obj::minus;

int Keycodes_obj::period;

int Keycodes_obj::slash;

int Keycodes_obj::key_0;

int Keycodes_obj::key_1;

int Keycodes_obj::key_2;

int Keycodes_obj::key_3;

int Keycodes_obj::key_4;

int Keycodes_obj::key_5;

int Keycodes_obj::key_6;

int Keycodes_obj::key_7;

int Keycodes_obj::key_8;

int Keycodes_obj::key_9;

int Keycodes_obj::colon;

int Keycodes_obj::semicolon;

int Keycodes_obj::less;

int Keycodes_obj::equals;

int Keycodes_obj::greater;

int Keycodes_obj::question;

int Keycodes_obj::at;

int Keycodes_obj::leftbracket;

int Keycodes_obj::backslash;

int Keycodes_obj::rightbracket;

int Keycodes_obj::caret;

int Keycodes_obj::underscore;

int Keycodes_obj::backquote;

int Keycodes_obj::key_a;

int Keycodes_obj::key_b;

int Keycodes_obj::key_c;

int Keycodes_obj::key_d;

int Keycodes_obj::key_e;

int Keycodes_obj::key_f;

int Keycodes_obj::key_g;

int Keycodes_obj::key_h;

int Keycodes_obj::key_i;

int Keycodes_obj::key_j;

int Keycodes_obj::key_k;

int Keycodes_obj::key_l;

int Keycodes_obj::key_m;

int Keycodes_obj::key_n;

int Keycodes_obj::key_o;

int Keycodes_obj::key_p;

int Keycodes_obj::key_q;

int Keycodes_obj::key_r;

int Keycodes_obj::key_s;

int Keycodes_obj::key_t;

int Keycodes_obj::key_u;

int Keycodes_obj::key_v;

int Keycodes_obj::key_w;

int Keycodes_obj::key_x;

int Keycodes_obj::key_y;

int Keycodes_obj::key_z;

int Keycodes_obj::capslock;

int Keycodes_obj::f1;

int Keycodes_obj::f2;

int Keycodes_obj::f3;

int Keycodes_obj::f4;

int Keycodes_obj::f5;

int Keycodes_obj::f6;

int Keycodes_obj::f7;

int Keycodes_obj::f8;

int Keycodes_obj::f9;

int Keycodes_obj::f10;

int Keycodes_obj::f11;

int Keycodes_obj::f12;

int Keycodes_obj::printscreen;

int Keycodes_obj::scrolllock;

int Keycodes_obj::pause;

int Keycodes_obj::insert;

int Keycodes_obj::home;

int Keycodes_obj::pageup;

int Keycodes_obj::_delete;

int Keycodes_obj::end;

int Keycodes_obj::pagedown;

int Keycodes_obj::right;

int Keycodes_obj::left;

int Keycodes_obj::down;

int Keycodes_obj::up;

int Keycodes_obj::numlockclear;

int Keycodes_obj::kp_divide;

int Keycodes_obj::kp_multiply;

int Keycodes_obj::kp_minus;

int Keycodes_obj::kp_plus;

int Keycodes_obj::kp_enter;

int Keycodes_obj::kp_1;

int Keycodes_obj::kp_2;

int Keycodes_obj::kp_3;

int Keycodes_obj::kp_4;

int Keycodes_obj::kp_5;

int Keycodes_obj::kp_6;

int Keycodes_obj::kp_7;

int Keycodes_obj::kp_8;

int Keycodes_obj::kp_9;

int Keycodes_obj::kp_0;

int Keycodes_obj::kp_period;

int Keycodes_obj::application;

int Keycodes_obj::power;

int Keycodes_obj::kp_equals;

int Keycodes_obj::f13;

int Keycodes_obj::f14;

int Keycodes_obj::f15;

int Keycodes_obj::f16;

int Keycodes_obj::f17;

int Keycodes_obj::f18;

int Keycodes_obj::f19;

int Keycodes_obj::f20;

int Keycodes_obj::f21;

int Keycodes_obj::f22;

int Keycodes_obj::f23;

int Keycodes_obj::f24;

int Keycodes_obj::execute;

int Keycodes_obj::help;

int Keycodes_obj::menu;

int Keycodes_obj::select;

int Keycodes_obj::stop;

int Keycodes_obj::again;

int Keycodes_obj::undo;

int Keycodes_obj::cut;

int Keycodes_obj::copy;

int Keycodes_obj::paste;

int Keycodes_obj::find;

int Keycodes_obj::mute;

int Keycodes_obj::volumeup;

int Keycodes_obj::volumedown;

int Keycodes_obj::kp_comma;

int Keycodes_obj::kp_equalsas400;

int Keycodes_obj::alterase;

int Keycodes_obj::sysreq;

int Keycodes_obj::cancel;

int Keycodes_obj::clear;

int Keycodes_obj::prior;

int Keycodes_obj::return2;

int Keycodes_obj::separator;

int Keycodes_obj::out;

int Keycodes_obj::oper;

int Keycodes_obj::clearagain;

int Keycodes_obj::crsel;

int Keycodes_obj::exsel;

int Keycodes_obj::kp_00;

int Keycodes_obj::kp_000;

int Keycodes_obj::thousandsseparator;

int Keycodes_obj::decimalseparator;

int Keycodes_obj::currencyunit;

int Keycodes_obj::currencysubunit;

int Keycodes_obj::kp_leftparen;

int Keycodes_obj::kp_rightparen;

int Keycodes_obj::kp_leftbrace;

int Keycodes_obj::kp_rightbrace;

int Keycodes_obj::kp_tab;

int Keycodes_obj::kp_backspace;

int Keycodes_obj::kp_a;

int Keycodes_obj::kp_b;

int Keycodes_obj::kp_c;

int Keycodes_obj::kp_d;

int Keycodes_obj::kp_e;

int Keycodes_obj::kp_f;

int Keycodes_obj::kp_xor;

int Keycodes_obj::kp_power;

int Keycodes_obj::kp_percent;

int Keycodes_obj::kp_less;

int Keycodes_obj::kp_greater;

int Keycodes_obj::kp_ampersand;

int Keycodes_obj::kp_dblampersand;

int Keycodes_obj::kp_verticalbar;

int Keycodes_obj::kp_dblverticalbar;

int Keycodes_obj::kp_colon;

int Keycodes_obj::kp_hash;

int Keycodes_obj::kp_space;

int Keycodes_obj::kp_at;

int Keycodes_obj::kp_exclam;

int Keycodes_obj::kp_memstore;

int Keycodes_obj::kp_memrecall;

int Keycodes_obj::kp_memclear;

int Keycodes_obj::kp_memadd;

int Keycodes_obj::kp_memsubtract;

int Keycodes_obj::kp_memmultiply;

int Keycodes_obj::kp_memdivide;

int Keycodes_obj::kp_plusminus;

int Keycodes_obj::kp_clear;

int Keycodes_obj::kp_clearentry;

int Keycodes_obj::kp_binary;

int Keycodes_obj::kp_octal;

int Keycodes_obj::kp_decimal;

int Keycodes_obj::kp_hexadecimal;

int Keycodes_obj::lctrl;

int Keycodes_obj::lshift;

int Keycodes_obj::lalt;

int Keycodes_obj::lmeta;

int Keycodes_obj::rctrl;

int Keycodes_obj::rshift;

int Keycodes_obj::ralt;

int Keycodes_obj::rmeta;

int Keycodes_obj::mode;

int Keycodes_obj::audionext;

int Keycodes_obj::audioprev;

int Keycodes_obj::audiostop;

int Keycodes_obj::audioplay;

int Keycodes_obj::audiomute;

int Keycodes_obj::mediaselect;

int Keycodes_obj::www;

int Keycodes_obj::mail;

int Keycodes_obj::calculator;

int Keycodes_obj::computer;

int Keycodes_obj::ac_search;

int Keycodes_obj::ac_home;

int Keycodes_obj::ac_back;

int Keycodes_obj::ac_forward;

int Keycodes_obj::ac_stop;

int Keycodes_obj::ac_refresh;

int Keycodes_obj::ac_bookmarks;

int Keycodes_obj::brightnessdown;

int Keycodes_obj::brightnessup;

int Keycodes_obj::displayswitch;

int Keycodes_obj::kbdillumtoggle;

int Keycodes_obj::kbdillumdown;

int Keycodes_obj::kbdillumup;

int Keycodes_obj::eject;

int Keycodes_obj::sleep;


Keycodes_obj::Keycodes_obj()
{
}

bool Keycodes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { outValue = name_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"to_scan") ) { outValue = to_scan_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"from_scan") ) { outValue = from_scan_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Keycodes_obj::unknown,HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")},
	{hx::fsInt,(void *) &Keycodes_obj::enter,HX_HCSTRING("enter","\x18","\x6d","\x86","\x70")},
	{hx::fsInt,(void *) &Keycodes_obj::escape,HX_HCSTRING("escape","\x81","\x43","\xda","\xda")},
	{hx::fsInt,(void *) &Keycodes_obj::backspace,HX_HCSTRING("backspace","\x3f","\x85","\xea","\xca")},
	{hx::fsInt,(void *) &Keycodes_obj::tab,HX_HCSTRING("tab","\x55","\x5a","\x58","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::space,HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{hx::fsInt,(void *) &Keycodes_obj::exclaim,HX_HCSTRING("exclaim","\x29","\x96","\x23","\xab")},
	{hx::fsInt,(void *) &Keycodes_obj::quotedbl,HX_HCSTRING("quotedbl","\x72","\xc1","\xba","\xaf")},
	{hx::fsInt,(void *) &Keycodes_obj::hash,HX_HCSTRING("hash","\xce","\x2f","\x08","\x45")},
	{hx::fsInt,(void *) &Keycodes_obj::percent,HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78")},
	{hx::fsInt,(void *) &Keycodes_obj::dollar,HX_HCSTRING("dollar","\x7c","\xcc","\xdf","\x2c")},
	{hx::fsInt,(void *) &Keycodes_obj::ampersand,HX_HCSTRING("ampersand","\x35","\x6c","\x5e","\xcb")},
	{hx::fsInt,(void *) &Keycodes_obj::quote,HX_HCSTRING("quote","\x3c","\x23","\xf2","\x5d")},
	{hx::fsInt,(void *) &Keycodes_obj::leftparen,HX_HCSTRING("leftparen","\xa3","\x02","\x08","\x3f")},
	{hx::fsInt,(void *) &Keycodes_obj::rightparen,HX_HCSTRING("rightparen","\xae","\xfa","\xec","\x2c")},
	{hx::fsInt,(void *) &Keycodes_obj::asterisk,HX_HCSTRING("asterisk","\x72","\x6c","\xca","\x2e")},
	{hx::fsInt,(void *) &Keycodes_obj::plus,HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a")},
	{hx::fsInt,(void *) &Keycodes_obj::comma,HX_HCSTRING("comma","\xd5","\x31","\x5d","\x4a")},
	{hx::fsInt,(void *) &Keycodes_obj::minus,HX_HCSTRING("minus","\x70","\x80","\x68","\x08")},
	{hx::fsInt,(void *) &Keycodes_obj::period,HX_HCSTRING("period","\x01","\x61","\x1b","\x3b")},
	{hx::fsInt,(void *) &Keycodes_obj::slash,HX_HCSTRING("slash","\x3d","\xc0","\xc1","\x7e")},
	{hx::fsInt,(void *) &Keycodes_obj::key_0,HX_HCSTRING("key_0","\x50","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_1,HX_HCSTRING("key_1","\x51","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_2,HX_HCSTRING("key_2","\x52","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_3,HX_HCSTRING("key_3","\x53","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_4,HX_HCSTRING("key_4","\x54","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_5,HX_HCSTRING("key_5","\x55","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_6,HX_HCSTRING("key_6","\x56","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_7,HX_HCSTRING("key_7","\x57","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_8,HX_HCSTRING("key_8","\x58","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_9,HX_HCSTRING("key_9","\x59","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::colon,HX_HCSTRING("colon","\x5f","\x71","\x5c","\x4a")},
	{hx::fsInt,(void *) &Keycodes_obj::semicolon,HX_HCSTRING("semicolon","\x31","\x16","\xd2","\x4d")},
	{hx::fsInt,(void *) &Keycodes_obj::less,HX_HCSTRING("less","\x59","\x13","\xb0","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::equals,HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf")},
	{hx::fsInt,(void *) &Keycodes_obj::greater,HX_HCSTRING("greater","\xfa","\x90","\xc0","\xb7")},
	{hx::fsInt,(void *) &Keycodes_obj::question,HX_HCSTRING("question","\x26","\x9b","\xb0","\x26")},
	{hx::fsInt,(void *) &Keycodes_obj::at,HX_HCSTRING("at","\xf3","\x54","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::leftbracket,HX_HCSTRING("leftbracket","\x01","\x9d","\xc8","\xcd")},
	{hx::fsInt,(void *) &Keycodes_obj::backslash,HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8")},
	{hx::fsInt,(void *) &Keycodes_obj::rightbracket,HX_HCSTRING("rightbracket","\xcc","\xed","\xe3","\xb8")},
	{hx::fsInt,(void *) &Keycodes_obj::caret,HX_HCSTRING("caret","\x83","\xf9","\x1f","\x41")},
	{hx::fsInt,(void *) &Keycodes_obj::underscore,HX_HCSTRING("underscore","\x3a","\xeb","\xf8","\x52")},
	{hx::fsInt,(void *) &Keycodes_obj::backquote,HX_HCSTRING("backquote","\xb5","\x1b","\x76","\xa7")},
	{hx::fsInt,(void *) &Keycodes_obj::key_a,HX_HCSTRING("key_a","\x81","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_b,HX_HCSTRING("key_b","\x82","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_c,HX_HCSTRING("key_c","\x83","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_d,HX_HCSTRING("key_d","\x84","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_e,HX_HCSTRING("key_e","\x85","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_f,HX_HCSTRING("key_f","\x86","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_g,HX_HCSTRING("key_g","\x87","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_h,HX_HCSTRING("key_h","\x88","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_i,HX_HCSTRING("key_i","\x89","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_j,HX_HCSTRING("key_j","\x8a","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_k,HX_HCSTRING("key_k","\x8b","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_l,HX_HCSTRING("key_l","\x8c","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_m,HX_HCSTRING("key_m","\x8d","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_n,HX_HCSTRING("key_n","\x8e","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_o,HX_HCSTRING("key_o","\x8f","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_p,HX_HCSTRING("key_p","\x90","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_q,HX_HCSTRING("key_q","\x91","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_r,HX_HCSTRING("key_r","\x92","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_s,HX_HCSTRING("key_s","\x93","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_t,HX_HCSTRING("key_t","\x94","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_u,HX_HCSTRING("key_u","\x95","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_v,HX_HCSTRING("key_v","\x96","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_w,HX_HCSTRING("key_w","\x97","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_x,HX_HCSTRING("key_x","\x98","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_y,HX_HCSTRING("key_y","\x99","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_z,HX_HCSTRING("key_z","\x9a","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::capslock,HX_HCSTRING("capslock","\x8c","\xdc","\xe8","\x26")},
	{hx::fsInt,(void *) &Keycodes_obj::f1,HX_HCSTRING("f1","\x0b","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f2,HX_HCSTRING("f2","\x0c","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f3,HX_HCSTRING("f3","\x0d","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f4,HX_HCSTRING("f4","\x0e","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f5,HX_HCSTRING("f5","\x0f","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f6,HX_HCSTRING("f6","\x10","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f7,HX_HCSTRING("f7","\x11","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f8,HX_HCSTRING("f8","\x12","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f9,HX_HCSTRING("f9","\x13","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f10,HX_HCSTRING("f10","\xc5","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f11,HX_HCSTRING("f11","\xc6","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f12,HX_HCSTRING("f12","\xc7","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::printscreen,HX_HCSTRING("printscreen","\x59","\x73","\x40","\x3a")},
	{hx::fsInt,(void *) &Keycodes_obj::scrolllock,HX_HCSTRING("scrolllock","\x78","\xfe","\x9d","\x1a")},
	{hx::fsInt,(void *) &Keycodes_obj::pause,HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd")},
	{hx::fsInt,(void *) &Keycodes_obj::insert,HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d")},
	{hx::fsInt,(void *) &Keycodes_obj::home,HX_HCSTRING("home","\x1f","\xca","\x12","\x45")},
	{hx::fsInt,(void *) &Keycodes_obj::pageup,HX_HCSTRING("pageup","\x6a","\xb2","\x38","\xe6")},
	{hx::fsInt,(void *) &Keycodes_obj::_delete,HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a")},
	{hx::fsInt,(void *) &Keycodes_obj::end,HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::pagedown,HX_HCSTRING("pagedown","\x31","\xa6","\x5c","\x60")},
	{hx::fsInt,(void *) &Keycodes_obj::right,HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsInt,(void *) &Keycodes_obj::left,HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::down,HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")},
	{hx::fsInt,(void *) &Keycodes_obj::up,HX_HCSTRING("up","\x5b","\x66","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::numlockclear,HX_HCSTRING("numlockclear","\xbc","\xea","\xac","\xf5")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_divide,HX_HCSTRING("kp_divide","\x13","\x12","\x82","\x5e")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_multiply,HX_HCSTRING("kp_multiply","\x3e","\x1f","\xae","\xdf")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_minus,HX_HCSTRING("kp_minus","\x16","\x6f","\xc9","\x1d")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_plus,HX_HCSTRING("kp_plus","\x74","\x67","\xdc","\x26")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_enter,HX_HCSTRING("kp_enter","\xbe","\x5b","\xe7","\x85")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_1,HX_HCSTRING("kp_1","\xd7","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_2,HX_HCSTRING("kp_2","\xd8","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_3,HX_HCSTRING("kp_3","\xd9","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_4,HX_HCSTRING("kp_4","\xda","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_5,HX_HCSTRING("kp_5","\xdb","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_6,HX_HCSTRING("kp_6","\xdc","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_7,HX_HCSTRING("kp_7","\xdd","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_8,HX_HCSTRING("kp_8","\xde","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_9,HX_HCSTRING("kp_9","\xdf","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_0,HX_HCSTRING("kp_0","\xd6","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_period,HX_HCSTRING("kp_period","\x9b","\x43","\x8b","\xda")},
	{hx::fsInt,(void *) &Keycodes_obj::application,HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsInt,(void *) &Keycodes_obj::power,HX_HCSTRING("power","\x05","\x4c","\x9a","\xc6")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_equals,HX_HCSTRING("kp_equals","\xd9","\xd0","\x62","\x5f")},
	{hx::fsInt,(void *) &Keycodes_obj::f13,HX_HCSTRING("f13","\xc8","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f14,HX_HCSTRING("f14","\xc9","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f15,HX_HCSTRING("f15","\xca","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f16,HX_HCSTRING("f16","\xcb","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f17,HX_HCSTRING("f17","\xcc","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f18,HX_HCSTRING("f18","\xcd","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f19,HX_HCSTRING("f19","\xce","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f20,HX_HCSTRING("f20","\xa4","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f21,HX_HCSTRING("f21","\xa5","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f22,HX_HCSTRING("f22","\xa6","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f23,HX_HCSTRING("f23","\xa7","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f24,HX_HCSTRING("f24","\xa8","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::execute,HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc")},
	{hx::fsInt,(void *) &Keycodes_obj::help,HX_HCSTRING("help","\xc1","\x32","\x0b","\x45")},
	{hx::fsInt,(void *) &Keycodes_obj::menu,HX_HCSTRING("menu","\x9f","\x45","\x59","\x48")},
	{hx::fsInt,(void *) &Keycodes_obj::select,HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a")},
	{hx::fsInt,(void *) &Keycodes_obj::stop,HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c")},
	{hx::fsInt,(void *) &Keycodes_obj::again,HX_HCSTRING("again","\x60","\x35","\x3d","\x1e")},
	{hx::fsInt,(void *) &Keycodes_obj::undo,HX_HCSTRING("undo","\x24","\xc6","\xa9","\x4d")},
	{hx::fsInt,(void *) &Keycodes_obj::cut,HX_HCSTRING("cut","\x82","\x85","\x4b","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::copy,HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41")},
	{hx::fsInt,(void *) &Keycodes_obj::paste,HX_HCSTRING("paste","\x53","\x53","\x56","\xbd")},
	{hx::fsInt,(void *) &Keycodes_obj::find,HX_HCSTRING("find","\x39","\xd0","\xbb","\x43")},
	{hx::fsInt,(void *) &Keycodes_obj::mute,HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48")},
	{hx::fsInt,(void *) &Keycodes_obj::volumeup,HX_HCSTRING("volumeup","\xb5","\x3a","\xd5","\x39")},
	{hx::fsInt,(void *) &Keycodes_obj::volumedown,HX_HCSTRING("volumedown","\x3c","\x17","\x64","\x3a")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_comma,HX_HCSTRING("kp_comma","\x7b","\x20","\xbe","\x5f")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_equalsas400,HX_HCSTRING("kp_equalsas400","\x09","\xea","\xe5","\xc1")},
	{hx::fsInt,(void *) &Keycodes_obj::alterase,HX_HCSTRING("alterase","\x1d","\x1b","\xae","\x0b")},
	{hx::fsInt,(void *) &Keycodes_obj::sysreq,HX_HCSTRING("sysreq","\x71","\x12","\xe1","\xf2")},
	{hx::fsInt,(void *) &Keycodes_obj::cancel,HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8")},
	{hx::fsInt,(void *) &Keycodes_obj::clear,HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48")},
	{hx::fsInt,(void *) &Keycodes_obj::prior,HX_HCSTRING("prior","\x0a","\x59","\x8b","\xc8")},
	{hx::fsInt,(void *) &Keycodes_obj::return2,HX_HCSTRING("return2","\x82","\x75","\xc2","\xfe")},
	{hx::fsInt,(void *) &Keycodes_obj::separator,HX_HCSTRING("separator","\x65","\x60","\x7f","\x31")},
	{hx::fsInt,(void *) &Keycodes_obj::out,HX_HCSTRING("out","\x8e","\xa0","\x54","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::oper,HX_HCSTRING("oper","\xce","\x03","\xb4","\x49")},
	{hx::fsInt,(void *) &Keycodes_obj::clearagain,HX_HCSTRING("clearagain","\xb3","\x04","\x1a","\x60")},
	{hx::fsInt,(void *) &Keycodes_obj::crsel,HX_HCSTRING("crsel","\x4b","\x5c","\x5d","\x4c")},
	{hx::fsInt,(void *) &Keycodes_obj::exsel,HX_HCSTRING("exsel","\x07","\xcd","\x21","\x77")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_00,HX_HCSTRING("kp_00","\x9a","\x37","\x30","\xe6")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_000,HX_HCSTRING("kp_000","\x56","\x6f","\x00","\x84")},
	{hx::fsInt,(void *) &Keycodes_obj::thousandsseparator,HX_HCSTRING("thousandsseparator","\xf0","\x9f","\x19","\x09")},
	{hx::fsInt,(void *) &Keycodes_obj::decimalseparator,HX_HCSTRING("decimalseparator","\xb4","\x11","\xc3","\x9e")},
	{hx::fsInt,(void *) &Keycodes_obj::currencyunit,HX_HCSTRING("currencyunit","\x55","\x4e","\xf3","\xe0")},
	{hx::fsInt,(void *) &Keycodes_obj::currencysubunit,HX_HCSTRING("currencysubunit","\xd3","\x28","\x44","\x32")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_leftparen,HX_HCSTRING("kp_leftparen","\x49","\x3c","\xfc","\x76")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_rightparen,HX_HCSTRING("kp_rightparen","\x48","\x32","\xab","\xea")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_leftbrace,HX_HCSTRING("kp_leftbrace","\xb2","\xd5","\x8f","\x72")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_rightbrace,HX_HCSTRING("kp_rightbrace","\xb1","\xcb","\x3e","\xe6")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_tab,HX_HCSTRING("kp_tab","\x7b","\x33","\x34","\x84")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_backspace,HX_HCSTRING("kp_backspace","\xe5","\xbe","\xde","\x02")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_a,HX_HCSTRING("kp_a","\x07","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_b,HX_HCSTRING("kp_b","\x08","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_c,HX_HCSTRING("kp_c","\x09","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_d,HX_HCSTRING("kp_d","\x0a","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_e,HX_HCSTRING("kp_e","\x0b","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_f,HX_HCSTRING("kp_f","\x0c","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_xor,HX_HCSTRING("kp_xor","\xc1","\x48","\x37","\x84")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_power,HX_HCSTRING("kp_power","\xab","\x3a","\xfb","\xdb")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_percent,HX_HCSTRING("kp_percent","\xeb","\x0e","\x51","\x5b")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_less,HX_HCSTRING("kp_less","\x73","\x3b","\x32","\x24")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_greater,HX_HCSTRING("kp_greater","\x20","\xf5","\x36","\x9a")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_ampersand,HX_HCSTRING("kp_ampersand","\xdb","\xa5","\x52","\x03")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_dblampersand,HX_HCSTRING("kp_dblampersand","\x61","\xb1","\x23","\x42")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_verticalbar,HX_HCSTRING("kp_verticalbar","\x43","\x12","\x24","\x2c")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_dblverticalbar,HX_HCSTRING("kp_dblverticalbar","\x49","\x8b","\xf3","\x89")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_colon,HX_HCSTRING("kp_colon","\x05","\x60","\xbd","\x5f")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_hash,HX_HCSTRING("kp_hash","\xe8","\x57","\x8a","\x21")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_space,HX_HCSTRING("kp_space","\x6c","\x7b","\xc7","\x96")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_at,HX_HCSTRING("kp_at","\x8d","\x62","\x30","\xe6")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_exclam,HX_HCSTRING("kp_exclam","\x62","\x58","\x53","\x5b")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memstore,HX_HCSTRING("kp_memstore","\xc6","\x16","\x90","\x20")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memrecall,HX_HCSTRING("kp_memrecall","\x4c","\x57","\x2a","\x4c")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memclear,HX_HCSTRING("kp_memclear","\x72","\x74","\xd5","\xe4")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memadd,HX_HCSTRING("kp_memadd","\xc6","\x01","\x25","\xa4")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memsubtract,HX_HCSTRING("kp_memsubtract","\x4f","\x8f","\xa2","\xcd")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memmultiply,HX_HCSTRING("kp_memmultiply","\x5f","\xfc","\x1d","\x70")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memdivide,HX_HCSTRING("kp_memdivide","\xf4","\xb4","\x5a","\x0d")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_plusminus,HX_HCSTRING("kp_plusminus","\x7c","\x94","\x9c","\xa7")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_clear,HX_HCSTRING("kp_clear","\x33","\x60","\xbc","\x5d")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_clearentry,HX_HCSTRING("kp_clearentry","\x5f","\x7f","\x21","\x70")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_binary,HX_HCSTRING("kp_binary","\x9b","\x9e","\x7b","\x8c")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_octal,HX_HCSTRING("kp_octal","\x71","\xcc","\xa3","\x40")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_decimal,HX_HCSTRING("kp_decimal","\xb7","\x18","\x4a","\xc9")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_hexadecimal,HX_HCSTRING("kp_hexadecimal","\x51","\x77","\x89","\xf4")},
	{hx::fsInt,(void *) &Keycodes_obj::lctrl,HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71")},
	{hx::fsInt,(void *) &Keycodes_obj::lshift,HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa")},
	{hx::fsInt,(void *) &Keycodes_obj::lalt,HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::lmeta,HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77")},
	{hx::fsInt,(void *) &Keycodes_obj::rctrl,HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5")},
	{hx::fsInt,(void *) &Keycodes_obj::rshift,HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10")},
	{hx::fsInt,(void *) &Keycodes_obj::ralt,HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b")},
	{hx::fsInt,(void *) &Keycodes_obj::rmeta,HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec")},
	{hx::fsInt,(void *) &Keycodes_obj::mode,HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{hx::fsInt,(void *) &Keycodes_obj::audionext,HX_HCSTRING("audionext","\xc9","\x20","\xdf","\x7d")},
	{hx::fsInt,(void *) &Keycodes_obj::audioprev,HX_HCSTRING("audioprev","\xc9","\x5a","\x3b","\x7f")},
	{hx::fsInt,(void *) &Keycodes_obj::audiostop,HX_HCSTRING("audiostop","\xd8","\x8b","\x38","\x81")},
	{hx::fsInt,(void *) &Keycodes_obj::audioplay,HX_HCSTRING("audioplay","\xca","\xc9","\x36","\x7f")},
	{hx::fsInt,(void *) &Keycodes_obj::audiomute,HX_HCSTRING("audiomute","\xaf","\x0a","\x42","\x7d")},
	{hx::fsInt,(void *) &Keycodes_obj::mediaselect,HX_HCSTRING("mediaselect","\xe0","\xe2","\xe7","\xc3")},
	{hx::fsInt,(void *) &Keycodes_obj::www,HX_HCSTRING("www","\x57","\xb4","\x5a","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::mail,HX_HCSTRING("mail","\x37","\x38","\x56","\x48")},
	{hx::fsInt,(void *) &Keycodes_obj::calculator,HX_HCSTRING("calculator","\x02","\x2d","\xd8","\xb7")},
	{hx::fsInt,(void *) &Keycodes_obj::computer,HX_HCSTRING("computer","\x1b","\x41","\xc6","\x85")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_search,HX_HCSTRING("ac_search","\x65","\x9c","\x69","\xdd")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_home,HX_HCSTRING("ac_home","\xdc","\x9d","\x1a","\x4f")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_back,HX_HCSTRING("ac_back","\xe4","\xad","\x18","\x4b")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_forward,HX_HCSTRING("ac_forward","\x28","\x42","\x16","\x8f")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_stop,HX_HCSTRING("ac_stop","\xbf","\xc3","\x63","\x56")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_refresh,HX_HCSTRING("ac_refresh","\x3e","\x3a","\x6c","\x96")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_bookmarks,HX_HCSTRING("ac_bookmarks","\x20","\x12","\x98","\x7b")},
	{hx::fsInt,(void *) &Keycodes_obj::brightnessdown,HX_HCSTRING("brightnessdown","\xb3","\x42","\xe9","\x8a")},
	{hx::fsInt,(void *) &Keycodes_obj::brightnessup,HX_HCSTRING("brightnessup","\x6c","\xca","\x4d","\xcf")},
	{hx::fsInt,(void *) &Keycodes_obj::displayswitch,HX_HCSTRING("displayswitch","\xb6","\x91","\x47","\x52")},
	{hx::fsInt,(void *) &Keycodes_obj::kbdillumtoggle,HX_HCSTRING("kbdillumtoggle","\x48","\x0a","\x5b","\x21")},
	{hx::fsInt,(void *) &Keycodes_obj::kbdillumdown,HX_HCSTRING("kbdillumdown","\x16","\x6e","\x75","\xeb")},
	{hx::fsInt,(void *) &Keycodes_obj::kbdillumup,HX_HCSTRING("kbdillumup","\x0f","\x47","\x07","\x31")},
	{hx::fsInt,(void *) &Keycodes_obj::eject,HX_HCSTRING("eject","\x11","\x2f","\xd6","\x6d")},
	{hx::fsInt,(void *) &Keycodes_obj::sleep,HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keycodes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Keycodes_obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::enter,"enter");
	HX_MARK_MEMBER_NAME(Keycodes_obj::escape,"escape");
	HX_MARK_MEMBER_NAME(Keycodes_obj::backspace,"backspace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::tab,"tab");
	HX_MARK_MEMBER_NAME(Keycodes_obj::space,"space");
	HX_MARK_MEMBER_NAME(Keycodes_obj::exclaim,"exclaim");
	HX_MARK_MEMBER_NAME(Keycodes_obj::quotedbl,"quotedbl");
	HX_MARK_MEMBER_NAME(Keycodes_obj::hash,"hash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::percent,"percent");
	HX_MARK_MEMBER_NAME(Keycodes_obj::dollar,"dollar");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ampersand,"ampersand");
	HX_MARK_MEMBER_NAME(Keycodes_obj::quote,"quote");
	HX_MARK_MEMBER_NAME(Keycodes_obj::leftparen,"leftparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rightparen,"rightparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::asterisk,"asterisk");
	HX_MARK_MEMBER_NAME(Keycodes_obj::plus,"plus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::comma,"comma");
	HX_MARK_MEMBER_NAME(Keycodes_obj::minus,"minus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::period,"period");
	HX_MARK_MEMBER_NAME(Keycodes_obj::slash,"slash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_0,"key_0");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_1,"key_1");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_2,"key_2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_3,"key_3");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_4,"key_4");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_5,"key_5");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_6,"key_6");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_7,"key_7");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_8,"key_8");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_9,"key_9");
	HX_MARK_MEMBER_NAME(Keycodes_obj::colon,"colon");
	HX_MARK_MEMBER_NAME(Keycodes_obj::semicolon,"semicolon");
	HX_MARK_MEMBER_NAME(Keycodes_obj::less,"less");
	HX_MARK_MEMBER_NAME(Keycodes_obj::equals,"equals");
	HX_MARK_MEMBER_NAME(Keycodes_obj::greater,"greater");
	HX_MARK_MEMBER_NAME(Keycodes_obj::question,"question");
	HX_MARK_MEMBER_NAME(Keycodes_obj::at,"at");
	HX_MARK_MEMBER_NAME(Keycodes_obj::leftbracket,"leftbracket");
	HX_MARK_MEMBER_NAME(Keycodes_obj::backslash,"backslash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rightbracket,"rightbracket");
	HX_MARK_MEMBER_NAME(Keycodes_obj::caret,"caret");
	HX_MARK_MEMBER_NAME(Keycodes_obj::underscore,"underscore");
	HX_MARK_MEMBER_NAME(Keycodes_obj::backquote,"backquote");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_a,"key_a");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_b,"key_b");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_c,"key_c");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_d,"key_d");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_e,"key_e");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_f,"key_f");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_g,"key_g");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_h,"key_h");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_i,"key_i");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_j,"key_j");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_k,"key_k");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_l,"key_l");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_m,"key_m");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_n,"key_n");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_o,"key_o");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_p,"key_p");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_q,"key_q");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_r,"key_r");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_s,"key_s");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_t,"key_t");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_u,"key_u");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_v,"key_v");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_w,"key_w");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_x,"key_x");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_y,"key_y");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_z,"key_z");
	HX_MARK_MEMBER_NAME(Keycodes_obj::capslock,"capslock");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f1,"f1");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f2,"f2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f3,"f3");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f4,"f4");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f5,"f5");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f6,"f6");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f7,"f7");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f8,"f8");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f9,"f9");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f10,"f10");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f11,"f11");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f12,"f12");
	HX_MARK_MEMBER_NAME(Keycodes_obj::printscreen,"printscreen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::scrolllock,"scrolllock");
	HX_MARK_MEMBER_NAME(Keycodes_obj::pause,"pause");
	HX_MARK_MEMBER_NAME(Keycodes_obj::insert,"insert");
	HX_MARK_MEMBER_NAME(Keycodes_obj::home,"home");
	HX_MARK_MEMBER_NAME(Keycodes_obj::pageup,"pageup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::_delete,"delete");
	HX_MARK_MEMBER_NAME(Keycodes_obj::end,"end");
	HX_MARK_MEMBER_NAME(Keycodes_obj::pagedown,"pagedown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::right,"right");
	HX_MARK_MEMBER_NAME(Keycodes_obj::left,"left");
	HX_MARK_MEMBER_NAME(Keycodes_obj::down,"down");
	HX_MARK_MEMBER_NAME(Keycodes_obj::up,"up");
	HX_MARK_MEMBER_NAME(Keycodes_obj::numlockclear,"numlockclear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_divide,"kp_divide");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_multiply,"kp_multiply");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_minus,"kp_minus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_plus,"kp_plus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_enter,"kp_enter");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_1,"kp_1");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_2,"kp_2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_3,"kp_3");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_4,"kp_4");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_5,"kp_5");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_6,"kp_6");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_7,"kp_7");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_8,"kp_8");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_9,"kp_9");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_0,"kp_0");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_period,"kp_period");
	HX_MARK_MEMBER_NAME(Keycodes_obj::application,"application");
	HX_MARK_MEMBER_NAME(Keycodes_obj::power,"power");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_equals,"kp_equals");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f13,"f13");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f14,"f14");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f15,"f15");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f16,"f16");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f17,"f17");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f18,"f18");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f19,"f19");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f20,"f20");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f21,"f21");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f22,"f22");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f23,"f23");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f24,"f24");
	HX_MARK_MEMBER_NAME(Keycodes_obj::execute,"execute");
	HX_MARK_MEMBER_NAME(Keycodes_obj::help,"help");
	HX_MARK_MEMBER_NAME(Keycodes_obj::menu,"menu");
	HX_MARK_MEMBER_NAME(Keycodes_obj::select,"select");
	HX_MARK_MEMBER_NAME(Keycodes_obj::stop,"stop");
	HX_MARK_MEMBER_NAME(Keycodes_obj::again,"again");
	HX_MARK_MEMBER_NAME(Keycodes_obj::undo,"undo");
	HX_MARK_MEMBER_NAME(Keycodes_obj::cut,"cut");
	HX_MARK_MEMBER_NAME(Keycodes_obj::copy,"copy");
	HX_MARK_MEMBER_NAME(Keycodes_obj::paste,"paste");
	HX_MARK_MEMBER_NAME(Keycodes_obj::find,"find");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mute,"mute");
	HX_MARK_MEMBER_NAME(Keycodes_obj::volumeup,"volumeup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::volumedown,"volumedown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_comma,"kp_comma");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_equalsas400,"kp_equalsas400");
	HX_MARK_MEMBER_NAME(Keycodes_obj::alterase,"alterase");
	HX_MARK_MEMBER_NAME(Keycodes_obj::sysreq,"sysreq");
	HX_MARK_MEMBER_NAME(Keycodes_obj::cancel,"cancel");
	HX_MARK_MEMBER_NAME(Keycodes_obj::clear,"clear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::prior,"prior");
	HX_MARK_MEMBER_NAME(Keycodes_obj::return2,"return2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::separator,"separator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::out,"out");
	HX_MARK_MEMBER_NAME(Keycodes_obj::oper,"oper");
	HX_MARK_MEMBER_NAME(Keycodes_obj::clearagain,"clearagain");
	HX_MARK_MEMBER_NAME(Keycodes_obj::crsel,"crsel");
	HX_MARK_MEMBER_NAME(Keycodes_obj::exsel,"exsel");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_00,"kp_00");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_000,"kp_000");
	HX_MARK_MEMBER_NAME(Keycodes_obj::thousandsseparator,"thousandsseparator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::decimalseparator,"decimalseparator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::currencyunit,"currencyunit");
	HX_MARK_MEMBER_NAME(Keycodes_obj::currencysubunit,"currencysubunit");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_leftparen,"kp_leftparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_rightparen,"kp_rightparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_leftbrace,"kp_leftbrace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_rightbrace,"kp_rightbrace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_tab,"kp_tab");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_backspace,"kp_backspace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_a,"kp_a");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_b,"kp_b");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_c,"kp_c");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_d,"kp_d");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_e,"kp_e");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_f,"kp_f");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_xor,"kp_xor");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_power,"kp_power");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_percent,"kp_percent");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_less,"kp_less");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_greater,"kp_greater");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_ampersand,"kp_ampersand");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_dblampersand,"kp_dblampersand");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_verticalbar,"kp_verticalbar");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_dblverticalbar,"kp_dblverticalbar");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_colon,"kp_colon");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_hash,"kp_hash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_space,"kp_space");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_at,"kp_at");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_exclam,"kp_exclam");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memstore,"kp_memstore");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memrecall,"kp_memrecall");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memclear,"kp_memclear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memadd,"kp_memadd");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memsubtract,"kp_memsubtract");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memmultiply,"kp_memmultiply");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memdivide,"kp_memdivide");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_plusminus,"kp_plusminus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_clear,"kp_clear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_clearentry,"kp_clearentry");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_binary,"kp_binary");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_octal,"kp_octal");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_decimal,"kp_decimal");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_hexadecimal,"kp_hexadecimal");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lctrl,"lctrl");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lshift,"lshift");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lalt,"lalt");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lmeta,"lmeta");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rctrl,"rctrl");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rshift,"rshift");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ralt,"ralt");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rmeta,"rmeta");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mode,"mode");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audionext,"audionext");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audioprev,"audioprev");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audiostop,"audiostop");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audioplay,"audioplay");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audiomute,"audiomute");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mediaselect,"mediaselect");
	HX_MARK_MEMBER_NAME(Keycodes_obj::www,"www");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mail,"mail");
	HX_MARK_MEMBER_NAME(Keycodes_obj::calculator,"calculator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::computer,"computer");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_search,"ac_search");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_home,"ac_home");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_back,"ac_back");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_forward,"ac_forward");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_stop,"ac_stop");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_refresh,"ac_refresh");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_bookmarks,"ac_bookmarks");
	HX_MARK_MEMBER_NAME(Keycodes_obj::brightnessdown,"brightnessdown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::brightnessup,"brightnessup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::displayswitch,"displayswitch");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kbdillumtoggle,"kbdillumtoggle");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kbdillumdown,"kbdillumdown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kbdillumup,"kbdillumup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::eject,"eject");
	HX_MARK_MEMBER_NAME(Keycodes_obj::sleep,"sleep");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keycodes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::enter,"enter");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::escape,"escape");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::backspace,"backspace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::tab,"tab");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::space,"space");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::exclaim,"exclaim");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::quotedbl,"quotedbl");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::hash,"hash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::percent,"percent");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::dollar,"dollar");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ampersand,"ampersand");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::quote,"quote");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::leftparen,"leftparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rightparen,"rightparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::asterisk,"asterisk");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::plus,"plus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::comma,"comma");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::minus,"minus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::period,"period");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::slash,"slash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_0,"key_0");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_1,"key_1");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_2,"key_2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_3,"key_3");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_4,"key_4");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_5,"key_5");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_6,"key_6");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_7,"key_7");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_8,"key_8");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_9,"key_9");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::colon,"colon");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::semicolon,"semicolon");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::less,"less");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::equals,"equals");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::greater,"greater");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::question,"question");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::at,"at");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::leftbracket,"leftbracket");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::backslash,"backslash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rightbracket,"rightbracket");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::caret,"caret");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::underscore,"underscore");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::backquote,"backquote");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_a,"key_a");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_b,"key_b");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_c,"key_c");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_d,"key_d");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_e,"key_e");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_f,"key_f");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_g,"key_g");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_h,"key_h");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_i,"key_i");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_j,"key_j");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_k,"key_k");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_l,"key_l");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_m,"key_m");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_n,"key_n");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_o,"key_o");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_p,"key_p");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_q,"key_q");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_r,"key_r");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_s,"key_s");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_t,"key_t");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_u,"key_u");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_v,"key_v");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_w,"key_w");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_x,"key_x");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_y,"key_y");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_z,"key_z");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::capslock,"capslock");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f1,"f1");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f2,"f2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f3,"f3");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f4,"f4");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f5,"f5");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f6,"f6");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f7,"f7");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f8,"f8");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f9,"f9");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f10,"f10");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f11,"f11");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f12,"f12");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::printscreen,"printscreen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::scrolllock,"scrolllock");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::pause,"pause");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::insert,"insert");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::home,"home");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::pageup,"pageup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::_delete,"delete");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::end,"end");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::pagedown,"pagedown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::right,"right");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::left,"left");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::down,"down");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::up,"up");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::numlockclear,"numlockclear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_divide,"kp_divide");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_multiply,"kp_multiply");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_minus,"kp_minus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_plus,"kp_plus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_enter,"kp_enter");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_1,"kp_1");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_2,"kp_2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_3,"kp_3");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_4,"kp_4");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_5,"kp_5");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_6,"kp_6");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_7,"kp_7");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_8,"kp_8");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_9,"kp_9");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_0,"kp_0");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_period,"kp_period");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::application,"application");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::power,"power");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_equals,"kp_equals");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f13,"f13");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f14,"f14");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f15,"f15");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f16,"f16");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f17,"f17");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f18,"f18");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f19,"f19");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f20,"f20");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f21,"f21");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f22,"f22");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f23,"f23");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f24,"f24");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::execute,"execute");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::help,"help");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::menu,"menu");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::select,"select");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::stop,"stop");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::again,"again");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::undo,"undo");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::cut,"cut");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::copy,"copy");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::paste,"paste");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::find,"find");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mute,"mute");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::volumeup,"volumeup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::volumedown,"volumedown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_comma,"kp_comma");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_equalsas400,"kp_equalsas400");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::alterase,"alterase");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::sysreq,"sysreq");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::cancel,"cancel");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::clear,"clear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::prior,"prior");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::return2,"return2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::separator,"separator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::out,"out");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::oper,"oper");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::clearagain,"clearagain");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::crsel,"crsel");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::exsel,"exsel");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_00,"kp_00");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_000,"kp_000");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::thousandsseparator,"thousandsseparator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::decimalseparator,"decimalseparator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::currencyunit,"currencyunit");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::currencysubunit,"currencysubunit");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_leftparen,"kp_leftparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_rightparen,"kp_rightparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_leftbrace,"kp_leftbrace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_rightbrace,"kp_rightbrace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_tab,"kp_tab");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_backspace,"kp_backspace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_a,"kp_a");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_b,"kp_b");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_c,"kp_c");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_d,"kp_d");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_e,"kp_e");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_f,"kp_f");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_xor,"kp_xor");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_power,"kp_power");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_percent,"kp_percent");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_less,"kp_less");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_greater,"kp_greater");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_ampersand,"kp_ampersand");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_dblampersand,"kp_dblampersand");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_verticalbar,"kp_verticalbar");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_dblverticalbar,"kp_dblverticalbar");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_colon,"kp_colon");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_hash,"kp_hash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_space,"kp_space");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_at,"kp_at");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_exclam,"kp_exclam");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memstore,"kp_memstore");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memrecall,"kp_memrecall");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memclear,"kp_memclear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memadd,"kp_memadd");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memsubtract,"kp_memsubtract");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memmultiply,"kp_memmultiply");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memdivide,"kp_memdivide");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_plusminus,"kp_plusminus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_clear,"kp_clear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_clearentry,"kp_clearentry");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_binary,"kp_binary");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_octal,"kp_octal");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_decimal,"kp_decimal");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_hexadecimal,"kp_hexadecimal");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lctrl,"lctrl");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lshift,"lshift");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lalt,"lalt");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lmeta,"lmeta");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rctrl,"rctrl");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rshift,"rshift");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ralt,"ralt");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rmeta,"rmeta");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mode,"mode");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audionext,"audionext");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audioprev,"audioprev");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audiostop,"audiostop");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audioplay,"audioplay");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audiomute,"audiomute");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mediaselect,"mediaselect");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::www,"www");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mail,"mail");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::calculator,"calculator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::computer,"computer");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_search,"ac_search");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_home,"ac_home");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_back,"ac_back");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_forward,"ac_forward");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_stop,"ac_stop");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_refresh,"ac_refresh");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_bookmarks,"ac_bookmarks");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::brightnessdown,"brightnessdown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::brightnessup,"brightnessup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::displayswitch,"displayswitch");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kbdillumtoggle,"kbdillumtoggle");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kbdillumdown,"kbdillumdown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kbdillumup,"kbdillumup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::eject,"eject");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::sleep,"sleep");
};

#endif

hx::Class Keycodes_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("from_scan","\xb2","\x93","\xbb","\x20"),
	HX_HCSTRING("to_scan","\x01","\xf6","\xb6","\x38"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("enter","\x18","\x6d","\x86","\x70"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("backspace","\x3f","\x85","\xea","\xca"),
	HX_HCSTRING("tab","\x55","\x5a","\x58","\x00"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("exclaim","\x29","\x96","\x23","\xab"),
	HX_HCSTRING("quotedbl","\x72","\xc1","\xba","\xaf"),
	HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"),
	HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"),
	HX_HCSTRING("dollar","\x7c","\xcc","\xdf","\x2c"),
	HX_HCSTRING("ampersand","\x35","\x6c","\x5e","\xcb"),
	HX_HCSTRING("quote","\x3c","\x23","\xf2","\x5d"),
	HX_HCSTRING("leftparen","\xa3","\x02","\x08","\x3f"),
	HX_HCSTRING("rightparen","\xae","\xfa","\xec","\x2c"),
	HX_HCSTRING("asterisk","\x72","\x6c","\xca","\x2e"),
	HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a"),
	HX_HCSTRING("comma","\xd5","\x31","\x5d","\x4a"),
	HX_HCSTRING("minus","\x70","\x80","\x68","\x08"),
	HX_HCSTRING("period","\x01","\x61","\x1b","\x3b"),
	HX_HCSTRING("slash","\x3d","\xc0","\xc1","\x7e"),
	HX_HCSTRING("key_0","\x50","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_1","\x51","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_2","\x52","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_3","\x53","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_4","\x54","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_5","\x55","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_6","\x56","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_7","\x57","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_8","\x58","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_9","\x59","\xc2","\xfe","\xde"),
	HX_HCSTRING("colon","\x5f","\x71","\x5c","\x4a"),
	HX_HCSTRING("semicolon","\x31","\x16","\xd2","\x4d"),
	HX_HCSTRING("less","\x59","\x13","\xb0","\x47"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("greater","\xfa","\x90","\xc0","\xb7"),
	HX_HCSTRING("question","\x26","\x9b","\xb0","\x26"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("leftbracket","\x01","\x9d","\xc8","\xcd"),
	HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8"),
	HX_HCSTRING("rightbracket","\xcc","\xed","\xe3","\xb8"),
	HX_HCSTRING("caret","\x83","\xf9","\x1f","\x41"),
	HX_HCSTRING("underscore","\x3a","\xeb","\xf8","\x52"),
	HX_HCSTRING("backquote","\xb5","\x1b","\x76","\xa7"),
	HX_HCSTRING("key_a","\x81","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_b","\x82","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_c","\x83","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_d","\x84","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_e","\x85","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_f","\x86","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_g","\x87","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_h","\x88","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_i","\x89","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_j","\x8a","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_k","\x8b","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_l","\x8c","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_m","\x8d","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_n","\x8e","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_o","\x8f","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_p","\x90","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_q","\x91","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_r","\x92","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_s","\x93","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_t","\x94","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_u","\x95","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_v","\x96","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_w","\x97","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_x","\x98","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_y","\x99","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_z","\x9a","\xc2","\xfe","\xde"),
	HX_HCSTRING("capslock","\x8c","\xdc","\xe8","\x26"),
	HX_HCSTRING("f1","\x0b","\x59","\x00","\x00"),
	HX_HCSTRING("f2","\x0c","\x59","\x00","\x00"),
	HX_HCSTRING("f3","\x0d","\x59","\x00","\x00"),
	HX_HCSTRING("f4","\x0e","\x59","\x00","\x00"),
	HX_HCSTRING("f5","\x0f","\x59","\x00","\x00"),
	HX_HCSTRING("f6","\x10","\x59","\x00","\x00"),
	HX_HCSTRING("f7","\x11","\x59","\x00","\x00"),
	HX_HCSTRING("f8","\x12","\x59","\x00","\x00"),
	HX_HCSTRING("f9","\x13","\x59","\x00","\x00"),
	HX_HCSTRING("f10","\xc5","\x90","\x4d","\x00"),
	HX_HCSTRING("f11","\xc6","\x90","\x4d","\x00"),
	HX_HCSTRING("f12","\xc7","\x90","\x4d","\x00"),
	HX_HCSTRING("printscreen","\x59","\x73","\x40","\x3a"),
	HX_HCSTRING("scrolllock","\x78","\xfe","\x9d","\x1a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("home","\x1f","\xca","\x12","\x45"),
	HX_HCSTRING("pageup","\x6a","\xb2","\x38","\xe6"),
	HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("pagedown","\x31","\xa6","\x5c","\x60"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),
	HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),
	HX_HCSTRING("numlockclear","\xbc","\xea","\xac","\xf5"),
	HX_HCSTRING("kp_divide","\x13","\x12","\x82","\x5e"),
	HX_HCSTRING("kp_multiply","\x3e","\x1f","\xae","\xdf"),
	HX_HCSTRING("kp_minus","\x16","\x6f","\xc9","\x1d"),
	HX_HCSTRING("kp_plus","\x74","\x67","\xdc","\x26"),
	HX_HCSTRING("kp_enter","\xbe","\x5b","\xe7","\x85"),
	HX_HCSTRING("kp_1","\xd7","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_2","\xd8","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_3","\xd9","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_4","\xda","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_5","\xdb","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_6","\xdc","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_7","\xdd","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_8","\xde","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_9","\xdf","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_0","\xd6","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_period","\x9b","\x43","\x8b","\xda"),
	HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"),
	HX_HCSTRING("power","\x05","\x4c","\x9a","\xc6"),
	HX_HCSTRING("kp_equals","\xd9","\xd0","\x62","\x5f"),
	HX_HCSTRING("f13","\xc8","\x90","\x4d","\x00"),
	HX_HCSTRING("f14","\xc9","\x90","\x4d","\x00"),
	HX_HCSTRING("f15","\xca","\x90","\x4d","\x00"),
	HX_HCSTRING("f16","\xcb","\x90","\x4d","\x00"),
	HX_HCSTRING("f17","\xcc","\x90","\x4d","\x00"),
	HX_HCSTRING("f18","\xcd","\x90","\x4d","\x00"),
	HX_HCSTRING("f19","\xce","\x90","\x4d","\x00"),
	HX_HCSTRING("f20","\xa4","\x91","\x4d","\x00"),
	HX_HCSTRING("f21","\xa5","\x91","\x4d","\x00"),
	HX_HCSTRING("f22","\xa6","\x91","\x4d","\x00"),
	HX_HCSTRING("f23","\xa7","\x91","\x4d","\x00"),
	HX_HCSTRING("f24","\xa8","\x91","\x4d","\x00"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"),
	HX_HCSTRING("menu","\x9f","\x45","\x59","\x48"),
	HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("again","\x60","\x35","\x3d","\x1e"),
	HX_HCSTRING("undo","\x24","\xc6","\xa9","\x4d"),
	HX_HCSTRING("cut","\x82","\x85","\x4b","\x00"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("paste","\x53","\x53","\x56","\xbd"),
	HX_HCSTRING("find","\x39","\xd0","\xbb","\x43"),
	HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48"),
	HX_HCSTRING("volumeup","\xb5","\x3a","\xd5","\x39"),
	HX_HCSTRING("volumedown","\x3c","\x17","\x64","\x3a"),
	HX_HCSTRING("kp_comma","\x7b","\x20","\xbe","\x5f"),
	HX_HCSTRING("kp_equalsas400","\x09","\xea","\xe5","\xc1"),
	HX_HCSTRING("alterase","\x1d","\x1b","\xae","\x0b"),
	HX_HCSTRING("sysreq","\x71","\x12","\xe1","\xf2"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("prior","\x0a","\x59","\x8b","\xc8"),
	HX_HCSTRING("return2","\x82","\x75","\xc2","\xfe"),
	HX_HCSTRING("separator","\x65","\x60","\x7f","\x31"),
	HX_HCSTRING("out","\x8e","\xa0","\x54","\x00"),
	HX_HCSTRING("oper","\xce","\x03","\xb4","\x49"),
	HX_HCSTRING("clearagain","\xb3","\x04","\x1a","\x60"),
	HX_HCSTRING("crsel","\x4b","\x5c","\x5d","\x4c"),
	HX_HCSTRING("exsel","\x07","\xcd","\x21","\x77"),
	HX_HCSTRING("kp_00","\x9a","\x37","\x30","\xe6"),
	HX_HCSTRING("kp_000","\x56","\x6f","\x00","\x84"),
	HX_HCSTRING("thousandsseparator","\xf0","\x9f","\x19","\x09"),
	HX_HCSTRING("decimalseparator","\xb4","\x11","\xc3","\x9e"),
	HX_HCSTRING("currencyunit","\x55","\x4e","\xf3","\xe0"),
	HX_HCSTRING("currencysubunit","\xd3","\x28","\x44","\x32"),
	HX_HCSTRING("kp_leftparen","\x49","\x3c","\xfc","\x76"),
	HX_HCSTRING("kp_rightparen","\x48","\x32","\xab","\xea"),
	HX_HCSTRING("kp_leftbrace","\xb2","\xd5","\x8f","\x72"),
	HX_HCSTRING("kp_rightbrace","\xb1","\xcb","\x3e","\xe6"),
	HX_HCSTRING("kp_tab","\x7b","\x33","\x34","\x84"),
	HX_HCSTRING("kp_backspace","\xe5","\xbe","\xde","\x02"),
	HX_HCSTRING("kp_a","\x07","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_b","\x08","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_c","\x09","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_d","\x0a","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_e","\x0b","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_f","\x0c","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_xor","\xc1","\x48","\x37","\x84"),
	HX_HCSTRING("kp_power","\xab","\x3a","\xfb","\xdb"),
	HX_HCSTRING("kp_percent","\xeb","\x0e","\x51","\x5b"),
	HX_HCSTRING("kp_less","\x73","\x3b","\x32","\x24"),
	HX_HCSTRING("kp_greater","\x20","\xf5","\x36","\x9a"),
	HX_HCSTRING("kp_ampersand","\xdb","\xa5","\x52","\x03"),
	HX_HCSTRING("kp_dblampersand","\x61","\xb1","\x23","\x42"),
	HX_HCSTRING("kp_verticalbar","\x43","\x12","\x24","\x2c"),
	HX_HCSTRING("kp_dblverticalbar","\x49","\x8b","\xf3","\x89"),
	HX_HCSTRING("kp_colon","\x05","\x60","\xbd","\x5f"),
	HX_HCSTRING("kp_hash","\xe8","\x57","\x8a","\x21"),
	HX_HCSTRING("kp_space","\x6c","\x7b","\xc7","\x96"),
	HX_HCSTRING("kp_at","\x8d","\x62","\x30","\xe6"),
	HX_HCSTRING("kp_exclam","\x62","\x58","\x53","\x5b"),
	HX_HCSTRING("kp_memstore","\xc6","\x16","\x90","\x20"),
	HX_HCSTRING("kp_memrecall","\x4c","\x57","\x2a","\x4c"),
	HX_HCSTRING("kp_memclear","\x72","\x74","\xd5","\xe4"),
	HX_HCSTRING("kp_memadd","\xc6","\x01","\x25","\xa4"),
	HX_HCSTRING("kp_memsubtract","\x4f","\x8f","\xa2","\xcd"),
	HX_HCSTRING("kp_memmultiply","\x5f","\xfc","\x1d","\x70"),
	HX_HCSTRING("kp_memdivide","\xf4","\xb4","\x5a","\x0d"),
	HX_HCSTRING("kp_plusminus","\x7c","\x94","\x9c","\xa7"),
	HX_HCSTRING("kp_clear","\x33","\x60","\xbc","\x5d"),
	HX_HCSTRING("kp_clearentry","\x5f","\x7f","\x21","\x70"),
	HX_HCSTRING("kp_binary","\x9b","\x9e","\x7b","\x8c"),
	HX_HCSTRING("kp_octal","\x71","\xcc","\xa3","\x40"),
	HX_HCSTRING("kp_decimal","\xb7","\x18","\x4a","\xc9"),
	HX_HCSTRING("kp_hexadecimal","\x51","\x77","\x89","\xf4"),
	HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71"),
	HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa"),
	HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47"),
	HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77"),
	HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5"),
	HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10"),
	HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b"),
	HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec"),
	HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"),
	HX_HCSTRING("audionext","\xc9","\x20","\xdf","\x7d"),
	HX_HCSTRING("audioprev","\xc9","\x5a","\x3b","\x7f"),
	HX_HCSTRING("audiostop","\xd8","\x8b","\x38","\x81"),
	HX_HCSTRING("audioplay","\xca","\xc9","\x36","\x7f"),
	HX_HCSTRING("audiomute","\xaf","\x0a","\x42","\x7d"),
	HX_HCSTRING("mediaselect","\xe0","\xe2","\xe7","\xc3"),
	HX_HCSTRING("www","\x57","\xb4","\x5a","\x00"),
	HX_HCSTRING("mail","\x37","\x38","\x56","\x48"),
	HX_HCSTRING("calculator","\x02","\x2d","\xd8","\xb7"),
	HX_HCSTRING("computer","\x1b","\x41","\xc6","\x85"),
	HX_HCSTRING("ac_search","\x65","\x9c","\x69","\xdd"),
	HX_HCSTRING("ac_home","\xdc","\x9d","\x1a","\x4f"),
	HX_HCSTRING("ac_back","\xe4","\xad","\x18","\x4b"),
	HX_HCSTRING("ac_forward","\x28","\x42","\x16","\x8f"),
	HX_HCSTRING("ac_stop","\xbf","\xc3","\x63","\x56"),
	HX_HCSTRING("ac_refresh","\x3e","\x3a","\x6c","\x96"),
	HX_HCSTRING("ac_bookmarks","\x20","\x12","\x98","\x7b"),
	HX_HCSTRING("brightnessdown","\xb3","\x42","\xe9","\x8a"),
	HX_HCSTRING("brightnessup","\x6c","\xca","\x4d","\xcf"),
	HX_HCSTRING("displayswitch","\xb6","\x91","\x47","\x52"),
	HX_HCSTRING("kbdillumtoggle","\x48","\x0a","\x5b","\x21"),
	HX_HCSTRING("kbdillumdown","\x16","\x6e","\x75","\xeb"),
	HX_HCSTRING("kbdillumup","\x0f","\x47","\x07","\x31"),
	HX_HCSTRING("eject","\x11","\x2f","\xd6","\x6d"),
	HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),
	::String(null()) };

void Keycodes_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.systems.input.Keycodes","\xc0","\x04","\x9c","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Keycodes_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Keycodes_obj >;
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

void Keycodes_obj::__boot()
{
	unknown= (int)0;
	enter= (int)13;
	escape= (int)27;
	backspace= (int)8;
	tab= (int)9;
	space= (int)32;
	exclaim= (int)33;
	quotedbl= (int)34;
	hash= (int)35;
	percent= (int)37;
	dollar= (int)36;
	ampersand= (int)38;
	quote= (int)39;
	leftparen= (int)40;
	rightparen= (int)41;
	asterisk= (int)42;
	plus= (int)43;
	comma= (int)44;
	minus= (int)45;
	period= (int)46;
	slash= (int)47;
	key_0= (int)48;
	key_1= (int)49;
	key_2= (int)50;
	key_3= (int)51;
	key_4= (int)52;
	key_5= (int)53;
	key_6= (int)54;
	key_7= (int)55;
	key_8= (int)56;
	key_9= (int)57;
	colon= (int)58;
	semicolon= (int)59;
	less= (int)60;
	equals= (int)61;
	greater= (int)62;
	question= (int)63;
	at= (int)64;
	leftbracket= (int)91;
	backslash= (int)92;
	rightbracket= (int)93;
	caret= (int)94;
	underscore= (int)95;
	backquote= (int)96;
	key_a= (int)97;
	key_b= (int)98;
	key_c= (int)99;
	key_d= (int)100;
	key_e= (int)101;
	key_f= (int)102;
	key_g= (int)103;
	key_h= (int)104;
	key_i= (int)105;
	key_j= (int)106;
	key_k= (int)107;
	key_l= (int)108;
	key_m= (int)109;
	key_n= (int)110;
	key_o= (int)111;
	key_p= (int)112;
	key_q= (int)113;
	key_r= (int)114;
	key_s= (int)115;
	key_t= (int)116;
	key_u= (int)117;
	key_v= (int)118;
	key_w= (int)119;
	key_x= (int)120;
	key_y= (int)121;
	key_z= (int)122;
	capslock= (int)1073741881;
	f1= (int)1073741882;
	f2= (int)1073741883;
	f3= (int)1073741884;
	f4= (int)1073741885;
	f5= (int)1073741886;
	f6= (int)1073741887;
	f7= (int)1073741888;
	f8= (int)1073741889;
	f9= (int)1073741890;
	f10= (int)1073741891;
	f11= (int)1073741892;
	f12= (int)1073741893;
	printscreen= (int)1073741894;
	scrolllock= (int)1073741895;
	pause= (int)1073741896;
	insert= (int)1073741897;
	home= (int)1073741898;
	pageup= (int)1073741899;
	_delete= (int)127;
	end= (int)1073741901;
	pagedown= (int)1073741902;
	right= (int)1073741903;
	left= (int)1073741904;
	down= (int)1073741905;
	up= (int)1073741906;
	numlockclear= (int)1073741907;
	kp_divide= (int)1073741908;
	kp_multiply= (int)1073741909;
	kp_minus= (int)1073741910;
	kp_plus= (int)1073741911;
	kp_enter= (int)1073741912;
	kp_1= (int)1073741913;
	kp_2= (int)1073741914;
	kp_3= (int)1073741915;
	kp_4= (int)1073741916;
	kp_5= (int)1073741917;
	kp_6= (int)1073741918;
	kp_7= (int)1073741919;
	kp_8= (int)1073741920;
	kp_9= (int)1073741921;
	kp_0= (int)1073741922;
	kp_period= (int)1073741923;
	application= (int)1073741925;
	power= (int)1073741926;
	kp_equals= (int)1073741927;
	f13= (int)1073741928;
	f14= (int)1073741929;
	f15= (int)1073741930;
	f16= (int)1073741931;
	f17= (int)1073741932;
	f18= (int)1073741933;
	f19= (int)1073741934;
	f20= (int)1073741935;
	f21= (int)1073741936;
	f22= (int)1073741937;
	f23= (int)1073741938;
	f24= (int)1073741939;
	execute= (int)1073741940;
	help= (int)1073741941;
	menu= (int)1073741942;
	select= (int)1073741943;
	stop= (int)1073741944;
	again= (int)1073741945;
	undo= (int)1073741946;
	cut= (int)1073741947;
	copy= (int)1073741948;
	paste= (int)1073741949;
	find= (int)1073741950;
	mute= (int)1073741951;
	volumeup= (int)1073741952;
	volumedown= (int)1073741953;
	kp_comma= (int)1073741957;
	kp_equalsas400= (int)1073741958;
	alterase= (int)1073741977;
	sysreq= (int)1073741978;
	cancel= (int)1073741979;
	clear= (int)1073741980;
	prior= (int)1073741981;
	return2= (int)1073741982;
	separator= (int)1073741983;
	out= (int)1073741984;
	oper= (int)1073741985;
	clearagain= (int)1073741986;
	crsel= (int)1073741987;
	exsel= (int)1073741988;
	kp_00= (int)1073742000;
	kp_000= (int)1073742001;
	thousandsseparator= (int)1073742002;
	decimalseparator= (int)1073742003;
	currencyunit= (int)1073742004;
	currencysubunit= (int)1073742005;
	kp_leftparen= (int)1073742006;
	kp_rightparen= (int)1073742007;
	kp_leftbrace= (int)1073742008;
	kp_rightbrace= (int)1073742009;
	kp_tab= (int)1073742010;
	kp_backspace= (int)1073742011;
	kp_a= (int)1073742012;
	kp_b= (int)1073742013;
	kp_c= (int)1073742014;
	kp_d= (int)1073742015;
	kp_e= (int)1073742016;
	kp_f= (int)1073742017;
	kp_xor= (int)1073742018;
	kp_power= (int)1073742019;
	kp_percent= (int)1073742020;
	kp_less= (int)1073742021;
	kp_greater= (int)1073742022;
	kp_ampersand= (int)1073742023;
	kp_dblampersand= (int)1073742024;
	kp_verticalbar= (int)1073742025;
	kp_dblverticalbar= (int)1073742026;
	kp_colon= (int)1073742027;
	kp_hash= (int)1073742028;
	kp_space= (int)1073742029;
	kp_at= (int)1073742030;
	kp_exclam= (int)1073742031;
	kp_memstore= (int)1073742032;
	kp_memrecall= (int)1073742033;
	kp_memclear= (int)1073742034;
	kp_memadd= (int)1073742035;
	kp_memsubtract= (int)1073742036;
	kp_memmultiply= (int)1073742037;
	kp_memdivide= (int)1073742038;
	kp_plusminus= (int)1073742039;
	kp_clear= (int)1073742040;
	kp_clearentry= (int)1073742041;
	kp_binary= (int)1073742042;
	kp_octal= (int)1073742043;
	kp_decimal= (int)1073742044;
	kp_hexadecimal= (int)1073742045;
	lctrl= (int)1073742048;
	lshift= (int)1073742049;
	lalt= (int)1073742050;
	lmeta= (int)1073742051;
	rctrl= (int)1073742052;
	rshift= (int)1073742053;
	ralt= (int)1073742054;
	rmeta= (int)1073742055;
	mode= (int)1073742081;
	audionext= (int)1073742082;
	audioprev= (int)1073742083;
	audiostop= (int)1073742084;
	audioplay= (int)1073742085;
	audiomute= (int)1073742086;
	mediaselect= (int)1073742087;
	www= (int)1073742088;
	mail= (int)1073742089;
	calculator= (int)1073742090;
	computer= (int)1073742091;
	ac_search= (int)1073742092;
	ac_home= (int)1073742093;
	ac_back= (int)1073742094;
	ac_forward= (int)1073742095;
	ac_stop= (int)1073742096;
	ac_refresh= (int)1073742097;
	ac_bookmarks= (int)1073742098;
	brightnessdown= (int)1073742099;
	brightnessup= (int)1073742100;
	displayswitch= (int)1073742101;
	kbdillumtoggle= (int)1073742102;
	kbdillumdown= (int)1073742103;
	kbdillumup= (int)1073742104;
	eject= (int)1073742105;
	sleep= (int)1073742106;
}

} // end namespace snow
} // end namespace systems
} // end namespace input
