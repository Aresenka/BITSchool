#pragma once

using namespace std;

class Character{
    protected:
        int health = 30;

    public:
        Character();
        virtual ~Character();
        virtual void fight() = 0;
        virtual void defend() = 0;



};