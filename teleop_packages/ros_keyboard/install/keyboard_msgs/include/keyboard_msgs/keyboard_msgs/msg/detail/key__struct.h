// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from keyboard_msgs:msg/Key.idl
// generated code does not contain a copyright notice

#ifndef KEYBOARD_MSGS__MSG__DETAIL__KEY__STRUCT_H_
#define KEYBOARD_MSGS__MSG__DETAIL__KEY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'KEY_UNKNOWN'.
enum
{
  keyboard_msgs__msg__Key__KEY_UNKNOWN = 0
};

/// Constant 'KEY_FIRST'.
enum
{
  keyboard_msgs__msg__Key__KEY_FIRST = 0
};

/// Constant 'KEY_BACKSPACE'.
enum
{
  keyboard_msgs__msg__Key__KEY_BACKSPACE = 8
};

/// Constant 'KEY_TAB'.
enum
{
  keyboard_msgs__msg__Key__KEY_TAB = 9
};

/// Constant 'KEY_CLEAR'.
enum
{
  keyboard_msgs__msg__Key__KEY_CLEAR = 12
};

/// Constant 'KEY_RETURN'.
enum
{
  keyboard_msgs__msg__Key__KEY_RETURN = 13
};

/// Constant 'KEY_PAUSE'.
enum
{
  keyboard_msgs__msg__Key__KEY_PAUSE = 19
};

/// Constant 'KEY_ESCAPE'.
enum
{
  keyboard_msgs__msg__Key__KEY_ESCAPE = 27
};

/// Constant 'KEY_SPACE'.
enum
{
  keyboard_msgs__msg__Key__KEY_SPACE = 32
};

/// Constant 'KEY_EXCLAIM'.
enum
{
  keyboard_msgs__msg__Key__KEY_EXCLAIM = 33
};

/// Constant 'KEY_QUOTEDBL'.
enum
{
  keyboard_msgs__msg__Key__KEY_QUOTEDBL = 34
};

/// Constant 'KEY_HASH'.
enum
{
  keyboard_msgs__msg__Key__KEY_HASH = 35
};

/// Constant 'KEY_DOLLAR'.
enum
{
  keyboard_msgs__msg__Key__KEY_DOLLAR = 36
};

/// Constant 'KEY_AMPERSAND'.
enum
{
  keyboard_msgs__msg__Key__KEY_AMPERSAND = 38
};

/// Constant 'KEY_QUOTE'.
enum
{
  keyboard_msgs__msg__Key__KEY_QUOTE = 39
};

/// Constant 'KEY_LEFTPAREN'.
enum
{
  keyboard_msgs__msg__Key__KEY_LEFTPAREN = 40
};

/// Constant 'KEY_RIGHTPAREN'.
enum
{
  keyboard_msgs__msg__Key__KEY_RIGHTPAREN = 41
};

/// Constant 'KEY_ASTERISK'.
enum
{
  keyboard_msgs__msg__Key__KEY_ASTERISK = 42
};

/// Constant 'KEY_PLUS'.
enum
{
  keyboard_msgs__msg__Key__KEY_PLUS = 43
};

/// Constant 'KEY_COMMA'.
enum
{
  keyboard_msgs__msg__Key__KEY_COMMA = 44
};

/// Constant 'KEY_MINUS'.
enum
{
  keyboard_msgs__msg__Key__KEY_MINUS = 45
};

/// Constant 'KEY_PERIOD'.
enum
{
  keyboard_msgs__msg__Key__KEY_PERIOD = 46
};

/// Constant 'KEY_SLASH'.
enum
{
  keyboard_msgs__msg__Key__KEY_SLASH = 47
};

/// Constant 'KEY_0'.
enum
{
  keyboard_msgs__msg__Key__KEY_0 = 48
};

/// Constant 'KEY_1'.
enum
{
  keyboard_msgs__msg__Key__KEY_1 = 49
};

/// Constant 'KEY_2'.
enum
{
  keyboard_msgs__msg__Key__KEY_2 = 50
};

/// Constant 'KEY_3'.
enum
{
  keyboard_msgs__msg__Key__KEY_3 = 51
};

/// Constant 'KEY_4'.
enum
{
  keyboard_msgs__msg__Key__KEY_4 = 52
};

/// Constant 'KEY_5'.
enum
{
  keyboard_msgs__msg__Key__KEY_5 = 53
};

