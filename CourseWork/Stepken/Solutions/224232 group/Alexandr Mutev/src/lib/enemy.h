#pragma once
#include <iostream>
#include "character.h"

using namespace std;

class Enemy: public Character{
    public:
        Enemy();
        virtual ~Enemy();
        void attack(Weapon *weapon) override;
        void defense(Extremity *extremity) override;

    protected:
        int health;

};