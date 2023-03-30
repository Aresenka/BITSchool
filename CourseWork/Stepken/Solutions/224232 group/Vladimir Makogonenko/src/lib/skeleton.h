#pragma once
#include <iostream>
#include "enemy.h"

using namespace std;

class Skeleton: public Enemy
{
        int health;

    public:

        Skeleton();
        string screen_characters();

};