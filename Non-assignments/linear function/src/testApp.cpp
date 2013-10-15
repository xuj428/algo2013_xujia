#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0);
    for (int i=0; i<200; i++) {
        Particle p;
        p.setup();
        pList.push_back(p);
    }
   }




//--------------------------------------------------------------
void testApp::update(){
    for (int i=0; i<pList.size()-1; i++) {
        pList[i].pos.x=pList[i+1].pos.x+1.5;
        pList[i].pos.y= 0.5*pList[i].pos.x+5;
    }

}
//--------------------------------------------------------------
void testApp::draw(){
    for (int i=0; i<pList.size(); i++) {
        pList[i].draw();
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
