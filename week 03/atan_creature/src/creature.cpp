//
//  creature.cpp
//  atan_creature
//
//  Created by xjjulia on 17/9/13.
//
//

#include "creature.h"




//------------------------------------------------------------------
creature::creature(){
	catchUpSpeed = 0.06f;
	
	pos.set(0,0);
	prevPos.set(0,0);
}

//------------------------------------------------------------------
void creature::draw() {
	ofFill();
	
	ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(198,246,55);
	
	ofPushMatrix();
    ofTranslate(pos.x, pos.y, 0);
    ofRotateZ(angle * RAD_TO_DEG);
    ofBeginShape();
    ofVertex(0,10);
    ofVertex(-35,30);
    ofVertex(-5,20);
    ofVertex(-25,40);
    ofVertex(-5,40);
    ofVertex(-15, 55);
    ofVertex(-3, 55);
    ofVertex(-10, 65);
    ofVertex(10, 65);
    ofVertex(3, 55);
    ofVertex(15, 55);
    ofVertex(5,40);
    ofVertex(25,40);
    ofVertex(5,20);
    ofVertex(35,30);
    ofEndShape();
	
	
	ofPopMatrix();
	
	
}

//------------------------------------------------------------------
void creature::xenoToPoint(float catchX, float catchY){
	
	
	pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
	pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    
	float dx = pos.x - prevPos.x;
	float dy = pos.y - prevPos.y;
	
	angle = atan2(dy, dx);
    
	prevPos.x = pos.x;
	prevPos.y = pos.y;
	
    
}

