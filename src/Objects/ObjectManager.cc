#include "ObjectManager.h"
#include "SolidObject.h"
#include "../Renderer/RenderElement.h"

void ObjectManager::createObject(ObjectTypes type, const char* name, RenderType shape, Renderer* renderer) {
    switch (type) {
        case T_SolidObject:
            RenderElement apparence(shape);
            SolidObject object(name, 0, 0, apparence);

            renderer->addToQueue(apparence);

            this->solidOList.push_back(object);
            break;
    }
}
