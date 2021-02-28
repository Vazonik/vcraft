#ifndef VCRAFT_SHADERSBUFFER_H
#define VCRAFT_SHADERSBUFFER_H

#include "graphics/Shader.h"

namespace vc {
    class ShadersBuffer {
    public:
        ShadersBuffer();
        ~ShadersBuffer();
    public:
        // SHADERS GETTERS
        [[nodiscard]] Shader *getBasicColorShader() const;
        [[nodiscard]] Shader *getBasicTextureShader() const;
    private:
        // SHADERS DECLARATIONS
        Shader *basicColorShader;
        Shader *basicTextureShader;
    public:
        void createShaders();
        void destroyShaders();
    };
}

#endif //VCRAFT_SHADERSBUFFER_H
