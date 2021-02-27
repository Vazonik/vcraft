#include "graphics/Window.h"

#include <iostream>

int main()
{

    auto engine = new vc::Engine();
    auto window = vc::Window::create(1280, 720, "VCraft", engine);
    window->loop();
    window->destroy();
    delete engine;

    return 0;
}

