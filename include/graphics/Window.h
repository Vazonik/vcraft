#ifndef VCRAFT_WINDOW_H
#define VCRAFT_WINDOW_H

#include "Engine.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/vec2.hpp>

namespace vc
{
    typedef void (*FWindow)();

    class Window {
    private:
        Window();
        static Window *instance;
    public:
        static Window *create(int width, int height, const char *title, Engine *engine);
        static Window *getInstance();
    public:
        void loop();
        void destroy();
        GLFWwindow *getHandler();
        glm::i32vec2 getSize();
        bool isGladInitialised() const;
    private:
        Engine *_engine{};
        GLFWwindow *handler{};
        glm::i32vec2 size{};
        bool gladInitialised;
    private:
        static void framebufferSizeCallback(GLFWwindow *windowHandler, int width, int height);
    };
}

#endif //VCRAFT_WINDOW_H
