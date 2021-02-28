
#include "graphics/Renderer.h"
#include "graphics/Window.h"

vc::Renderer::Renderer() :
    cameraType(vc::Camera::Type::perspective),
    clearColor(0.0f, 0.0f, 0.0f, 1.0f),
    shader(nullptr),
    cameraStack(),
    shaders() {}

vc::Renderer::~Renderer() = default;

void vc::Renderer::create() {
    shaders.createShaders();
    textures.createTextures();

    vao.create();
    vbo.create(GL_ARRAY_BUFFER, true);
    ibo.create(GL_ELEMENT_ARRAY_BUFFER, true);

    perspectiveCamera.init(glm::radians(75.0f));
    orthographicCamera.init({ 0.0f, 0.0f }, static_cast<glm::vec2>(vc::Window::getInstance()->getSize()));
}

void vc::Renderer::destroy() {
    shaders.destroyShaders();
    textures.destroyTextures();
    vao.destroy();
    vbo.destroy();
    ibo.destroy();
}

void vc::Renderer::update() {
    // now empty
}

void vc::Renderer::prepare(vc::Renderer::Pass pass) {
    switch(pass) {
        case Pass::pass2D:
            orthographicCamera.init({ 0.0f, 0.0f }, static_cast<glm::vec2>(vc::Window::getInstance()->getSize()));
            glClear(GL_DEPTH_BUFFER_BIT);
            glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
            glDisable(GL_DEPTH_TEST);
            glDisable(GL_CULL_FACE);
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            break;
        case Pass::pass3D:
            glClearColor(clearColor.x, clearColor.y, clearColor.z, clearColor.w);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); /* TODO: wireframe */
            glEnable(GL_DEPTH_TEST);
            glDepthFunc(GL_LESS);
            glEnable(GL_CULL_FACE);
            glCullFace(GL_BACK);
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            break;
    }
}

void vc::Renderer::setCamera(vc::Camera::Type _cameraType) {
    this->cameraType = _cameraType;
}

void vc::Renderer::pushCamera() {
    assert(cameraStack.size + 1 < CAMERA_STACK_MAX);
    cameraStack.array[cameraStack.size++] = cameraType;
}

void vc::Renderer::popCamera() {
    assert(cameraStack.size != 0);
    cameraType = cameraStack.array[--cameraStack.size];
}

void vc::Renderer::setViewProj() {
    switch(cameraType) {
        case Camera::Type::perspective:
            shader->sendViewProj(perspectiveCamera.getViewProj());
            break;
        case Camera::Type::orthographic:
            shader->sendViewProj(orthographicCamera.getViewProj());
            break;
    }
}

void vc::Renderer::useShader(vc::Shader *pShader) {
    if(shader == pShader) {
        return;
    }

    shader = pShader;
    shader->use();
}

vc::Texture *vc::Renderer::getTexture(vc::Textures textureEnum) {
    return textures.getTexture(textureEnum);
}

void vc::Renderer::quadColor(const glm::vec2 &size, const glm::vec4 &color, const glm::mat4 &model) {
    useShader(shaders.getShader(vc::Shaders::basicColor));
    setViewProj();
    shader->sendMat4("m", model);
    shader->sendVec4("color", color);

    const float vboData[] = {
            0.0f, 0.0f, 0.0f,
            0.0f, size.y, 0.0f,
            size.x, size.y, 0.0f,
            size.x, 0.0f, 0.0f
    };

    const unsigned int iboData[] = {
            3, 0, 1, 3, 1, 2
    };

    vbo.buffer((void*)vboData, 0, (4 * 3) * sizeof(float));
    ibo.buffer((void*)iboData, 0, 6 * sizeof(unsigned int));
    vao.attr(vbo, 0, 3, GL_FLOAT, 0, 0);

    vao.use();
    vbo.use();
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, (void *)nullptr);
}

void vc::Renderer::quadTexture(const vc::Texture *texture, const glm::vec2 &size, const glm::vec4 &color,
                               const glm::vec2 &uvMin, const glm::vec2 &uvMax, const glm::mat4 &model) {
    useShader(shaders.getShader(vc::Shaders::basicTexture));
    setViewProj();
    shader->sendMat4("m", model);
    shader->sendTexture2D("tex", texture, 0);
    shader->sendVec4("color", color);

    const float vboData[] = {
            0.0f, 0.0f, 0.0f,
            0.0f, size.y, 0.0f,
            size.x, size.y, 0.0f,
            size.x, 0.0f, 0.0f,

            uvMin.x, uvMin.y,
            uvMin.x, uvMax.y,
            uvMax.x, uvMax.y,
            uvMax.x, uvMin.y
    };

    const unsigned int iboData[] = {
            3, 0, 1, 3, 1, 2
    };

    vbo.buffer((void*)vboData, 0, 20 * sizeof(float));
    ibo.buffer((void*)iboData, 0, 6 * sizeof(unsigned int));
    vao.attr(vbo, 0, 3, GL_FLOAT, 0, 0);
    vao.attr(vbo, 1, 2, GL_FLOAT, 0, 12 * sizeof(float));

    vao.use();
    vbo.use();
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, (void*)nullptr);
}

void vc::Renderer::aabb() {
    // for later
}
