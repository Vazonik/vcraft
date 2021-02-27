#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#include "graphics/Texture.h"

vc::Texture::Texture() = default;

void vc::Texture::loadPixels(const std::string &path, uint8_t **pixelsOut, size_t *widthOut, size_t *heightOut) {
    int width, height, channels;

    stbi_set_flip_vertically_on_load(true);
    unsigned char *image = stbi_load(path.c_str(), &width, &height, &channels, STBI_rgb_alpha);
    assert(image != nullptr);

    *pixelsOut = static_cast<uint8_t *>(malloc(width * height * 4));
    memcpy(*pixelsOut, image, width * height * 4);
    *widthOut = width;
    *heightOut = height;

    stbi_image_free(image);
}

void vc::Texture::create(uint8_t *pixels, size_t width, size_t height) {
    size = { width, height };

    glGenTextures(1, &handle);
    glBindTexture(GL_TEXTURE_2D, handle);

    // No interpolation
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
}

void vc::Texture::create(const std::string &path) {
    uint8_t *pixels;
    size_t width, height;
    loadPixels(path, &pixels, &width, &height);
    this->create(pixels, width, height);
    free(pixels);
}

void vc::Texture::destroy() {
    glDeleteTextures(1, &handle);
}

void vc::Texture::use() const {
    glBindTexture(GL_TEXTURE_2D, handle);
}
