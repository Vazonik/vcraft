
#include <graphics/Shader.h>

vc::Shader::Shader(char *vsPath, char *fsPath, size_t n, vc::Shader::VertexAttr *attributes) {

}


// getters
GLint vc::Shader::getHandle(vc::Shader::Type type) const {
    switch(type) {
        case Type::fragment:
            return fsHandle;
        case Type::vertex:
            return vsHandle;
        default:
            return handle;
    }
}
