#include <iostream>

#include "weapon.h"
#include "knife.h"

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

Knife::Knife(){
    this->power = power = 2;
}
Knife::~Knife(){

}

void Knife::attack(Character *character){
    cout << "VZZOOH" << endl;
}