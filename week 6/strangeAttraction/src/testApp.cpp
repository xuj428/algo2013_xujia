#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetBackgroundAuto(false);
    ofSetVerticalSync(true);
    ofBackground(0);
    ofEnableAlphaBlending();
    
    a = -0.966918;
	b = 2.879879;
	c = 0.765145;
	d = 0.744728;
    for (int i = 0; i<1500; i++) {
        ofVec2f pos;
        pos.set(ofRandom(2),ofRandom(2));
        pList.push_back(pos);

    }
    

    
   
}

//--------------------------------------------------------------
void testApp::update(){
    
   
}

//--------------------------------------------------------------
void testApp::draw(){
    ofNoFill();
    
    ofPushMatrix();{
        ofTranslate(ofGetWindowSize()/2);
        //ofBeginShape();
    for (int i=0; i<pList.size(); i++) {
       float xnew = sin(pList[i].y*b) + c*sin(pList[i].x*b);
       float ynew = sin(pList[i].x*a) + d*sin(pList[i].y*a);
        pList[i].x = xnew;
        pList[i].y = ynew;
        float mappedX = ofMap(xnew, -2.0, 2.0, -300, 300);
        float mappedY = ofMap(ynew, -2.0, 2.0, -300, 300);

        
        ofCircle(mappedX, mappedY,0.5);
        
//        cout<<i<<endl;
//        cout<<"x="<<mappedX<<endl;
//        cout<<"y="<<mappedY<<endl;

    }
        // ofEndShape();
    }
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
    ofBackground(0);
    a = ofRandom(-2.0,2.0);
    b = ofRandom(-2.0, 2.0);
    c = ofRandom(-2.0, 2.0);
    d = ofRandom(-2.0, 2.0);


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
