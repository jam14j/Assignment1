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
#include "CrazyRandomSword.hpp"
#include "KriticalKatana.hpp"

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
    
    if (name.compare("crazyrandomsword") == 0) {
        return new CrazyRandomSword();
    }
    
    if (name.compare("kriticalkatana") == 0) {
        return new KriticalKatana();
    }

    throw "Invalid weapon";
}