#include "RenderElement.h"

RenderElement::RenderElement
(
    RenderType type,
    int posX , int posY ,
    float size ,
    int width ,int height,
    float sizeH, float sizeV,
    vec2 v1, vec2 v2, vec2 v3
) {
    static int id = 0;
    this->ID = id;
    id++;

    this->posX = posX;
    this->posY = posY;
    switch (type){
        case Shape_Circle:
            this->size = size;
            break;
        case Shape_Rect:
            this->width = width;
            this->height = height;
            break;
        case Shape_Ellipse:
            this->sizeH = sizeH;
            this->sizeV = sizeV;
            break;
        case Shape_Triangle:
            this->v1 = v1;
            this->v2 = v2;
            this->v3 = v3;
            break;
    }
}

int RenderElement::getId() {
    return this->ID;
}

RenderType RenderElement::getType() {
    return this->type;
}
