#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Pacman: public Enemy{
    private:
        int health;
    public:
        Pacman();
        virtual ~Pacman();

};