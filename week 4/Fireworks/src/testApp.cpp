#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync(true);
    //ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    ofBackground(0);
    
           }

//--------------------------------------------------------------
void testApp::update(){
    pos.x=ofRandom(ofGetWindowWidth());
    pos.y=ofRandom(ofGetWindowHeight()-150);
    
   

    
       for( vector<Particle>::iterator it=pList.begin(); it!=pList.end();){
        it->update();
        
        if( it->bIsDead ){
            it = pList.erase(it);
            ofLog( OF_LOG_NOTICE, "size is " + ofToString(pList.size()) );
        }else {
            it++;
        }
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){
    //ofSetRectMode(OF_RECTMODE_CORNER);
    //ofSetColor(0, 25);
    //ofRect(0, 0, ofGetWindowWidth(), ofGetWindowHeight());


    for( vector<Particle>::iterator it = pList.begin(); it!=pList.end(); it++){
        it->draw();
    }
    for( int i=0; i<50; i++ ){
        if (int(ofGetElapsedTimeMillis() % 120 == 0)){
            addParticle(pos);
                    }
      
        cout<<"pos: "<<pos<<endl;
        
    }

        
}

void testApp::addParticle(ofVec2f rPos){
    Particle p;
    ofVec2f rVel = ofVec2f( ofRandom(1.5)*10-7.5,ofRandom(1.0)* 10.0 - 5.0);

    
    
        
    p.setup(rVel,rPos);
    pList.push_back( p );
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
    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
    
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
