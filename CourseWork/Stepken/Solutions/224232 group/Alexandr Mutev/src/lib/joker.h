#include <iostream>

using namespace std;

class Joker: public Enemy{
    private:
        Head head;
        Body body;
        Legs legs;
        int health;
    
    public:
        Joker();
        ~Joker();
        virtual void fight() = 0;
        virtual void defend() = 0;
};