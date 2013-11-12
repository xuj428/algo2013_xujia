#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground( 0 );
    ofSetBackgroundAuto(false);
    
    ofEnableAlphaBlending();
            
    

    //for (int i=0; i<pList.size(); i++) {
      //  pList[i].setup();
    //}
    
}

//--------------------------------------------------------------
void testApp::update(){
    for (int i=0; i<pList.size(); i++) {
        pList[i].update();
    }


}

//--------------------------------------------------------------
void testApp::draw(){
    for (int i=0; i<pList.size(); i++) {
        pList[i].draw();
    }
    if(int(ofGetElapsedTimeMillis())%90==0)
    {
        addParticle();
    }
    cout<<pList.size()<<endl;
    
}

void testApp:: addParticle(){
    
    Particle p;
    p.setup();
    pList.push_back(p);

    
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
