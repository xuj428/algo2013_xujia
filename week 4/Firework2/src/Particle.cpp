//
//  Particle.cpp
//  FireworkTest2
//
//  Created by xjjulia on 5/10/13.
//
//

#include "Particle.h"

void Particle::setup(ofVec2f Pos, float setVel, float hue){
    size=ofRandom(3,6);
    pos = Pos;
    vel.x=ofRandom(-setVel,setVel);
    vel.y=ofRandom(-setVel,setVel+2);
    acc.y=0.2;
    age=0;
    life=ofRandom(200,300);
    c.setHsb(hue+ofRandom(-20.0, 20.0), 255, 255);
    
    
    
}

void Particle::update(){
    float pct = 1.0-(float)age/(float)life;
    size *=pct;
    vel += acc;
    pos += vel;
    vel *= 0.98;
    age++;
}

void Particle::draw(){
    ofPushMatrix();{
        ofTranslate(pos.x, pos.y);
        ofSetColor(c, 150);
        ofCircle(0, 0, size);
        
    }
    ofPopMatrix();
    
}

bool Particle::kill(){
    if (age>=life) {
        return true;
    }
    else{
        return false;
    }
}