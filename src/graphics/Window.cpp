#include "graphics/Window.h"

#include <iostream>

namespace vc {
    int Window::_width = 0;
    int Window::_height = 0;
    GLFWwindow *Window::handler = nullptr;
    FWindow Window::initCallback = nullptr;
    FWindow Window::startCallback = nullptr;
    FWindow Window::frameCallback = nullptr;
    FWindow Window::destroyCallback = nullptr;


    void Window::init(FWindow init, FWindow start, FWindow frame, FWindow destroy) {
        Window::initCallback = init;
        Window::startCallback = start;
        Window::frameCallback = frame;
        Window::destroyCallback = destroy;
    }

    void Window::create(int width, int height, const char *title) {
        Window::initCallback();

        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

        Window::_width = width;
        Window::_height = height;

        handler = glfwCreateWindow(width, height, title, nullptr, nullptr);
        if (handler == nullptr)
        {
            std::cout << "Failed to create GLFW window" << std::endl;
            Window::destroy();
        }
        glfwMakeContextCurrent(handler);

        glfwSetFramebufferSizeCallback(handler, Window::framebufferSizeCallback);

        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        {
            std::cout << "Failed to initialize GLAD" << std::endl;
            Window::destroy();
        }
    }

    void Window::loop() {
        Window::startCallback();
        while (!glfwWindowShouldClose(handler))
        {
            glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            Window::frameCallback();

            glfwSwapBuffers(handler);
            glfwPollEvents();
        }
    }

    void Window::destroy() {
        Window::destroyCallback();
        glfwTerminate();
    }


    // getters
    GLFWwindow *Window::getHandler() {
        return handler;
    }

    glm::i32vec2 Window::getSize() {
        return glm::i32vec2(Window::_width, Window::_height);
    }


    // static
    void Window::framebufferSizeCallback(GLFWwindow *windowHandler, int width, int height) {
        Window::_width = width;
        Window::_height = height;
        glViewport(0, 0, width, height);
    }
}


