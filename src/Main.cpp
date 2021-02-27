#include "graphics/Window.h"

#include <iostream>

int main()
{

    auto engine = new vc::Engine();
    auto window = vc::Window::create(800, 600, "VCraft", engine);
    window->loop();
    window->destroy();
    delete engine;

    return 0;
}

