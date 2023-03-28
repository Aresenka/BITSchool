#include <iostream>
#include "game.h"

using namespace std;

//public

Game::Game(){

}
Game::~Game(){

}
int Game::start_game(){
    Playing_field start_screen;
    string start_screen_contents = start_screen.welcome_field(); 
    vector<string> welcome_screen_options = {"New game", "Exit"};
    Screen welcome_screen(welcome_screen_options, 19);

    welcome_screen.setText(start_screen_contents);
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
    return 0;
}
int Game::event_process(Hero &hero, Enemy &enemy, Screen &event_screen, Playing_field &health_screen, string attack_text, string defense_text, string hero_health, string enemy_health){

    while(enemy.get_health() > 0){

        event_screen.setText(health_screen.event_field(attack_text, hero_health, enemy_health));
        hero_target_attack = event_screen.drawMenu();
        enemy_target_defense = enemy.defense_target();

        enemy.set_health(hero_target_attack, enemy.defense_target());
        hero_health = health_screen.health_to_str(hero);
        enemy_health = health_screen.health_to_str(enemy);

        if(enemy.get_health() < 1){     //если enemy.health < 1 победа
            cout << endl << "You win" << endl;
            return 1;
        }
        event_screen.setText(health_screen.event_field(defense_text, hero_health, enemy_health));
        hero_target_defense = event_screen.drawMenu();
        enemy.attack_target();
        hero.set_health(enemy.attack_target(), hero_target_defense);
        hero_health = health_screen.health_to_str(hero);
        enemy_health = health_screen.health_to_str(enemy);

        if(hero.get_health() < 1){     //если hero.health < 1 победа
            cout << endl << "You lose" << endl;
            return 1;
        }
    }
    return 0;
}
int Game::event(){
    choice_target_options = {"Head", "Body", "Legs"};
    attack_text = "Where you hit?"; 
    defense_text = "What will you protect?";

    Screen event_screen(choice_target_options, 50);
    Hero hero;
    Invader invader;
    Playing_field health_screen;

    hero_health = health_screen.health_to_str(hero);
    enemy_health = health_screen.health_to_str(invader);

    Game round_1_invader;

    round_1_invader.event_process(hero, invader, event_screen, health_screen, attack_text, defense_text, hero_health, enemy_health);
    Game round_2_pacman;

    

    return 0;

}
