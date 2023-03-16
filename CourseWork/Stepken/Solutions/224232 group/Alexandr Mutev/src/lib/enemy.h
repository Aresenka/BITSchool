#pragma once
#include <iostream>

using namespace std;

class Enemy: public Character{
    public:
        Enemy();
        virtual ~Enemy();
        virtual void fight() = 0;
        virtual void defend() = 0;

    protected:
        int health;

};