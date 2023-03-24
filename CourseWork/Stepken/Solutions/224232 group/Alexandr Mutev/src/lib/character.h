#pragma once
#include <iostream>

using namespace std;

class Character{
    protected:
        int health = 30;
        int attack_points;
        int defend_point;

    public:
        Character();
        virtual ~Character();
        int get_health();
        void set_health(int power);


};