/// Constant 'KEY_6'.
enum
{
  keyboard_msgs__msg__Key__KEY_6 = 54
};

/// Constant 'KEY_7'.
enum
{
  keyboard_msgs__msg__Key__KEY_7 = 55
};

/// Constant 'KEY_8'.
enum
{
  keyboard_msgs__msg__Key__KEY_8 = 56
};

/// Constant 'KEY_9'.
enum
{
  keyboard_msgs__msg__Key__KEY_9 = 57
};

/// Constant 'KEY_COLON'.
enum
{
  keyboard_msgs__msg__Key__KEY_COLON = 58
};

/// Constant 'KEY_SEMICOLON'.
enum
{
  keyboard_msgs__msg__Key__KEY_SEMICOLON = 59
};

/// Constant 'KEY_LESS'.
enum
{
  keyboard_msgs__msg__Key__KEY_LESS = 60
};

/// Constant 'KEY_EQUALS'.
enum
{
  keyboard_msgs__msg__Key__KEY_EQUALS = 61
};

/// Constant 'KEY_GREATER'.
enum
{
  keyboard_msgs__msg__Key__KEY_GREATER = 62
};

/// Constant 'KEY_QUESTION'.
enum
{
  keyboard_msgs__msg__Key__KEY_QUESTION = 63
};

/// Constant 'KEY_AT'.
enum
{
  keyboard_msgs__msg__Key__KEY_AT = 64
};

/// Constant 'KEY_LEFTBRACKET'.
enum
{
  keyboard_msgs__msg__Key__KEY_LEFTBRACKET = 91
};

/// Constant 'KEY_BACKSLASH'.
enum
{
  keyboard_msgs__msg__Key__KEY_BACKSLASH = 92
};

/// Constant 'KEY_RIGHTBRACKET'.
enum
{
  keyboard_msgs__msg__Key__KEY_RIGHTBRACKET = 93
};

/// Constant 'KEY_CARET'.
enum
{
  keyboard_msgs__msg__Key__KEY_CARET = 94
};

/// Constant 'KEY_UNDERSCORE'.
enum
{
  keyboard_msgs__msg__Key__KEY_UNDERSCORE = 95
};

/// Constant 'KEY_BACKQUOTE'.
enum
{
  keyboard_msgs__msg__Key__KEY_BACKQUOTE = 96
};

/// Constant 'KEY_A'.
enum
{
  keyboard_msgs__msg__Key__KEY_A = 97
};

/// Constant 'KEY_B'.
enum
{
  keyboard_msgs__msg__Key__KEY_B = 98
};

/// Constant 'KEY_C'.
enum
{
  keyboard_msgs__msg__Key__KEY_C = 99
};

/// Constant 'KEY_D'.
enum
{
  keyboard_msgs__msg__Key__KEY_D = 100
};

/// Constant 'KEY_E'.
enum
{
  keyboard_msgs__msg__Key__KEY_E = 101
};

/// Constant 'KEY_F'.
enum
{
  keyboard_msgs__msg__Key__KEY_F = 102
};

/// Constant 'KEY_G'.
enum
{
  keyboard_msgs__msg__Key__KEY_G = 103
};

/// Constant 'KEY_H'.
enum
{
  keyboard_msgs__msg__Key__KEY_H = 104
};

/// Constant 'KEY_I'.
enum
{
  keyboard_msgs__msg__Key__KEY_I = 105
};

/// Constant 'KEY_J'.
enum
{
  keyboard_msgs__msg__Key__KEY_J = 106
};

/// Constant 'KEY_K'.
enum
{
  keyboard_msgs__msg__Key__KEY_K = 107
};

/// Constant 'KEY_L'.
enum
{
  keyboard_msgs__msg__Key__KEY_L = 108
};

/// Constant 'KEY_M'.
enum
{
  keyboard_msgs__msg__Key__KEY_M = 109
};

/// Constant 'KEY_N'.
enum
{
  keyboard_msgs__msg__Key__KEY_N = 110
};

/// Constant 'KEY_O'.
enum
{
  keyboard_msgs__msg__Key__KEY_O = 111
};

/// Constant 'KEY_P'.
enum
{
  keyboard_msgs__msg__Key__KEY_P = 112
};

