//
//  Particle.cpp
//  WindowsSolitaire
//
//  Created by xjjulia on 8/10/13.
//
//

#include "Particle.h"

Particle::Particle(){
    
}

void Particle::setup(){
    ofSeedRandom();
    
    pos.x=ofRandom(ofGetWindowWidth());
    pos.y=ofRandom(200);
    vel.set(ofRandom(-10,10),ofRandom(-5,5));
    
    acc.set(0,ofRandom(0.5,3));
    radius=10;
    c.setHsb(ofRandom(255), 255, 255);
}

void Particle::update(){
    vel+=acc;
    
    if( pos.x < 0 || pos.x > ofGetWindowWidth() ){
        vel.x = -vel.x;
    }
    if( pos.y < 0 || pos.y > ofGetWindowHeight() ){
        vel.y = -vel.y;
    }
pos+=vel;
    vel *=0.97;
}

void Particle::draw(){
    ofNoFill();
    ofSetColor(c);
    ofCircle(pos.x, pos.y, radius);
}