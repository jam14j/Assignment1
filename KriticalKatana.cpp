//
//  KriticalKatana.cpp
//  RPG
//
//  Created by Juan Martinez on 1/28/19.
//  Copyright © 2019 Juan Martinez. All rights reserved.
//

#include "KriticalKatana.hpp"

double KriticalKatana::hit(double armor)
{
    double damage = hitPoints-armor;
    int trun_armor = armor; //round armor down
    if (trun_armor%9 == 0)
    {
        if(trun_armor%2 == 0) //miss
            damage = 0;
        else                  //critical hit
            damage = 100;
    }
    else if (trun_armor%2 == 0)     //piercing hit
        damage = hitPoints-(armor/2);
    
    if (damage<0)
        return 0;
    else
        return damage;
}
