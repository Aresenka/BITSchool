#include <iostream>

#include "character.h"

using namespace std;

//public

Character::Character(){

}
Character::~Character(){

}
int Character::get_health(){
    return health;
}
void Character::set_health(int power){
    health = health - power;
}