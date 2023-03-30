#pragma once
#include <iostream>

using namespace std;

class Character
{
    protected:

        int health = 10;
        int power = 5;

    public:

        Character();
        int get_health();
        void set_health(int target_attack, int target_defense);
        int get_power();
        void set_power(int defense);

};