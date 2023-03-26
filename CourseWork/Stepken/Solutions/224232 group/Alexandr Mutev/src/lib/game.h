#pragma once
#include <iostream>

#include "hero.h"
#include "enemy.h"
#include "screen.h"
#include "playing_field.h"

using namespace std;

class Game{
    private:

    public:
        int hero_target_attack;
        int hero_target_defense;
        string hero_health;
        string enemy_health;
        vector<string>choice_target_options;
        string attack_text;
        string defense_text;
        
        Game();
        virtual ~Game();
        int start_game();
        int event();
};