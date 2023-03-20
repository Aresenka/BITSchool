#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Knife: public Weapon{
    private:

    public:
        Knife();
        virtual ~Knife();
        void attack(int power) override;
};