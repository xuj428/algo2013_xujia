

#include "rectangle.h"

rectangle::rectangle(){
}

void rectangle::update(){
    pos.x=pos.x+0.01;
    
    
    
}
void rectangle::draw(){
    ofFill();
    ofEnableAlphaBlending();
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(255,0,255,255);
    ofRect(pos.x,pos.y,20,20);
}
