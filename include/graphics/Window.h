#ifndef VCRAFT_WINDOW_H
#define VCRAFT_WINDOW_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace vc

{
    class Window
    {
    public:
        Window();
        void init();
        void loop();
        [[nodiscard]] GLFWwindow *getHandler() const;
    private:
        GLFWwindow *handler;
        static void framebufferSizeCallback(GLFWwindow *window, int width, int height);
    };
}

#endif //VCRAFT_WINDOW_H
