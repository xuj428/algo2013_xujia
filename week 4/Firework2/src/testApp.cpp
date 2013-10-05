#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync(true);
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    ofBackground(0);

}

//--------------------------------------------------------------
void testApp::update(){
    pos.x=ofRandom(ofGetWindowWidth());
    pos.y=ofRandom(ofGetWindowHeight()-100);
    setVel=ofRandom(5,7.5);
    hue=ofRandom(255);
    
    for ( vector<Particle>::iterator it = particles.begin(); it!=particles.end(); ) {
        it->update();
        
        if ( it->kill() ) {
            it = particles.erase(it);
        }
        else {
            it++;
        }
    }


}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofSetColor(0, 25);
    ofRect(0, 0, ofGetWindowWidth(), ofGetWindowHeight());

    for ( vector<Particle>::iterator it=particles.begin(); it!=particles.end(); ) {
        it->draw();
        it++;
    }
    for (int i=0; i<80; i++) {
       
        addParticle(pos, setVel, hue);
    
    }

}

void testApp::addParticle(ofVec2f pos, float setVel, float hue){
    Particle tmp;
    tmp.setup(pos, setVel, hue);
   
    particles.push_back( tmp );


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
