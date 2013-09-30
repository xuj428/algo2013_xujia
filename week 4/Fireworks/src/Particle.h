#pragma once
#include "ofMain.h"

class Particle{
public:
    Particle(){};
    void setup(ofVec2f rVel);
    //void setpos();
    void update();
    void draw();
    
    ofVec2f pos,vel,acc;
    int age,lifespan;
    bool bIsDead;
    
};
