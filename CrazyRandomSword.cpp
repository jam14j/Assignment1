//
//  CrazyRandomSword.cpp
//  RPG
//
//  Created by Juan Martinez on 1/28/19.
//  Copyright © 2019 Juan Martinez. All rights reserved.
//

#include "CrazyRandomSword.hpp"
#include <iostream>
//#include <cstdlib>
//#include <time.h>

double CrazyRandomSword::hit(double armor)
{
    double damage = 0;
    //srand((int) time(NULL));
    int range = (armor/3) - 2;
    //std::cout << "range: " << range << std::endl;
    if (range>0)
    {
        int ignore = (rand()%range)+2;
        if(ignore<=armor)
        {
            damage = hitPoints - armor + ignore;
            //std::cout << "ignore: " << ignore << std::endl;
        }
        else
            damage = hitPoints;
    }
    else
        damage = hitPoints;
    
    if (damage>0)
        return damage;
    else
        return 0;
}
/*
void CrazyRandomSword::ChangeHitPoints()
{
    srand(time(NULL));
    hitPoints = (rand()%94) +7;
}*/