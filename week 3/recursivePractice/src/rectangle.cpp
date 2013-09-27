

#include "rectangle.h"

circle::circle(){
    
}

void circle::drawCircle(float x, float y,float r){
    ofCircle(x, y,r);
    
    ofRotate(30);
    if(r>2){
        
       
       drawCircle(x+r/2,y,r/2);
        drawCircle(x,y+r/2,r/2);
        
    }

    
    
}