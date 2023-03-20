#include <iostream>

#include "weapon.h"
#include "gun.h"

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

Gun::Gun(){
    this->power = power = 3;
}
Gun::~Gun(){

}
void Gun::attack(){
    cout << "PIU" << endl;
}