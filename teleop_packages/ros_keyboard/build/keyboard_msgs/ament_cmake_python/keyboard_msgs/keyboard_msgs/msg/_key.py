# generated from rosidl_generator_py/resource/_idl.py.em
# with input from keyboard_msgs:msg/Key.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Key(type):
    """Metaclass of message 'Key'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'KEY_UNKNOWN': 0,
        'KEY_FIRST': 0,
        'KEY_BACKSPACE': 8,
        'KEY_TAB': 9,
        'KEY_CLEAR': 12,
        'KEY_RETURN': 13,
        'KEY_PAUSE': 19,
        'KEY_ESCAPE': 27,
        'KEY_SPACE': 32,
        'KEY_EXCLAIM': 33,
        'KEY_QUOTEDBL': 34,
        'KEY_HASH': 35,
        'KEY_DOLLAR': 36,
        'KEY_AMPERSAND': 38,
        'KEY_QUOTE': 39,
        'KEY_LEFTPAREN': 40,
        'KEY_RIGHTPAREN': 41,
        'KEY_ASTERISK': 42,
        'KEY_PLUS': 43,
        'KEY_COMMA': 44,
        'KEY_MINUS': 45,
        'KEY_PERIOD': 46,
        'KEY_SLASH': 47,
        'KEY_0': 48,
        'KEY_1': 49,
        'KEY_2': 50,
        'KEY_3': 51,
        'KEY_4': 52,
        'KEY_5': 53,
        'KEY_6': 54,
        'KEY_7': 55,
        'KEY_8': 56,
        'KEY_9': 57,
        'KEY_COLON': 58,
        'KEY_SEMICOLON': 59,
        'KEY_LESS': 60,
        'KEY_EQUALS': 61,
        'KEY_GREATER': 62,
        'KEY_QUESTION': 63,
        'KEY_AT': 64,
        'KEY_LEFTBRACKET': 91,
        'KEY_BACKSLASH': 92,
        'KEY_RIGHTBRACKET': 93,
        'KEY_CARET': 94,
        'KEY_UNDERSCORE': 95,
        'KEY_BACKQUOTE': 96,
        'KEY_A': 97,
        'KEY_B': 98,
        'KEY_C': 99,
        'KEY_D': 100,
        'KEY_E': 101,
        'KEY_F': 102,
        'KEY_G': 103,
        'KEY_H': 104,
        'KEY_I': 105,
        'KEY_J': 106,
        'KEY_K': 107,
        'KEY_L': 108,
        'KEY_M': 109,
        'KEY_N': 110,
        'KEY_O': 111,
        'KEY_P': 112,
        'KEY_Q': 113,
        'KEY_R': 114,
        'KEY_S': 115,
        'KEY_T': 116,
        'KEY_U': 117,
        'KEY_V': 118,
        'KEY_W': 119,
        'KEY_X': 120,
        'KEY_Y': 121,
        'KEY_Z': 122,
        'KEY_DELETE': 127,
        'KEY_WORLD_0': 160,
        'KEY_WORLD_1': 161,
        'KEY_WORLD_2': 162,
        'KEY_WORLD_3': 163,
        'KEY_WORLD_4': 164,
        'KEY_WORLD_5': 165,
        'KEY_WORLD_6': 166,
        'KEY_WORLD_7': 167,
        'KEY_WORLD_8': 168,
        'KEY_WORLD_9': 169,
        'KEY_WORLD_10': 170,
        'KEY_WORLD_11': 171,
        'KEY_WORLD_12': 172,
        'KEY_WORLD_13': 173,
        'KEY_WORLD_14': 174,
        'KEY_WORLD_15': 175,
        'KEY_WORLD_16': 176,
        'KEY_WORLD_17': 177,
        'KEY_WORLD_18': 178,
        'KEY_WORLD_19': 179,
        'KEY_WORLD_20': 180,
        'KEY_WORLD_21': 181,
        'KEY_WORLD_22': 182,
        'KEY_WORLD_23': 183,
        'KEY_WORLD_24': 184,
        'KEY_WORLD_25': 185,
        'KEY_WORLD_26': 186,
        'KEY_WORLD_27': 187,
        'KEY_WORLD_28': 188,
        'KEY_WORLD_29': 189,
        'KEY_WORLD_30': 190,
        'KEY_WORLD_31': 191,
        'KEY_WORLD_32': 192,
        'KEY_WORLD_33': 193,
        'KEY_WORLD_34': 194,
        'KEY_WORLD_35': 195,
        'KEY_WORLD_36': 196,
        'KEY_WORLD_37': 197,
        'KEY_WORLD_38': 198,
        'KEY_WORLD_39': 199,
        'KEY_WORLD_40': 200,
        'KEY_WORLD_41': 201,
        'KEY_WORLD_42': 202,
        'KEY_WORLD_43': 203,
        'KEY_WORLD_44': 204,
        'KEY_WORLD_45': 205,
        'KEY_WORLD_46': 206,
        'KEY_WORLD_47': 207,
        'KEY_WORLD_48': 208,
        'KEY_WORLD_49': 209,
        'KEY_WORLD_50': 210,
        'KEY_WORLD_51': 211,
        'KEY_WORLD_52': 212,
        'KEY_WORLD_53': 213,
        'KEY_WORLD_54': 214,
        'KEY_WORLD_55': 215,
        'KEY_WORLD_56': 216,
        'KEY_WORLD_57': 217,
        'KEY_WORLD_58': 218,
        'KEY_WORLD_59': 219,
        'KEY_WORLD_60': 220,
        'KEY_WORLD_61': 221,
        'KEY_WORLD_62': 222,
        'KEY_WORLD_63': 223,
        'KEY_WORLD_64': 224,
        'KEY_WORLD_65': 225,
        'KEY_WORLD_66': 226,
        'KEY_WORLD_67': 227,
        'KEY_WORLD_68': 228,
        'KEY_WORLD_69': 229,
        'KEY_WORLD_70': 230,
        'KEY_WORLD_71': 231,
        'KEY_WORLD_72': 232,
        'KEY_WORLD_73': 233,
        'KEY_WORLD_74': 234,
        'KEY_WORLD_75': 235,
        'KEY_WORLD_76': 236,
        'KEY_WORLD_77': 237,
        'KEY_WORLD_78': 238,
        'KEY_WORLD_79': 239,
        'KEY_WORLD_80': 240,
        'KEY_WORLD_81': 241,
        'KEY_WORLD_82': 242,
        'KEY_WORLD_83': 243,
        'KEY_WORLD_84': 244,
        'KEY_WORLD_85': 245,
        'KEY_WORLD_86': 246,
        'KEY_WORLD_87': 247,
        'KEY_WORLD_88': 248,
        'KEY_WORLD_89': 249,
        'KEY_WORLD_90': 250,
        'KEY_WORLD_91': 251,
        'KEY_WORLD_92': 252,
        'KEY_WORLD_93': 253,
        'KEY_WORLD_94': 254,
        'KEY_WORLD_95': 255,
        'KEY_KP0': 256,
        'KEY_KP1': 257,
        'KEY_KP2': 258,
        'KEY_KP3': 259,
        'KEY_KP4': 260,
        'KEY_KP5': 261,
        'KEY_KP6': 262,
        'KEY_KP7': 263,
        'KEY_KP8': 264,
        'KEY_KP9': 265,
        'KEY_KP_PERIOD': 266,
        'KEY_KP_DIVIDE': 267,
        'KEY_KP_MULTIPLY': 268,
        'KEY_KP_MINUS': 269,
        'KEY_KP_PLUS': 270,
        'KEY_KP_ENTER': 271,
        'KEY_KP_EQUALS': 272,
        'KEY_UP': 273,
        'KEY_DOWN': 274,
        'KEY_RIGHT': 275,
        'KEY_LEFT': 276,
        'KEY_INSERT': 277,
        'KEY_HOME': 278,
        'KEY_END': 279,
        'KEY_PAGEUP': 280,
        'KEY_PAGEDOWN': 281,
        'KEY_F1': 282,
        'KEY_F2': 283,
        'KEY_F3': 284,
        'KEY_F4': 285,
        'KEY_F5': 286,
        'KEY_F6': 287,
        'KEY_F7': 288,
        'KEY_F8': 289,
        'KEY_F9': 290,
        'KEY_F10': 291,
        'KEY_F11': 292,
        'KEY_F12': 293,
        'KEY_F13': 294,
        'KEY_F14': 295,
        'KEY_F15': 296,
        'KEY_NUMLOCK': 300,
        'KEY_CAPSLOCK': 301,
        'KEY_SCROLLOCK': 302,
        'KEY_RSHIFT': 303,
        'KEY_LSHIFT': 304,
        'KEY_RCTRL': 305,
        'KEY_LCTRL': 306,
        'KEY_RALT': 307,
        'KEY_LALT': 308,
        'KEY_RMETA': 309,
        'KEY_LMETA': 310,
        'KEY_LSUPER': 311,
        'KEY_RSUPER': 312,
        'KEY_MODE': 313,
        'KEY_COMPOSE': 314,
        'KEY_HELP': 315,
        'KEY_PRINT': 316,
        'KEY_SYSREQ': 317,
        'KEY_BREAK': 318,
        'KEY_MENU': 319,
        'KEY_POWER': 320,
        'KEY_EURO': 321,
        'KEY_UNDO': 322,
        'MODIFIER_NONE': 0,
        'MODIFIER_LSHIFT': 1,
        'MODIFIER_RSHIFT': 2,
        'MODIFIER_LCTRL': 64,
        'MODIFIER_RCTRL': 128,
        'MODIFIER_LALT': 256,
        'MODIFIER_RALT': 512,
        'MODIFIER_LMETA': 1024,
        'MODIFIER_RMETA': 2048,
        'MODIFIER_NUM': 4096,
        'MODIFIER_CAPS': 8192,
        'MODIFIER_MODE': 16384,
        'MODIFIER_RESERVED': 32768,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('keyboard_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'keyboard_msgs.msg.Key')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__key
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__key
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__key
            cls._TYPE_SUPPORT = module.type_support_msg__msg__key
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__key

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'KEY_UNKNOWN': cls.__constants['KEY_UNKNOWN'],
            'KEY_FIRST': cls.__constants['KEY_FIRST'],
            'KEY_BACKSPACE': cls.__constants['KEY_BACKSPACE'],
            'KEY_TAB': cls.__constants['KEY_TAB'],
            'KEY_CLEAR': cls.__constants['KEY_CLEAR'],
            'KEY_RETURN': cls.__constants['KEY_RETURN'],
            'KEY_PAUSE': cls.__constants['KEY_PAUSE'],
            'KEY_ESCAPE': cls.__constants['KEY_ESCAPE'],
            'KEY_SPACE': cls.__constants['KEY_SPACE'],
            'KEY_EXCLAIM': cls.__constants['KEY_EXCLAIM'],
            'KEY_QUOTEDBL': cls.__constants['KEY_QUOTEDBL'],
            'KEY_HASH': cls.__constants['KEY_HASH'],
            'KEY_DOLLAR': cls.__constants['KEY_DOLLAR'],
            'KEY_AMPERSAND': cls.__constants['KEY_AMPERSAND'],
            'KEY_QUOTE': cls.__constants['KEY_QUOTE'],
            'KEY_LEFTPAREN': cls.__constants['KEY_LEFTPAREN'],
            'KEY_RIGHTPAREN': cls.__constants['KEY_RIGHTPAREN'],
            'KEY_ASTERISK': cls.__constants['KEY_ASTERISK'],
            'KEY_PLUS': cls.__constants['KEY_PLUS'],
            'KEY_COMMA': cls.__constants['KEY_COMMA'],
            'KEY_MINUS': cls.__constants['KEY_MINUS'],
            'KEY_PERIOD': cls.__constants['KEY_PERIOD'],
            'KEY_SLASH': cls.__constants['KEY_SLASH'],
            'KEY_0': cls.__constants['KEY_0'],
            'KEY_1': cls.__constants['KEY_1'],
            'KEY_2': cls.__constants['KEY_2'],
            'KEY_3': cls.__constants['KEY_3'],
            'KEY_4': cls.__constants['KEY_4'],
            'KEY_5': cls.__constants['KEY_5'],
            'KEY_6': cls.__constants['KEY_6'],
            'KEY_7': cls.__constants['KEY_7'],
            'KEY_8': cls.__constants['KEY_8'],
            'KEY_9': cls.__constants['KEY_9'],
            'KEY_COLON': cls.__constants['KEY_COLON'],
            'KEY_SEMICOLON': cls.__constants['KEY_SEMICOLON'],
            'KEY_LESS': cls.__constants['KEY_LESS'],
            'KEY_EQUALS': cls.__constants['KEY_EQUALS'],
            'KEY_GREATER': cls.__constants['KEY_GREATER'],
            'KEY_QUESTION': cls.__constants['KEY_QUESTION'],
            'KEY_AT': cls.__constants['KEY_AT'],
            'KEY_LEFTBRACKET': cls.__constants['KEY_LEFTBRACKET'],
            'KEY_BACKSLASH': cls.__constants['KEY_BACKSLASH'],
            'KEY_RIGHTBRACKET': cls.__constants['KEY_RIGHTBRACKET'],
            'KEY_CARET': cls.__constants['KEY_CARET'],
            'KEY_UNDERSCORE': cls.__constants['KEY_UNDERSCORE'],
            'KEY_BACKQUOTE': cls.__constants['KEY_BACKQUOTE'],
            'KEY_A': cls.__constants['KEY_A'],
            'KEY_B': cls.__constants['KEY_B'],
            'KEY_C': cls.__constants['KEY_C'],
            'KEY_D': cls.__constants['KEY_D'],
            'KEY_E': cls.__constants['KEY_E'],
            'KEY_F': cls.__constants['KEY_F'],
            'KEY_G': cls.__constants['KEY_G'],
            'KEY_H': cls.__constants['KEY_H'],
            'KEY_I': cls.__constants['KEY_I'],
            'KEY_J': cls.__constants['KEY_J'],
            'KEY_K': cls.__constants['KEY_K'],
            'KEY_L': cls.__constants['KEY_L'],
            'KEY_M': cls.__constants['KEY_M'],
            'KEY_N': cls.__constants['KEY_N'],
            'KEY_O': cls.__constants['KEY_O'],
            'KEY_P': cls.__constants['KEY_P'],
            'KEY_Q': cls.__constants['KEY_Q'],
            'KEY_R': cls.__constants['KEY_R'],
            'KEY_S': cls.__constants['KEY_S'],
            'KEY_T': cls.__constants['KEY_T'],
            'KEY_U': cls.__constants['KEY_U'],
            'KEY_V': cls.__constants['KEY_V'],
            'KEY_W': cls.__constants['KEY_W'],
            'KEY_X': cls.__constants['KEY_X'],
            'KEY_Y': cls.__constants['KEY_Y'],
            'KEY_Z': cls.__constants['KEY_Z'],
            'KEY_DELETE': cls.__constants['KEY_DELETE'],
            'KEY_WORLD_0': cls.__constants['KEY_WORLD_0'],
            'KEY_WORLD_1': cls.__constants['KEY_WORLD_1'],
            'KEY_WORLD_2': cls.__constants['KEY_WORLD_2'],
            'KEY_WORLD_3': cls.__constants['KEY_WORLD_3'],
            'KEY_WORLD_4': cls.__constants['KEY_WORLD_4'],
            'KEY_WORLD_5': cls.__constants['KEY_WORLD_5'],
            'KEY_WORLD_6': cls.__constants['KEY_WORLD_6'],
            'KEY_WORLD_7': cls.__constants['KEY_WORLD_7'],
            'KEY_WORLD_8': cls.__constants['KEY_WORLD_8'],
            'KEY_WORLD_9': cls.__constants['KEY_WORLD_9'],
            'KEY_WORLD_10': cls.__constants['KEY_WORLD_10'],
            'KEY_WORLD_11': cls.__constants['KEY_WORLD_11'],
            'KEY_WORLD_12': cls.__constants['KEY_WORLD_12'],
            'KEY_WORLD_13': cls.__constants['KEY_WORLD_13'],
            'KEY_WORLD_14': cls.__constants['KEY_WORLD_14'],
            'KEY_WORLD_15': cls.__constants['KEY_WORLD_15'],
            'KEY_WORLD_16': cls.__constants['KEY_WORLD_16'],
            'KEY_WORLD_17': cls.__constants['KEY_WORLD_17'],
            'KEY_WORLD_18': cls.__constants['KEY_WORLD_18'],
            'KEY_WORLD_19': cls.__constants['KEY_WORLD_19'],
            'KEY_WORLD_20': cls.__constants['KEY_WORLD_20'],
            'KEY_WORLD_21': cls.__constants['KEY_WORLD_21'],
            'KEY_WORLD_22': cls.__constants['KEY_WORLD_22'],
            'KEY_WORLD_23': cls.__constants['KEY_WORLD_23'],
            'KEY_WORLD_24': cls.__constants['KEY_WORLD_24'],
            'KEY_WORLD_25': cls.__constants['KEY_WORLD_25'],
            'KEY_WORLD_26': cls.__constants['KEY_WORLD_26'],
            'KEY_WORLD_27': cls.__constants['KEY_WORLD_27'],
            'KEY_WORLD_28': cls.__constants['KEY_WORLD_28'],
            'KEY_WORLD_29': cls.__constants['KEY_WORLD_29'],
            'KEY_WORLD_30': cls.__constants['KEY_WORLD_30'],
            'KEY_WORLD_31': cls.__constants['KEY_WORLD_31'],
            'KEY_WORLD_32': cls.__constants['KEY_WORLD_32'],
            'KEY_WORLD_33': cls.__constants['KEY_WORLD_33'],
            'KEY_WORLD_34': cls.__constants['KEY_WORLD_34'],
            'KEY_WORLD_35': cls.__constants['KEY_WORLD_35'],
            'KEY_WORLD_36': cls.__constants['KEY_WORLD_36'],
            'KEY_WORLD_37': cls.__constants['KEY_WORLD_37'],
            'KEY_WORLD_38': cls.__constants['KEY_WORLD_38'],
            'KEY_WORLD_39': cls.__constants['KEY_WORLD_39'],
            'KEY_WORLD_40': cls.__constants['KEY_WORLD_40'],
            'KEY_WORLD_41': cls.__constants['KEY_WORLD_41'],
            'KEY_WORLD_42': cls.__constants['KEY_WORLD_42'],
            'KEY_WORLD_43': cls.__constants['KEY_WORLD_43'],
            'KEY_WORLD_44': cls.__constants['KEY_WORLD_44'],
            'KEY_WORLD_45': cls.__constants['KEY_WORLD_45'],
            'KEY_WORLD_46': cls.__constants['KEY_WORLD_46'],
            'KEY_WORLD_47': cls.__constants['KEY_WORLD_47'],
            'KEY_WORLD_48': cls.__constants['KEY_WORLD_48'],
            'KEY_WORLD_49': cls.__constants['KEY_WORLD_49'],
            'KEY_WORLD_50': cls.__constants['KEY_WORLD_50'],
            'KEY_WORLD_51': cls.__constants['KEY_WORLD_51'],
            'KEY_WORLD_52': cls.__constants['KEY_WORLD_52'],
            'KEY_WORLD_53': cls.__constants['KEY_WORLD_53'],
            'KEY_WORLD_54': cls.__constants['KEY_WORLD_54'],
            'KEY_WORLD_55': cls.__constants['KEY_WORLD_55'],
            'KEY_WORLD_56': cls.__constants['KEY_WORLD_56'],
            'KEY_WORLD_57': cls.__constants['KEY_WORLD_57'],
            'KEY_WORLD_58': cls.__constants['KEY_WORLD_58'],
            'KEY_WORLD_59': cls.__constants['KEY_WORLD_59'],
            'KEY_WORLD_60': cls.__constants['KEY_WORLD_60'],
            'KEY_WORLD_61': cls.__constants['KEY_WORLD_61'],
            'KEY_WORLD_62': cls.__constants['KEY_WORLD_62'],
            'KEY_WORLD_63': cls.__constants['KEY_WORLD_63'],
            'KEY_WORLD_64': cls.__constants['KEY_WORLD_64'],
            'KEY_WORLD_65': cls.__constants['KEY_WORLD_65'],
            'KEY_WORLD_66': cls.__constants['KEY_WORLD_66'],
            'KEY_WORLD_67': cls.__constants['KEY_WORLD_67'],
            'KEY_WORLD_68': cls.__constants['KEY_WORLD_68'],
            'KEY_WORLD_69': cls.__constants['KEY_WORLD_69'],
            'KEY_WORLD_70': cls.__constants['KEY_WORLD_70'],
            'KEY_WORLD_71': cls.__constants['KEY_WORLD_71'],
            'KEY_WORLD_72': cls.__constants['KEY_WORLD_72'],
            'KEY_WORLD_73': cls.__constants['KEY_WORLD_73'],
            'KEY_WORLD_74': cls.__constants['KEY_WORLD_74'],
            'KEY_WORLD_75': cls.__constants['KEY_WORLD_75'],
            'KEY_WORLD_76': cls.__constants['KEY_WORLD_76'],
            'KEY_WORLD_77': cls.__constants['KEY_WORLD_77'],
            'KEY_WORLD_78': cls.__constants['KEY_WORLD_78'],
            'KEY_WORLD_79': cls.__constants['KEY_WORLD_79'],
            'KEY_WORLD_80': cls.__constants['KEY_WORLD_80'],
            'KEY_WORLD_81': cls.__constants['KEY_WORLD_81'],
            'KEY_WORLD_82': cls.__constants['KEY_WORLD_82'],
            'KEY_WORLD_83': cls.__constants['KEY_WORLD_83'],
            'KEY_WORLD_84': cls.__constants['KEY_WORLD_84'],
            'KEY_WORLD_85': cls.__constants['KEY_WORLD_85'],
            'KEY_WORLD_86': cls.__constants['KEY_WORLD_86'],
            'KEY_WORLD_87': cls.__constants['KEY_WORLD_87'],
            'KEY_WORLD_88': cls.__constants['KEY_WORLD_88'],
            'KEY_WORLD_89': cls.__constants['KEY_WORLD_89'],
            'KEY_WORLD_90': cls.__constants['KEY_WORLD_90'],
            'KEY_WORLD_91': cls.__constants['KEY_WORLD_91'],
            'KEY_WORLD_92': cls.__constants['KEY_WORLD_92'],
            'KEY_WORLD_93': cls.__constants['KEY_WORLD_93'],
            'KEY_WORLD_94': cls.__constants['KEY_WORLD_94'],
            'KEY_WORLD_95': cls.__constants['KEY_WORLD_95'],
            'KEY_KP0': cls.__constants['KEY_KP0'],
            'KEY_KP1': cls.__constants['KEY_KP1'],
            'KEY_KP2': cls.__constants['KEY_KP2'],
            'KEY_KP3': cls.__constants['KEY_KP3'],
            'KEY_KP4': cls.__constants['KEY_KP4'],
            'KEY_KP5': cls.__constants['KEY_KP5'],
            'KEY_KP6': cls.__constants['KEY_KP6'],
            'KEY_KP7': cls.__constants['KEY_KP7'],
            'KEY_KP8': cls.__constants['KEY_KP8'],
            'KEY_KP9': cls.__constants['KEY_KP9'],
            'KEY_KP_PERIOD': cls.__constants['KEY_KP_PERIOD'],
            'KEY_KP_DIVIDE': cls.__constants['KEY_KP_DIVIDE'],
            'KEY_KP_MULTIPLY': cls.__constants['KEY_KP_MULTIPLY'],
            'KEY_KP_MINUS': cls.__constants['KEY_KP_MINUS'],
            'KEY_KP_PLUS': cls.__constants['KEY_KP_PLUS'],
            'KEY_KP_ENTER': cls.__constants['KEY_KP_ENTER'],
            'KEY_KP_EQUALS': cls.__constants['KEY_KP_EQUALS'],
            'KEY_UP': cls.__constants['KEY_UP'],
            'KEY_DOWN': cls.__constants['KEY_DOWN'],
            'KEY_RIGHT': cls.__constants['KEY_RIGHT'],
            'KEY_LEFT': cls.__constants['KEY_LEFT'],
            'KEY_INSERT': cls.__constants['KEY_INSERT'],
            'KEY_HOME': cls.__constants['KEY_HOME'],
            'KEY_END': cls.__constants['KEY_END'],
            'KEY_PAGEUP': cls.__constants['KEY_PAGEUP'],
            'KEY_PAGEDOWN': cls.__constants['KEY_PAGEDOWN'],
            'KEY_F1': cls.__constants['KEY_F1'],
            'KEY_F2': cls.__constants['KEY_F2'],
            'KEY_F3': cls.__constants['KEY_F3'],
            'KEY_F4': cls.__constants['KEY_F4'],
            'KEY_F5': cls.__constants['KEY_F5'],
            'KEY_F6': cls.__constants['KEY_F6'],
            'KEY_F7': cls.__constants['KEY_F7'],
            'KEY_F8': cls.__constants['KEY_F8'],
            'KEY_F9': cls.__constants['KEY_F9'],
            'KEY_F10': cls.__constants['KEY_F10'],
            'KEY_F11': cls.__constants['KEY_F11'],
            'KEY_F12': cls.__constants['KEY_F12'],
            'KEY_F13': cls.__constants['KEY_F13'],
            'KEY_F14': cls.__constants['KEY_F14'],
            'KEY_F15': cls.__constants['KEY_F15'],
            'KEY_NUMLOCK': cls.__constants['KEY_NUMLOCK'],
            'KEY_CAPSLOCK': cls.__constants['KEY_CAPSLOCK'],
            'KEY_SCROLLOCK': cls.__constants['KEY_SCROLLOCK'],
            'KEY_RSHIFT': cls.__constants['KEY_RSHIFT'],
            'KEY_LSHIFT': cls.__constants['KEY_LSHIFT'],
            'KEY_RCTRL': cls.__constants['KEY_RCTRL'],
            'KEY_LCTRL': cls.__constants['KEY_LCTRL'],
            'KEY_RALT': cls.__constants['KEY_RALT'],
            'KEY_LALT': cls.__constants['KEY_LALT'],
            'KEY_RMETA': cls.__constants['KEY_RMETA'],
            'KEY_LMETA': cls.__constants['KEY_LMETA'],
            'KEY_LSUPER': cls.__constants['KEY_LSUPER'],
            'KEY_RSUPER': cls.__constants['KEY_RSUPER'],
            'KEY_MODE': cls.__constants['KEY_MODE'],
            'KEY_COMPOSE': cls.__constants['KEY_COMPOSE'],
            'KEY_HELP': cls.__constants['KEY_HELP'],
            'KEY_PRINT': cls.__constants['KEY_PRINT'],
            'KEY_SYSREQ': cls.__constants['KEY_SYSREQ'],
            'KEY_BREAK': cls.__constants['KEY_BREAK'],
            'KEY_MENU': cls.__constants['KEY_MENU'],
            'KEY_POWER': cls.__constants['KEY_POWER'],
            'KEY_EURO': cls.__constants['KEY_EURO'],
            'KEY_UNDO': cls.__constants['KEY_UNDO'],
            'MODIFIER_NONE': cls.__constants['MODIFIER_NONE'],
            'MODIFIER_LSHIFT': cls.__constants['MODIFIER_LSHIFT'],
            'MODIFIER_RSHIFT': cls.__constants['MODIFIER_RSHIFT'],
            'MODIFIER_LCTRL': cls.__constants['MODIFIER_LCTRL'],
            'MODIFIER_RCTRL': cls.__constants['MODIFIER_RCTRL'],
            'MODIFIER_LALT': cls.__constants['MODIFIER_LALT'],
            'MODIFIER_RALT': cls.__constants['MODIFIER_RALT'],
            'MODIFIER_LMETA': cls.__constants['MODIFIER_LMETA'],
            'MODIFIER_RMETA': cls.__constants['MODIFIER_RMETA'],
            'MODIFIER_NUM': cls.__constants['MODIFIER_NUM'],
            'MODIFIER_CAPS': cls.__constants['MODIFIER_CAPS'],
            'MODIFIER_MODE': cls.__constants['MODIFIER_MODE'],
            'MODIFIER_RESERVED': cls.__constants['MODIFIER_RESERVED'],
        }

    @property
    def KEY_UNKNOWN(self):
        """Message constant 'KEY_UNKNOWN'."""
        return Metaclass_Key.__constants['KEY_UNKNOWN']

    @property
    def KEY_FIRST(self):
        """Message constant 'KEY_FIRST'."""
        return Metaclass_Key.__constants['KEY_FIRST']

    @property
    def KEY_BACKSPACE(self):
        """Message constant 'KEY_BACKSPACE'."""
        return Metaclass_Key.__constants['KEY_BACKSPACE']

    @property
    def KEY_TAB(self):
        """Message constant 'KEY_TAB'."""
        return Metaclass_Key.__constants['KEY_TAB']

    @property
    def KEY_CLEAR(self):
        """Message constant 'KEY_CLEAR'."""
        return Metaclass_Key.__constants['KEY_CLEAR']

    @property
    def KEY_RETURN(self):
        """Message constant 'KEY_RETURN'."""
        return Metaclass_Key.__constants['KEY_RETURN']

    @property
    def KEY_PAUSE(self):
        """Message constant 'KEY_PAUSE'."""
        return Metaclass_Key.__constants['KEY_PAUSE']

    @property
    def KEY_ESCAPE(self):
        """Message constant 'KEY_ESCAPE'."""
        return Metaclass_Key.__constants['KEY_ESCAPE']

    @property
    def KEY_SPACE(self):
        """Message constant 'KEY_SPACE'."""
        return Metaclass_Key.__constants['KEY_SPACE']

    @property
    def KEY_EXCLAIM(self):
        """Message constant 'KEY_EXCLAIM'."""
        return Metaclass_Key.__constants['KEY_EXCLAIM']

    @property
    def KEY_QUOTEDBL(self):
        """Message constant 'KEY_QUOTEDBL'."""
        return Metaclass_Key.__constants['KEY_QUOTEDBL']

    @property
    def KEY_HASH(self):
        """Message constant 'KEY_HASH'."""
        return Metaclass_Key.__constants['KEY_HASH']

    @property
    def KEY_DOLLAR(self):
        """Message constant 'KEY_DOLLAR'."""
        return Metaclass_Key.__constants['KEY_DOLLAR']

    @property
    def KEY_AMPERSAND(self):
        """Message constant 'KEY_AMPERSAND'."""
        return Metaclass_Key.__constants['KEY_AMPERSAND']

    @property
    def KEY_QUOTE(self):
        """Message constant 'KEY_QUOTE'."""
        return Metaclass_Key.__constants['KEY_QUOTE']

    @property
    def KEY_LEFTPAREN(self):
        """Message constant 'KEY_LEFTPAREN'."""
        return Metaclass_Key.__constants['KEY_LEFTPAREN']

    @property
    def KEY_RIGHTPAREN(self):
        """Message constant 'KEY_RIGHTPAREN'."""
        return Metaclass_Key.__constants['KEY_RIGHTPAREN']

    @property
    def KEY_ASTERISK(self):
        """Message constant 'KEY_ASTERISK'."""
        return Metaclass_Key.__constants['KEY_ASTERISK']

    @property
    def KEY_PLUS(self):
        """Message constant 'KEY_PLUS'."""
        return Metaclass_Key.__constants['KEY_PLUS']

    @property
    def KEY_COMMA(self):
        """Message constant 'KEY_COMMA'."""
        return Metaclass_Key.__constants['KEY_COMMA']

    @property
    def KEY_MINUS(self):
        """Message constant 'KEY_MINUS'."""
        return Metaclass_Key.__constants['KEY_MINUS']

    @property
    def KEY_PERIOD(self):
        """Message constant 'KEY_PERIOD'."""
        return Metaclass_Key.__constants['KEY_PERIOD']

    @property
    def KEY_SLASH(self):
        """Message constant 'KEY_SLASH'."""
        return Metaclass_Key.__constants['KEY_SLASH']

    @property
    def KEY_0(self):
        """Message constant 'KEY_0'."""
        return Metaclass_Key.__constants['KEY_0']

    @property
    def KEY_1(self):
        """Message constant 'KEY_1'."""
        return Metaclass_Key.__constants['KEY_1']

    @property
    def KEY_2(self):
        """Message constant 'KEY_2'."""
        return Metaclass_Key.__constants['KEY_2']

    @property
    def KEY_3(self):
        """Message constant 'KEY_3'."""
        return Metaclass_Key.__constants['KEY_3']

    @property
    def KEY_4(self):
        """Message constant 'KEY_4'."""
        return Metaclass_Key.__constants['KEY_4']

    @property
    def KEY_5(self):
        """Message constant 'KEY_5'."""
        return Metaclass_Key.__constants['KEY_5']

    @property
    def KEY_6(self):
        """Message constant 'KEY_6'."""
        return Metaclass_Key.__constants['KEY_6']

    @property
    def KEY_7(self):
        """Message constant 'KEY_7'."""
        return Metaclass_Key.__constants['KEY_7']

    @property
    def KEY_8(self):
        """Message constant 'KEY_8'."""
        return Metaclass_Key.__constants['KEY_8']

    @property
    def KEY_9(self):
        """Message constant 'KEY_9'."""
        return Metaclass_Key.__constants['KEY_9']

    @property
    def KEY_COLON(self):
        """Message constant 'KEY_COLON'."""
        return Metaclass_Key.__constants['KEY_COLON']

    @property
    def KEY_SEMICOLON(self):
        """Message constant 'KEY_SEMICOLON'."""
        return Metaclass_Key.__constants['KEY_SEMICOLON']

    @property
    def KEY_LESS(self):
        """Message constant 'KEY_LESS'."""
        return Metaclass_Key.__constants['KEY_LESS']

    @property
    def KEY_EQUALS(self):
        """Message constant 'KEY_EQUALS'."""
        return Metaclass_Key.__constants['KEY_EQUALS']

    @property
    def KEY_GREATER(self):
        """Message constant 'KEY_GREATER'."""
        return Metaclass_Key.__constants['KEY_GREATER']

    @property
    def KEY_QUESTION(self):
        """Message constant 'KEY_QUESTION'."""
        return Metaclass_Key.__constants['KEY_QUESTION']

    @property
    def KEY_AT(self):
        """Message constant 'KEY_AT'."""
        return Metaclass_Key.__constants['KEY_AT']

    @property
    def KEY_LEFTBRACKET(self):
        """Message constant 'KEY_LEFTBRACKET'."""
        return Metaclass_Key.__constants['KEY_LEFTBRACKET']

    @property
    def KEY_BACKSLASH(self):
        """Message constant 'KEY_BACKSLASH'."""
        return Metaclass_Key.__constants['KEY_BACKSLASH']

    @property
    def KEY_RIGHTBRACKET(self):
        """Message constant 'KEY_RIGHTBRACKET'."""
        return Metaclass_Key.__constants['KEY_RIGHTBRACKET']

    @property
    def KEY_CARET(self):
        """Message constant 'KEY_CARET'."""
        return Metaclass_Key.__constants['KEY_CARET']

    @property
    def KEY_UNDERSCORE(self):
        """Message constant 'KEY_UNDERSCORE'."""
        return Metaclass_Key.__constants['KEY_UNDERSCORE']

    @property
    def KEY_BACKQUOTE(self):
        """Message constant 'KEY_BACKQUOTE'."""
        return Metaclass_Key.__constants['KEY_BACKQUOTE']

    @property
    def KEY_A(self):
        """Message constant 'KEY_A'."""
        return Metaclass_Key.__constants['KEY_A']

    @property
    def KEY_B(self):
        """Message constant 'KEY_B'."""
        return Metaclass_Key.__constants['KEY_B']

    @property
    def KEY_C(self):
        """Message constant 'KEY_C'."""
        return Metaclass_Key.__constants['KEY_C']

    @property
    def KEY_D(self):
        """Message constant 'KEY_D'."""
        return Metaclass_Key.__constants['KEY_D']

    @property
    def KEY_E(self):
        """Message constant 'KEY_E'."""
        return Metaclass_Key.__constants['KEY_E']

    @property
    def KEY_F(self):
        """Message constant 'KEY_F'."""
        return Metaclass_Key.__constants['KEY_F']

    @property
    def KEY_G(self):
        """Message constant 'KEY_G'."""
        return Metaclass_Key.__constants['KEY_G']

    @property
    def KEY_H(self):
        """Message constant 'KEY_H'."""
        return Metaclass_Key.__constants['KEY_H']

    @property
    def KEY_I(self):
        """Message constant 'KEY_I'."""
        return Metaclass_Key.__constants['KEY_I']

    @property
    def KEY_J(self):
        """Message constant 'KEY_J'."""
        return Metaclass_Key.__constants['KEY_J']

    @property
    def KEY_K(self):
        """Message constant 'KEY_K'."""
        return Metaclass_Key.__constants['KEY_K']

    @property
    def KEY_L(self):
        """Message constant 'KEY_L'."""
        return Metaclass_Key.__constants['KEY_L']

    @property
    def KEY_M(self):
        """Message constant 'KEY_M'."""
        return Metaclass_Key.__constants['KEY_M']

    @property
    def KEY_N(self):
        """Message constant 'KEY_N'."""
        return Metaclass_Key.__constants['KEY_N']

    @property
    def KEY_O(self):
        """Message constant 'KEY_O'."""
        return Metaclass_Key.__constants['KEY_O']

    @property
    def KEY_P(self):
        """Message constant 'KEY_P'."""
        return Metaclass_Key.__constants['KEY_P']

    @property
    def KEY_Q(self):
        """Message constant 'KEY_Q'."""
        return Metaclass_Key.__constants['KEY_Q']

    @property
    def KEY_R(self):
        """Message constant 'KEY_R'."""
        return Metaclass_Key.__constants['KEY_R']

    @property
    def KEY_S(self):
        """Message constant 'KEY_S'."""
        return Metaclass_Key.__constants['KEY_S']

    @property
    def KEY_T(self):
        """Message constant 'KEY_T'."""
        return Metaclass_Key.__constants['KEY_T']

    @property
    def KEY_U(self):
        """Message constant 'KEY_U'."""
        return Metaclass_Key.__constants['KEY_U']

    @property
    def KEY_V(self):
        """Message constant 'KEY_V'."""
        return Metaclass_Key.__constants['KEY_V']

    @property
    def KEY_W(self):
        """Message constant 'KEY_W'."""
        return Metaclass_Key.__constants['KEY_W']

    @property
    def KEY_X(self):
        """Message constant 'KEY_X'."""
        return Metaclass_Key.__constants['KEY_X']

    @property
    def KEY_Y(self):
        """Message constant 'KEY_Y'."""
        return Metaclass_Key.__constants['KEY_Y']

    @property
    def KEY_Z(self):
        """Message constant 'KEY_Z'."""
        return Metaclass_Key.__constants['KEY_Z']

    @property
    def KEY_DELETE(self):
        """Message constant 'KEY_DELETE'."""
        return Metaclass_Key.__constants['KEY_DELETE']

    @property
    def KEY_WORLD_0(self):
        """Message constant 'KEY_WORLD_0'."""
        return Metaclass_Key.__constants['KEY_WORLD_0']

    @property
    def KEY_WORLD_1(self):
        """Message constant 'KEY_WORLD_1'."""
        return Metaclass_Key.__constants['KEY_WORLD_1']

    @property
    def KEY_WORLD_2(self):
        """Message constant 'KEY_WORLD_2'."""
        return Metaclass_Key.__constants['KEY_WORLD_2']

    @property
    def KEY_WORLD_3(self):
        """Message constant 'KEY_WORLD_3'."""
        return Metaclass_Key.__constants['KEY_WORLD_3']

    @property
    def KEY_WORLD_4(self):
        """Message constant 'KEY_WORLD_4'."""
        return Metaclass_Key.__constants['KEY_WORLD_4']

    @property
    def KEY_WORLD_5(self):
        """Message constant 'KEY_WORLD_5'."""
        return Metaclass_Key.__constants['KEY_WORLD_5']

    @property
    def KEY_WORLD_6(self):
        """Message constant 'KEY_WORLD_6'."""
        return Metaclass_Key.__constants['KEY_WORLD_6']

    @property
    def KEY_WORLD_7(self):
        """Message constant 'KEY_WORLD_7'."""
        return Metaclass_Key.__constants['KEY_WORLD_7']

    @property
    def KEY_WORLD_8(self):
        """Message constant 'KEY_WORLD_8'."""
        return Metaclass_Key.__constants['KEY_WORLD_8']

    @property
    def KEY_WORLD_9(self):
        """Message constant 'KEY_WORLD_9'."""
        return Metaclass_Key.__constants['KEY_WORLD_9']

    @property
    def KEY_WORLD_10(self):
        """Message constant 'KEY_WORLD_10'."""
        return Metaclass_Key.__constants['KEY_WORLD_10']

    @property
    def KEY_WORLD_11(self):
        """Message constant 'KEY_WORLD_11'."""
        return Metaclass_Key.__constants['KEY_WORLD_11']

    @property
    def KEY_WORLD_12(self):
        """Message constant 'KEY_WORLD_12'."""
        return Metaclass_Key.__constants['KEY_WORLD_12']

    @property
    def KEY_WORLD_13(self):
        """Message constant 'KEY_WORLD_13'."""
        return Metaclass_Key.__constants['KEY_WORLD_13']

    @property
    def KEY_WORLD_14(self):
        """Message constant 'KEY_WORLD_14'."""
        return Metaclass_Key.__constants['KEY_WORLD_14']

    @property
    def KEY_WORLD_15(self):
        """Message constant 'KEY_WORLD_15'."""
        return Metaclass_Key.__constants['KEY_WORLD_15']

    @property
    def KEY_WORLD_16(self):
        """Message constant 'KEY_WORLD_16'."""
        return Metaclass_Key.__constants['KEY_WORLD_16']

    @property
    def KEY_WORLD_17(self):
        """Message constant 'KEY_WORLD_17'."""
        return Metaclass_Key.__constants['KEY_WORLD_17']

    @property
    def KEY_WORLD_18(self):
        """Message constant 'KEY_WORLD_18'."""
        return Metaclass_Key.__constants['KEY_WORLD_18']

    @property
    def KEY_WORLD_19(self):
        """Message constant 'KEY_WORLD_19'."""
        return Metaclass_Key.__constants['KEY_WORLD_19']

    @property
    def KEY_WORLD_20(self):
        """Message constant 'KEY_WORLD_20'."""
        return Metaclass_Key.__constants['KEY_WORLD_20']

    @property
    def KEY_WORLD_21(self):
        """Message constant 'KEY_WORLD_21'."""
        return Metaclass_Key.__constants['KEY_WORLD_21']

    @property
    def KEY_WORLD_22(self):
        """Message constant 'KEY_WORLD_22'."""
        return Metaclass_Key.__constants['KEY_WORLD_22']

    @property
    def KEY_WORLD_23(self):
        """Message constant 'KEY_WORLD_23'."""
        return Metaclass_Key.__constants['KEY_WORLD_23']

    @property
    def KEY_WORLD_24(self):
        """Message constant 'KEY_WORLD_24'."""
        return Metaclass_Key.__constants['KEY_WORLD_24']

    @property
    def KEY_WORLD_25(self):
        """Message constant 'KEY_WORLD_25'."""
        return Metaclass_Key.__constants['KEY_WORLD_25']

    @property
    def KEY_WORLD_26(self):
        """Message constant 'KEY_WORLD_26'."""
        return Metaclass_Key.__constants['KEY_WORLD_26']

    @property
    def KEY_WORLD_27(self):
        """Message constant 'KEY_WORLD_27'."""
        return Metaclass_Key.__constants['KEY_WORLD_27']

    @property
    def KEY_WORLD_28(self):
        """Message constant 'KEY_WORLD_28'."""
        return Metaclass_Key.__constants['KEY_WORLD_28']

    @property
    def KEY_WORLD_29(self):
        """Message constant 'KEY_WORLD_29'."""
        return Metaclass_Key.__constants['KEY_WORLD_29']

    @property
    def KEY_WORLD_30(self):
        """Message constant 'KEY_WORLD_30'."""
        return Metaclass_Key.__constants['KEY_WORLD_30']

    @property
    def KEY_WORLD_31(self):
        """Message constant 'KEY_WORLD_31'."""
        return Metaclass_Key.__constants['KEY_WORLD_31']

    @property
    def KEY_WORLD_32(self):
        """Message constant 'KEY_WORLD_32'."""
        return Metaclass_Key.__constants['KEY_WORLD_32']

    @property
    def KEY_WORLD_33(self):
        """Message constant 'KEY_WORLD_33'."""
        return Metaclass_Key.__constants['KEY_WORLD_33']

    @property
    def KEY_WORLD_34(self):
        """Message constant 'KEY_WORLD_34'."""
        return Metaclass_Key.__constants['KEY_WORLD_34']

    @property
    def KEY_WORLD_35(self):
        """Message constant 'KEY_WORLD_35'."""
        return Metaclass_Key.__constants['KEY_WORLD_35']

    @property
    def KEY_WORLD_36(self):
        """Message constant 'KEY_WORLD_36'."""
        return Metaclass_Key.__constants['KEY_WORLD_36']

    @property
    def KEY_WORLD_37(self):
        """Message constant 'KEY_WORLD_37'."""
        return Metaclass_Key.__constants['KEY_WORLD_37']

    @property
    def KEY_WORLD_38(self):
        """Message constant 'KEY_WORLD_38'."""
        return Metaclass_Key.__constants['KEY_WORLD_38']

    @property
    def KEY_WORLD_39(self):
        """Message constant 'KEY_WORLD_39'."""
        return Metaclass_Key.__constants['KEY_WORLD_39']

    @property
    def KEY_WORLD_40(self):
        """Message constant 'KEY_WORLD_40'."""
        return Metaclass_Key.__constants['KEY_WORLD_40']

    @property
    def KEY_WORLD_41(self):
        """Message constant 'KEY_WORLD_41'."""
        return Metaclass_Key.__constants['KEY_WORLD_41']

    @property
    def KEY_WORLD_42(self):
        """Message constant 'KEY_WORLD_42'."""
        return Metaclass_Key.__constants['KEY_WORLD_42']

    @property
    def KEY_WORLD_43(self):
        """Message constant 'KEY_WORLD_43'."""
        return Metaclass_Key.__constants['KEY_WORLD_43']

    @property
    def KEY_WORLD_44(self):
        """Message constant 'KEY_WORLD_44'."""
        return Metaclass_Key.__constants['KEY_WORLD_44']

    @property
    def KEY_WORLD_45(self):
        """Message constant 'KEY_WORLD_45'."""
        return Metaclass_Key.__constants['KEY_WORLD_45']

    @property
    def KEY_WORLD_46(self):
        """Message constant 'KEY_WORLD_46'."""
        return Metaclass_Key.__constants['KEY_WORLD_46']

    @property
    def KEY_WORLD_47(self):
        """Message constant 'KEY_WORLD_47'."""
        return Metaclass_Key.__constants['KEY_WORLD_47']

    @property
    def KEY_WORLD_48(self):
        """Message constant 'KEY_WORLD_48'."""
        return Metaclass_Key.__constants['KEY_WORLD_48']

    @property
    def KEY_WORLD_49(self):
        """Message constant 'KEY_WORLD_49'."""
        return Metaclass_Key.__constants['KEY_WORLD_49']

    @property
    def KEY_WORLD_50(self):
        """Message constant 'KEY_WORLD_50'."""
        return Metaclass_Key.__constants['KEY_WORLD_50']

    @property
    def KEY_WORLD_51(self):
        """Message constant 'KEY_WORLD_51'."""
        return Metaclass_Key.__constants['KEY_WORLD_51']

    @property
    def KEY_WORLD_52(self):
        """Message constant 'KEY_WORLD_52'."""
        return Metaclass_Key.__constants['KEY_WORLD_52']

    @property
    def KEY_WORLD_53(self):
        """Message constant 'KEY_WORLD_53'."""
        return Metaclass_Key.__constants['KEY_WORLD_53']

    @property
    def KEY_WORLD_54(self):
        """Message constant 'KEY_WORLD_54'."""
        return Metaclass_Key.__constants['KEY_WORLD_54']

    @property
    def KEY_WORLD_55(self):
        """Message constant 'KEY_WORLD_55'."""
        return Metaclass_Key.__constants['KEY_WORLD_55']

    @property
    def KEY_WORLD_56(self):
        """Message constant 'KEY_WORLD_56'."""
        return Metaclass_Key.__constants['KEY_WORLD_56']

    @property
    def KEY_WORLD_57(self):
        """Message constant 'KEY_WORLD_57'."""
        return Metaclass_Key.__constants['KEY_WORLD_57']

    @property
    def KEY_WORLD_58(self):
        """Message constant 'KEY_WORLD_58'."""
        return Metaclass_Key.__constants['KEY_WORLD_58']

    @property
    def KEY_WORLD_59(self):
        """Message constant 'KEY_WORLD_59'."""
        return Metaclass_Key.__constants['KEY_WORLD_59']

    @property
    def KEY_WORLD_60(self):
        """Message constant 'KEY_WORLD_60'."""
        return Metaclass_Key.__constants['KEY_WORLD_60']

    @property
    def KEY_WORLD_61(self):
        """Message constant 'KEY_WORLD_61'."""
        return Metaclass_Key.__constants['KEY_WORLD_61']

    @property
    def KEY_WORLD_62(self):
        """Message constant 'KEY_WORLD_62'."""
        return Metaclass_Key.__constants['KEY_WORLD_62']

    @property
    def KEY_WORLD_63(self):
        """Message constant 'KEY_WORLD_63'."""
        return Metaclass_Key.__constants['KEY_WORLD_63']

    @property
    def KEY_WORLD_64(self):
        """Message constant 'KEY_WORLD_64'."""
        return Metaclass_Key.__constants['KEY_WORLD_64']

    @property
    def KEY_WORLD_65(self):
        """Message constant 'KEY_WORLD_65'."""
        return Metaclass_Key.__constants['KEY_WORLD_65']

    @property
    def KEY_WORLD_66(self):
        """Message constant 'KEY_WORLD_66'."""
        return Metaclass_Key.__constants['KEY_WORLD_66']

    @property
    def KEY_WORLD_67(self):
        """Message constant 'KEY_WORLD_67'."""
        return Metaclass_Key.__constants['KEY_WORLD_67']

    @property
    def KEY_WORLD_68(self):
        """Message constant 'KEY_WORLD_68'."""
        return Metaclass_Key.__constants['KEY_WORLD_68']

    @property
    def KEY_WORLD_69(self):
        """Message constant 'KEY_WORLD_69'."""
        return Metaclass_Key.__constants['KEY_WORLD_69']

    @property
    def KEY_WORLD_70(self):
        """Message constant 'KEY_WORLD_70'."""
        return Metaclass_Key.__constants['KEY_WORLD_70']

    @property
    def KEY_WORLD_71(self):
        """Message constant 'KEY_WORLD_71'."""
        return Metaclass_Key.__constants['KEY_WORLD_71']

    @property
    def KEY_WORLD_72(self):
        """Message constant 'KEY_WORLD_72'."""
        return Metaclass_Key.__constants['KEY_WORLD_72']

    @property
    def KEY_WORLD_73(self):
        """Message constant 'KEY_WORLD_73'."""
        return Metaclass_Key.__constants['KEY_WORLD_73']

    @property
    def KEY_WORLD_74(self):
        """Message constant 'KEY_WORLD_74'."""
        return Metaclass_Key.__constants['KEY_WORLD_74']

    @property
    def KEY_WORLD_75(self):
        """Message constant 'KEY_WORLD_75'."""
        return Metaclass_Key.__constants['KEY_WORLD_75']

    @property
    def KEY_WORLD_76(self):
        """Message constant 'KEY_WORLD_76'."""
        return Metaclass_Key.__constants['KEY_WORLD_76']

    @property
    def KEY_WORLD_77(self):
        """Message constant 'KEY_WORLD_77'."""
        return Metaclass_Key.__constants['KEY_WORLD_77']

    @property
    def KEY_WORLD_78(self):
        """Message constant 'KEY_WORLD_78'."""
        return Metaclass_Key.__constants['KEY_WORLD_78']

    @property
    def KEY_WORLD_79(self):
        """Message constant 'KEY_WORLD_79'."""
        return Metaclass_Key.__constants['KEY_WORLD_79']

    @property
    def KEY_WORLD_80(self):
        """Message constant 'KEY_WORLD_80'."""
        return Metaclass_Key.__constants['KEY_WORLD_80']

    @property
    def KEY_WORLD_81(self):
        """Message constant 'KEY_WORLD_81'."""
        return Metaclass_Key.__constants['KEY_WORLD_81']

    @property
    def KEY_WORLD_82(self):
        """Message constant 'KEY_WORLD_82'."""
        return Metaclass_Key.__constants['KEY_WORLD_82']

    @property
    def KEY_WORLD_83(self):
        """Message constant 'KEY_WORLD_83'."""
        return Metaclass_Key.__constants['KEY_WORLD_83']

    @property
    def KEY_WORLD_84(self):
        """Message constant 'KEY_WORLD_84'."""
        return Metaclass_Key.__constants['KEY_WORLD_84']

    @property
    def KEY_WORLD_85(self):
        """Message constant 'KEY_WORLD_85'."""
        return Metaclass_Key.__constants['KEY_WORLD_85']

    @property
    def KEY_WORLD_86(self):
        """Message constant 'KEY_WORLD_86'."""
        return Metaclass_Key.__constants['KEY_WORLD_86']

    @property
    def KEY_WORLD_87(self):
        """Message constant 'KEY_WORLD_87'."""
        return Metaclass_Key.__constants['KEY_WORLD_87']

    @property
    def KEY_WORLD_88(self):
        """Message constant 'KEY_WORLD_88'."""
        return Metaclass_Key.__constants['KEY_WORLD_88']

    @property
    def KEY_WORLD_89(self):
        """Message constant 'KEY_WORLD_89'."""
        return Metaclass_Key.__constants['KEY_WORLD_89']

    @property
    def KEY_WORLD_90(self):
        """Message constant 'KEY_WORLD_90'."""
        return Metaclass_Key.__constants['KEY_WORLD_90']

    @property
    def KEY_WORLD_91(self):
        """Message constant 'KEY_WORLD_91'."""
        return Metaclass_Key.__constants['KEY_WORLD_91']

    @property
    def KEY_WORLD_92(self):
        """Message constant 'KEY_WORLD_92'."""
        return Metaclass_Key.__constants['KEY_WORLD_92']

    @property
    def KEY_WORLD_93(self):
        """Message constant 'KEY_WORLD_93'."""
        return Metaclass_Key.__constants['KEY_WORLD_93']

    @property
    def KEY_WORLD_94(self):
        """Message constant 'KEY_WORLD_94'."""
        return Metaclass_Key.__constants['KEY_WORLD_94']

    @property
    def KEY_WORLD_95(self):
        """Message constant 'KEY_WORLD_95'."""
        return Metaclass_Key.__constants['KEY_WORLD_95']

    @property
    def KEY_KP0(self):
        """Message constant 'KEY_KP0'."""
        return Metaclass_Key.__constants['KEY_KP0']

    @property
    def KEY_KP1(self):
        """Message constant 'KEY_KP1'."""
        return Metaclass_Key.__constants['KEY_KP1']

    @property
    def KEY_KP2(self):
        """Message constant 'KEY_KP2'."""
        return Metaclass_Key.__constants['KEY_KP2']

    @property
    def KEY_KP3(self):
        """Message constant 'KEY_KP3'."""
        return Metaclass_Key.__constants['KEY_KP3']

    @property
    def KEY_KP4(self):
        """Message constant 'KEY_KP4'."""
        return Metaclass_Key.__constants['KEY_KP4']

    @property
    def KEY_KP5(self):
        """Message constant 'KEY_KP5'."""
        return Metaclass_Key.__constants['KEY_KP5']

    @property
    def KEY_KP6(self):
        """Message constant 'KEY_KP6'."""
        return Metaclass_Key.__constants['KEY_KP6']

    @property
    def KEY_KP7(self):
        """Message constant 'KEY_KP7'."""
        return Metaclass_Key.__constants['KEY_KP7']

    @property
    def KEY_KP8(self):
        """Message constant 'KEY_KP8'."""
        return Metaclass_Key.__constants['KEY_KP8']

    @property
    def KEY_KP9(self):
        """Message constant 'KEY_KP9'."""
        return Metaclass_Key.__constants['KEY_KP9']

    @property
    def KEY_KP_PERIOD(self):
        """Message constant 'KEY_KP_PERIOD'."""
        return Metaclass_Key.__constants['KEY_KP_PERIOD']

    @property
    def KEY_KP_DIVIDE(self):
        """Message constant 'KEY_KP_DIVIDE'."""
        return Metaclass_Key.__constants['KEY_KP_DIVIDE']

    @property
    def KEY_KP_MULTIPLY(self):
        """Message constant 'KEY_KP_MULTIPLY'."""
        return Metaclass_Key.__constants['KEY_KP_MULTIPLY']

    @property
    def KEY_KP_MINUS(self):
        """Message constant 'KEY_KP_MINUS'."""
        return Metaclass_Key.__constants['KEY_KP_MINUS']

    @property
    def KEY_KP_PLUS(self):
        """Message constant 'KEY_KP_PLUS'."""
        return Metaclass_Key.__constants['KEY_KP_PLUS']

    @property
    def KEY_KP_ENTER(self):
        """Message constant 'KEY_KP_ENTER'."""
        return Metaclass_Key.__constants['KEY_KP_ENTER']

    @property
    def KEY_KP_EQUALS(self):
        """Message constant 'KEY_KP_EQUALS'."""
        return Metaclass_Key.__constants['KEY_KP_EQUALS']

    @property
    def KEY_UP(self):
        """Message constant 'KEY_UP'."""
        return Metaclass_Key.__constants['KEY_UP']

    @property
    def KEY_DOWN(self):
        """Message constant 'KEY_DOWN'."""
        return Metaclass_Key.__constants['KEY_DOWN']

    @property
    def KEY_RIGHT(self):
        """Message constant 'KEY_RIGHT'."""
        return Metaclass_Key.__constants['KEY_RIGHT']

    @property
    def KEY_LEFT(self):
        """Message constant 'KEY_LEFT'."""
        return Metaclass_Key.__constants['KEY_LEFT']

    @property
    def KEY_INSERT(self):
        """Message constant 'KEY_INSERT'."""
        return Metaclass_Key.__constants['KEY_INSERT']

    @property
    def KEY_HOME(self):
        """Message constant 'KEY_HOME'."""
        return Metaclass_Key.__constants['KEY_HOME']

    @property
    def KEY_END(self):
        """Message constant 'KEY_END'."""
        return Metaclass_Key.__constants['KEY_END']

    @property
    def KEY_PAGEUP(self):
        """Message constant 'KEY_PAGEUP'."""
        return Metaclass_Key.__constants['KEY_PAGEUP']

    @property
    def KEY_PAGEDOWN(self):
        """Message constant 'KEY_PAGEDOWN'."""
        return Metaclass_Key.__constants['KEY_PAGEDOWN']

    @property
    def KEY_F1(self):
        """Message constant 'KEY_F1'."""
        return Metaclass_Key.__constants['KEY_F1']

    @property
    def KEY_F2(self):
        """Message constant 'KEY_F2'."""
        return Metaclass_Key.__constants['KEY_F2']

    @property
    def KEY_F3(self):
        """Message constant 'KEY_F3'."""
        return Metaclass_Key.__constants['KEY_F3']

    @property
    def KEY_F4(self):
        """Message constant 'KEY_F4'."""
        return Metaclass_Key.__constants['KEY_F4']

    @property
    def KEY_F5(self):
        """Message constant 'KEY_F5'."""
        return Metaclass_Key.__constants['KEY_F5']

    @property
    def KEY_F6(self):
        """Message constant 'KEY_F6'."""
        return Metaclass_Key.__constants['KEY_F6']

    @property
    def KEY_F7(self):
        """Message constant 'KEY_F7'."""
        return Metaclass_Key.__constants['KEY_F7']

    @property
    def KEY_F8(self):
        """Message constant 'KEY_F8'."""
        return Metaclass_Key.__constants['KEY_F8']

    @property
    def KEY_F9(self):
        """Message constant 'KEY_F9'."""
        return Metaclass_Key.__constants['KEY_F9']

    @property
    def KEY_F10(self):
        """Message constant 'KEY_F10'."""
        return Metaclass_Key.__constants['KEY_F10']

    @property
    def KEY_F11(self):
        """Message constant 'KEY_F11'."""
        return Metaclass_Key.__constants['KEY_F11']

    @property
    def KEY_F12(self):
        """Message constant 'KEY_F12'."""
        return Metaclass_Key.__constants['KEY_F12']

    @property
    def KEY_F13(self):
        """Message constant 'KEY_F13'."""
        return Metaclass_Key.__constants['KEY_F13']

    @property
    def KEY_F14(self):
        """Message constant 'KEY_F14'."""
        return Metaclass_Key.__constants['KEY_F14']

    @property
    def KEY_F15(self):
        """Message constant 'KEY_F15'."""
        return Metaclass_Key.__constants['KEY_F15']

    @property
    def KEY_NUMLOCK(self):
        """Message constant 'KEY_NUMLOCK'."""
        return Metaclass_Key.__constants['KEY_NUMLOCK']

    @property
    def KEY_CAPSLOCK(self):
        """Message constant 'KEY_CAPSLOCK'."""
        return Metaclass_Key.__constants['KEY_CAPSLOCK']

    @property
    def KEY_SCROLLOCK(self):
        """Message constant 'KEY_SCROLLOCK'."""
        return Metaclass_Key.__constants['KEY_SCROLLOCK']

    @property
    def KEY_RSHIFT(self):
        """Message constant 'KEY_RSHIFT'."""
        return Metaclass_Key.__constants['KEY_RSHIFT']

    @property
    def KEY_LSHIFT(self):
        """Message constant 'KEY_LSHIFT'."""
        return Metaclass_Key.__constants['KEY_LSHIFT']

    @property
    def KEY_RCTRL(self):
        """Message constant 'KEY_RCTRL'."""
        return Metaclass_Key.__constants['KEY_RCTRL']

    @property
    def KEY_LCTRL(self):
        """Message constant 'KEY_LCTRL'."""
        return Metaclass_Key.__constants['KEY_LCTRL']

    @property
    def KEY_RALT(self):
        """Message constant 'KEY_RALT'."""
        return Metaclass_Key.__constants['KEY_RALT']

    @property
    def KEY_LALT(self):
        """Message constant 'KEY_LALT'."""
        return Metaclass_Key.__constants['KEY_LALT']

    @property
    def KEY_RMETA(self):
        """Message constant 'KEY_RMETA'."""
        return Metaclass_Key.__constants['KEY_RMETA']

    @property
    def KEY_LMETA(self):
        """Message constant 'KEY_LMETA'."""
        return Metaclass_Key.__constants['KEY_LMETA']

    @property
    def KEY_LSUPER(self):
        """Message constant 'KEY_LSUPER'."""
        return Metaclass_Key.__constants['KEY_LSUPER']

    @property
    def KEY_RSUPER(self):
        """Message constant 'KEY_RSUPER'."""
        return Metaclass_Key.__constants['KEY_RSUPER']

    @property
    def KEY_MODE(self):
        """Message constant 'KEY_MODE'."""
        return Metaclass_Key.__constants['KEY_MODE']

    @property
    def KEY_COMPOSE(self):
        """Message constant 'KEY_COMPOSE'."""
        return Metaclass_Key.__constants['KEY_COMPOSE']

    @property
    def KEY_HELP(self):
        """Message constant 'KEY_HELP'."""
        return Metaclass_Key.__constants['KEY_HELP']

    @property
    def KEY_PRINT(self):
        """Message constant 'KEY_PRINT'."""
        return Metaclass_Key.__constants['KEY_PRINT']

    @property
    def KEY_SYSREQ(self):
        """Message constant 'KEY_SYSREQ'."""
        return Metaclass_Key.__constants['KEY_SYSREQ']

    @property
    def KEY_BREAK(self):
        """Message constant 'KEY_BREAK'."""
        return Metaclass_Key.__constants['KEY_BREAK']

    @property
    def KEY_MENU(self):
        """Message constant 'KEY_MENU'."""
        return Metaclass_Key.__constants['KEY_MENU']

    @property
    def KEY_POWER(self):
        """Message constant 'KEY_POWER'."""
        return Metaclass_Key.__constants['KEY_POWER']

    @property
    def KEY_EURO(self):
        """Message constant 'KEY_EURO'."""
        return Metaclass_Key.__constants['KEY_EURO']

    @property
    def KEY_UNDO(self):
        """Message constant 'KEY_UNDO'."""
        return Metaclass_Key.__constants['KEY_UNDO']

    @property
    def MODIFIER_NONE(self):
        """Message constant 'MODIFIER_NONE'."""
        return Metaclass_Key.__constants['MODIFIER_NONE']

    @property
    def MODIFIER_LSHIFT(self):
        """Message constant 'MODIFIER_LSHIFT'."""
        return Metaclass_Key.__constants['MODIFIER_LSHIFT']

    @property
    def MODIFIER_RSHIFT(self):
        """Message constant 'MODIFIER_RSHIFT'."""
        return Metaclass_Key.__constants['MODIFIER_RSHIFT']

    @property
    def MODIFIER_LCTRL(self):
        """Message constant 'MODIFIER_LCTRL'."""
        return Metaclass_Key.__constants['MODIFIER_LCTRL']

    @property
    def MODIFIER_RCTRL(self):
        """Message constant 'MODIFIER_RCTRL'."""
        return Metaclass_Key.__constants['MODIFIER_RCTRL']

    @property
    def MODIFIER_LALT(self):
        """Message constant 'MODIFIER_LALT'."""
        return Metaclass_Key.__constants['MODIFIER_LALT']

    @property
    def MODIFIER_RALT(self):
        """Message constant 'MODIFIER_RALT'."""
        return Metaclass_Key.__constants['MODIFIER_RALT']

    @property
    def MODIFIER_LMETA(self):
        """Message constant 'MODIFIER_LMETA'."""
        return Metaclass_Key.__constants['MODIFIER_LMETA']

    @property
    def MODIFIER_RMETA(self):
        """Message constant 'MODIFIER_RMETA'."""
        return Metaclass_Key.__constants['MODIFIER_RMETA']

    @property
    def MODIFIER_NUM(self):
        """Message constant 'MODIFIER_NUM'."""
        return Metaclass_Key.__constants['MODIFIER_NUM']

    @property
    def MODIFIER_CAPS(self):
        """Message constant 'MODIFIER_CAPS'."""
        return Metaclass_Key.__constants['MODIFIER_CAPS']

    @property
    def MODIFIER_MODE(self):
        """Message constant 'MODIFIER_MODE'."""
        return Metaclass_Key.__constants['MODIFIER_MODE']

    @property
    def MODIFIER_RESERVED(self):
        """Message constant 'MODIFIER_RESERVED'."""
        return Metaclass_Key.__constants['MODIFIER_RESERVED']


class Key(metaclass=Metaclass_Key):
    """
    Message class 'Key'.

    Constants:
      KEY_UNKNOWN
      KEY_FIRST
      KEY_BACKSPACE
      KEY_TAB
      KEY_CLEAR
      KEY_RETURN
      KEY_PAUSE
      KEY_ESCAPE
      KEY_SPACE
      KEY_EXCLAIM
      KEY_QUOTEDBL
      KEY_HASH
      KEY_DOLLAR
      KEY_AMPERSAND
      KEY_QUOTE
      KEY_LEFTPAREN
      KEY_RIGHTPAREN
      KEY_ASTERISK
      KEY_PLUS
      KEY_COMMA
      KEY_MINUS
      KEY_PERIOD
      KEY_SLASH
      KEY_0
      KEY_1
      KEY_2
      KEY_3
      KEY_4
      KEY_5
      KEY_6
      KEY_7
      KEY_8
      KEY_9
      KEY_COLON
      KEY_SEMICOLON
      KEY_LESS
      KEY_EQUALS
      KEY_GREATER
      KEY_QUESTION
      KEY_AT
      KEY_LEFTBRACKET
      KEY_BACKSLASH
      KEY_RIGHTBRACKET
      KEY_CARET
      KEY_UNDERSCORE
      KEY_BACKQUOTE
      KEY_A
      KEY_B
      KEY_C
      KEY_D
      KEY_E
      KEY_F
      KEY_G
      KEY_H
      KEY_I
      KEY_J
      KEY_K
      KEY_L
      KEY_M
      KEY_N
      KEY_O
      KEY_P
      KEY_Q
      KEY_R
      KEY_S
      KEY_T
      KEY_U
      KEY_V
      KEY_W
      KEY_X
      KEY_Y
      KEY_Z
      KEY_DELETE
      KEY_WORLD_0
      KEY_WORLD_1
      KEY_WORLD_2
      KEY_WORLD_3
      KEY_WORLD_4
      KEY_WORLD_5
      KEY_WORLD_6
      KEY_WORLD_7
      KEY_WORLD_8
      KEY_WORLD_9
      KEY_WORLD_10
      KEY_WORLD_11
      KEY_WORLD_12
      KEY_WORLD_13
      KEY_WORLD_14
      KEY_WORLD_15
      KEY_WORLD_16
      KEY_WORLD_17
      KEY_WORLD_18
      KEY_WORLD_19
      KEY_WORLD_20
      KEY_WORLD_21
      KEY_WORLD_22
      KEY_WORLD_23
      KEY_WORLD_24
      KEY_WORLD_25
      KEY_WORLD_26
      KEY_WORLD_27
      KEY_WORLD_28
      KEY_WORLD_29
      KEY_WORLD_30
      KEY_WORLD_31
      KEY_WORLD_32
      KEY_WORLD_33
      KEY_WORLD_34
      KEY_WORLD_35
      KEY_WORLD_36
      KEY_WORLD_37
      KEY_WORLD_38
      KEY_WORLD_39
      KEY_WORLD_40
      KEY_WORLD_41
      KEY_WORLD_42
      KEY_WORLD_43
      KEY_WORLD_44
      KEY_WORLD_45
      KEY_WORLD_46
      KEY_WORLD_47
      KEY_WORLD_48
      KEY_WORLD_49
      KEY_WORLD_50
      KEY_WORLD_51
      KEY_WORLD_52
      KEY_WORLD_53
      KEY_WORLD_54
      KEY_WORLD_55
      KEY_WORLD_56
      KEY_WORLD_57
      KEY_WORLD_58
      KEY_WORLD_59
      KEY_WORLD_60
      KEY_WORLD_61
      KEY_WORLD_62
      KEY_WORLD_63
      KEY_WORLD_64
      KEY_WORLD_65
      KEY_WORLD_66
      KEY_WORLD_67
      KEY_WORLD_68
      KEY_WORLD_69
      KEY_WORLD_70
      KEY_WORLD_71
      KEY_WORLD_72
      KEY_WORLD_73
      KEY_WORLD_74
      KEY_WORLD_75
      KEY_WORLD_76
      KEY_WORLD_77
      KEY_WORLD_78
      KEY_WORLD_79
      KEY_WORLD_80
      KEY_WORLD_81
      KEY_WORLD_82
      KEY_WORLD_83
      KEY_WORLD_84
      KEY_WORLD_85
      KEY_WORLD_86
      KEY_WORLD_87
      KEY_WORLD_88
      KEY_WORLD_89
      KEY_WORLD_90
      KEY_WORLD_91
      KEY_WORLD_92
      KEY_WORLD_93
      KEY_WORLD_94
      KEY_WORLD_95
      KEY_KP0
      KEY_KP1
      KEY_KP2
      KEY_KP3
      KEY_KP4
      KEY_KP5
      KEY_KP6
      KEY_KP7
      KEY_KP8
      KEY_KP9
      KEY_KP_PERIOD
      KEY_KP_DIVIDE
      KEY_KP_MULTIPLY
      KEY_KP_MINUS
      KEY_KP_PLUS
      KEY_KP_ENTER
      KEY_KP_EQUALS
      KEY_UP
      KEY_DOWN
      KEY_RIGHT
      KEY_LEFT
      KEY_INSERT
      KEY_HOME
      KEY_END
      KEY_PAGEUP
      KEY_PAGEDOWN
      KEY_F1
      KEY_F2
      KEY_F3
      KEY_F4
      KEY_F5
      KEY_F6
      KEY_F7
      KEY_F8
      KEY_F9
      KEY_F10
      KEY_F11
      KEY_F12
      KEY_F13
      KEY_F14
      KEY_F15
      KEY_NUMLOCK
      KEY_CAPSLOCK
      KEY_SCROLLOCK
      KEY_RSHIFT
      KEY_LSHIFT
      KEY_RCTRL
      KEY_LCTRL
      KEY_RALT
      KEY_LALT
      KEY_RMETA
      KEY_LMETA
      KEY_LSUPER
      KEY_RSUPER
      KEY_MODE
      KEY_COMPOSE
      KEY_HELP
      KEY_PRINT
      KEY_SYSREQ
      KEY_BREAK
      KEY_MENU
      KEY_POWER
      KEY_EURO
      KEY_UNDO
      MODIFIER_NONE
      MODIFIER_LSHIFT
      MODIFIER_RSHIFT
      MODIFIER_LCTRL
      MODIFIER_RCTRL
      MODIFIER_LALT
      MODIFIER_RALT
      MODIFIER_LMETA
      MODIFIER_RMETA
      MODIFIER_NUM
      MODIFIER_CAPS
      MODIFIER_MODE
      MODIFIER_RESERVED
    """

    __slots__ = [
        '_header',
        '_code',
        '_modifiers',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'code': 'uint16',
        'modifiers': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.code = kwargs.get('code', int())
        self.modifiers = kwargs.get('modifiers', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.code != other.code:
            return False
        if self.modifiers != other.modifiers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'code' field must be an unsigned integer in [0, 65535]"
        self._code = value

    @builtins.property
    def modifiers(self):
        """Message field 'modifiers'."""
        return self._modifiers

    @modifiers.setter
    def modifiers(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'modifiers' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'modifiers' field must be an unsigned integer in [0, 65535]"
        self._modifiers = value
