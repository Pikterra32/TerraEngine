#include "PhysicalObject.h"
#include "BaseObject.h"

PhysicalObject::PhysicalObject(const char *name, int posx, int posy) : BaseObject(name) {
    this->posx = posx;
    this->posy = posy;
}
