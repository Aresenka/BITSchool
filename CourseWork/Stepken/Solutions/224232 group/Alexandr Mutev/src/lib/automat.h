#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Automat: public Weapon{
    private:
        int power_automat = power + 3;

    public:
        Automat();
        virtual ~Automat();
};