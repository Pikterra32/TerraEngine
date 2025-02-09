#include "ObjectManager.h"
#include "SolidObject.h"
#include "../Renderer/RenderElement.h"
#include "../Renderer/RenderTypes.h"
#include "../Renderer/ApparenceContext.h"

void ObjectManager::addObject(int* object) {
    this->objectList.push_back(object);
}

void ObjectManager::configureApparence(RenderElement* apparence, ApparenceContext* context) {
    // 0 : apparence type, 1 : posX, 2 : posY, 3-... : parameters
    apparence->posX = context->posX;
    apparence->posY = context->posY;
    apparence->hexColor = context->hexColor;

    switch (context->type) {
        case Shape_Circle:
            apparence->size = context->size;
            break;
        case Shape_Rect:
            apparence->width = context->width;
            apparence->height = context->height;
            break;
        case Shape_Ellipse:
            apparence->sizeH = context->sizeH;
            apparence->sizeV = context->sizeV;
            break;
        case Shape_Triangle:
            apparence->v1 = context->v1;
            apparence->v2 = context->v2;
            apparence->v3 = context->v3;
            break;
        case Undefined:
            break;
        }
}

int ObjectManager::createObject(ObjectTypes type, const char* name, ApparenceContext* context) {
    switch (type) {
        case T_SolidObject:
            RenderElement apparence(context->type);

            this->configureApparence(&apparence, context);

            SolidObject object(name, 0, 0, apparence);

            this->renderEngine->addToQueue(apparence);

            this->addObject((int*)&object);

            return object.getId();
            break;
    }
    return 0;
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
