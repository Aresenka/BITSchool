#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Zombie: public Enemy
{
        int health;

    public:

        Zombie();
        string screen_characters();

};