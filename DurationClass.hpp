//
//  DurationClass.hpp
//  DurationClass
//
//  Created by Dorian Tolman on 5/10/21.
//  Copyright © 2021 Dorian Tolman. All rights reserved.
//

#ifndef DurationClass_hpp
#define DurationClass_hpp

#include <stdio.h>

class Duration16 {
   
    
private:
    uint16_t lastTime = 0;
    
public:
    uint16_t duration;

    
    Duration16(uint16_t setDuration){
        duration = setDuration;
    }
    
    bool timePassed(uint16_t  currentTime){

        if(  (uint16_t)(currentTime - lastTime) > duration){
            
            lastTime = currentTime;
            return true;
            
        }else{
            return false;
        }
    }
    
 
};

#endif /* DurationClass_hpp */
