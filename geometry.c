#include "geometry.h"
vec2 create_vec2(float x,float y){
    vec2 vec = {x,y};
    return vec;
}
rect create_rect(float x,float y,float width,float height){
    rect output = {create_vec2(x,y),create_vec2(width/2,height/2)};
    return output;
}
