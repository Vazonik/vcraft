//
// Created by dawid on 27.02.2021.
//

#include <graphics/Vao.h>

vc::Vao::Vao() = default;

void vc::Vao::create() {
    glGenVertexArrays(1, &handle);
}

void vc::Vao::destroy() {
    glDeleteVertexArrays(1, &handle);
}

void vc::Vao::use() const {
    glBindVertexArray(handle);
}

void vc::Vao::attr(const vc::Vbo &vbo, GLuint index, GLint size, GLenum type, GLsizei stride, size_t offset) const {
    use();
    vbo.use();

    switch(type) {
        case GL_BYTE:
        case GL_UNSIGNED_BYTE:
        case GL_SHORT:
        case GL_UNSIGNED_SHORT:
        case GL_INT:
        case GL_UNSIGNED_INT:
        case GL_INT_2_10_10_10_REV:
        case GL_UNSIGNED_INT_2_10_10_10_REV:
            glVertexAttribIPointer(index, size, type, stride, (void *) offset);
            break;
        default:
            glVertexAttribPointer(index, size, type, GL_FALSE, stride, (void *) offset);
            break;
    }

    glEnableVertexAttribArray(index);
}

