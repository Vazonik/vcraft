#ifndef VCRAFT_SHADER_H
#define VCRAFT_SHADER_H

#include <glad/glad.h>

#include "utilities/viewproj.h"

namespace vc {
    class Shader {
    public:
        enum Type {
            full,
            vertex,
            fragment
        };

        struct VertexAttr {
            GLuint index;
            const GLchar *name;
        };
    public:
        Shader(char *vsPath, char *fsPath, size_t n, struct VertexAttr attributes[]);
        [[nodiscard]] GLint getHandle(Type type = Type::full) const;
    private:
        GLint handle{}, vsHandle{}, fsHandle{};
    };
}

#endif //VCRAFT_SHADER_H
