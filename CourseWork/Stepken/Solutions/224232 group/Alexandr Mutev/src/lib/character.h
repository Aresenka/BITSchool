#pragma once
#include <iostream>

#include "weapon.h"
#include "knife.h"
#include "gun.h"
#include "automat.h"
#include "bazooka.h"

#include "extremity.h"
#include "head.h"
#include "body.h"
#include "legs.h"

using namespace std;

class Character{
    protected:
        int health;

    public:
        Character();
        virtual ~Character();
        virtual int get_health() = 0;
        virtual void attack(Weapon *weapon) = 0;
        virtual void defense(Extremity *extremity) = 0;

};