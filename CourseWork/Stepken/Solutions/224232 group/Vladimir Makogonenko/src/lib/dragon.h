#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Dragon: public Enemy
{
        int health;

    public:

        Dragon();
        string screen_characters();

};