#pragma once
#include <iostream>
#include "character.h"

using namespace std;

class Playing_field{
    private:

    public:
        Playing_field();
        virtual ~Playing_field();
        string welcome_field();
        string health_to_str(Character &ch);
        string health_board(string hero_health, string enemy_hearth);
        
        
};