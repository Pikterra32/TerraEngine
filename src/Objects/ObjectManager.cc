#include "ObjectManager.h"
#include "SolidObject.h"
#include "../Renderer/RenderElement.h"

void ObjectManager::createObject(ObjectTypes type, const char* name) {
    switch (type) {
        case T_SolidObject:
            RenderElement apparence;
            SolidObject object(name, 0, 0, apparence);

            this->renderEngine->addToQueue(apparence);

            this->objectList.push_back((int*)&object);
            break;
    }
}

int* ObjectManager::accessLatest() {
    return this->objectList.back();
}

int* ObjectManager::accessObject(int id) {
    for (int i = 0; i < this->objectList.size(); i++) {
        RenderElement* current = (RenderElement*)&this->objectList[i];
        if (current->getId() == id) {
            return (int*)current;
        }
    }
    return 0;
}

void ObjectManager::deleteObject(int id) {
    for (int i = 0; i < this->objectList.size(); i++) {
        RenderElement* current = (RenderElement*)&this->objectList[i];
        if (current->getId() == id) {
            this->objectList.erase(this->objectList.begin() + i);
            return;
        }
    }
    return;
}
