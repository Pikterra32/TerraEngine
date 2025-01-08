#include "../Utility/Vector.h"
#pragma once

enum RenderType {
    Shape_Circle = 0, Shape_Rect = 1, Shape_Ellipse = 2, Shape_Triangle = 3,
};

class RenderElement {
public:
    RenderElement
    (
        RenderType type,
        int posX = 0, int posY = 0,
        float size = 0,
        int width = 0, int height = 0,
        float sizeH = 0.0, float sizeV = 0.0,
        vec2 v1 = vec2(), vec2 v2 = vec2(), vec2 v3 = vec2()
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
