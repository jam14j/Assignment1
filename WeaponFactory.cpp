/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 * Edit: Juan <jam14j@my.fsu.edu>
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "SimpleHammer.hpp"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }
    
    if (name.compare("simplehammer") == 0) {
        return new SimpleHammer();
    }

    throw "Invalid weapon";
}