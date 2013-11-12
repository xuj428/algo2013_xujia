#pragma once
#include "ofMain.h"

class Particle{
    public:
    Particle();
    void setup();
    void update(float volume);
    void draw();
    
    ofVec2f pos,vel,acc;
    float flySize;
    float angleX,angleY,angleZ;
    vector<ofImage> butterflyList;
    int setPicture;
    
};
