#pragma once
#include <iostream>
#include "weapon.h"

using namespace std;

class Automat: public Weapon{
    private:

    public:
        Automat();
        virtual ~Automat();
        void attack() override;
};