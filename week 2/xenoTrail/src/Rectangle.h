#pragma once 

#include "ofMain.h"

class Rectangle {
  public:
    Rectangle();
    
    void xenoToPoint( ofVec2f catchXY );
    void draw();
    
    ofPoint pos, targetPos;
    ofColor rectColor;

    
    float catchUpSpeed;
};