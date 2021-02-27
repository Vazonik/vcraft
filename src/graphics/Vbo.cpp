//
// Created by dawid on 27.02.2021.
//

#include <graphics/Vbo.h>

vc::Vbo::Vbo() = default;

void vc::Vbo::create(GLint _type, bool _dynamic)  {
    this->type = _type;
    this->dynamic = _dynamic;
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

