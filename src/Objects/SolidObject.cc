#include "SolidObject.h"
#include "PhysicalObject.h"

SolidObject::SolidObject(const char* name, int posx, int posy, RenderElement apparence) : PhysicalObject(name, posx, posy) {
    this->name = name;
    this->apparence = apparence;
}

RenderElement SolidObject::getApparence() {
    return this->apparence;
}
