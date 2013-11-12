#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetBackgroundAuto(false);
    ofSetVerticalSync(true);
    ofBackground(255);
    ofEnableAlphaBlending();
    
    for( int i=0; i<10; i++ ){
        Rectangle myRect;
        rectList.push_back( myRect );
    }
    for( int i=0; i<rectList.size(); i++ ){
        rectList[i].rectColor.r=ofRandom(40,230);
        rectList[i].rectColor.g=ofRandom(50,200);
        rectList[i].rectColor.b=ofRandom(40,255);

    }
}

//--------------------------------------------------------------
void testApp::update(){

//    if( rectList.size() ){
//        rectList[0].xenoToPoint(mouseX, mouseY);
//    }
    
    for( int i=0; i<rectList.size(); i++ ){
        
        if( i==0 ){
            rectList[i].xenoToPoint(ofVec2f(mouseX, mouseY));
        }else{
            rectList[i].xenoToPoint(rectList[i-1].pos);
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetBackgroundColor(250, 250, 250, 255.0*0.1);
    
    ofColor semiTrans(255,255,255,255*0.003);
    ofSetColor(semiTrans);
    ofRect(0,0,ofGetWindowWidth(),ofGetWindowHeight());
    for( int i=0; i<rectList.size(); i++ ){
        rectList[i].draw();
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
