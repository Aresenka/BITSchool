#pragma once
#include <iostream>

using namespace std;

class Extremity{
    public:
        Extremity();
        virtual ~Extremity();
        virtual void defense() = 0;
};