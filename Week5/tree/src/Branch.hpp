//
//  Branch.hpp
//  tree
//
//  Created by MR.LEE on 3/2/16.
//
//

#ifndef Branch_hpp
#define Branch_hpp

#include <stdio.h>
#include "ofMain.h"



#endif /* Branch_hpp */


class Branch : public ofBaseApp{
public:
    void setup(float _xPos, float _yPos,
               float _length, float _width,
               float _splitPercentage,
               float _maxSplitAngle,
               float _maxSubdivisions,
               float _maxSegments,
               float _segmentsSinceStart,
               float _angle,
               float _curvature,
               ofColor _color);
               
    
private:
    float xPos, yPos;
    float length, width;
    float splitPercentage;
    float maxSplitAngle;
    float maxSubdivisions;
    float maxSegments;
    float segmentsSinceStart;
    float angle, curvature;
    ofColor color;
    bool split;
};