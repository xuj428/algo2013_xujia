//
//  Particle.cpp
//  Fireworks
//
//  Created by xjjulia on 26/9/13.
//
//

#include "Particle.h"

void Particle::setup(ofVec2f rVel){
    vel = rVel;
    acc = ofVec2f(0,ofRandom(0.1,0.2));
    age = 0;
    lifespan = ofRandom(100,180);
   pos=ofGetWindowSize()/2;
     ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
    

}

//void Particle::setpos(){
  //   pos=ofGetWindowSize()/2;
//}

void Particle::update(){
    float agePct =1.0-((float)age/(float)lifespan);
    vel +=acc;
    pos +=vel;
    vel *=0.97;
    age++;
    
    if (age>lifespan){
        bIsDead = true;
    }
    
}


void Particle::draw(){
    if( bIsDead ){
        return;
    }

    float agePct = 1.0-((float)age/(float)lifespan);
   
    ofCircle(pos, 5.0*agePct);
}
