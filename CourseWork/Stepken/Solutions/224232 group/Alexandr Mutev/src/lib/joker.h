#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Joker: public Enemy{
    private:
        int health_joker = health + 15;
    
    public:
        Joker();
        virtual ~Joker();
        virtual void fight() = 0;
        virtual void defend() = 0;
};