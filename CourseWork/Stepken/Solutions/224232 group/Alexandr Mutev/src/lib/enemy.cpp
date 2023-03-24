#include <iostream>
#include "character.h"
#include "enemy.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

Enemy::Enemy(){
    this->health = health;
}
Enemy::~Enemy(){

}
int Enemy::target(){
    srand(time(NULL));
    int min = 1;
    int max = 3;

    return (min + rand() % (max - min + 1));
}
int Enemy::attack_target(){
    return target();
}
int Enemy::defense_target(){
    return target();
}