#include <iostream>
#include "playing_field.h"

using namespace std;

string Playing_field::welcome_field(){
    Playing_field welcome_field;
    return welcome_field.line() + welcome_field.logo() + welcome_field.line();
}

string Playing_field::event_field(string question, string health_hero, string health_enemy, Enemy&enemy){
    Playing_field event_field;
    return event_field.line() + event_field.logo() + event_field.line() + "\t\t\t\t\t\t\t\t\t\t" + health_board(health_hero, health_enemy) + "\n" + event_field.line() + event_field.screen_characters(enemy) + "\n" + event_field.line() + question;
}

string Playing_field::health_to_str(Character &ch){
    int health = ch.get_health();
    return to_string(health);
}

string Playing_field::health_board(string hero_health, string enemy_health){
    return "Hero`s health: " + hero_health + " | " + "Enemy`s health: " + enemy_health;
}

string Playing_field::logo(){
    return "**********************************************************************************************************************\n";
}

string Playing_field::line(){
    return "**********************************************************************************************************************\n";
}

string Playing_field::screen_characters(Enemy &enemy){
    return enemy.screen_characters();
}

string Playing_field::screen_you_win(){
    return " you win ";
}