#ifndef VCRAFT_TEXTURESBUFFER_H
#define VCRAFT_TEXTURESBUFFER_H

#include "graphics/Texture.h"

namespace vc {
    enum Textures {
        crosshair
    };

    class TexturesBuffer {
    public:
        TexturesBuffer();
        ~TexturesBuffer();
    public:
        Texture *getTexture(Textures textureEnum);
    private:
        Texture *crosshairTexture;
    public:
        void createTextures();
        void destroyTextures();
    };
}

#endif //VCRAFT_TEXTURESBUFFER_H
