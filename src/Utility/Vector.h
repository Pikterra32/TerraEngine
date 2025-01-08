#pragma once

class vec2 {
public:
    vec2(int x = 0, int y = 0);

    vec2 operator+(vec2 object);
    vec2 operator-(vec2 object);
    vec2 operator/(vec2 object);
    vec2 operator*(vec2 object);

    bool operator==(vec2 object);
    void operator=(vec2 object);

    int x;
    int y;
};
