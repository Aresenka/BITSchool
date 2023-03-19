#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Bazooka: public Weapon{
    public:
        Bazooka();
        virtual ~Bazooka();
};