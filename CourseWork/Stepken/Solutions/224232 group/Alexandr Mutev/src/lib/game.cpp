#include <iostream>
#include "game.h"

using namespace std;

//public

Game::Game(){

}
Game::~Game(){

}
void Game::new_event(int choice, Hero &hero, Enemy &enemy, Playing_field &health_screen){
    switch (choice){
        case 0:
            event(hero, enemy, health_screen);
            break;
        case 1:
            exit(0);
            break;
        default:
            break;
    }
}
void Game::start_game(){
    count = 0;
    Hero hero;
    Invader invader; // TODO DELITE
    Playing_field health_screen;
    Playing_field start_screen;
    string start_screen_contents = start_screen.welcome_field(); 
    vector<string> welcome_screen_options = {"New game", "Exit"};
    Screen welcome_screen(welcome_screen_options, 19);

    welcome_screen.setText(start_screen_contents);
    int welcome_screen_menu_item = welcome_screen.drawMenu();
    new_event(welcome_screen_menu_item, hero, invader, health_screen);
}
void Game::event(Hero &hero, Enemy &enemy, Playing_field &health_screen){
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

        if(enemy.get_health() < 1){
            if(count == 2){
                game_over();
            }     
            win_event(health_screen);
        }
        event_screen.setText(health_screen.event_field(defense_text, hero_health, enemy_health, enemy));
        hero_target_defense = event_screen.drawMenu();
        enemy.attack_target();
        hero.set_health(enemy.attack_target(), hero_target_defense);
        hero_health = health_screen.health_to_str(hero);
        enemy_health = health_screen.health_to_str(enemy);

        if(hero.get_health() < 1){     //если hero.health < 1 победа
            lose_event();
        }
    }

}
void Game::win_event(Playing_field &health_screen){
    count++;
    Pacman pacman;
    Dino dino;
    Hero hero;
    Playing_field win_screen;
    hero.health_recovery();
    string win_screen_contents = win_screen.plug(win_screen.screen_you_win());
    vector<string> win_screen_options = {"Next round", "Exit"};
    Screen win_screen_menu(win_screen_options, 20);

    win_screen_menu.setText(win_screen_contents);
    int win_screen_menu_item = win_screen_menu.drawMenu();
    if(count == 1){
        new_event(win_screen_menu_item, hero, pacman, health_screen);
    }
    if(count == 2){
        new_event(win_screen_menu_item, hero, dino, health_screen);
    }
    // if(count == 3){
    //     exit(0);
    // }
}
void Game::game_over(){
    vector<string> game_over_screen_options = {"New game", "Exit"};
    Screen game_over_screen_menu(game_over_screen_options, 20);
    Playing_field game_over_screen;
    string game_over_contents = game_over_screen.plug(game_over_screen.screen_you_win());

    game_over_screen_menu.setText(game_over_contents);
    int game_over_screen_menu_item = game_over_screen_menu.drawMenu();
    switch(game_over_screen_menu_item){
        case 0:
            start_game();
            break;
        case 1:
            exit(0);
            break;
        default:
            break;
    }


}
void Game::lose_event(){
    vector<string> lose_event_screen_options = {"New game", "Exit"};
    Screen lose_event_screen_menu(lose_event_screen_options, 20);
    Playing_field lose_event_screen;
    string lose_event_contents = lose_event_screen.plug(lose_event_screen.screen_you_lose());

    lose_event_screen_menu.setText(lose_event_contents);
    int lose_event_screen_menu_item = lose_event_screen_menu.drawMenu();
    switch(lose_event_screen_menu_item){
        case 0:
            start_game();
            break;
        case 1:
            exit(0);
            break;
        default:
            break;
    }


}

