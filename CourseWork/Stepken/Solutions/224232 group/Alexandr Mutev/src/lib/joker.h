#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Joker: public Enemy{
    private:
    
    public:
        Joker();
        virtual ~Joker();
        int get_health() override;
        void attack(Weapon *weapon) override;
        void defense(Extremity *extremity) override;
};