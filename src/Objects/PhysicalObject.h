#pragma once
#include "BaseObject.h"

class PhysicalObject : public BaseObject {
public:
    PhysicalObject(const char *name, int posx = 0, int posy = 0);

    int posx;
    int posy;
};
