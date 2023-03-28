#include <iostream>

#include "hero.h"

using namespace std;

//public

Hero::Hero(){
    this->health = health;
}
Hero::~Hero(){

}
void Hero::health_recovery(){
    health = Character::health;
}