/// Constant 'KEY_Q'.
enum
{
  keyboard_msgs__msg__Key__KEY_Q = 113
};

/// Constant 'KEY_R'.
enum
{
  keyboard_msgs__msg__Key__KEY_R = 114
};

/// Constant 'KEY_S'.
enum
{
  keyboard_msgs__msg__Key__KEY_S = 115
};

/// Constant 'KEY_T'.
enum
{
  keyboard_msgs__msg__Key__KEY_T = 116
};

/// Constant 'KEY_U'.
enum
{
  keyboard_msgs__msg__Key__KEY_U = 117
};

/// Constant 'KEY_V'.
enum
{
  keyboard_msgs__msg__Key__KEY_V = 118
};

/// Constant 'KEY_W'.
enum
{
  keyboard_msgs__msg__Key__KEY_W = 119
};

/// Constant 'KEY_X'.
enum
{
  keyboard_msgs__msg__Key__KEY_X = 120
};

/// Constant 'KEY_Y'.
enum
{
  keyboard_msgs__msg__Key__KEY_Y = 121
};

/// Constant 'KEY_Z'.
enum
{
  keyboard_msgs__msg__Key__KEY_Z = 122
};

/// Constant 'KEY_DELETE'.
enum
{
  keyboard_msgs__msg__Key__KEY_DELETE = 127
};

/// Constant 'KEY_WORLD_0'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_0 = 160
};

/// Constant 'KEY_WORLD_1'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_1 = 161
};

/// Constant 'KEY_WORLD_2'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_2 = 162
};

/// Constant 'KEY_WORLD_3'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_3 = 163
};

/// Constant 'KEY_WORLD_4'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_4 = 164
};

/// Constant 'KEY_WORLD_5'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_5 = 165
};

/// Constant 'KEY_WORLD_6'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_6 = 166
};

/// Constant 'KEY_WORLD_7'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_7 = 167
};

/// Constant 'KEY_WORLD_8'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_8 = 168
};

/// Constant 'KEY_WORLD_9'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_9 = 169
};

/// Constant 'KEY_WORLD_10'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_10 = 170
};

/// Constant 'KEY_WORLD_11'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_11 = 171
};

/// Constant 'KEY_WORLD_12'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_12 = 172
};

/// Constant 'KEY_WORLD_13'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_13 = 173
};

/// Constant 'KEY_WORLD_14'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_14 = 174
};

/// Constant 'KEY_WORLD_15'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_15 = 175
};

/// Constant 'KEY_WORLD_16'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_16 = 176
};

/// Constant 'KEY_WORLD_17'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_17 = 177
};

/// Constant 'KEY_WORLD_18'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_18 = 178
};

/// Constant 'KEY_WORLD_19'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_19 = 179
};

/// Constant 'KEY_WORLD_20'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_20 = 180
};

/// Constant 'KEY_WORLD_21'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_21 = 181
};

/// Constant 'KEY_WORLD_22'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_22 = 182
};

/// Constant 'KEY_WORLD_23'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_23 = 183
};

/// Constant 'KEY_WORLD_24'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_24 = 184
};

/// Constant 'KEY_WORLD_25'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_25 = 185
};

/// Constant 'KEY_WORLD_26'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_26 = 186
};

/// Constant 'KEY_WORLD_27'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_27 = 187
};

/// Constant 'KEY_WORLD_28'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_28 = 188
};

/// Constant 'KEY_WORLD_29'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_29 = 189
};

/// Constant 'KEY_WORLD_30'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_30 = 190
};

/// Constant 'KEY_WORLD_31'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_31 = 191
};

/// Constant 'KEY_WORLD_32'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_32 = 192
};

/// Constant 'KEY_WORLD_33'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_33 = 193
};

/// Constant 'KEY_WORLD_34'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_34 = 194
};

/// Constant 'KEY_WORLD_35'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_35 = 195
};

/// Constant 'KEY_WORLD_36'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_36 = 196
};

/// Constant 'KEY_WORLD_37'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_37 = 197
};

/// Constant 'KEY_WORLD_38'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_38 = 198
};

/// Constant 'KEY_WORLD_39'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_39 = 199
};

/// Constant 'KEY_WORLD_40'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_40 = 200
};

/// Constant 'KEY_WORLD_41'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_41 = 201
};

/// Constant 'KEY_WORLD_42'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_42 = 202
};

