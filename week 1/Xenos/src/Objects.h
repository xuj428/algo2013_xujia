
#ifndef __XenoObjects__Objects__
#define __XenoObjects__Objects__

#include "ofMain.h"

class objects{
public:
    
    objects();
    
    void draw();
    void xenoToPoint(float catchX, float catchY);
    
    
    float catchUpSpeed;
    float rectWidth;
    ofPoint pos;
    ofColor rectColor;
    
    
};

#endif /* defined(__XenoObjects__Objects__) */
