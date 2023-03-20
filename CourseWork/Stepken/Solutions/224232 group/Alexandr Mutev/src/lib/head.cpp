#include <iostream>

#include "extremity.h"
#include "head.h"

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

Head::Head(){

}
Head::~Head(){

}
void Head::defense(){
    cout << "head punch" << endl;
}