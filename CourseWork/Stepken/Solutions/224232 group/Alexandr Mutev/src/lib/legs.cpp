#include <iostream>

#include "extremity.h"
#include "legs.h"

#include "character.h"
#include "enemy.h"
#include "fantomas.h"
#include "freddie.h"
#include "joker.h"
#include "hero.h"

#include "weapon.h"
#include "knife.h"
#include "gun.h"
#include "automat.h"
#include "bazooka.h"

using namespace std;

Legs::Legs(){

}
Legs::~Legs(){

}
void Legs::defense(){
    cout << "legs punch" << endl;
}