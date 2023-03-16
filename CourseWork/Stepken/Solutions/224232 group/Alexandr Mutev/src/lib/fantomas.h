#pragma once
#include <iostream>

using namespace std;

class Fantomas: public Enemy{
    private:
        int health;
    
    public:
        Fantomas();
        virtual  ~Fantomas();
        virtual void fight() = 0;
        virtual void defend() = 0;
    

};