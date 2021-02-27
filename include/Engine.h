#ifndef VCRAFT_ENGINE_H
#define VCRAFT_ENGINE_H
#include "graphics/Shader.h"

namespace vc {
    class Engine {
    public:
        Engine();
        void init();
        void start();
        void update();
        void render();
        void destroy();
    private:
        Shader basicColorShader;
    };
}

#endif //VCRAFT_ENGINE_H
