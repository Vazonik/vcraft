#include "Engine.h"

#include <iostream>

void vc::Engine::init() {
    std::cout << "INIT" << std::endl;
}

void vc::Engine::start() {
    std::cout << "START" << std::endl;
}

void vc::Engine::frame() {

}

void vc::Engine::destroy() {
    std::cout << "DESTROY" << std::endl;
}
