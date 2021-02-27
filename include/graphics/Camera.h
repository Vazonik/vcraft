#ifndef VCRAFT_CAMERA_H
#define VCRAFT_CAMERA_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>

#include "utilities/viewproj.h"

namespace vc {
    class Camera {
    public:
        enum Type {
            orthographic,
            perspective
        };
    public:
        class OrthoCamera {
        public:
            OrthoCamera();
            void init(glm::vec2 min, glm::vec2 max);
            void update();
            ViewProj getViewProj();
        private:
            ViewProj vp{};
            glm::vec2 position{}, min{}, max{};
        };

        class PerspCamera {
        public:
            PerspCamera();
            void init(float fov);
            void update();
            ViewProj getViewProj();
        private:
            ViewProj vp{};
            glm::vec3 position{}, direction{}, up{}, right{};
            float pitch{}, yaw{}, fov{}, aspect{}, znear{}, zfar{};
        };
    };
}

#endif //VCRAFT_CAMERA_H
