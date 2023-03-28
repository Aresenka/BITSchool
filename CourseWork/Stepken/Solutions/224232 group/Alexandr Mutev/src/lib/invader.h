#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Invader: public Enemy{
    private:
        int health;
    public:
        Invader();
        virtual ~Invader();
};