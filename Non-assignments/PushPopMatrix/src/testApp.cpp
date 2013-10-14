#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0);
    ofSetVerticalSync(true);
    ofSetCircleResolution(50);
    pos.set(100,100);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofNoFill();
    ofSetColor(100, 0, 125);
    ofPushMatrix();{
        ofTranslate(ofGetWindowSize()/2);
        ofCircle(0, 0, 50);
        ofBeginShape();
        ofVertex(0, 0);
        ofVertex(100, 50);
        ofVertex(0, 40);
        ofEndShape();
    }
    ofPopMatrix();
    
    ofSetColor(200, 0, 100);
    ofPushMatrix();{
        ofTranslate(pos.x,pos.y);
        ofCircle(0, 0, 50);
    }
    ofPopMatrix();
    
    ofSetColor(255,255,51);
    ofCircle(0, 0, 50);
    

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
