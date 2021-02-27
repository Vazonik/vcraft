#include "Engine.h"
#include "graphics/Window.h"

#include <iostream>


vc::Engine::Engine() = default;

/* before GLAD initialisation */
void vc::Engine::init() {

}

/* before the first update */
void vc::Engine::start() {
    basicColorShader.create("shaders/basic_color.vs", "shaders/basic_color.fs", 0, {});
}

/* a frame, function before render */
void vc::Engine::update() {

}

/* a frame, function after update */
void vc::Engine::render() {

}

/* destroy */
void vc::Engine::destroy() {
    basicColorShader.destroy();
}
