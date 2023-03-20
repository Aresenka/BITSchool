#pragma once
#include <iostream>

using namespace std;

class Weapon{
    protected:
        int power = 1;

    public:
        Weapon();
        virtual ~Weapon();
        virtual void attack(int power) = 0;

};