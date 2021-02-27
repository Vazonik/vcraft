#ifndef VCRAFT_VAO_H
#define VCRAFT_VAO_H

#include "graphics/Vbo.h"

namespace vc {
    class Vao {
    public:
        Vao();
        void destroy();
        void use() const;
        void attr(const vc::Vbo &vbo, GLuint index, GLint size, GLenum type, GLsizei stride, size_t offset) const;
    private:
        GLuint handle{};
    };
}

#endif //VCRAFT_VAO_H
