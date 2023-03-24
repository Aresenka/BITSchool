#pragma once
#include <iostream>

#include "hero.h"
#include "enemy.h"

using namespace std;

class Game{
    private:

    public:
        Game();
        virtual ~Game();
        int event();
};