#include <graphics/TexturesBuffer.h>

vc::TexturesBuffer::TexturesBuffer() {
    crosshairTexture = new Texture();
}

void vc::TexturesBuffer::createTextures() {
    crosshairTexture->create("resources/images/crosshair.png");
}

vc::Texture *vc::TexturesBuffer::getTexture(Textures textureEnum) {
    switch(textureEnum) {
        case crosshair:
            return crosshairTexture;
        default:
            return nullptr;
    }
}

void vc::TexturesBuffer::destroyTextures() {
    delete crosshairTexture;
}

vc::TexturesBuffer::~TexturesBuffer() {
    this->destroyTextures();
}