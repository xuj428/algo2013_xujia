#pragma once
#include "ofMain.h"

class Particle{
public:
    Particle(){};
    
    void setup(ofVec2f Pos, float setVel, float hue);
    void update();
    void draw();
    
    bool kill();
    
    ofVec2f pos,vel,acc;
    float age,life,size;
    ofColor c;
    
};