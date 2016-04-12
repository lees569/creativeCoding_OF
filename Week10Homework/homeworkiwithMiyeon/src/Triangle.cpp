//
//  Triangle.cpp
//  week10_time
//
//  Created by Miyeon Kim2 on 4/12/16.
//
//

#include "Triangle.hpp"


Triangle::Triangle(){
    
    //initial position
    posA.x=10;
    posA.y=10;
    //final position
    posB.x=1000;
    posB.y=10;
}



void Triangle::draw(){
    ofTranslate(0,ofGetHeight()/2);
    ofNoFill();
    ofDrawSphere(pos.x ,pos.y,10* sin(ofGetElapsedTimef()/10)*30);
    
    
}

void Triangle::interpolateByPct(float myPct){
    pct = powf(myPct, 2); // myPct^2=myPct*myPct
    pos.x = (1 - pct)* posA.x + pct*posB.x;
    pos.y = (1 - pct)* posA.y + pct*posB.y;
}


void Triangle::zenoToPoint(float catchX, float catchY){
    
    pos.x = catchupSpeed*catchX + (1 - catchupSpeed)*pos.x;
    pos.y = catchupSpeed*catchY + (1 - catchupSpeed)*pos.y;
    
}