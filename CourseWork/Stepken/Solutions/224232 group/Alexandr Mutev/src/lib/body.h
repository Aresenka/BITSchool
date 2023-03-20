#pragma once
#include <iostream>
#include "extremity.h"

using namespace std;

class Body: public Extremity{
    public:
        Body();
        virtual ~Body();
        void defense() override;
};