#include <iostream>
#include "game.h"

using namespace std;

//public

Game::Game(){

}
Game::~Game(){

}
int Game::start_game(){
    Playing_field text;
    string welcome_text = text.text(); 
    vector<string> welcome_screen_options = {"New game", "Exit"};
    Screen welcome_screen(welcome_screen_options, 30);

    welcome_screen.setText(welcome_text);
    int welcome_screen_menu_item = welcome_screen.drawMenu();
    switch (welcome_screen_menu_item){
        case 0:
            cout << endl;
            event();
            break;
        case 1:
            cout << endl;
            return 1;
            break;
        default:
            return 0;
            break;
    }
}

int Game::event(){
    Hero hero;
    Enemy enemy;
    int hero_target_attack;
    int hero_target_defense;
    string choice_attack_target = "Where do you hit?";
    string choice_defense_target = "That you will defend?";
    vector<string>choice_target_options = {"Head", "Body", "Legs"};
    Screen event_screen(choice_target_options, 30);
    
    while(enemy.get_health() > 0){

        event_screen.setText(choice_attack_target);
        hero_target_attack = event_screen.drawMenu();
        enemy.defense_target();
        enemy.set_health(hero_target_attack, enemy.defense_target());

        if(enemy.get_health() < 1){     //если enemy.health < 1 победа
            cout << "You win" << endl;
            return 1;
        }
        event_screen.setText(choice_defense_target);
        hero_target_defense = event_screen.drawMenu();
        enemy.attack_target();
        hero.set_health(enemy.attack_target(), hero_target_defense);

        if(hero.get_health() < 1){     //если hero.health < 1 победа
            cout << "You lose" << endl;
            return 1;
        }
    }

    return 0;

}
