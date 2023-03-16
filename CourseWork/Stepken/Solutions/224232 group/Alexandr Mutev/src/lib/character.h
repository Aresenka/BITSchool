#pragma once
#include <iostream>
#include "head.h"
#include "body.h"
#include "legs.h"

using namespace std;

class Character{
    public:

        Character();
        virtual ~Character();
        virtual void fight() = 0;
        virtual void defend() = 0;

    protected:
        int health;

};