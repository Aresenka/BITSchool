#include <iostream>
#include <character.h>

using namespace std;

class Enemy: public Character{
    protected:
        int health;
    public:
        Enemy();
        virtual ~Enemy();

};