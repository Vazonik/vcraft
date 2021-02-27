#ifndef VCRAFT_SHADER_H
#define VCRAFT_SHADER_H

#include <glad/glad.h>
#include <iostream>

#include "utilities/viewproj.h"

namespace vc {
    class Shader {
    public:
        enum Type {
            vertex,
            fragment
        };

        struct VertexAttr {
            GLuint index;
            const GLchar *name;
        };
    public:
        Shader(char *vsPath, char *fsPath, size_t n, struct VertexAttr attributes[]);
        [[nodiscard]] GLint getHandle() const;
        [[nodiscard]] GLint getHandle(Type type) const;
    private:
        static GLuint compile(char *path, Type type);
        static void checkCompileErrors(GLint shader, char* path, vc::Shader::Type type);
    private:
        GLint handle{}, vsHandle{}, fsHandle{};
    public:
        void use() const;
        void destroy() const;
        void sendViewProj(ViewProj vp) const;
        void sendMat4(const std::string &name, glm::mat4 m) const;
        void sendTexture2D(); /* TODO: Send texture 2D to shader */
        void sendFloat(const std::string &name, float f) const;
        void sendVec2(const std::string &name, glm::vec2 v) const;
        void sendVec3(const std::string &name, glm::vec3 v) const;
        void sendVec4(const std::string &name, glm::vec4 v) const;
        void sendInt(const std::string &name, int i) const;
        void sentUInt(const std::string &name, unsigned int ui) const;
    };
}

#endif //VCRAFT_SHADER_H
