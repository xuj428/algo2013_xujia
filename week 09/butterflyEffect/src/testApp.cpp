#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //fft
    ofSoundStreamSetup(0,2,this, 44100, BUFFER_SIZE, 4);
    FFTanalyzer.setup(44100, BUFFER_SIZE/2, 2);
	
	FFTanalyzer.peakHoldTime = 15; // hold longer
	FFTanalyzer.peakDecayRate = 0.95f; // decay slower
	FFTanalyzer.linearEQIntercept = 0.9f; // reduced gain at lowest frequency
	FFTanalyzer.linearEQSlope = 0.01f; // increasing gain at higher frequencies
//------------------------------------------------
    ofBackground(0);
    ofEnableAlphaBlending();
    ofSetVerticalSync(true);
    
    for (int i=0; i<300; i++) {
        Particle p;
        p.setup();
        pList.push_back(p);
    }

}

//--------------------------------------------------------------
void testApp::update(){
    for (int i=0; i<pList.size(); i++) {
        pList[i].update(10 * *FFTanalyzer.peaks);
    }
    cout<<10 * *FFTanalyzer.peaks<<endl;
}

//--------------------------------------------------------------
void testApp::draw(){
    
    /* do the FFT	*/
    float avg_power = 0.0f;
	myfft.powerSpectrum(0,(int)BUFFER_SIZE/2, left,BUFFER_SIZE,&magnitude[0],&phase[0],&power[0],&avg_power);
    
	for (int i = 0; i < (int)(BUFFER_SIZE/2); i++){
		freq[i] = magnitude[i];
	}
	
	FFTanalyzer.calculate(freq);

    for (int i=0; i<pList.size(); i++) {
        pList[i].draw();
    }

}


void testApp::audioReceived 	(float * input, int bufferSize, int nChannels){
	// samples are "interleaved"
	for (int i = 0; i < bufferSize; i++){
		left[i] = input[i*2];
		right[i] = input[i*2+1];
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
