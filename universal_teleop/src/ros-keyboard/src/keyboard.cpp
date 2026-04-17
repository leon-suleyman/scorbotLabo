#include "keyboard.h"
#include <SDL.h>

keyboard::Keyboard::Keyboard()
{
  if (SDL_Init(SDL_INIT_EVENTS) < 0) throw std::runtime_error("Could not init SDL");
  if (SDL_Init(SDL_INIT_VIDEO) < 0) throw std::runtime_error("Could not init SDL");
  //SDL_WM_SetCaption("ROS keyboard input", NULL);
  //window = SDL_SetVideoMode(100, 100, 0, 0);
  TrueWindow = SDL_CreateWindow("ROS keyboard input",0,0,300,300,0);

  window = SDL_GetWindowSurface(TrueWindow);

}

keyboard::Keyboard::~Keyboard(void)
{
  SDL_DestroyWindow(TrueWindow);
  SDL_Quit();
}

bool keyboard::Keyboard::get_key(bool& new_event, bool& pressed, int& code, uint16_t& modifiers)
{
  new_event = false;
  
  SDL_Event event;
  if (SDL_PollEvent(&event)) {
    switch(event.type) {
      case SDL_KEYUP:
        if(!event.key.repeat){
          pressed = false;
          code = event.key.keysym.sym;
          modifiers = event.key.keysym.mod;
          new_event = true;
          window = SDL_GetWindowSurface(TrueWindow);
          SDL_FillRect(window, NULL,SDL_MapRGB(window->format, 130, 0, 0));  
          //SDL_Flip(window);
          SDL_UpdateWindowSurface(TrueWindow);   
        }
      break;

      case SDL_KEYDOWN:
        if(!event.key.repeat){
          pressed = true;
          code = event.key.keysym.sym;
          modifiers = event.key.keysym.mod;
          new_event = true;
          window = SDL_GetWindowSurface(TrueWindow);
          SDL_FillRect(window, NULL, SDL_MapRGB(window->format,0,130,200)); 
          //SDL_Flip(window);
          SDL_UpdateWindowSurface(TrueWindow);
        }
      break;

      case SDL_QUIT:
        return false;
      break;
    }
  }
  return true;
}

