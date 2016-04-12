#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //-----------------trig-----------------
    //ofSetBackgroundAuto(false);
    amplitude = ofGetHeight()/2;
    period = 25;
    
    
    //------------animation----------
    myTriangle.pos.x = 10;
    myTriangle.pos.y = 10;
    myTriangle.catchupSpeed = 0.03;
    
    pct = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    circleX=ofGetElapsedTimef()*period;
    circleY=amplitude*sin(ofGetElapsedTimef());
    
    sine = sin(ofGetElapsedTimef());
    mapX=ofMap(sine,-1,1,0,ofGetWidth());
    mapY=ofMap(sine,-1,1,0,ofGetHeight());
    
    
    
    //------------animation----------
    pct += 0.1;
    
    if(pct>1){
        pct=0;
    }
    
    //    myRectangle.interpolateByPct(pct);
    myTriangle.zenoToPoint(abs(sin(ofGetElapsedTimef()/5)*1000), 10);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofFill();
    ofSetColor(abs(tan(ofGetElapsedTimef()/2)*250),abs(cos(ofGetElapsedTimef()/2)*250),(sin(ofGetElapsedTimef()/5)*255));
    ofDrawTriangle(circleX, circleY,circleX*5,circleY*5, mapX, mapY);
    
    ofNoFill();
    ofSetColor(abs(tan(ofGetElapsedTimef()/2)*350),abs(cos(ofGetElapsedTimef()/2)*250),(sin(ofGetElapsedTimef()/5)*255));
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofDrawRectangle(ofGetWidth()/2, ofGetHeight()/2, mapX, mapY);
    
    
    //------------animation----------
    
    ofNoFill();
    myTriangle.draw();
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
