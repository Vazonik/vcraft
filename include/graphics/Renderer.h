#ifndef VCRAFT_RENDERER_H
#define VCRAFT_RENDERER_H

#define CAMERA_STACK_MAX 256

#include "graphics/Camera.h"
#include "graphics/Vbo.h"
#include "graphics/Vao.h"
#include "graphics/Shader.h"

namespace vc {
    class Renderer {
    public:
        enum Pass {
            pass2D,
            pass3D
        };
        enum ShaderType {
            none,
            basicColor
        };
    private:
        struct CameraStack {
            Camera::Type array[CAMERA_STACK_MAX];
            size_t size;
        };
    public:
        Renderer();
        ~Renderer();
        void create();
        void destroy();
        void update();
        void prepare(Pass pass);
        void setCamera(Camera::Type cameraType);
        void pushCamera();
        void popCamera();
        void setViewProj();
        void useShader(ShaderType shaderType);
        void quadColor(const glm::vec2 &size, const glm::vec4 &color, const glm::mat4 &model);
        void quadTexture(); /* TODO: quad texture */
        void aabb(); /* TODO: aabb */
    public:
        glm::vec4 clearColor;
    private:
        Camera::Type cameraType;
        Camera::PerspCamera perspectiveCamera;
        Camera::OrthoCamera orthographicCamera;
        CameraStack cameraStack;
        Vbo vbo, ibo;
        Vao vao;
        Shader shadersArray[ShaderType::basicColor];
        ShaderType currentShaderType;
        Shader currentShader;
    };
}

#endif //VCRAFT_RENDERER_H
