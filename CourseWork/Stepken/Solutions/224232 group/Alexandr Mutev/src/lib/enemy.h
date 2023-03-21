#pragma once
#include <iostream>
#include "character.h"
#include "hero.h"

using namespace std;

class Enemy: public Character{
    public:
        Enemy();
        virtual ~Enemy();
        void attack(Weapon *weapon, Character *character) override;
        void defense(Extremity *extremity) override;

    protected:
        int health;

};