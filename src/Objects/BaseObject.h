#pragma once

class BaseObject {
public:
    explicit BaseObject(const char* name);

    int getId();

    const char* name;
private:
    unsigned int ID;
};
