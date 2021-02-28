#include "graphics/ShadersBuffer.h"

vc::ShadersBuffer::ShadersBuffer() {
    basicColorShader = new Shader();
    basicTextureShader = new Shader();
}

void vc::ShadersBuffer::createShaders() {
    Shader::VertexAttr basicColorAttr[] = {
            { 0, "position" }
    };
    Shader::VertexAttr basicTextureAttr[] = {
            {0, "position"},
            {1, "uv"}
    };

    basicColorShader->create("shaders/basic_color.vs", "shaders/basic_color.fs", 1, basicColorAttr);
    basicTextureShader->create("shaders/basic_texture.vs", "shaders/basic_texture.fs", 2, basicTextureAttr);
}

vc::Shader *vc::ShadersBuffer::getShader(vc::Shaders shaderEnum) const {
    switch(shaderEnum) {
        case basicColor:
            return basicColorShader;
        case basicTexture:
            return basicTextureShader;
        default:
            return nullptr;
    }
}

void vc::ShadersBuffer::destroyShaders() {
    delete basicTextureShader;
    delete basicColorShader;
}

vc::ShadersBuffer::~ShadersBuffer() {
    this->destroyShaders();
}