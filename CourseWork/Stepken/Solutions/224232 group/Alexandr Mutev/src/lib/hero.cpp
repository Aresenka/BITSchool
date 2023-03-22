#include <iostream>

#include "character.h"
#include "hero.h"

#include "extremity.h"
#include "head.h"
#include "body.h"
#include "legs.h"

#include "weapon.h"
#include "knife.h"
#include "gun.h"
#include "automat.h"
#include "bazooka.h"

#include "character.h"
#include "enemy.h"
#include "fantomas.h"
#include "freddie.h"
#include "joker.h"

using namespace std;

Hero::Hero(){
    this->health = health = 30;
}
Hero::~Hero(){
    
}

void Hero::attack(Weapon *weapon, Character *character){
    weapon->attack(Character *character);
}
void Hero::defense(Extremity *extremity){
    extremity->defense();
}