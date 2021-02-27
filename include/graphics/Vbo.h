#ifndef VCRAFT_VBO_H
#define VCRAFT_VBO_H

#include <cstdio>
#include <glad/glad.h>

namespace vc {
    class Vbo {
    public:
        Vbo(GLint type, bool dynamic);
        void destroy();
        void use() const;
        void buffer(void *data, size_t offset, size_t count) const;
    private:
        GLuint handle{};
        GLint type;
        bool dynamic;
    };
}

#endif //VCRAFT_VBO_H
