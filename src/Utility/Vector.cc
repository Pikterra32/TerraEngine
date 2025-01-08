#include "Vector.h"

vec2::vec2(int x, int y){
    this->x = x;
    this->y = y;
}

vec2 vec2::operator+(vec2 object) {
    return vec2(this->x + object.x, this->y + object.y);
}

vec2 vec2::operator-(vec2 object) {
    return vec2(this->x - object.x, this->y - object.y);
}

vec2 vec2::operator/(vec2 object) {
    return vec2(this->x / object.x, this->y / object.y);
}

vec2 vec2::operator*(vec2 object) {
    return vec2(this->x * object.x, this->y * object.y);
}

void vec2::operator=(vec2 object) {
    this->x = object.x;
    this->y = object.y;
}

bool vec2::operator==(vec2 object) {
    return (this->x == object.x && this->y == object.y);
}
