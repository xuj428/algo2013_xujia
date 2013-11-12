#pragma once
#include "ofMain.h"

class Ball{
    public:
        Ball(float x,float y);
    
    void update();
    void draw();
    
    ofPoint pos;
    ofVec2f vel,g;
    
    
};
