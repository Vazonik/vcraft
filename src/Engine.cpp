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
    //renderer->update();
}

/* a frame, function after update */
void vc::Engine::render() {
    renderer.prepare(Renderer::pass3D);
    // --- 3D ---



    // ----------
    renderer.prepare(Renderer::pass2D);
    renderer.pushCamera();
    renderer.setCamera(Camera::orthographic);
    // --- 2D ---

    auto wndSize = vc::Window::getInstance()->getSize();
    glm::mat4 m = glm::translate(glm::vec3((wndSize.x / 2) - 8, (wndSize.y / 2) - 8, 0));
    //renderer.quadColor({16.0f, 16.0f }, {1.0f, 1.0f, 1.0f, 1.0f}, m);
    renderer.quadTexture(
            renderer.getTexture(Renderer::crosshair),
            { 16.0f, 16.0f }, { 1.0f, 1.0f, 1.0f, 0.4f },
            { 0.0f, 0.0f }, { 1.0f, 1.0f }, m);

    // ----------
    renderer.popCamera();
}

/* destroy */
void vc::Engine::destroy() {
    renderer.destroy();
}
