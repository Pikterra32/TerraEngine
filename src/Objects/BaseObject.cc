#include "BaseObject.h"

int BaseObject::getId() {
    return this->ID;
}

BaseObject::BaseObject(const char* name) {
    static int id = 0;
    this->name = name;
    this->ID = id;
    id++;
};
