#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Bazooka: public Weapon{
    private:

    public:
        Bazooka();
        virtual ~Bazooka();
        void attack() override;
};