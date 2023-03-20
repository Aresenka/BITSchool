#include <iostream>

#include "weapon.h"
#include "automat.h"

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

Automat::Automat(){
    this->power = power = 4;
}
Automat::~Automat(){

}
void Automat::attack(){
    cout << "TRA-TA-TA" << endl;
}