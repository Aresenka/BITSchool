#pragma once
#include <iostream>
#include "character.h"
#include "head.h"
#include "body.h"
#include "legs.h"

using namespace std;

class Hero: public Character{
    private:
        int health;
    
    public:
        Hero();
        virtual ~Hero();
        virtual void fight() = 0;
        virtual void defend() = 0;
};