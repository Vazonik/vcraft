#ifndef VCRAFT_SHADERSBUFFER_H
#define VCRAFT_SHADERSBUFFER_H

#include "graphics/Shader.h"

namespace vc {
    enum Shaders {
        basicColor,
        basicTexture
    };

    class ShadersBuffer {
    public:
        ShadersBuffer();
        ~ShadersBuffer();
    private:
        // SHADERS DECLARATIONS
        Shader *basicColorShader;
        Shader *basicTextureShader;
    public:
        [[nodiscard]] Shader *getShader(Shaders shaderEnum) const;
        void createShaders();
        void destroyShaders();
    };
}

#endif //VCRAFT_SHADERSBUFFER_H
