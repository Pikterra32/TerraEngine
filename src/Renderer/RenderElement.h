#include "../Utility/Vector.h"
#include "RenderTypes.h"
#pragma once

class RenderElement {
public:
    RenderElement
    (
        RenderType type = Undefined,
        int posX = 0, int posY = 0,
        float size = 0,
        int width = 0, int height = 0,
        float sizeH = 0.0, float sizeV = 0.0,
        vec2 v1 = vec2(), vec2 v2 = vec2(), vec2 v3 = vec2(),
        int hexColor = 0
    );
    int getId();
    RenderType getType();

    // all
    int posX;
    int posY;
    // circle
    float size;
    // rect
    int width;
    int height;
    // ellipse
    float sizeH;
    float sizeV;
    //triangle
    vec2 v1;
    vec2 v2;
    vec2 v3;

    int hexColor;

private:
    RenderType type;
    int ID;
};
