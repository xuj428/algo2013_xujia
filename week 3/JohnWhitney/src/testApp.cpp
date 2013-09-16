#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync(true);
    ofSetCircleResolution(100);
    ofEnableAlphaBlending();
    ofBackground(0);
    ofSetFrameRate(60);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    float xorig = ofGetWidth()/2;
    float yorig = ofGetHeight()/2;
    for (int i=0;i<30; i++){
        float radius = 30+ i*8;
        float angle = ofGetElapsedTimef()*(1+0.3*i);
        float x = xorig + radius * cos(angle);
		float y = yorig + radius * -sin(angle);
        ofSetColor(0, 255, 255);
        ofCircle(x, y, i*0.5);
        
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