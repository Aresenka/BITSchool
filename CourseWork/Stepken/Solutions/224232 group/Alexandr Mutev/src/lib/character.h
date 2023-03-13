#include <iostream>

using namespace std;

class Character{
    public:

        Character();
        ~Character();
        virtual void fight() = 0;
        virtual void defend() = 0;

    protected:
        int health;

};