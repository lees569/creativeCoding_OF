//
//  Rectangle.hpp
//  animation
//
//  Created by MR.LEE on 4/6/16.
//
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Rectangle_hpp */


class Rectangle{
    
public:
    //constructor
    Rectangle();
    
    //methods
    void draw();
    void interpolate(float myPct);
    
    void zenoToPoint(float catchX, float catchY);
    float catchUpSpeed;
    
    
    //params
    ofPoint posA, posB, pos;
    float pct;
    
    
    
    
};
