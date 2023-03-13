#include <iostream>

using namespace std;

class Fantomas: public Enemy{
    private:
        Head head;
        Body body;
        Legs legs;
        int health;
    
    public:
        Fantomas();
        ~Fantomas();
        virtual void fight() = 0;
        virtual void defend() = 0;
    

};