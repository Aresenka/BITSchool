#include <iostream>
#include "playing_field.h"

using namespace std;

Playing_field::Playing_field(){

}
Playing_field::~Playing_field(){

}
string Playing_field::welcome_field(){
    Playing_field welcome_field; 
    return welcome_field.line() + welcome_field.logo() + welcome_field.line();
}
string Playing_field::event_field(string question){
    Playing_field event_field;
    return event_field.line() + event_field.logo() + event_field.line() + event_field.screen_characters() + event_field.line() + question;
}
string Playing_field::health_to_str(Character &ch){
    int health = ch.get_health();
    return to_string(health);
}
string Playing_field::health_board(string hero_health, string enemy_hearth){
    return "Hero's health: " + hero_health + " | " + "Enemy health: " + enemy_hearth;
}
string Playing_field::player_moves_board(){ //TODO Доделай или удали
    return " ";
}
string Playing_field::logo(){
    return "\t\t    ************    \t********************\t********************\t*****************  \t****            ****\t********************\t****           ****\n\t\t  ****************  \t********************\t********************\t******************* \t****          ******\t********************\t******         ****\n\t\t *****        ******\t        ****        \t****            ****\t****           *****\t****       *******  \t****            ****\t*******        ****\n\t\t****            ****\t        ****        \t****                \t****            ****\t****     ******     \t****                \t**** ***       ****\n\t\t****                \t        ****        \t****                \t****            ****\t****  *******       \t****                \t****  ***      ****\n\t\t****                \t        ****        \t****                \t****           *****\t**********          \t****                \t****   ***     ****\n\t\t ****************   \t        ****        \t********************\t******************* \t*******             \t********************\t****    ***    ****\n\t\t  ***************** \t        ****        \t********************\t*****************   \t*******             \t********************\t****     ***   ****\n\t\t                ****\t        ****        \t****                \t****                \t**********          \t****                \t****      ***  ****\n\t\t                ****\t        ****        \t****                \t****                \t****  *******       \t****                \t****       *** ****\n\t\t****            ****\t        ****        \t****                \t****                \t****     ******     \t****                \t****        *******\n\t\t******        ***** \t        ****        \t****            ****\t****                \t****       *******  \t****            ****\t****         ******\n\t\t  *****************  \t        ****        \t********************\t****                \t****          ******\t********************\t****          *****\n\t\t    ************    \t        ****        \t********************\t****                \t****            ****\t********************\t****           ****\n\n";
}
string Playing_field::line(){
    return "************************************************************************************************************************************************************************************************************\n";
}
string Playing_field::screen_characters(){
    return "\t\t\t\t\t\t\t       *****       \t\t\t\t\t\t\t       *********\n\t\t\t\t\t\t\t      ********\t\t\t\t\t\t\t    **************\n\    ************   \n\t\t\t\t\t\t\t   *************** \n\t\t\t\t\t\t\t  *****   *****   *\n\t\t\t\t\t\t\t  ****     ***     \n\t\t\t\t\t\t\t  *****  ******  ***\n\t\t\t\t\t\t\t  *****  ******  ***\n\t\t\t\t\t\t\t  ******   *****   *\n\t\t\t\t\t\t\t  ******************\n\t\t\t\t\t\t\t  ******************\n\t\t\t\t\t\t\t  ******************\n\t\t\t\t\t\t\t  ******************\n\t\t\t\t\t\t\t  ******************\n\t\t\t\t\t\t\t  ******************\n\t\t\t\t\t\t\t  ***** ****** *****\n\t\t\t\t\t\t\t  ****   ****   ****\n\t\t\t\t\t\t\t  ****   ****   ****\n\t\t\t\t\t\t\t    **     **     ** " ;
}
