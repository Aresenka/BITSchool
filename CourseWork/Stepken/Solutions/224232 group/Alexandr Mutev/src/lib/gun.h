#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Gun: public Weapon{
    public:
        Gun();
        virtual ~Gun();
};