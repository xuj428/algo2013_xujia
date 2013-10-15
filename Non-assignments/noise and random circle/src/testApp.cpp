#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetColor(100, 0, 155);
    ofBackground(0);
    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    float noise=ofNoise(ofGetElapsedTimef());
    float random=ofRandom(1);
    cout<<noise<<endl;
    ofCircle(ofGetWidth()/4, ofGetHeight()/2, 200*noise);
    ofCircle(ofGetWidth()*0.75, ofGetHeight()/2, 200*random);

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