#include <iostream>>

using namespace std;

class Hero: public Character{
    private:
        Head head;
        Body body;
        Legs legs;
        int health;
    
    public:
        Hero();
        ~Hero();
        virtual void fight() = 0;
        virtual void defend() = 0;
};