/// Constant 'KEY_WORLD_43'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_43 = 203
};

/// Constant 'KEY_WORLD_44'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_44 = 204
};

/// Constant 'KEY_WORLD_45'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_45 = 205
};

/// Constant 'KEY_WORLD_46'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_46 = 206
};

/// Constant 'KEY_WORLD_47'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_47 = 207
};

/// Constant 'KEY_WORLD_48'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_48 = 208
};

/// Constant 'KEY_WORLD_49'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_49 = 209
};

/// Constant 'KEY_WORLD_50'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_50 = 210
};

/// Constant 'KEY_WORLD_51'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_51 = 211
};

/// Constant 'KEY_WORLD_52'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_52 = 212
};

/// Constant 'KEY_WORLD_53'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_53 = 213
};

/// Constant 'KEY_WORLD_54'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_54 = 214
};

/// Constant 'KEY_WORLD_55'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_55 = 215
};

/// Constant 'KEY_WORLD_56'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_56 = 216
};

/// Constant 'KEY_WORLD_57'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_57 = 217
};

/// Constant 'KEY_WORLD_58'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_58 = 218
};

/// Constant 'KEY_WORLD_59'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_59 = 219
};

/// Constant 'KEY_WORLD_60'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_60 = 220
};

/// Constant 'KEY_WORLD_61'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_61 = 221
};

/// Constant 'KEY_WORLD_62'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_62 = 222
};

/// Constant 'KEY_WORLD_63'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_63 = 223
};

/// Constant 'KEY_WORLD_64'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_64 = 224
};

/// Constant 'KEY_WORLD_65'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_65 = 225
};

/// Constant 'KEY_WORLD_66'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_66 = 226
};

/// Constant 'KEY_WORLD_67'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_67 = 227
};

/// Constant 'KEY_WORLD_68'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_68 = 228
};

/// Constant 'KEY_WORLD_69'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_69 = 229
};

/// Constant 'KEY_WORLD_70'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_70 = 230
};

/// Constant 'KEY_WORLD_71'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_71 = 231
};

/// Constant 'KEY_WORLD_72'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_72 = 232
};

/// Constant 'KEY_WORLD_73'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_73 = 233
};

/// Constant 'KEY_WORLD_74'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_74 = 234
};

/// Constant 'KEY_WORLD_75'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_75 = 235
};

/// Constant 'KEY_WORLD_76'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_76 = 236
};

/// Constant 'KEY_WORLD_77'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_77 = 237
};

/// Constant 'KEY_WORLD_78'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_78 = 238
};

/// Constant 'KEY_WORLD_79'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_79 = 239
};

/// Constant 'KEY_WORLD_80'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_80 = 240
};

/// Constant 'KEY_WORLD_81'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_81 = 241
};

/// Constant 'KEY_WORLD_82'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_82 = 242
};

/// Constant 'KEY_WORLD_83'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_83 = 243
};

/// Constant 'KEY_WORLD_84'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_84 = 244
};

/// Constant 'KEY_WORLD_85'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_85 = 245
};

/// Constant 'KEY_WORLD_86'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_86 = 246
};

/// Constant 'KEY_WORLD_87'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_87 = 247
};

/// Constant 'KEY_WORLD_88'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_88 = 248
};

/// Constant 'KEY_WORLD_89'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_89 = 249
};

/// Constant 'KEY_WORLD_90'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_90 = 250
};

/// Constant 'KEY_WORLD_91'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_91 = 251
};

/// Constant 'KEY_WORLD_92'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_92 = 252
};

/// Constant 'KEY_WORLD_93'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_93 = 253
};

/// Constant 'KEY_WORLD_94'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_94 = 254
};

/// Constant 'KEY_WORLD_95'.
enum
{
  keyboard_msgs__msg__Key__KEY_WORLD_95 = 255
};

/// Constant 'KEY_KP0'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP0 = 256
};

/// Constant 'KEY_KP1'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP1 = 257
};

/// Constant 'KEY_KP2'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP2 = 258
};

/// Constant 'KEY_KP3'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP3 = 259
};

/// Constant 'KEY_KP4'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP4 = 260
};

/// Constant 'KEY_KP5'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP5 = 261
};

/// Constant 'KEY_KP6'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP6 = 262
};

/// Constant 'KEY_KP7'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP7 = 263
};

