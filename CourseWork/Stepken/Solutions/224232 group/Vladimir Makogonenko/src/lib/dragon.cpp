#include <iostream>
#include "dragon.h"

using namespace std;

Dragon::Dragon(){
    this->health = health;
}

string Dragon::screen_characters(){
    return "\t\t\t\t\t\t\t       *****       \t\t\t\t\t\n\t\t\t\t\t\t\t      ********\t\t\t\t\t\t\n\t\t\t\t\t\t\t    ************   \t\t\t\t\t\n\t\t\t\t\t\t\t   *************** \t\t\t\t\t\n\t\t\t\t\t\t\t  *****   *****   *\t\t\t\t\t \n\t\t\t\t\t\t\t  ****     ***     \t\t\t\t\t\n\t\t\t\t\t\t\t  *****  ******  ***\t\t\t\t\t\n\t\t\t\t\t\t\t  *****  ******  ***\t\t\t\t\t\n\t\t\t\t\t\t\t  ******   *****   *\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ***** ****** *****\t\t\t\t\t\n\t\t\t\t\t\t\t  ****   ****   ****\t\t\t\t\t\n\t\t\t\t\t\t\t  ****   ****   ****\t\t\t\t\t\n\t\t\t\t\t\t\t    **     **     ** \t\t\t\t\t";
}