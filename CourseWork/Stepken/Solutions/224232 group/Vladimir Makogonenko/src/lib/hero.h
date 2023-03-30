#pragma once 
#include <iostream>
#include "character.h"

using namespace std;

class Hero: public Character
{
        int health;

    public:

        Hero();
        void health_recovery();

};