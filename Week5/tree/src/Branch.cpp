//
//  Branch.cpp
//  tree
//
//  Created by MR.LEE on 3/2/16.
//
//

#include "Branch.hpp"




void Branch:: setup(float _xPos, float _yPos,
                    float _length, float _width,
                    float _splitPercentage,
                    float _maxSplitAngle,
                    float _maxSubdivisions,
                    float _maxSegments,
                    float _segmentsSinceStart,
                    float _angle,
                    float _curvature,
                    ofColor _color
                    ){
    
    //1. set incoming values to the last branch values
    xPos = _xPos;
    yPos = _yPos;
    length = _length;
    width = _width;
    splitPercentage = _splitPercentage;
    maxSplitAngle = _maxSplitAngle;
    maxSubdivisions = _maxSubdivisions;
    maxSegments = _maxSegments;
    segmentsSinceStart = _segmentsSinceStart;
    angle = _angle;
    curvature = _curvature;
    color = _color;
    
    //2. check if the branch splits
    
    
    float r = ofRandomuf(); // this gives value btwn 0 & 1
    if(r > splitPercentage && segmentsSinceStart != maxSegments){
        split = true;
    } else {
        split = false;
    }
    
    //3. Draw current branch
    
    ofSetColor(color);
    ofSetLineWidth(int(width));
    ofLine(xPos, yPos, xPos + length*cos(angle)/2, yPos +length*sin(angle)/2);
    
    //4. update the values of exisiting branch
    xPos += length*cos(angle)/2;
    yPos += length*sin(angle)/2;
    width += ofRandom(0.5, 0.8)*width/2;
    length += ofRandom(0.7, 0.9)*length/2;
    angle += curvature/3;
    curvature = ofRandom(0,2*PI/360);
    segmentsSinceStart++;
    
    //5.recursion
    
    
    
    if(segmentsSinceStart <= maxSegments){
        
        if(!split){
            // do not split
            Branch subBranch;
            subBranch.setup(xPos, yPos, length, width, splitPercentage, maxSplitAngle, maxSubdivisions, maxSegments, segmentsSinceStart, angle, curvature, color);
            
        } else {
            // split occurs
            // split occurs
            Branch subBranch1;
            float angle1 = angle + ofRandom(0, maxSplitAngle);
            subBranch1.setup(xPos, yPos, length, width, splitPercentage,
                             maxSplitAngle, maxSubdivisions, maxSegments, segmentsSinceStart,
                             angle1, curvature, color);
            
            Branch subBranch2;
            float angle2 = angle - ofRandom(0, maxSplitAngle);
            subBranch2.setup(xPos, yPos, length, width, splitPercentage,
                             maxSplitAngle, maxSubdivisions, maxSegments, segmentsSinceStart,
                             angle2, curvature, color);
            
            
            Branch subBranch3;
            float angle3 = angle * ofRandom(0, maxSplitAngle);
            subBranch2.setup(xPos, yPos, length, width, splitPercentage,
                             maxSplitAngle, maxSubdivisions, maxSegments, segmentsSinceStart,
                             angle3, curvature, color);

            
            
            
        }
        
    }
}







