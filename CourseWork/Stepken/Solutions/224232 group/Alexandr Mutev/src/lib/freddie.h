#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Freddie: public Enemy{
    private:

    public:
        Freddie();
        virtual ~Freddie();
        int get_health() override;
        void attack(Weapon *weapon) override;
        void defense(Extremity *extremity) override;
};