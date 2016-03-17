//
//  Han.cpp
//  ofCollabHomework
//
//  Created by SHLEE on 2/26/16.
//
//

#include "Han.hpp"



Hanhan ::Hanhan(){
    
    
    
}



void Hanhan::setup(){
    
    
    nTri =1000; // number of triangles
    nVert = nTri*3;
    
    float Rad = 100; // sphere's radius
    float rad = 15; // maximal triangle's radius
    
    vertices.resize(nVert);  //set the array size
    
    for (int i=0; i<nTri; i++){
        
        ofPoint center (ofRandom(-1,1),
                        ofRandom(-1,1),
                        ofRandom(-1,1));
        center.normalize();
        center *= Rad;
        
        
        
        for (int j=0; j<3; j++){
            
            vertices[i*3 + j ] = center + ofPoint(
                                                  
                                                  ofRandom(-rad/2,rad),
                                                  ofRandom(-rad/2,rad),
                                                  ofRandom(-rad/2,rad)
                                                  );
            
            
        }
    }
    
    
    colors.resize(nTri);
    for (int i=0; i<nTri; i++) {
        colors[i] = ofColor( ofRandom(0,255),0,100);
    }
    
    
    
}



void Hanhan::draw(){
    
    
    ofEnableDepthTest();
    
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2,0);
    
    
    float time = ofGetElapsedTimef();
    float angles = time * 5;
    
    ofRotate(angles, 1, 1, 0);
    
    for (int i = 0; i<nTri; i++) {
        ofSetColor(colors[i]);
        
        ofTriangle(vertices[i*3],
                   vertices[i*3+1],
                   vertices[i*3+2]);
    }
    ofPopMatrix();
    
    
    
    
    
}


void Hanhan::update(){
    
    
    
}
