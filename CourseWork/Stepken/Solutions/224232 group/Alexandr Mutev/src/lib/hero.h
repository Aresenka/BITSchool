#pragma once
#include <iostream>

using namespace std;

class Hero: public Character{
    private:
        int health;
    
    public:
        Hero();
        virtual ~Hero();
        int get_health() override;
        void attack(Weapon *weapon) override;
        void defense(Extremity *extremity) override;
};