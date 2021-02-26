#ifndef VCRAFT_ENGINE_H
#define VCRAFT_ENGINE_H

namespace vc {
    class Engine {
    public:
        Engine() = delete;
        static void init();
        static void start();
        static void frame();
        static void destroy();
    };
}

#endif //VCRAFT_ENGINE_H
