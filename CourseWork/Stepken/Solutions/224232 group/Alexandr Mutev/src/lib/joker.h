#pragma once
#include <iostream>
#include "character.h"
#include "enemy.h"
#include "head.h"
#include "body.h"
#include "legs.h"

using namespace std;

class Joker: public Enemy{
    private:
        int health;
    
    public:
        Joker();
        virtual ~Joker();
        virtual void fight() = 0;
        virtual void defend() = 0;
};