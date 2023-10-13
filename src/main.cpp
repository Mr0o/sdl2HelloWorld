// command to compile
// Linux:   g++ -o bin/main src/main.cpp -I include -L lib -l SDL2

#include <SDL2/SDL.h>
#include <iostream>

int main(int argc, char* argv[]){
    // initialize SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    // get the resolution of the display
    int x, y;
    SDL_DisplayMode DM;
    SDL_GetCurrentDisplayMode(0, &DM);
    x = DM.w; y = DM.h;

    // set the window resolution to half of the display resolution
    x /= 2; y /= 2;

    // create the window and renderer
    SDL_Window* window = SDL_CreateWindow("Hello World! - Mr0o", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, x, y, SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // set the color of the window to red, and wait 5 seconds
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    SDL_Delay(5000);

    // destroy the renderer and window, then quit
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
