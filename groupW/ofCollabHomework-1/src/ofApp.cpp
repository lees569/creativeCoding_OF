#include "ofApp.h"

//--------------------------------------------------------------

//void ofApp::drawCircle(float x, float y, float diam){
//    
//    
//    ofDrawEllipse(x, y, diam, diam);
//    diam= diam*.7;
//    if (diam>5) {
//        drawCircle(x, y, diam);
//    
//    }
//}
//
//void ofApp::drawRectangle(float x, float y){
//    
//    r = ofRandom(0,255);
//    g = ofRandom (0,255);
//    b = ofRandom (0,255);
//    ofSetColor(0, 200, 200);
//    ofNoFill();
//
//    ofDrawRectangle(x, y, 200,200,200);
//    
//}



void ofApp::setup(){
    ofBackground(0);
    
    
    lee.setup();
}

//--------------------------------------------------------------
void ofApp::update(){

    
    lee.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofNoFill();
//    drawCircle(ofGetWidth()/2, ofGetHeight()/2, 300);
//    drawRectangle(ofGetWidth()/2-100, ofGetHeight()/2-100);
    
    
    lee.draw();

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
