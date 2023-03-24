#include <iostream>

#include "game.h"

using namespace std;

//public

Game::Game(){

}
Game::~Game(){

}

void Game::event(){
    Hero hero;
    Enemy enemy;

    cout << hero.get_health() << endl;
    cout << enemy.get_health() << endl;
}