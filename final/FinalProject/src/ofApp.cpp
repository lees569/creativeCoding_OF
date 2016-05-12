#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    ofSetCircleResolution(80);
    ofBackground(54, 54, 54);
    
    
    soundStream.printDeviceList();
    
    
    int bufferSize = 256;
    
    
    left.assign(bufferSize, 0.0);
    right.assign(bufferSize, 0.0);
    volHistory.assign(400, 0.0);
    
    bufferCounter	= 0;
    drawCounter		= 0;
    smoothedVol     = 0.0;
    scaledVol		= 0.0;
    
    soundStream.setup(this, 0, 2, 44100, bufferSize, 4);
    
    nTri = 3000; // number of triangles
    nVert = nTri*3;
    
    float Rad = 250; // sphere's radius
    float rad = 30; // maximal triangle's radius
    
    vertices.resize(nVert);  //set the array size
    for (int i=0; i<nTri; i++){
        
        ofPoint center (ofRandom(-2,2),
                        ofRandom(-2,2),
                        ofRandom(-2,2));
        center.normalize();
        center *= Rad;
        
        
        
        for (int j=0; j<3; j++){
            
            vertices[i*3 + j*scaledVol * 10.0f ] =  ofPoint(  ofRandom(-rad,rad),
                                                            ofRandom(-rad,rad),
                                                            ofRandom(-rad,rad))*scaledVol;
            
            
        }
    }
    
    
    colors.resize(nTri);
    for (int i=0; i<nTri; i++) {
        colors[i] = ofColor( ofRandom(0,255),scaledVol,100);
    }
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //lets scale the vol up to a 0-1 range
    scaledVol = ofMap(smoothedVol, 0.0, 0.17, 0.0, 1.0, true);
    
    //lets record the volume into an array
    volHistory.push_back( scaledVol );
    
    //if we are bigger the the size we want to record - lets drop the oldest value
    if( volHistory.size() >= 400 ){
        volHistory.erase(volHistory.begin(), volHistory.begin()+1);
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(225);
    
    
    // draw the average volume:
    ofPushStyle();
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 0);
    
    
    
    ofSetColor(245, 58, 135);
    ofFill();
    ofDrawCircle(ofRandom(-255), ofRandom(255), scaledVol * 190.0f);
    ofSetColor(245, 248, 135);
    ofFill();
    ofDrawSphere(0, 0, scaledVol*500.f);
    
    
    
    ofPopMatrix();
    ofPopStyle();
    
    drawCounter++;
    
    
    
    
    ofEnableDepthTest();
    
    ofSetBackgroundColor(0, 0, 0);
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2,0);
    
    
    float time = ofGetElapsedTimef();
    float angle = time * 10*scaledVol;
    
    ofRotate(angle, 1, 1, 0);
    
    for (int i = 0; i<nTri; i++) {
        ofSetColor(colors[i]);
        ofTriangle(vertices[i*3],
                   vertices[i*scaledVol*100.0F],
                   vertices[i*3]+2);
        
    }
    ofPopMatrix();
    
    
    
    
    
    
}





//--------------------------------------------------------------
void ofApp::audioIn(float * input, int bufferSize, int nChannels){
    
    float curVol = 0.0;
    
    // samples are "interleaved"
    int numCounted = 0;
    
    //lets go through each sample and calculate the root mean square which is a rough way to calculate volume
    for (int i = 0; i < bufferSize; i++){
        left[i]		= input[i*2]*0.5;
        right[i]	= input[i*2+1]*0.5;
        
        curVol += left[i] * left[i];
        curVol += right[i] * right[i];
        numCounted+=2;
    }
    
    //this is how we get the mean of rms :)
    curVol /= (float)numCounted;
    
    // this is how we get the root of rms :)
    curVol = sqrt( curVol );
    
    smoothedVol *= 0.93;
    smoothedVol += 0.07 * curVol;
    
    bufferCounter++;
    
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}

