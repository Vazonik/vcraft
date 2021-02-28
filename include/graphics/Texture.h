#ifndef VCRAFT_TEXTURE_H
#define VCRAFT_TEXTURE_H

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <string>

namespace vc {
    class Texture {
    public:
        Texture();
        ~Texture();
        static void loadPixels(const std::string &path, uint8_t **pixelsOut, size_t *widthOut, size_t *heightOut);
        void create(uint8_t *pixels, size_t width, size_t height);
        void create(const std::string &path);
        void destroy();
        void use() const;
    private:
        GLuint handle{};
        glm::ivec2 size{};
    };
}

#endif //VCRAFT_TEXTURE_H
