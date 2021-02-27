//
// Created by dawid on 27.02.2021.
//

#include <graphics/Vbo.h>

vc::Vbo::Vbo(GLint type, bool dynamic) : type(type), dynamic(dynamic) {
    glGenBuffers(1, &handle);
}

void vc::Vbo::destroy() {
    glDeleteBuffers(1, &handle);
}

void vc::Vbo::use() const {
    glBindBuffer(type, handle);
}

void vc::Vbo::buffer(void *data, size_t offset, size_t count) const {
    use();
    glBufferData(type, count - offset, data, dynamic ? GL_DYNAMIC_DRAW : GL_STATIC_DRAW);
}

