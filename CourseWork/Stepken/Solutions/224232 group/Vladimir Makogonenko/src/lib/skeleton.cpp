#include <iostream>
#include "skeleton.h"

using namespace std;

Skeleton::Skeleton(){
    this->health = health;
}

string Skeleton::screen_characters(){
    return "\t\t\t\t\t\t\t       *****       \t\t\t\t\t\n\t\t\t\t\t\t\t      ********\t\t\t\t\t\t\n\t\t\t\t\t\t\t    ************   \t\t\t\t\t\n\t\t\t\t\t\t\t   *************** \t\t\t\t\t\n\t\t\t\t\t\t\t  *****   *****   *\t\t\t\t\t \n\t\t\t\t\t\t\t  ****     ***     \t\t\t\t\t\n\t\t\t\t\t\t\t  *****  ******  ***\t\t\t\t\t\n\t\t\t\t\t\t\t  *****  ******  ***\t\t\t\t\t\n\t\t\t\t\t\t\t  ******   *****   *\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t\n\t\t\t\t\t\t\t  ***** ****** *****\t\t\t\t\t\n\t\t\t\t\t\t\t  ****   ****   ****\t\t\t\t\t\n\t\t\t\t\t\t\t  ****   ****   ****\t\t\t\t\t\n\t\t\t\t\t\t\t    **     **     ** \t\t\t\t\t";
}