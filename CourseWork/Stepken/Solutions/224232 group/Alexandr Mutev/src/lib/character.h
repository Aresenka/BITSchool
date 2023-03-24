#pragma once
#include <iostream>

using namespace std;

class Character{
    protected:
        int health;

    public:
        Character();
        ~Character();
        int get_health();
        void set_health(int power);


};