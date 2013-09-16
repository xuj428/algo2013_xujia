#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync(true);
	
	ofBackground(0);
	
	ofSetCircleResolution(100);
	
    ofSetColor(100, 0, 155);
	
	radius = 30;
   
}

//--------------------------------------------------------------
void testApp::update(){
    radius += 0.1;
    for (int i=0; i<circles.size();i++){
        circles[i].circleR = 0.1*i;
    }

    

}

//--------------------------------------------------------------
void testApp::draw(){
    float xorig = 500;
    float yorig = 300;
    float angle = ofGetElapsedTimef()*3.5;
    float spinx = xorig + radius * cos(angle);
	float spiny = yorig + radius * -sin(angle);
    circle myCircle=circle();
    circles.push_back(myCircle);
    
    if (circles.size()>100){
        circles.erase(circles.begin());
    }
    for (int i=0; i<circles.size();i++){
        circles[i].draw(spinx, spiny);
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