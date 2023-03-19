#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Gun: public Weapon{
    private:
        int power_gun = power +2;

    public:
        Gun();
        virtual ~Gun();
};