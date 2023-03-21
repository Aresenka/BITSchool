#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Fantomas: public Enemy{
    private:
        int health = 35;
    public:
        Fantomas();
        virtual  ~Fantomas();
};