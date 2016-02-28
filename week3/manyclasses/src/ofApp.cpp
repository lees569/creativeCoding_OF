#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    scully.setup(ofGetWidth()/2, ofGetHeight()/2);
    booBoo.setup(100,100);s
}

//--------------------------------------------------------------
void ofApp::update(){

    scully.update();
    booBoo.update();
    
    for(int i=0; i<myAliens.size(); i++){
        myAliens[i].update();
    
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    scully.draw();
    booBoo.draw();
    
    for(int i=0; i<myAliens.size(); i++){
    
        myAliens[i].draw();
    }
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

    Alien tempAlien;
    tempAlien.setup(x,y);
    myAliens.push_back(tempAlien);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
//    myAliens.clear();
    
    for( int i=0; i<myAliens.size(); i++){
        float distance = ofDist(x, y, myAliens[i].xPos, myAliens[i].yPos);  //ofDist = should be blue color
        
        if(distance<myAliens[i].diam){
            
            myAliens.erase(myAliens.begin() + i);
        
        }
        
    }

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
