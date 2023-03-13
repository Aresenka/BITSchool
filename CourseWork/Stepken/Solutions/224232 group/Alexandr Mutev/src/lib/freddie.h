#include <iostream>

using namespace std;

class Freddie:: public Enemy{
   private:
        Head head;
        Body body;
        Legs legs;
        int health;
    
    public:
        Freddie();
        ~Freddie();
        virtual void fight() = 0;
        virtual void defend() = 0;
};