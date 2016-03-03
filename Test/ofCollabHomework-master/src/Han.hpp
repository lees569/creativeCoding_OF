//
//  Han.hpp
//  ofCollabHomework
//
//  Created by SHLEE on 2/26/16.
//
//

#ifndef Han_hpp
#define Han_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Han_hpp */



class Hanhan{
    
public:
    
    //properties
    
    
    vector<ofPoint> vertices;
    vector<ofColor> colors;
    int nTri; // the number of triangles
    int nVert; // the number of the vertices equals nTri*3
    
    
    //constructor
    
    
    Hanhan();
    
    
    
    //method
    
    void setup();
    void update();
    void draw();
    
    
    
    
};