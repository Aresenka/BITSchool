#include <iostream>
#include "zombie.h"

using namespace std;

Zombie::Zombie(){
    this->health = health;
}

string Zombie::screen_characters(){
    return "\t\t\t\t\t\t\t       *****       \t\t\t\t\t\n\t\t\t\t\t\t\t      ********\t\t\t\t\t\t\n\t\t\t\t\t\t\t    ************   \t\t\t\t\t\n\t\t\t\t\t\t\t   *************** \t\t\t\t\t\n\t\t\t\t\t\t\t  *****   *****   *\t\t\t\t\t \n\t\t\t\t\t\t\t  ****     ***     \t\t\t\t\t\n\t\t\t\t\t\t\t  *****  ******  ***\t\t\t\t\t\n\t\t\t\t\t\t\t  *****  ******  ***\t\t\t\t\t\n\t\t\t\t\t\t\t  ******   *****   *\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ***** ****** *****\t\t\t\t\t\n\t\t\t\t\t\t\t  ****   ****   ****\t\t\t\t\t\n\t\t\t\t\t\t\t  ****   ****   ****\t\t\t\t\t\n\t\t\t\t\t\t\t    **     **     ** \t\t\t\t\t";
}