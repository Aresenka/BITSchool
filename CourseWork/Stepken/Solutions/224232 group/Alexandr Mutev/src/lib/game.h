#pragma once
#include <iostream>

#include "hero.h"
#include "enemy.h"
#include "screen.h"

using namespace std;

class Game{
    private:

    public:
        Game();
        virtual ~Game();
        int start_game();
        int event();
};