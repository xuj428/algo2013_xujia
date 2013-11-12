//
//  creature.h
//  atan_creature
//
//  Created by xjjulia on 17/9/13.
//
//

#ifndef __atan_creature__creature__
#define __atan_creature__creature__

#include "ofMain.h"

class creature {
    
public:
	
    creature();
	
    void	draw();
    void	xenoToPoint(float catchX, float catchY);
	
    ofPoint		pos;
    ofPoint		prevPos;
    
    float		angle;
	
	
    float		catchUpSpeed;			
    
	
	
	
};


#endif /* defined(__atan_creature__creature__) */
