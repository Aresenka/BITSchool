#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Automat: public Weapon{
    public:
        Automat();
        virtual ~Automat();
};