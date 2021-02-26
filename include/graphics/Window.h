#ifndef VCRAFT_WINDOW_H
#define VCRAFT_WINDOW_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/vec2.hpp>

namespace vc
{
    typedef void (*FWindow)();

    class Window
    {
    public:
        Window() = delete;
        static void init(FWindow init, FWindow start, FWindow loop, FWindow destroy);
        static void create(int width, int height, const char *title);
        static void loop();
        static void destroy();
        static GLFWwindow *getHandler();
        static glm::i32vec2 getSize();
    private:
        static FWindow initCallback;
        static FWindow startCallback;
        static FWindow frameCallback;
        static FWindow destroyCallback;
    private:
        static GLFWwindow *handler;
        static int _width, _height;
    private:
        static void framebufferSizeCallback(GLFWwindow *window, int width, int height);
    };
}

#endif //VCRAFT_WINDOW_H
