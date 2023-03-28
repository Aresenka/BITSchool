#include <iostream>
#include "game.h"

using namespace std;

//public

Game::Game(){

}
Game::~Game(){

}
int Game::get_count(){
    return count;
}
void Game::set_count(){
    count = count + 1;
}
int Game::new_event(int choice, Hero &hero, Enemy &enemy, Playing_field &health_screen){
    switch (choice){
        case 0:
            cout << endl;
            
            event(hero, enemy, health_screen);
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
int Game::start_game(){
    Hero hero;
    Invader invader;
    Playing_field health_screen;
    Playing_field start_screen;
    string start_screen_contents = start_screen.welcome_field(); 
    vector<string> welcome_screen_options = {"New game", "Exit"};
    Screen welcome_screen(welcome_screen_options, 19);

    welcome_screen.setText(start_screen_contents);
    int welcome_screen_menu_item = welcome_screen.drawMenu();
    new_event(welcome_screen_menu_item, hero, invader, health_screen);
    return 0;
}
int Game::event(Hero &hero, Enemy &enemy, Playing_field &health_screen){
    choice_target_options = {"Head", "Body", "Legs"};
    attack_text = "Where you hit?"; 
    defense_text = "What will you protect?";

    Screen event_screen(choice_target_options, 50);

    hero_health = health_screen.health_to_str(hero);
    enemy_health = health_screen.health_to_str(enemy);

    while(enemy.get_health() > 0){

        event_screen.setText(health_screen.event_field(attack_text, hero_health, enemy_health, enemy));
        hero_target_attack = event_screen.drawMenu();
        enemy_target_defense = enemy.defense_target();

        enemy.set_health(hero_target_attack, enemy.defense_target());
        hero_health = health_screen.health_to_str(hero);
        enemy_health = health_screen.health_to_str(enemy);

        if(enemy.get_health() < 1){     //если enemy.health < 1 победа
            win_event(health_screen, hero);
            return 1;
        }
        event_screen.setText(health_screen.event_field(defense_text, hero_health, enemy_health, enemy));
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
void Game::win_event(Playing_field &health_screen, Hero &hero){
    Pacman pacman;
    Dino dino;
    Playing_field win_screen;
    string win_screen_contents = win_screen.welcome_field();
    vector<string> win_screen_options = {"Next round", "Exit"};
    Screen win_screen_menu(win_screen_options, 19);

    win_screen_menu.setText(win_screen_contents);
    int win_screen_menu_item = win_screen_menu.drawMenu();
    new_event(win_screen_menu_item, hero, pacman, health_screen);
}

