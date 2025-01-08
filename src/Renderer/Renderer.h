#include "RenderElement.h"
#include <raylib.h>
#include <vector>

#pragma once

class Renderer {
public:
    void render();
    void clear(int hexCode);

    void addToQueue(RenderElement element);
    void removeFromQueue(int id);

private:
    std::vector<RenderElement> renderQueue;
};
