//
//  han.cpp
//  homework
//
//  Created by SHLEE on 2/10/16.
//
//

#include "han.hpp"
#include "ofMain.h"



    
    


    void han::drawing(){
        
        
        x=x+1;
        y=y+1;
        
        
        ofSetColor(200, 100, 50,80);
        ofEllipse(500, 500, x, y,200);
        
    
    }