/// Constant 'KEY_KP8'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP8 = 264
};

/// Constant 'KEY_KP9'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP9 = 265
};

/// Constant 'KEY_KP_PERIOD'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP_PERIOD = 266
};

/// Constant 'KEY_KP_DIVIDE'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP_DIVIDE = 267
};

/// Constant 'KEY_KP_MULTIPLY'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP_MULTIPLY = 268
};

/// Constant 'KEY_KP_MINUS'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP_MINUS = 269
};

/// Constant 'KEY_KP_PLUS'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP_PLUS = 270
};

/// Constant 'KEY_KP_ENTER'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP_ENTER = 271
};

/// Constant 'KEY_KP_EQUALS'.
enum
{
  keyboard_msgs__msg__Key__KEY_KP_EQUALS = 272
};

/// Constant 'KEY_UP'.
enum
{
  keyboard_msgs__msg__Key__KEY_UP = 273
};

/// Constant 'KEY_DOWN'.
enum
{
  keyboard_msgs__msg__Key__KEY_DOWN = 274
};

/// Constant 'KEY_RIGHT'.
enum
{
  keyboard_msgs__msg__Key__KEY_RIGHT = 275
};

/// Constant 'KEY_LEFT'.
enum
{
  keyboard_msgs__msg__Key__KEY_LEFT = 276
};

/// Constant 'KEY_INSERT'.
enum
{
  keyboard_msgs__msg__Key__KEY_INSERT = 277
};

/// Constant 'KEY_HOME'.
enum
{
  keyboard_msgs__msg__Key__KEY_HOME = 278
};

/// Constant 'KEY_END'.
enum
{
  keyboard_msgs__msg__Key__KEY_END = 279
};

/// Constant 'KEY_PAGEUP'.
enum
{
  keyboard_msgs__msg__Key__KEY_PAGEUP = 280
};

/// Constant 'KEY_PAGEDOWN'.
enum
{
  keyboard_msgs__msg__Key__KEY_PAGEDOWN = 281
};

/// Constant 'KEY_F1'.
enum
{
  keyboard_msgs__msg__Key__KEY_F1 = 282
};

/// Constant 'KEY_F2'.
enum
{
  keyboard_msgs__msg__Key__KEY_F2 = 283
};

/// Constant 'KEY_F3'.
enum
{
  keyboard_msgs__msg__Key__KEY_F3 = 284
};

/// Constant 'KEY_F4'.
enum
{
  keyboard_msgs__msg__Key__KEY_F4 = 285
};

/// Constant 'KEY_F5'.
enum
{
  keyboard_msgs__msg__Key__KEY_F5 = 286
};

/// Constant 'KEY_F6'.
enum
{
  keyboard_msgs__msg__Key__KEY_F6 = 287
};

/// Constant 'KEY_F7'.
enum
{
  keyboard_msgs__msg__Key__KEY_F7 = 288
};

/// Constant 'KEY_F8'.
enum
{
  keyboard_msgs__msg__Key__KEY_F8 = 289
};

/// Constant 'KEY_F9'.
enum
{
  keyboard_msgs__msg__Key__KEY_F9 = 290
};

/// Constant 'KEY_F10'.
enum
{
  keyboard_msgs__msg__Key__KEY_F10 = 291
};

/// Constant 'KEY_F11'.
enum
{
  keyboard_msgs__msg__Key__KEY_F11 = 292
};

/// Constant 'KEY_F12'.
enum
{
  keyboard_msgs__msg__Key__KEY_F12 = 293
};

/// Constant 'KEY_F13'.
enum
{
  keyboard_msgs__msg__Key__KEY_F13 = 294
};

/// Constant 'KEY_F14'.
enum
{
  keyboard_msgs__msg__Key__KEY_F14 = 295
};

/// Constant 'KEY_F15'.
enum
{
  keyboard_msgs__msg__Key__KEY_F15 = 296
};

/// Constant 'KEY_NUMLOCK'.
enum
{
  keyboard_msgs__msg__Key__KEY_NUMLOCK = 300
};

/// Constant 'KEY_CAPSLOCK'.
enum
{
  keyboard_msgs__msg__Key__KEY_CAPSLOCK = 301
};

/// Constant 'KEY_SCROLLOCK'.
enum
{
  keyboard_msgs__msg__Key__KEY_SCROLLOCK = 302
};

