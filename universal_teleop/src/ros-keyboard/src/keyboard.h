#ifndef __ROS_KEYBOARD_H__
#define __ROS_KEYBOARD_H__

#include "keyboard_msgs/msg/key.hpp"
#include <SDL.h>

namespace keyboard {
  class Keyboard {
    public:
//    Delay specifies how long the key must be pressed before it begins repeating, 
//    it then repeats at the speed specified by interval. Both delay and interval 
//    are expressed in milliseconds. Setting delay to 0 disables key repeating completely. 
//    Good default values are SDL_DEFAULT_REPEAT_DELAY and SDL_DEFAULT_REPEAT_INTERVAL. 
//    http:sdl.beuc.net/sdl.wiki/SDL_EnableKeyRepeat
      Keyboard();
      ~Keyboard(void);

      bool get_key(bool& new_event, bool& pressed, int& code, uint16_t& modifiers);

    private:
      //SDL_Window* window;
      SDL_Window* TrueWindow;
      SDL_Surface* window;
  };    
}

#endif
