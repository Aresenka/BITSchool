#pragma once
#include <iostream>

#include "hero.h"
#include "enemy.h"
#include "dino.h"
#include "pacman.h"
#include "invader.h"
#include "screen.h"
#include "playing_field.h"

using namespace std;

class Game{
    private:
        string hero_health;
        string enemy_health;
        int hero_target_attack;
        int hero_target_defense;
        int enemy_target_attack;
        int enemy_target_defense;
        string attack_text;
        string defense_text;
    public:
        vector<string>choice_target_options;

        
        Game();
        virtual ~Game();
        int start_game();
        int event();
};