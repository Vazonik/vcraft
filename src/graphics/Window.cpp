#include "graphics/Window.h"

#include <iostream>

namespace vc {
    Window *Window::instance = nullptr;
    Window::Window() : gladInitialised(false) {};

    Window *Window::create(int width, int height, const char *title, Engine *engine) {
        instance = new Window();

        instance->size = { width, height };
        instance->_engine = engine;

        engine->init();

        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

        instance->handler = glfwCreateWindow(width, height, title, nullptr, nullptr);
        if (instance->handler == nullptr)
        {
            std::cout << "Failed to create GLFW window" << std::endl;
            instance->destroy();
            return nullptr;
        }
        glfwMakeContextCurrent(instance->handler);

        glfwSetFramebufferSizeCallback(instance->handler, Window::framebufferSizeCallback);

        if (gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
            instance->gladInitialised = true;
        } else {
            std::cout << "Failed to initialize GLAD" << std::endl;
            instance->destroy();
            return nullptr;
        }

        return instance;
    }

    void Window::loop() {
        this->_engine->start();
        while (!glfwWindowShouldClose(handler))
        {
            this->_engine->update();
            this->_engine->render();

            glfwSwapBuffers(handler);
            glfwPollEvents();
        }
    }

    void Window::destroy() {
        this->_engine->destroy();
        this->gladInitialised = false;
        glfwTerminate();
        delete instance;
    }


    // getters
    GLFWwindow *Window::getHandler() {
        return handler;
    }

    glm::i32vec2 Window::getSize() {
        return size;
    }

    bool Window::isGladInitialised() const {
        return gladInitialised;
    }


    // static
    void Window::framebufferSizeCallback(GLFWwindow *windowHandler, int width, int height) {
        getInstance()->size = { width, height };
        glViewport(0, 0, width, height);
    }

    Window *Window::getInstance() {
        return instance;
    }
}


