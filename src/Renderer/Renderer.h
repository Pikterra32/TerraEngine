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

    RenderElement* access(int id);
    RenderElement* accessLatest();
private:
    std::vector<RenderElement> renderQueue;
};
