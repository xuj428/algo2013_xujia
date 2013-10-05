#pragma once
#include "ofMain.h"

class Particle{
public:
    Particle(){};
    void setup(ofVec2f rVel, ofVec2f rPos);
    
    void update();
    void draw();
    
    ofVec2f pos,vel,acc;
    int age,lifespan;
    bool bIsDead;
    
};
