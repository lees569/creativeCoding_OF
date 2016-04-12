#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofSetBackgroundAuto(false);
    amplitude = ofGetHeight()/2;
    period = 25;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    circleX = ofGetElapsedTimef()*period;
    circleY = amplitude*sin(ofGetElapsedTimef());
    
    sine = sin(ofGetElapsedTimef());
    mapX = ofMap(sine, -1, 1, 0, ofGetWidth());
    mapY = ofMap(sine, -1, 1, 0, ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofTranslate(0, ofGetHeight()/2);
//    ofEllipse(circleX, circleY, 10, 10);
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2, mapX, mapY);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
