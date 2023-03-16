#pragma once
#include <iostream>

using namespace std;

class Hero: public Character{
    private:
        int health;
    
    public:
        Hero();
        virtual ~Hero();
        virtual void fight() = 0;
        virtual void defend() = 0;
};