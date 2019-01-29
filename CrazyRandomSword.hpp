/*
 * File:   CrazyRandomSword.hpp
 * Author: Juan <jam14j@my.fsu.edu>
 *
 * Created on January 28, 2019
 */

#include <string>
#include "Weapon.h"
#include <cstdlib>
#include <time.h>

#ifndef CrazyRandomSword_hpp
#define CrazyRandomSword_hpp

/**
 * Defines the behavior of a SimpleHammer (hitpoint = 25, ignores all armor if armor<30)
 */
class CrazyRandomSword : public Weapon {
public:
    
    CrazyRandomSword() : Weapon("CrazyRandomSword",25.0) //Calls Weapon(name, hitpoints) constructor with values CrazyRandomSword
    {
        srand((int) time(NULL));
        hitPoints = (rand()%94) +7;
    }
    
    virtual ~CrazyRandomSword() {};
    
    //void ChangeHitPoints();
    virtual double hit(double armor);
    
};

#endif /* CrazyRandomSword_hpp */
