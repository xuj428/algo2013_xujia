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
 
    pos.x=ofRandom(ofGetWindowWidth());
    pos.y=ofRandom(ofGetWindowHeight());
    vel.x=ofRandom(-1,1);
    vel.y=ofRandom(-1,1);
    acc.x=ofRandom(-1,1);
    acc.y=ofRandom(-1,1);
    c.setHsb(ofRandom(255), 255, 255);

}

void Particle::update(){
    
        if (pos.x<0.0||pos.x>ofGetWindowWidth()) {
        vel.x *= -0.98;
            acc *=-1;
        ellipseW =15;
        } else{
            ellipseW=20;
        }
    if (pos.y<0.0||pos.y>ofGetWindowHeight()) {
        vel.y *= -0.98;
           acc *=-1;
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
    //vel *= 0.98;
}

void Particle::draw(){
    ofSetColor(c);
    ofEllipse(pos,ellipseW,ellipseH);
    
}
