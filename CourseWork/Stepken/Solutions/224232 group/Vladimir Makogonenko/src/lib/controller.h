#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Controller
{
    int protagonist ;
    int enemy ;
    vector<int> round ;

    void getAttack();
    void getDefenceTarget();
    void start();

};

