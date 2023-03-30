#include <iostream>
#include "character.h"

using namespace std;

Character::Character(){
    this->health = health;
    this->power = power;
}

int Character::get_health(){
    return health;
}

void Character::set_health(int target_attack, int target_degense){
    if(target_attack == target_degense){
        power = 1;
    }
    health = health - power;
    power = 5;
}

int Character::get_power(){
    return power;
}

void Character::set_power(int defense){
    power = power - defense;
}