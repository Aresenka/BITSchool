#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Freddie: public Enemy{
    private:
        int health;
    
    public:
    
    public:
        Freddie();
        virtual ~Freddie();
        virtual void fight() = 0;
        virtual void defend() = 0;
};