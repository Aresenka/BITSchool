#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Bazooka: public Weapon{
    private:
        int power_bazooka = power + 4;

    public:
        Bazooka();
        virtual ~Bazooka();
};