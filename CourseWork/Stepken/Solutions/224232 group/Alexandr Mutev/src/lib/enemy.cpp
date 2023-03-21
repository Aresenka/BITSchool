#include <iostream>

#include "character.h"
#include "enemy.h"

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

Enemy::Enemy(){
    this->health = health;

}
Enemy::~Enemy(){

}
void Enemy::attack(Weapon *weapon){
    weapon->attack();
}
void Enemy::defense(Extremity *extremity){
    extremity->defense();
}