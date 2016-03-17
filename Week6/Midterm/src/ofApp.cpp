#include "ofApp.h"
#define DEPTH 8


//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofSetFrameRate(1);

    
    lineLength = 30;
    rotationAngle = 90.0;
    angleOffset = 1;
    stPointX = ofGetWidth()/2;
    stPointY = ofGetHeight()/2;
    frameNumber = 0;
    
    
  
    
    Gui.setup(); //setup the panel
    Gui.add(Rad.setup("Rad",100,50,300));
    Gui.add(angles.setup("angles", 5,0,50));
    lee.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
   
    
    
    if (frameNumber < 13) {
      
      
        frameNumber++;

    }else{
    
        frameNumber--;
    
    }

    
    lee.update();


}







//--------------------------------------------------------------
void ofApp::draw(){
 
    
    
    
    ofBackgroundGradient(ofColor(80), ofColor(0));
    
    
  
  

    
    
    lee.draw();
    
    
    drawTrunk(frameNumber, rotationAngle);
    
    
    
    Gui.draw();
    
 
}




void ofApp::drawTrunk(int depth, float angle) {
    
    ofTranslate(stPointX, stPointY);

    ofSetColor(ofRandom(255),0,100,250);

    drawBranch(depth, angle);
}

//--------------------------------------------------------------
void ofApp::drawBranch(int depth, float angle) {
    
    float newAngle = angle + angleOffset;
    

    ofPushMatrix();
    ofRotate(newAngle);
    drawLeaf(depth, newAngle);
    ofPopMatrix();
    ofRotate(-newAngle);
    drawLeaf(depth, newAngle);

  
}

//--------------------------------------------------------------
void ofApp::drawLeaf(int depth, float angle) {
    
    
    int leafLength = lineLength*depth,
    
    leafSize = 10;

    ofTranslate(0,-leafLength);
    ofSetLineWidth(depth/2);
    
    ofLine(0,leafLength,0,0);
    
    if(depth == 0) {
       
        
        ofSetColor(ofRandom(255),0,100,250);
        
        
        if (ofRandom(100) > 0) {
   
            ofEllipse(0,0,leafSize,leafSize);
        }

    }
    
    
    
    if(depth>0){
        drawBranch(depth-1, angle);
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
