#include "RenderElement.h"
#include "raylib.h"
#include "Renderer.h"

void Renderer::addToQueue(RenderElement element) {
    this->renderQueue.push_back(element);
}

void Renderer::removeFromQueue(int id) {
    for (int i = 0; i < this->renderQueue.size(); i++) {
        RenderElement current = this->renderQueue[i];
        if (current.getId() == id) {
            this->renderQueue.erase(this->renderQueue.begin() + i);
            return;
        }
    }
}

void Renderer::render() {
    BeginDrawing();
    //
    for (RenderElement element : this->renderQueue) {
        switch (element.getType()) {
            case Shape_Rect:
                DrawRectangle(element.posX, element.posY, element.width, element.height, GetColor(element.hexColor));
                break;
            case Shape_Circle:
                DrawCircle(element.posX, element.posY, element.size, GetColor(element.hexColor));
                break;
            case Shape_Ellipse:
                DrawEllipse(element.posX, element.posY, element.sizeH, element.sizeV, GetColor(element.hexColor));
                break;
            case Shape_Triangle:
                Vector2 v1;
                Vector2 v2;
                Vector2 v3;
                v1.x = element.v1.x; v1.y = element.v1.y;
                v2.x = element.v2.x; v2.y = element.v2.y;
                v3.x = element.v3.x; v3.y = element.v3.y;
                DrawTriangle(v1, v2, v3, GetColor(element.hexColor));
                break;
            case Undefined:
                break;
        }
    }
    //
    EndDrawing();
}

void Renderer::clear(int hexCode) {
    Color color = GetColor(hexCode);
    ClearBackground(color);
}
