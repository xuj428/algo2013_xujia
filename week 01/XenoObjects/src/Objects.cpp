#include "Objects.h"

objects::objects(){
   
}

void objects::draw(){
    ofFill();
    ofSetRectMode(OF_RECTMODE_CENTER);
     ofSetColor(rectColor);
    ofRect(pos.x,pos.y,rectWidth,rectWidth);
}

void objects::xenoToPoint(float catchX, float catchY){
    pos.x = catchUpSpeed*catchX + (1- catchUpSpeed)*pos.x;
    pos.y = catchUpSpeed*catchY + (1- catchUpSpeed)*pos.y;

}




