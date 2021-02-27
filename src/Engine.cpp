#include "Engine.h"
#include "graphics/Window.h"

#include <iostream>


vc::Engine::Engine() = default;

/* before GLAD initialisation */
void vc::Engine::init() {

}

/* before the first update */
void vc::Engine::start() {
    renderer.create();
}

/* a frame, function before render */
void vc::Engine::update() {
    renderer.update();
}

/* a frame, function after update */
void vc::Engine::render() {
    renderer.prepare(Renderer::pass3D);
    // any 3D stuff
    renderer.prepare(Renderer::pass2D);
    renderer.pushCamera();
    renderer.setCamera(Camera::orthographic);
    // any UI stuff
    renderer.popCamera();
}

/* destroy */
void vc::Engine::destroy() {
    renderer.destroy();
}
