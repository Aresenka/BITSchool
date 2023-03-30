#include <iostream>
#include "hero.h"
#include "enemy.h"
#include "zombie.h"
#include "skeleton.h"
#include "dragon.h"
#include "screen.h"
#include "playing_field.h"

using namespace std;

class Game{
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
    int count = 0;

    int new_event(int choice, Hero &hero, Enemy &enemy, Playing_field &health_screen);
    int start_game();
    int event(Hero &hero, Enemy &enemy, Playing_field &health_screen);
    void win_event(Playing_field &health_screen);

};