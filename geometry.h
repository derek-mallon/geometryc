#ifndef GEOMETRY_H
#define GEOMETRY_H
typedef struct vec2{
    float x;
    float y;
}vec2;
typedef struct rect{
    vec2 center;
    vec2 half_dim;
}rect;

vec2 create_vec2(float x,float y);
rect create_rect(float x,float y,float width,float height);
#endif
