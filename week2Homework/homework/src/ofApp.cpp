#include "ofApp.h"



void ofApp::diamond( ofPoint center, float width, float height){
    
    //line1
    
    ofLine(center.x - width/2, center.y, center.x, center.y-height/2);
    
    //line2
    
    ofLine(center.x, center.y-height/2, center.x+width/2, center.y);
    
    //line3
    
    ofLine(center.x + width/2, center.y, center.x, center.y + height/2 );
    
    //line4
    
    ofLine(center.x, center.y + height/2, center.x - width/2, center.y );

}




//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0,0,0);
    circleX = 0;
    circleY = 0;
    a = 50 ;
    c = 50 ;
    b = 10 ;
    d = 10;
    e = 10;
    center2.x = ofGetWidth()/2;
    center2.y = ofGetHeight()/2;
    height2 = 300;
    width2  = 300;
    
    
    line.draw();

}

//--------------------------------------------------------------
void ofApp::update(){

    d= d+1;
    e= e+1;
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(b, 0,0);
    ofEllipse(circleX, circleY, a, c/2);
//    ofDrawBitmapString("Hello World", 100,100);
        diamond(center2, width2, height2);
    
    
    ofSetColor(100, 100, 100);
    ofEllipse(d, e, a,c);

    
    newhan.drawing();
  }

//--------------------r------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == OF_KEY_RIGHT){
        
        circleX = circleX + 10;
        circleY = circleY + 10;
        a = a + 10;
        c = c + 10;
        b = b +10;

    }
    else if (key == OF_KEY_LEFT) {
        circleX = circleX - 10;
        circleY = circleY - 10;
        a = a - 10;
        c = c - 10;
        b = b - 15;
    }
    
    else if (key == OF_KEY_UP) {
        width2 = width2 + 10;
    
        height2 = height2 +10;
    
    }else if (key == OF_KEY_DOWN) {
        width2 = width2 - 10;
        
        height2 = height2 -10;


    }
    
    
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
