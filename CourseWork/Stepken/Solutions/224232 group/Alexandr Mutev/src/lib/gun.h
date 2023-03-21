#pragma once
#include <iostream>
#include "weapon.h"

#include "character.h"
#include "enemy.h"
#include "fantomas.h"
#include "freddie.h"
#include "joker.h"
#include "hero.h"

using namespace std;

class Gun: public Weapon{
    private:

    public:
        Gun();
        virtual ~Gun();
        void attack(Character *character) override;
};