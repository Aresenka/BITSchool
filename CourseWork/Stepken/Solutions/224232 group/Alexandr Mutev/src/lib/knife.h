#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Knife: public Weapon{
    public:
        Knife();
        virtual ~Knife();
};