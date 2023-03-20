#include <iostream>

#include "character.h"
#include "enemy.h"
#include "fantomas.h"

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


Fantomas::Fantomas(){
    this->health = health;
    this->weapon = weapon;
}
Fantomas::~Fantomas(){
    
}
void Fantomas::attack(Weapon *weapon){
    weapon->attack();
}