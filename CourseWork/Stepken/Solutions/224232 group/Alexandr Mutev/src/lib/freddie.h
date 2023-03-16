#pragma once
#include <iostream>
#include "character.h"
#include "enemy.h"
#include "head.h"
#include "body.h"
#include "legs.h"

using namespace std;

class Freddie: public Enemy{
    private:
        int health;
    
    public:
    
    public:
        Freddie();
        virtual ~Freddie();
        virtual void fight() = 0;
        virtual void defend() = 0;
};