#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofSetBackgroundAuto(false);
//    ofBackgroundGradient(ofColor(0), ofColor(80));

//    
//    myBranch.setup(ofGetWidth()/2,    //float _xPos,
//                                      ofGetHeight(),//float _yPos,
//                                      40,//float _length,
//                                      10,//float _width,
//                                      0.45,//float _splitPercentage,
//                                      PI/5,//float _maxSplitAngle,
//                                      4,//float _maxSubdivisions,
//                                      5,//float _maxSegments,
//                                      0,//float _segmentsSinceStart,
//                                      -PI/2,//float _angle,
//                                      0,//float _curvature,
//                                      ofColor(255,0,0)//ofColor _color
//
//    );
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    myBranch.setup(
                   
                   ofGetWidth()/2,//float _xPos,
                   ofGetHeight()/2,//float _yPos,
                   20,//float _length,
                   10,//float _width,
                   0.50,//float _splitPercentage,
                   PI/5,//float _maxSplitAngle,
                   4,//float _maxSubdivisions,
                   5,//float _maxSegments,
                   0,//float _segmentsSinceStart,
                   PI,//float _angle,
                   0,//float _curvature,
                   ofColor(255,0,0)//ofColor _color)
                   
                   );

 
    
    
    
//    ofBackgroundGradient(ofColor(0), ofColor(80));

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
//
//    if(key == 'p'){
//        myBranch.setup(
//                       
//                   ofGetWidth()/2,//float _xPos,
//                   ofGetHeight(),//float _yPos,
//                   40,//float _length,
//                   10,//float _width,
//                   0.45,//float _splitPercentage,
//                   PI/5,//float _maxSplitAngle,
//                   4,//float _maxSubdivisions,
//                   5,//float _maxSegments,
//                   0,//float _segmentsSinceStart,
//                   -PI/2,//float _angle,
//                   0,//float _curvature,
//                   ofColor(255,0,0)//ofColor _color)
//    
//                );
//        }

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
