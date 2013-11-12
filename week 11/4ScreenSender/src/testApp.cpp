#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowPosition(ofGetWindowWidth(),ofGetWindowHeight());
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofBackground(0);
    
    mSender.setup("localhost",12345);
    pos = ofVec2f(100.0,80.0);
    vel =ofVec2f(10.0,5.0);
    
}

//--------------------------------------------------------------
void testApp::update(){
    pos+=vel;
    if (pos.x<0||pos.x>ofGetWindowWidth()*2) {
        vel.x*=-1;
    }
    if (pos.y<0||pos.y>ofGetWindowHeight()*2) {
        vel.y*=-1;
    }
    ofxOscMessage m;
    m.setAddress("/ball/pos");
    m.addIntArg(pos.x);
    m.addIntArg(pos.y);
    mSender.sendMessage(m);
    cout<<"x"<<pos.x<<endl;
    cout<<"y"<<pos.y<<endl;
    
}

//--------------------------------------------------------------
void testApp::draw(){
    ofPushMatrix();
    ofTranslate(-ofGetWindowWidth(), -ofGetWindowHeight());
    ofCircle(pos, 20);
    ofPopMatrix();
    
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
