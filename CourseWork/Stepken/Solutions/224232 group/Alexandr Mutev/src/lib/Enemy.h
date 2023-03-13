#include <iostream>

using namespace std;

class Enemy: public Character{
    public:
        Enemy();
        ~Enemy();
        virtual void fight() = 0;
        virtual void defend() = 0;

    protected:
        int health;

};