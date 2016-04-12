//
//  Triangle.hpp
//  week10_time
//
//  Created by Miyeon Kim2 on 4/12/16.
//
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Triangle_hpp */

class Triangle{
public:
    Triangle();
    
    void draw();
    void interpolateByPct(float myPct);
    void zenoToPoint (float catchX, float catchY);
    float catchupSpeed;
    
    
    //params
    ofPoint posA, posB, pos;
    float pct;
};
