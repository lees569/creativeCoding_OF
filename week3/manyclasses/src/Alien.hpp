//
//  Alien.hpp
//  manyclasses
//
//  Created by SHLEE on 2/10/16.
//
//

#ifndef Alien_hpp
#define Alien_hpp

#include <stdio.h>
#include "ofMain.h"
#endif /* Alien_hpp */




class Alien{

public:
    
    //properties
    
    
    int xPos, yPos;
    int velX, velY;
    
    int r,g,b;
    int diam;
    
    //constructor
    
    
    Alien();
    
    
    
    //method

    void setup(float _x, float _y );
    void update();
    void draw();



};