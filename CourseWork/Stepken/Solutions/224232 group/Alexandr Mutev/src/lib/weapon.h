#pragma once
#include <iostream>

using namespace std;

class Weapon{
    protected:
        int power;

    public:
        Weapon();
        virtual ~Weapon();
        virtual void attack();

};