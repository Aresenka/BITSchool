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
    Invader invader;
    Playing_field health_screen;
    Playing_field start_screen;
    Screen welcome_screen(screen_options_new_game, 19);

    welcome_screen.setText(start_screen.welcome_field());
    new_event(welcome_screen.drawMenu(), hero, invader, health_screen);
}
void Game::event(Hero &hero, Enemy &enemy, Playing_field &health_screen){
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

        if(hero.get_health() < 1){
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
    Screen win_screen_menu(win_screen_options, 20);

    win_screen_menu.setText(win_screen.plug(win_screen.screen_you_win()));
    if(count == 1){
        new_event(win_screen_menu.drawMenu(), hero, pacman, health_screen);
    }
    if(count == 2){
        new_event(win_screen_menu.drawMenu(), hero, dino, health_screen);
    }
}
void Game::game_over(){
    Screen game_over_screen_menu(screen_options_new_game, 20);
    Playing_field game_over_screen;

    game_over_screen_menu.setText(game_over_screen.plug(game_over_screen.screen_you_win()));
    switch(game_over_screen_menu.drawMenu()){
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
    Screen lose_event_screen_menu(screen_options_new_game, 20);
    Playing_field lose_event_screen;

    lose_event_screen_menu.setText(lose_event_screen.plug(lose_event_screen.screen_you_lose()));
    switch(lose_event_screen_menu.drawMenu()){
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

