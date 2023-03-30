#include <iostream>
#include "hero.h"

using namespace std;

Hero::Hero(){
    this->health = health;
}

void Hero::health_recovery(){
    health = Character::health;
}