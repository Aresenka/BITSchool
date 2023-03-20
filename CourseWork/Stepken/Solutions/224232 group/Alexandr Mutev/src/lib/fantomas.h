#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Fantomas: public Enemy{
    private:
    
    public:
        Fantomas();
        virtual  ~Fantomas();
        int get_health() override;
        void attack(Weapon *weapon) override;
        void defense(Extremity *extremity) override;
};