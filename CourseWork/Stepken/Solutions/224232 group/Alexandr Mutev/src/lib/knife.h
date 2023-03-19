#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Knife: public Weapon{
    private:
        int power_knife = power + 1;

    public:
        Knife();
        virtual ~Knife();
};