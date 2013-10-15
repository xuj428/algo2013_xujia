//
//  Particle.cpp
//  aaaaaaaaaaaaaaaaaaaaaa
//
//  Created by xjjulia on 12/10/13.
//
//

#include "Particle.h"

Particle::Particle(){
   }

void Particle::setup(){
    pos.x=100;
  
}

void Particle::update(){
   
}

void Particle::draw(){
   ofPushMatrix();
        ofTranslate(pos.x, pos.y);
    ofCircle(pos.x, pos.y, 1);
        ofPopMatrix();
}