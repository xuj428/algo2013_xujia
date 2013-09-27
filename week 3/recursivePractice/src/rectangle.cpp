

#include "rectangle.h"

circle::circle(){
    red=100;
    green=60;
    blue=150;
    
    
}

void circle::drawCircle(float x, float y, float r){
    ofCircle(x, y,r);
   ofSetColor(red,green,blue);
    
    ofRotate(angle);
    
    if(r>4){
        
       
       drawCircle(x+r/2,y,r/2);
        drawCircle(x,y+r/2,r/2);
        
    }
}


void circle::update(){
    angle=angle+0.01;
    red +=0.2;
    green +=0.5;
    blue +=0.5;
    if (red>255) {
        red=0;
    }
    if (blue>255){
        blue=0;
    }
    if (green>255) {
        green=0;
    }
}