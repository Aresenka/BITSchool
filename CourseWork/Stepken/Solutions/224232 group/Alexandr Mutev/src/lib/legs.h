#pragma once
#include <iostream>
#include "extremity.h"

using namespace std;

class Legs: public Extremity{
    public:
        Legs();
        virtual ~Legs();
        void defense() override;
};