#include "Engine.h"

#include <iostream>

void vc::Engine::init() {
    std::cout << "INIT" << std::endl;
}

void vc::Engine::start() {
    std::cout << "START" << std::endl;
}

void vc::Engine::frame() {
    static int l = 1;
    if(l < 4) {
        std::cout << "FRAME " << l << std::endl;
    } else if (l < 5) {
        std::cout << "..." << std::endl;
    }
    l++;
}

void vc::Engine::destroy() {
    std::cout << "DESTROY" << std::endl;
}
