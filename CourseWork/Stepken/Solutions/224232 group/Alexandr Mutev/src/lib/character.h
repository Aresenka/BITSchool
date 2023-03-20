#pragma once
#include "weapon.h"

using namespace std;

class Character{
    protected:
        int health = 30;
        Weapon weapon;

    public:
        Character();
        virtual ~Character();
        virtual void attack(Weapon *weapon) = 0;

};