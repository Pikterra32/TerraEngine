#include "../Utility/Vector.h"
#include "RenderTypes.h"
#pragma once

class ApparenceContext {
public:
    RenderType type;

    int posX;
    int posY;

    float size;

    int width;
    int height;

    float sizeH;
    float sizeV;

    vec2 v1;
    vec2 v2;
    vec2 v3;

    int hexColor;
};
