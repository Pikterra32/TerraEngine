#pragma once

class BaseObject {
public:
    BaseObject(const char* name);

    int getId();

    const char* name;

    int posX;
    int posY;
private:
    int ID;
};
