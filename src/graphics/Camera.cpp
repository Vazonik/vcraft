#include "graphics/Camera.h"
#include "graphics/Window.h"

vc::Camera::OrthoCamera::OrthoCamera() = default;

void vc::Camera::OrthoCamera::init(glm::vec2 _min, glm::vec2 _max) {
    min = _min;
    max = _max;
    update();
}

void vc::Camera::OrthoCamera::update() {
    vp.view = glm::mat4(1.0f);
    vp.proj = glm::ortho(min.x, max.x, min.y, max.y, -100.0f, 100.0f);
}


vc::Camera::PerspCamera::PerspCamera() = default;

void vc::Camera::PerspCamera::init(float _fov) {
    fov = _fov;
    glm::i32vec2 wndSize = vc::Window::getInstance()->getSize();
    aspect = static_cast<float>(wndSize.x) / static_cast<float>(wndSize.y);
    znear = 0.01f;
    zfar = 1000.0f;
    this->update();
}

void vc::Camera::PerspCamera::update() {
    pitch = glm::clamp(pitch, -glm::half_pi<float>(), glm::half_pi<float>());
    yaw = (yaw < 0 ? glm::two_pi<float>() : 0.0f) + fmodf(yaw, glm::two_pi<float>());
    direction = {
            cosf(pitch) * sinf(yaw),
            sinf(pitch),
            cosf(pitch) * cosf(yaw)
    };

    // TODO: check this if the perspective isn't working
    direction = glm::normalize(direction);
    right = glm::cross(glm::vec3(0.0f, 1.0f, 0.0f), direction);
    up = glm::cross(direction, right);

    vp.view = glm::lookAt(position, position + direction, up);
    vp.proj = glm::perspective(fov, aspect, znear, zfar);
}
