#pragma once
#include <iostream>
#include "character.h"

using namespace std;

class Enemy: public Character{
    public:
        Enemy();
        virtual ~Enemy();
        virtual void fight() = 0;
        virtual void defend() = 0;

    protected:
        int health;

};