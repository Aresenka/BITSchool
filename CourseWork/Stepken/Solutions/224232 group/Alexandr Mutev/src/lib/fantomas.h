#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Fantomas: public Enemy{
    private:
    
    public:
        Fantomas();
        virtual  ~Fantomas();
        void attack(Weapon *weapon) override;
};