/// Constant 'KEY_RSHIFT'.
enum
{
  keyboard_msgs__msg__Key__KEY_RSHIFT = 303
};

/// Constant 'KEY_LSHIFT'.
enum
{
  keyboard_msgs__msg__Key__KEY_LSHIFT = 304
};

/// Constant 'KEY_RCTRL'.
enum
{
  keyboard_msgs__msg__Key__KEY_RCTRL = 305
};

/// Constant 'KEY_LCTRL'.
enum
{
  keyboard_msgs__msg__Key__KEY_LCTRL = 306
};

/// Constant 'KEY_RALT'.
enum
{
  keyboard_msgs__msg__Key__KEY_RALT = 307
};

/// Constant 'KEY_LALT'.
enum
{
  keyboard_msgs__msg__Key__KEY_LALT = 308
};

/// Constant 'KEY_RMETA'.
enum
{
  keyboard_msgs__msg__Key__KEY_RMETA = 309
};

/// Constant 'KEY_LMETA'.
enum
{
  keyboard_msgs__msg__Key__KEY_LMETA = 310
};

/// Constant 'KEY_LSUPER'.
enum
{
  keyboard_msgs__msg__Key__KEY_LSUPER = 311
};

/// Constant 'KEY_RSUPER'.
enum
{
  keyboard_msgs__msg__Key__KEY_RSUPER = 312
};

/// Constant 'KEY_MODE'.
enum
{
  keyboard_msgs__msg__Key__KEY_MODE = 313
};

/// Constant 'KEY_COMPOSE'.
enum
{
  keyboard_msgs__msg__Key__KEY_COMPOSE = 314
};

/// Constant 'KEY_HELP'.
enum
{
  keyboard_msgs__msg__Key__KEY_HELP = 315
};

/// Constant 'KEY_PRINT'.
enum
{
  keyboard_msgs__msg__Key__KEY_PRINT = 316
};

/// Constant 'KEY_SYSREQ'.
enum
{
  keyboard_msgs__msg__Key__KEY_SYSREQ = 317
};

/// Constant 'KEY_BREAK'.
enum
{
  keyboard_msgs__msg__Key__KEY_BREAK = 318
};

/// Constant 'KEY_MENU'.
enum
{
  keyboard_msgs__msg__Key__KEY_MENU = 319
};

/// Constant 'KEY_POWER'.
enum
{
  keyboard_msgs__msg__Key__KEY_POWER = 320
};

/// Constant 'KEY_EURO'.
enum
{
  keyboard_msgs__msg__Key__KEY_EURO = 321
};

/// Constant 'KEY_UNDO'.
enum
{
  keyboard_msgs__msg__Key__KEY_UNDO = 322
};

/// Constant 'MODIFIER_NONE'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_NONE = 0
};

/// Constant 'MODIFIER_LSHIFT'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_LSHIFT = 1
};

/// Constant 'MODIFIER_RSHIFT'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_RSHIFT = 2
};

/// Constant 'MODIFIER_LCTRL'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_LCTRL = 64
};

/// Constant 'MODIFIER_RCTRL'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_RCTRL = 128
};

/// Constant 'MODIFIER_LALT'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_LALT = 256
};

/// Constant 'MODIFIER_RALT'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_RALT = 512
};

/// Constant 'MODIFIER_LMETA'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_LMETA = 1024
};

/// Constant 'MODIFIER_RMETA'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_RMETA = 2048
};

/// Constant 'MODIFIER_NUM'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_NUM = 4096
};

/// Constant 'MODIFIER_CAPS'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_CAPS = 8192
};

/// Constant 'MODIFIER_MODE'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_MODE = 16384
};

/// Constant 'MODIFIER_RESERVED'.
enum
{
  keyboard_msgs__msg__Key__MODIFIER_RESERVED = 32768
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Key in the package keyboard_msgs.
typedef struct keyboard_msgs__msg__Key
{
  std_msgs__msg__Header header;
  uint16_t code;
  uint16_t modifiers;
} keyboard_msgs__msg__Key;

// Struct for a sequence of keyboard_msgs__msg__Key.
typedef struct keyboard_msgs__msg__Key__Sequence
{
  keyboard_msgs__msg__Key * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} keyboard_msgs__msg__Key__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KEYBOARD_MSGS__MSG__DETAIL__KEY__STRUCT_H_
