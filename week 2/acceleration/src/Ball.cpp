#include "Ball.h"

Ball::Ball(float x, float y){
    pos.x=x;
    pos.y=y;
    vel.x=ofRandom(-1.0,1.0);
    vel.y=ofRandom(-1.0,1.0);
    g.set(0,9.8);
    
}

void Ball::update(){
    
    vel +=g;
    pos+=vel;
    vel *= 0.97;
    if (pos.y> (ofGetWindowHeight()-100)){
        vel.y *=-1;
        }
    if (vel.length()<0.1) {
        vel.set(0,0);
    }
    
    }

void Ball::draw(){
    ofCircle(pos, 10);
    
}
