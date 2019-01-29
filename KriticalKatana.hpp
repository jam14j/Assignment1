/*
 * File:   KriticalKatana.hpp
 * Author: Juan <jam14j@my.fsu.edu>
 *
 * Created on January 28, 2019
 */

#include <string>
#include "Weapon.h"

#ifndef KriticalKatana_hpp
#define KriticalKatana_hpp

/**
 * Defines the behavior of a Kritical Katana (hitpoint = 10.
    Critical Hit: if armor is a multiple of 9 but NOT a multiple of 2.
                  Deal 100 damage, disregard armor.
    Miss: if armor is a multiple of 9 AND a multiple of 2.
          Deal no damage.
    Piercing Hit: if armor is a multiple of 2 but NOT a multiple of 9.
                  Deal regular damage ignoring 50% armor.)
 */
class KriticalKatana : public Weapon {
public:
    
    KriticalKatana() : Weapon("KriticalKatana",10.0) //Calls Weapon(name, hitpoints) constructor with values CrazyRandomSword
    {}
    
    virtual ~KriticalKatana() {};
    
    //void ChangeHitPoints();
    virtual double hit(double armor);
    
};

#endif /* KriticalKatana_hpp */
