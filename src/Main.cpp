#include "graphics/Window.h"
#include "Engine.h"

int main()
{
    vc::Window::init(vc::Engine::init, vc::Engine::start, vc::Engine::frame, vc::Engine::destroy);
    vc::Window::create(800, 600, "VCraft");
    vc::Window::loop();
    vc::Window::destroy();
    return 0;
}

