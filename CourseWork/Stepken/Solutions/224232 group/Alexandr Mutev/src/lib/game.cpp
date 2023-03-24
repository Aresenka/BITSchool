#include <iostream>
#include "game.h"

using namespace std;

//public

Game::Game(){

}
Game::~Game(){

}


int Game::event(){
    Hero hero;
    Enemy enemy;
    int hero_target_attack;
    int hero_target_defense;
    
    while(enemy.get_health() > 0){
        cout << "Where do you hit?" << endl;
        // меню куда бить
        cout << "hero бьет ";
        cin >> hero_target_attack;
        enemy.defense_target();
        enemy.set_health(hero_target_attack, enemy.defense_target());

        if(enemy.get_health() < 1){     //если enemy.health < 1 победа
            cout << "You win" << endl;
            return 1;
        }

        cout << "That you will defend?" << endl;
        //меню что защищать
        cout << "hero защищает ";
        cin >> hero_target_defense;
        enemy.attack_target();
        hero.set_health(enemy.attack_target(), hero_target_defense);

        if(hero.get_health() < 1){     //если hero.health < 1 победа
            cout << "You lose" << endl;
            return 1;
        }
    }

    return 0;

}
