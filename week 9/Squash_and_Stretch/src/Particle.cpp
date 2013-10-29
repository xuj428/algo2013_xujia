//
//  Particle.cpp
//  Squash_and_Stretch
//
//  Created by xjjulia on 28/10/13.
//
//

#include "Particle.h"

Particle::Particle(){
    
}

void Particle::setup(){
    ofSeedRandom();
    pos.x=ofRandom(ofGetWindowWidth());
    pos.y=ofRandom(ofGetWindowHeight());
    vel.x=ofRandom(-2, 2);
    vel.y=ofRandom(-2, 2);
    acc.x=ofRandom(-2,2);
    acc.y=ofRandom(-2,2);
    c.setHsb(ofRandom(255), 255, 255);

}

void Particle::update(){
    
        if (pos.x<0.0||pos.x>ofGetWindowWidth()-ellipseW) {
        vel.x = -vel.x;
        ellipseW =15;
        } else{
            ellipseW=20;
        }
    if (pos.y<0.0||pos.y>ofGetWindowHeight()-ellipseH) {
        vel.y = -vel.y;
        ellipseH = 15;
    }
    else{
        ellipseH = 20;
    }
   
    
    if (vel.x>5) {
       ellipseW=20+vel.length();
    }
    if (vel.y>5){
         ellipseH=20+vel.length();
    }
    
    vel += acc;
    pos += vel;
    vel *= 0.8;
}

void Particle::draw(){
    ofSetColor(c);
    ofEllipse(pos,ellipseW,ellipseH);
    
}
