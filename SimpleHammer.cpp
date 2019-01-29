/*
 * File:   SimpleHammer.hpp
 * Author: Juan <jam14j@my.fsu.edu>
 *
 */

#include "SimpleHammer.hpp"

double SimpleHammer::hit(double armor)
{
    double damage = 0;
    if (armor<30)
        damage = hitPoints;     //ignore armor if armor<30
    else
        damage = hitPoints-armor;
    
    if (damage<0)   //if armor>30 don't deal negative damage
        return 0;
    else
        return damage;
}