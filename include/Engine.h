#ifndef VCRAFT_ENGINE_H
#define VCRAFT_ENGINE_H

namespace vc {
    class Engine {
    public:
        Engine();
        void init();
        void start();
        void update();
        void render();
        void destroy();
    };
}

#endif //VCRAFT_ENGINE_H
