#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "keyboard_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__keyboard_msgs__msg__Key() -> *const std::ffi::c_void;
}

#[link(name = "keyboard_msgs__rosidl_generator_c")]
extern "C" {
    fn keyboard_msgs__msg__Key__init(msg: *mut Key) -> bool;
    fn keyboard_msgs__msg__Key__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Key>, size: usize) -> bool;
    fn keyboard_msgs__msg__Key__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Key>);
    fn keyboard_msgs__msg__Key__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Key>, out_seq: *mut rosidl_runtime_rs::Sequence<Key>) -> bool;
}

// Corresponds to keyboard_msgs__msg__Key
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Key {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub modifiers: u16,

}

impl Key {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_UNKNOWN: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_FIRST: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_BACKSPACE: u16 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_TAB: u16 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_CLEAR: u16 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RETURN: u16 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PAUSE: u16 = 19;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_ESCAPE: u16 = 27;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_SPACE: u16 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_EXCLAIM: u16 = 33;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_QUOTEDBL: u16 = 34;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_HASH: u16 = 35;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_DOLLAR: u16 = 36;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_AMPERSAND: u16 = 38;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_QUOTE: u16 = 39;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LEFTPAREN: u16 = 40;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RIGHTPAREN: u16 = 41;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_ASTERISK: u16 = 42;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PLUS: u16 = 43;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_COMMA: u16 = 44;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_MINUS: u16 = 45;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PERIOD: u16 = 46;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_SLASH: u16 = 47;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_0: u16 = 48;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_1: u16 = 49;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_2: u16 = 50;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_3: u16 = 51;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_4: u16 = 52;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_5: u16 = 53;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_6: u16 = 54;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_7: u16 = 55;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_8: u16 = 56;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_9: u16 = 57;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_COLON: u16 = 58;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_SEMICOLON: u16 = 59;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LESS: u16 = 60;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_EQUALS: u16 = 61;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_GREATER: u16 = 62;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_QUESTION: u16 = 63;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_AT: u16 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LEFTBRACKET: u16 = 91;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_BACKSLASH: u16 = 92;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RIGHTBRACKET: u16 = 93;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_CARET: u16 = 94;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_UNDERSCORE: u16 = 95;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_BACKQUOTE: u16 = 96;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_A: u16 = 97;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_B: u16 = 98;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_C: u16 = 99;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_D: u16 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_E: u16 = 101;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F: u16 = 102;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_G: u16 = 103;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_H: u16 = 104;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_I: u16 = 105;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_J: u16 = 106;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_K: u16 = 107;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_L: u16 = 108;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_M: u16 = 109;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_N: u16 = 110;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_O: u16 = 111;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_P: u16 = 112;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_Q: u16 = 113;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_R: u16 = 114;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_S: u16 = 115;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_T: u16 = 116;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_U: u16 = 117;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_V: u16 = 118;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_W: u16 = 119;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_X: u16 = 120;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_Y: u16 = 121;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_Z: u16 = 122;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_DELETE: u16 = 127;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_0: u16 = 160;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_1: u16 = 161;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_2: u16 = 162;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_3: u16 = 163;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_4: u16 = 164;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_5: u16 = 165;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_6: u16 = 166;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_7: u16 = 167;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_8: u16 = 168;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_9: u16 = 169;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_10: u16 = 170;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_11: u16 = 171;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_12: u16 = 172;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_13: u16 = 173;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_14: u16 = 174;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_15: u16 = 175;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_16: u16 = 176;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_17: u16 = 177;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_18: u16 = 178;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_19: u16 = 179;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_20: u16 = 180;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_21: u16 = 181;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_22: u16 = 182;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_23: u16 = 183;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_24: u16 = 184;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_25: u16 = 185;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_26: u16 = 186;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_27: u16 = 187;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_28: u16 = 188;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_29: u16 = 189;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_30: u16 = 190;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_31: u16 = 191;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_32: u16 = 192;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_33: u16 = 193;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_34: u16 = 194;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_35: u16 = 195;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_36: u16 = 196;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_37: u16 = 197;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_38: u16 = 198;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_39: u16 = 199;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_40: u16 = 200;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_41: u16 = 201;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_42: u16 = 202;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_43: u16 = 203;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_44: u16 = 204;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_45: u16 = 205;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_46: u16 = 206;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_47: u16 = 207;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_48: u16 = 208;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_49: u16 = 209;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_50: u16 = 210;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_51: u16 = 211;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_52: u16 = 212;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_53: u16 = 213;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_54: u16 = 214;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_55: u16 = 215;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_56: u16 = 216;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_57: u16 = 217;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_58: u16 = 218;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_59: u16 = 219;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_60: u16 = 220;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_61: u16 = 221;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_62: u16 = 222;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_63: u16 = 223;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_64: u16 = 224;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_65: u16 = 225;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_66: u16 = 226;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_67: u16 = 227;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_68: u16 = 228;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_69: u16 = 229;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_70: u16 = 230;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_71: u16 = 231;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_72: u16 = 232;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_73: u16 = 233;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_74: u16 = 234;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_75: u16 = 235;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_76: u16 = 236;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_77: u16 = 237;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_78: u16 = 238;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_79: u16 = 239;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_80: u16 = 240;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_81: u16 = 241;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_82: u16 = 242;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_83: u16 = 243;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_84: u16 = 244;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_85: u16 = 245;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_86: u16 = 246;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_87: u16 = 247;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_88: u16 = 248;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_89: u16 = 249;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_90: u16 = 250;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_91: u16 = 251;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_92: u16 = 252;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_93: u16 = 253;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_94: u16 = 254;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_95: u16 = 255;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP0: u16 = 256;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP1: u16 = 257;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP2: u16 = 258;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP3: u16 = 259;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP4: u16 = 260;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP5: u16 = 261;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP6: u16 = 262;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP7: u16 = 263;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP8: u16 = 264;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP9: u16 = 265;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_PERIOD: u16 = 266;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_DIVIDE: u16 = 267;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_MULTIPLY: u16 = 268;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_MINUS: u16 = 269;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_PLUS: u16 = 270;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_ENTER: u16 = 271;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_EQUALS: u16 = 272;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_UP: u16 = 273;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_DOWN: u16 = 274;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RIGHT: u16 = 275;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LEFT: u16 = 276;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_INSERT: u16 = 277;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_HOME: u16 = 278;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_END: u16 = 279;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PAGEUP: u16 = 280;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PAGEDOWN: u16 = 281;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F1: u16 = 282;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F2: u16 = 283;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F3: u16 = 284;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F4: u16 = 285;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F5: u16 = 286;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F6: u16 = 287;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F7: u16 = 288;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F8: u16 = 289;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F9: u16 = 290;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F10: u16 = 291;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F11: u16 = 292;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F12: u16 = 293;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F13: u16 = 294;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F14: u16 = 295;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F15: u16 = 296;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_NUMLOCK: u16 = 300;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_CAPSLOCK: u16 = 301;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_SCROLLOCK: u16 = 302;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RSHIFT: u16 = 303;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LSHIFT: u16 = 304;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RCTRL: u16 = 305;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LCTRL: u16 = 306;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RALT: u16 = 307;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LALT: u16 = 308;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RMETA: u16 = 309;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LMETA: u16 = 310;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LSUPER: u16 = 311;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RSUPER: u16 = 312;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_MODE: u16 = 313;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_COMPOSE: u16 = 314;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_HELP: u16 = 315;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PRINT: u16 = 316;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_SYSREQ: u16 = 317;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_BREAK: u16 = 318;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_MENU: u16 = 319;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_POWER: u16 = 320;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_EURO: u16 = 321;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_UNDO: u16 = 322;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_NONE: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_LSHIFT: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_RSHIFT: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_LCTRL: u16 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_RCTRL: u16 = 128;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_LALT: u16 = 256;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_RALT: u16 = 512;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_LMETA: u16 = 1024;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_RMETA: u16 = 2048;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_NUM: u16 = 4096;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_CAPS: u16 = 8192;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_MODE: u16 = 16384;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODIFIER_RESERVED: u16 = 32768;

}


impl Default for Key {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !keyboard_msgs__msg__Key__init(&mut msg as *mut _) {
        panic!("Call to keyboard_msgs__msg__Key__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Key {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { keyboard_msgs__msg__Key__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { keyboard_msgs__msg__Key__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { keyboard_msgs__msg__Key__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Key {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Key where Self: Sized {
  const TYPE_NAME: &'static str = "keyboard_msgs/msg/Key";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__keyboard_msgs__msg__Key() }
  }
}


