#pragma once
#include "../Renderer/Renderer.h"
#include "PhysicalObject.h"

class SolidObject : public PhysicalObject {
public:
    SolidObject(const char *name, int posx, int posy, RenderElement apparence);

    void moveTo(int posX, int posY);

    RenderElement* getApparence();
private:
    RenderElement apparence;
};
