#include <iostream>
#include "playing_field.h"

using namespace std;

Playing_field::Playing_field(){

}
Playing_field::~Playing_field(){

}
string Playing_field::welcome_field(){
    return "TEXT TEXT TEXT";
}
string Playing_field::health_to_str(Character &ch){
    int health = ch.get_health();
    return to_string(health);
}
string Playing_field::health_board(string hero_health, string enemy_hearth){
    return "Hero's health: " + hero_health + " | " + "Enemy health: " + enemy_hearth;
}

