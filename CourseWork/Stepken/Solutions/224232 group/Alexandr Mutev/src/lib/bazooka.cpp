#include <iostream>

#include "weapon.h"
#include "bazooka.h"

#include "character.h"
#include "enemy.h"
#include "fantomas.h"
#include "freddie.h"
#include "joker.h"
#include "hero.h"

#include "extremity.h"
#include "head.h"
#include "body.h"
#include "legs.h"

using namespace std;

Bazooka::Bazooka(){
    this->power = power = 5;
}
Bazooka::~Bazooka(){

}

void Bazooka::attack(Character *character){
    cout << "BABAH" << endl;
}