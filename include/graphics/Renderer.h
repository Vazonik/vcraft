#ifndef VCRAFT_RENDERER_H
#define VCRAFT_RENDERER_H

#define CAMERA_STACK_MAX 256

#include "graphics/Camera.h"
#include "graphics/Vbo.h"
#include "graphics/Vao.h"
#include "graphics/ShadersBuffer.h"
#include "graphics/Texture.h"

#define SHADER_TYPE_LAST vc::Renderer::ShaderType::basicTexture
#define TEXTURES_LAST vc::Renderer::Textures::crosshair

namespace vc {
    class Renderer {
    public:
        enum Pass {
            pass2D,
            pass3D
        };
        enum Textures {
            crosshair
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
        void useShader(Shader* pShader);
        [[nodiscard]] Texture getTexture(Textures enumTexture) const;
        void quadColor(const glm::vec2 &size, const glm::vec4 &color, const glm::mat4 &model);
        void quadTexture(const Texture &texture, const glm::vec2 &size, const glm::vec4 &color,
                         const glm::vec2 &uvMin, const glm::vec2 &uvMax, const glm::mat4 &model);
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
        ShadersBuffer shaders;
        Shader *shader;
        Texture texturesArray[TEXTURES_LAST + 1];
    };
}

#endif //VCRAFT_RENDERER_H
