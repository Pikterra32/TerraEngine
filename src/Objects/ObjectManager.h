#pragma once
#include "SolidObject.h"
#include "ObjectTypes.h"
#include "../Renderer/ApparenceContext.h"
#include <vector>

class ObjectManager {
public:
    int createObject(ObjectTypes type, const char* name, ApparenceContext* context);

    void deleteObject(int id);
    void addObject(int* object);

    int* accessObject(int id);
    int* accessLatest();

    Renderer* renderEngine;
private:
    void configureApparence(RenderElement* apparence, ApparenceContext* context);
    std::vector<int*> objectList;
};
