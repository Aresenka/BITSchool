#pragma once

using namespace std;

class Character{
    public:

        Character();
        virtual ~Character();
        virtual void fight() = 0;
        virtual void defend() = 0;

    protected:
        int health;

};