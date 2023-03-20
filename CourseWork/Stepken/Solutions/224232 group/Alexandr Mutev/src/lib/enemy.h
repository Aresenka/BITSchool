#pragma once
#include <iostream>
#include "character.h"

using namespace std;

class Enemy: public Character{
    public:
        Enemy();
        virtual ~Enemy();

    protected:
        int health;

};