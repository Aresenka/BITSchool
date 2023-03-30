#pragma once
#include <iostream>
#include "character.h"
#include "enemy.h"

using namespace std;

class Playing_field
{

    public:

        string welcome_field();
        string event_field(string question, string hero_health, string enemy_hearth, Enemy &enemy);
        string health_to_str(Character &ch);
        string health_board(string hero_health, string enemy_hearth);
        string logo();
        string line();
        string screen_characters(Enemy &enemy);
        string screen_you_win();
        string screen_you_lose();

};