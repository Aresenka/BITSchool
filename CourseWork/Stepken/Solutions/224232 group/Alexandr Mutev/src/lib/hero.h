#pragma once
#include <iostream>

using namespace std;

class Hero: public Character{
    private:
        int health;
    
    public:
        Hero();
        virtual ~Hero();
        void attack(Weapon *weapon, Character *character) override;
        void defense(Extremity *extremity) override;
};