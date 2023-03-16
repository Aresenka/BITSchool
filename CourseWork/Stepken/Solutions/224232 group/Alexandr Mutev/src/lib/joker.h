#pragma once
#include <iostream>

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