#pragma once
#include <iostream>

#include "character.h"


using namespace std;

class Enemy: public Character{
    private:
        int health;
        int attack_points;
        int defend_point;
    
    public:
        Enemy();
        virtual ~Enemy();

};