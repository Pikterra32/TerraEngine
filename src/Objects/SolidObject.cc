#include "SolidObject.h"
#include "PhysicalObject.h"

void SolidObject::moveTo(int posX, int posY) {
    this->posx = posX;
    this->posy = posY;
    this->apparence.posX = posX;
    this->apparence.posY = posY;
}

SolidObject::SolidObject(const char* name, int posx, int posy, RenderElement apparence) : PhysicalObject(name, posx, posy) {
    this->apparence = apparence;
}

RenderElement* SolidObject::getApparence() {
    return &this->apparence;
}
