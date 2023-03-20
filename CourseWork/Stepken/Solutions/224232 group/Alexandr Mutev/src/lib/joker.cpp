#include <iostream>

#include "character.h"
#include "enemy.h"
#include "joker.h"

#include "extremity.h"
#include "head.h"
#include "body.h"
#include "legs.h"

#include "weapon.h"
#include "knife.h"
#include "gun.h"
#include "automat.h"
#include "bazooka.h"

using namespace std;

Joker::Joker(){
    this->health = health = 40;

}
Joker::~Joker(){
    
}

int Joker::get_health(){
    return health;
}
void Joker::attack(Weapon *weapon){
    weapon->attack();
}
void Joker::defense(Extremity *extremity){
    extremity->defense();
}