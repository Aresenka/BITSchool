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

class Knife: public Weapon{
    private:

    public:
        Knife();
        virtual ~Knife();
        void attack(Character *character) override;
};