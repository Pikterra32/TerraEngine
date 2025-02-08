#pragma once
#include "SolidObject.h"
#include "ObjectTypes.h"
#include <vector>

class ObjectManager {
public:
    void createObject(ObjectTypes type, const char* name);
    void deleteObject(int id);

    int* accessObject(int id);
    int* accessLatest();

    Renderer* renderEngine;
private:
    std::vector<int*> objectList;
};
