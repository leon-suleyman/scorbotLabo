#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to keyboard_msgs__msg__Key

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Key {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub modifiers: u16,

}

impl Key {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_UNKNOWN: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_FIRST: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_BACKSPACE: i32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_TAB: i32 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_CLEAR: i32 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RETURN: i32 = 13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PAUSE: i32 = 19;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_ESCAPE: i32 = 27;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_SPACE: i32 = 32;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_EXCLAIM: i32 = 33;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_QUOTEDBL: i32 = 34;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_HASH: i32 = 35;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_DOLLAR: i32 = 36;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_AMPERSAND: i32 = 38;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_QUOTE: i32 = 39;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LEFTPAREN: i32 = 40;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RIGHTPAREN: i32 = 41;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_ASTERISK: i32 = 42;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PLUS: i32 = 43;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_COMMA: i32 = 44;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_MINUS: i32 = 45;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PERIOD: i32 = 46;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_SLASH: i32 = 47;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_0: i32 = 48;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_1: i32 = 49;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_2: i32 = 50;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_3: i32 = 51;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_4: i32 = 52;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_5: i32 = 53;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_6: i32 = 54;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_7: i32 = 55;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_8: i32 = 56;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_9: i32 = 57;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_COLON: i32 = 58;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_SEMICOLON: i32 = 59;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LESS: i32 = 60;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_EQUALS: i32 = 61;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_GREATER: i32 = 62;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_QUESTION: i32 = 63;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_AT: i32 = 64;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LEFTBRACKET: i32 = 91;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_BACKSLASH: i32 = 92;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RIGHTBRACKET: i32 = 93;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_CARET: i32 = 94;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_UNDERSCORE: i32 = 95;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_BACKQUOTE: i32 = 96;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_A: i32 = 97;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_B: i32 = 98;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_C: i32 = 99;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_D: i32 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_E: i32 = 101;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F: i32 = 102;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_G: i32 = 103;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_H: i32 = 104;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_I: i32 = 105;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_J: i32 = 106;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_K: i32 = 107;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_L: i32 = 108;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_M: i32 = 109;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_N: i32 = 110;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_O: i32 = 111;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_P: i32 = 112;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_Q: i32 = 113;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_R: i32 = 114;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_S: i32 = 115;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_T: i32 = 116;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_U: i32 = 117;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_V: i32 = 118;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_W: i32 = 119;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_X: i32 = 120;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_Y: i32 = 121;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_Z: i32 = 122;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_DELETE: i32 = 127;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_0: i32 = 160;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_1: i32 = 161;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_2: i32 = 162;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_3: i32 = 163;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_4: i32 = 164;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_5: i32 = 165;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_6: i32 = 166;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_7: i32 = 167;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_8: i32 = 168;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_9: i32 = 169;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_10: i32 = 170;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_11: i32 = 171;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_12: i32 = 172;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_13: i32 = 173;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_14: i32 = 174;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_15: i32 = 175;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_16: i32 = 176;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_17: i32 = 177;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_18: i32 = 178;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_19: i32 = 179;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_20: i32 = 180;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_21: i32 = 181;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_22: i32 = 182;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_23: i32 = 183;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_24: i32 = 184;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_25: i32 = 185;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_26: i32 = 186;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_27: i32 = 187;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_28: i32 = 188;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_29: i32 = 189;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_30: i32 = 190;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_31: i32 = 191;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_32: i32 = 192;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_33: i32 = 193;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_34: i32 = 194;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_35: i32 = 195;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_36: i32 = 196;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_37: i32 = 197;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_38: i32 = 198;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_39: i32 = 199;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_40: i32 = 200;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_41: i32 = 201;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_42: i32 = 202;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_43: i32 = 203;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_44: i32 = 204;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_45: i32 = 205;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_46: i32 = 206;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_47: i32 = 207;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_48: i32 = 208;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_49: i32 = 209;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_50: i32 = 210;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_51: i32 = 211;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_52: i32 = 212;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_53: i32 = 213;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_54: i32 = 214;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_55: i32 = 215;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_56: i32 = 216;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_57: i32 = 217;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_58: i32 = 218;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_59: i32 = 219;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_60: i32 = 220;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_61: i32 = 221;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_62: i32 = 222;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_63: i32 = 223;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_64: i32 = 224;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_65: i32 = 225;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_66: i32 = 226;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_67: i32 = 227;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_68: i32 = 228;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_69: i32 = 229;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_70: i32 = 230;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_71: i32 = 231;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_72: i32 = 232;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_73: i32 = 233;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_74: i32 = 234;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_75: i32 = 235;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_76: i32 = 236;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_77: i32 = 237;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_78: i32 = 238;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_79: i32 = 239;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_80: i32 = 240;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_81: i32 = 241;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_82: i32 = 242;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_83: i32 = 243;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_84: i32 = 244;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_85: i32 = 245;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_86: i32 = 246;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_87: i32 = 247;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_88: i32 = 248;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_89: i32 = 249;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_90: i32 = 250;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_91: i32 = 251;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_92: i32 = 252;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_93: i32 = 253;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_94: i32 = 254;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_WORLD_95: i32 = 255;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP0: i32 = 256;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP1: i32 = 257;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP2: i32 = 258;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP3: i32 = 259;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP4: i32 = 260;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP5: i32 = 261;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP6: i32 = 262;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP7: i32 = 263;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP8: i32 = 264;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP9: i32 = 265;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_PERIOD: i32 = 266;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_DIVIDE: i32 = 267;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_MULTIPLY: i32 = 268;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_MINUS: i32 = 269;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_PLUS: i32 = 270;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_ENTER: i32 = 271;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_KP_EQUALS: i32 = 272;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_UP: i32 = 273;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_DOWN: i32 = 274;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RIGHT: i32 = 275;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LEFT: i32 = 276;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_INSERT: i32 = 277;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_HOME: i32 = 278;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_END: i32 = 279;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PAGEUP: i32 = 280;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PAGEDOWN: i32 = 281;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F1: i32 = 282;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F2: i32 = 283;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F3: i32 = 284;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F4: i32 = 285;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F5: i32 = 286;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F6: i32 = 287;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F7: i32 = 288;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F8: i32 = 289;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F9: i32 = 290;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F10: i32 = 291;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F11: i32 = 292;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F12: i32 = 293;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F13: i32 = 294;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F14: i32 = 295;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_F15: i32 = 296;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_NUMLOCK: i32 = 300;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_CAPSLOCK: i32 = 301;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_SCROLLOCK: i32 = 302;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RSHIFT: i32 = 303;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LSHIFT: i32 = 304;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RCTRL: i32 = 305;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LCTRL: i32 = 306;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RALT: i32 = 307;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LALT: i32 = 308;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RMETA: i32 = 309;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LMETA: i32 = 310;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_LSUPER: i32 = 311;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_RSUPER: i32 = 312;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_MODE: i32 = 313;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_COMPOSE: i32 = 314;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_HELP: i32 = 315;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_PRINT: i32 = 316;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_SYSREQ: i32 = 317;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_BREAK: i32 = 318;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_MENU: i32 = 319;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_POWER: i32 = 320;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_EURO: i32 = 321;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const KEY_UNDO: i32 = 322;


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Key::default())
  }
}

impl rosidl_runtime_rs::Message for Key {
  type RmwMsg = super::msg::rmw::Key;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        code: msg.code,
        modifiers: msg.modifiers,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      code: msg.code,
      modifiers: msg.modifiers,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      code: msg.code,
      modifiers: msg.modifiers,
    }
  }
}


