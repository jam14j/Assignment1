/*
 * File:   SimpleHammer.hpp
 * Author: Juan <jam14j@my.fsu.edu>
 *
 * Created on January 28, 2019
 */

#include <string>
#include "Weapon.h"

#ifndef SimpleHammer_hpp
#define SimpleHammer_hpp

/**
 * Defines the behavior of a SimpleHammer (hitpoint = 25, ignores all armor if armor<30)
 */
class SimpleHammer : public Weapon {
public:
    
    SimpleHammer() : Weapon("SimpleHammer",25.0) //Calls Weapon(name, hitpoints) constructor with values SimpleHammer and 25.0
    {
    }
    
    virtual ~SimpleHammer() {};
    
    virtual double hit(double armor);
    
};

#endif /* SimpleHammer_hpp */
