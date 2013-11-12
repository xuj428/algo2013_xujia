#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync(true);
    ofBackground(0, 0, 0);
    ofEnableAlphaBlending();
    for (int i=0; i<10; i++) {
        myObjects[i].pos.x=ofRandom(ofGetWidth());
        myObjects[i].pos.y=ofRandom(ofGetHeight());
        myObjects[i].catchUpSpeed=ofRandom(0,0.2);
        myObjects[i].rectWidth=ofRandom(5,80);
        myObjects[i].rectColor.r=ofRandom(255);
        myObjects[i].rectColor.g=ofRandom(255);
        myObjects[i].rectColor.b=ofRandom(255);
        
        
    }
    

}

//--------------------------------------------------------------
void testApp::update(){
    for (int i=0; i<10; i++) {
        
       
    myObjects[i].xenoToPoint(mouseX, mouseY);
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    for (int i=0; i<10; i++) {
        myObjects[i].draw();
    }

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}