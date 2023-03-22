#pragma once
#include <iostream>

#include "extremity.h"
#include "head.h"
#include "body.h"
#include "legs.h"

#include "weapon.h"
#include "knife.h"
#include "gun.h"
#include "automat.h"
#include "bazooka.h"

#include "character.h"
#include "enemy.h"
#include "fantomas.h"
#include "freddie.h"
#include "joker.h"

using namespace std;

class Fantomas: public Enemy{
    private:
        
    public:
        Fantomas();
        virtual  ~Fantomas();
};