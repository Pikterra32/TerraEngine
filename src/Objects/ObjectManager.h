#pragma once
#include "SolidObject.h"
#include "ObjectTypes.h"
#include <vector>

class ObjectManager {
public:
    void createObject(ObjectTypes type, const char* name, RenderType shape, Renderer* renderer);
    void deleteObject(int id);

    void accessObject(int id);
private:
    std::vector<SolidObject> solidOList;
};
