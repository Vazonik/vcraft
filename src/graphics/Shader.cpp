
#include <graphics/Shader.h>
#include <cstdio>
#include <fstream>
#include <sstream>

#include "graphics/Window.h"

vc::Shader::Shader() = default;
vc::Shader::~Shader() {
    destroy();
}

void vc::Shader::create(const std::string &vsPath, const std::string &fsPath, size_t n, vc::Shader::VertexAttr *attributes) {
    if(!vc::Window::getInstance()->isGladInitialised()) {
        throw std::runtime_error("[ERROR] Building a shader before glad initialization is not allowed.");
    }

    vsHandle = compile(vsPath, Type::vertex);
    fsHandle = compile(fsPath, Type::fragment);
    handle = glCreateProgram();
    glAttachShader(handle, vsHandle);
    glAttachShader(handle, fsHandle);

    for (size_t i = 0; i < n; i++) {
        glBindAttribLocation(handle, attributes[i].index, attributes[i].name);
    }

    glLinkProgram(handle);

    // Check link status
    GLint linked;
    glGetProgramiv(handle, GL_LINK_STATUS, &linked);

    if (linked == 0) {
        char buf[512];
        snprintf(buf, 512, "[%s, %s]", vsPath.c_str(), fsPath.c_str());
        std::cout << "[Error] Linking shader at " << buf << " failed." << std::endl;
    }
}

GLuint vc::Shader::compile(const std::string &path, vc::Shader::Type type) {
    std::string strCode;
    std::ifstream file;

    file.exceptions(std::fstream::failbit | std::fstream::badbit);

    try {
        file.open(path);
        std::stringstream ss;
        ss << file.rdbuf();
        file.close();
        strCode = ss.str();
    } catch (std::ifstream::failure &e) {
        std::cout << "Shader at " << path << " read failed." << std::endl;
    }

    const char *code = strCode.c_str();
    GLuint h;

    switch(type) {
        case Type::vertex:
            h = glCreateShader(GL_VERTEX_SHADER);
            break;
        case Type::fragment:
            h = glCreateShader(GL_FRAGMENT_SHADER);
            break;
    }

    glShaderSource(h, 1, &code, nullptr);
    glCompileShader(h);
    checkCompileErrors(h, path, type);

    return h;
}

void vc::Shader::checkCompileErrors(GLint shader, const std::string &path, vc::Shader::Type type) {
    int success;
    char infoLog[1024];
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(shader, 1024, nullptr, infoLog);

        std::string typeName;
        switch(type) {
            case vc::Shader::Type::fragment:
                typeName = "Fragment shader";
                break;
            case vc::Shader::Type::vertex:
                typeName = "Vertex shader";
                break;
            default:
                typeName = "Shader";
        }

        std::cout << "[ERROR] " << typeName << " at " << path << " compilation error:" << std::endl;
        std::cout << infoLog << std::endl;
    }
}

// getters
GLint vc::Shader::getHandle() const {
    return handle;
}

GLint vc::Shader::getHandle(vc::Shader::Type type) const {
    switch(type) {
        case Type::fragment:
            return fsHandle;
        case Type::vertex:
            return vsHandle;
    }
}

void vc::Shader::use() const {
    glUseProgram(handle);
}

void vc::Shader::destroy() const {
    glDeleteProgram(handle);
    glDeleteShader(vsHandle);
    glDeleteShader(fsHandle);
}


// send (uniforms)
void vc::Shader::sendViewProj(ViewProj vp) const {
    sendMat4("p", vp.proj);
    sendMat4("v", vp.view);
}

void vc::Shader::sendMat4(const std::string &name, glm::mat4 m) const {
    glUniformMatrix4fv(glGetUniformLocation(handle, name.c_str()), 1, GL_FALSE, &m[0][0]);
}

void vc::Shader::sendTexture2D() {
    // for later
}

void vc::Shader::sendFloat(const std::string &name, float f) const {
    glUniform1f(glGetUniformLocation(handle, name.c_str()), f);
}

void vc::Shader::sendVec2(const std::string &name, glm::vec2 v) const {
    glUniform2f(glGetUniformLocation(handle, name.c_str()), v.x, v.y);
}

void vc::Shader::sendVec3(const std::string &name, glm::vec3 v) const {
    glUniform3f(glGetUniformLocation(handle, name.c_str()), v.x, v.y, v.z);
}

void vc::Shader::sendVec4(const std::string &name, glm::vec4 v) const {
    glUniform4f(glGetUniformLocation(handle, name.c_str()), v.x, v.y, v.z, v.w);
}

void vc::Shader::sendInt(const std::string &name, int i) const {
    glUniform1i(glGetUniformLocation(handle, name.c_str()), i);
}

void vc::Shader::sendUInt(const std::string &name, unsigned int ui) const {
    glUniform1ui(glGetUniformLocation(handle, name.c_str()), ui);
}
