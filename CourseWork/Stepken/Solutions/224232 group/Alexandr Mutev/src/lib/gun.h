#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Gun: public Weapon{
    private:

    public:
        Gun();
        virtual ~Gun();
        void attack() override;
};