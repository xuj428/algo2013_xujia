#include "Rectangle.h"

Rectangle::Rectangle() {
    ofRectMode( OF_RECTMODE_CENTER );
    catchUpSpeed = 0.03f;
}

void Rectangle::xenoToPoint(ofVec2f catchXY){
	pos = catchUpSpeed * catchXY + (1-catchUpSpeed) * pos;
	
}


void Rectangle::draw() {
    
    ofSetColor(rectColor);
    
    ofCircle( pos.x, pos.y, 15);
}