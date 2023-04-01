// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <ncurses.h>
#include "lib/screen.h"
#include <ctime>
#include <string>


class Entity{
public:
    int attack = 0;
    int defence = 0;
    int receivedDamage = 0;
    int hp = 0;
    int max_hp = 0;
    std::vector<std::string> options = {"HEAD", "BODY", "LEGS"};
    std::string img;


    int getAttack(){
        return this->attack;
    }

    int getDefence(){
        return this->defence;
    }

    void setDamage(int damage){
        this->receivedDamage = damage;
    }

    void adjustHp(){
        this->hp -= this->receivedDamage;
    }

    bool isAlive(){
        return this->hp > 1;
    }

    bool isDead(){
        return this->hp < 0;
    }

    std::string getStatStr(){
        return to_string(this->hp) + "/" + to_string(this->max_hp);
    }

};

class Player : public Entity{
public:
    Player(){
        this->hp = 15;
        this->max_hp = 15;
        this->img =
R"(      _,.                  )""\n"
R"(    ,` -.)                 )""\n"
R"(   ( _/-\\-._              )""\n"
R"(  /,|`--._,-^|            ,)""\n"
R"(  \_| |`-._/||          ,'|)""\n"
R"(    |  `-, / |         /  /)""\n"
R"(    |     || |        /  / )""\n"
R"(     `r-._||/   __   /  /  )""\n"
R"( __,-<_     )`-/  `./  /   )""\n"
R"('  \   `---'   \   /  /    )""\n"
R"(    |           |./  /     )""\n"
R"(    /           //  /      )""\n"
R"(\_/' \         |/  /       )""\n"
R"( |    |   _,^-'/  /        )""\n"
R"( |    , ``  (\/  /_        )""\n"
R"(  \,.->._    \X-=/^        )""\n"
R"(  (  /   `-._//^`          )""\n"
R"(   `Y-.____(__}            )""\n"
R"(    |     {__)             )""\n"
R"(          ()               )""\n"
R"(                           )""\n"
R"(                           )""\n"
R"(                           )""\n";
    }

    void setAttack(int attack){
        this->attack = attack;
    }

    void setDefence(int defence){
        this->defence = defence;
    }

    void resetHp(){
        this->hp = this->max_hp;
    }

    
};

class Enemy : public Entity{
public:
    Enemy(){
        srand(time(NULL));
    }

    void setAttack(){
         this->attack = std::rand() % 3;
    }

    void setDefence(){
        this->defence = std::rand() % 3;
    }

    
};

class Orc : public Enemy{
public:
    Orc() : Enemy(){
        this->hp = 10;
        this->max_hp = 10;
        this->options = {"HEAD", "HEART", "LEGS"};
        this->img =""
        R"(          c,_.--.,y)""\n"
        R"(            7 a.a()""\n"
        R"(           (   ,_Y))""\n"
        R"(           :  '---;)""\n"
        R"(       ___.'\.  - ()""\n"
        R"(     .'"""S,._'--'_2..,_)""\n"
        R"(     |    ':::::=:::::  \)""\n"
        R"(     .     f== ;-,---.' T)""\n"
        R"(      Y.   r,-,_/_      |)""\n"
        R"(      |:\___.---' '---./)""\n"
        R"(      |'`             ))""\n"
        R"(       \             ,)""\n"
        R"(       ':;,.________.;L)""\n"
        R"(       /  '---------' |)""\n"
        R"(       |              \)""\n"
        R"(       L---'-,--.-'--,-')""\n"
        R"(        T    /   \   Y)""\n"
        R"(        |   Y    ,   |)""\n"
        R"(        |   \    (   |)""\n"
        R"(        (   )     \,_L)""\n"
        R"(        7-./      )  `,)""\n"
        R"(       /  _(      '._  \)""\n"
        R"(     '---'           '--')""\n";
    }

    

};

class Goblin : public Enemy{
public:
    Goblin() : Enemy(){
        this->hp = 15;
        this->max_hp = 15;
        this->img =""
        R"(        .WWWW.)""\n"
        R"(       WWWW""')""\n"
        R"(     .WWWW O O)""\n"
        R"(  .WWWW"WW.'-. )""\n"
        R"( WWWWWWWWWWWWW.)""\n"
        R"(WWWWWWWWWWWWWWW)""\n"
        R"("WWWWWWWWWW"'\___)""\n"
        R"( /  /__ __/\___( \)""\n"
        R"((____( \X( mrf /||\  )""\n"
        R"(   / /||\ \)""\n"
        R"(   \______/)""\n"
        R"(    \ | \ |  )""\n"
        R"(     )|  \|)""\n"
        R"(    (_|  /|)""\n"
        R"(    |X| (X|  )""\n"
        R"(    |X| |X'._  )""\n"
        R"(   (__| (____))""\n"
        R"(               )""\n"
        R"(               )""\n"
        R"(               )""\n"
        R"(               )""\n"
        R"(               )""\n"
        R"(               )""\n";
    }

};

class Dragon : public Enemy{
public:
    Dragon() : Enemy(){
        this->hp = 20;
        this->max_hp = 20;
        this->img =
        R"(<>=======() )""\n"
        R"((/\___   /|\\          ()==========<>_)""\n"
        R"(      \_/ | \\        //|\   ______/ \))""\n"
        R"(        \_|  \\      // | \_/)""\n"
        R"(          \|\/|\_   //  /\/)""\n"
        R"(           (oo)\ \_//  /)""\n"
        R"(          //_/\_\/ /  |)""\n"
        R"(         @@/  |=\  \  |)""\n"
        R"(              \_=\_ \ |)""\n"
        R"(                \==\ \|\_)""\n"
        R"(             __(\===\(  )\)""\n"
        R"(            (((~) __(_/   |)""\n"
        R"(                 (((~) \  /)""\n"
        R"(                 ______/ /)""\n"
        R"(                 '------')""\n"
        R"(                 )""\n"
        R"(                 )""\n"
        R"(                 )""\n"
        R"(                 )""\n"
        R"(                 )""\n"
        R"(                 )""\n"
        R"(                 )""\n"
        R"(                 )""\n";
    }
};

class Menu{
public:
    Screen screen;

       std::string ripImage ="\n\n\n\n"
"                _.---,._,'\n"
"       /' _.--.<\n"
"         /'     `'\n"
"       /' _.---._____\n"
"       /.'   ___, .-'`\n"
"           /'    \\             .\n"
"         /'       `-.          -|-\n"
"        |                       |\n"
"        |                   .-'~~~`-.\n"
"        |                 .'         `.\n"
"        |                 |  R  I  P  |\n"
"        |                 |           |\n"
"        |                 |           |\n"
"         /              //|           |//\n"
"   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

    std::string winImage = ""
    R"(                  \__/)""\n"
    R"(                   ||)""\n"
    R"(                  |  |)""\n"
    R"(                  |  |)""\n"
    R"(                  |  |)""\n"
    R"(                  |  |)""\n"
    R"(              .--.----.--.)""\n"
    R"(            .-----\__/-----.)""\n"
    R"(    ___---¯¯////¯¯|\/|¯¯\\\\¯¯---___)""\n"
    R"( /¯¯ __O_--////   |  |   \\\\--_O__ ¯¯\)""\n"
    R"(|  '    _.-.      |  |      .-._    '  |)""\n"
    R"(|O|    ?..?      ./  \.      ?..?    |O|)""\n"
    R"(| |     '?. .-.  | /\ |  .-. .?'     | |)""\n"
    R"(| ---__  ¯?__?  /|\¯¯/|\  ?__?¯  __--- |)""\n"
    R"(|O     \         ||\/ |         /     O|)""\n"
    R"(|       \  /¯?_  ||   |  _?¯\  /       |)""\n"
    R"(|       / /    - ||   | -    \ \       |)""\n"
    R"(|O   __/  | __   ||   |   __ |  \__   O|)""\n"
    R"(| ---     |/  -_/||   |\_-  \|     --- |)""\n"
    R"(\ '              ||   |        ^~    ' /)""\n"
    R"( \O\    _-¯?.    ||   |    .?¯-_    /O/)""\n"
    R"(  \ \  /  /¯¯¯?  ||   |  ?¯¯¯\  \  / /)""\n"
    R"(   \O\/   |      ||   |      |   \/O/)""\n"
    R"(    \     |      ||   |      |     /)""\n"
    R"(     '.O  |_     ||   |     _|  O.')""\n"
    R"(        '._O'.__/||   |\__.'O_.')""\n"
    R"(           '._ O ||   | O _.')""\n"
    R"(              '._||   |_.')""\n"
    R"(                 ||   |)""\n"
    R"(                 | \/ |)""\n"
    R"(                 |  | |)""\n"
    R"(                  \ |/)""\n"
    R"(                   \/)""\n";

    std::string mainMenuImage =
R"(    |\                     /))" "\n"
R"(  /\_\\__               (_//)""\n"
R"( |   `>\-`     _._       //`))""\n"
R"(  \ /` \\  _.-`:::`-._  //)""\n"
R"(   `    \|`    :::    `|/)""\n"
R"(         |     :::     |)""\n"
R"(         |.....:::.....|)""\n"
R"(         |:::::::::::::|)""\n"
R"(         |     :::     |)""\n"
R"(         \     :::     /)""\n"
R"(          \    :::    /)""\n"
R"(           `-. ::: .-')""\n"
R"(            //`:::`\\)""\n"
R"(           //   '   \\)""\n"
R"(          |/         \\)""\n";

    Menu() : screen({}, 28){

    }

    std::string combineImages(std::string img1, std::string img2){

        std::vector<std::string> vec1;
        std::vector<std::string> vec2;
        std::string finalImg;

        int start = 0;

        for(int i = 0; i < img1.size(); i++){

            if(img1[i] == '\n'){ 
                vec1.push_back(img1.substr(start, i - start));
                start = i + 1;
            }

        }

        start = 0;

        for(int i = 0; i < img2.size(); i++){

            if(img2[i] == '\n'){ 
                vec2.push_back(img2.substr(start, i + 1 - start));
                start = i + 1;
            }

        }


        for(int i = 0; i < vec1.size(); i++){
            finalImg = vec1[i] + std::string(10, ' ') + vec2[i];
        }



        return finalImg;
    }

    
    bool displayMainMenu(){
        std::string text = "\nWELCOME TO STEPKEN\n\n";
        text += this->mainMenuImage;
        text += "\t\t\n\nWelcome to the game!\n In this battle, you and the computer will take turns attacking each other.\n The goal is to reduce your opponent's health to zero.\n Choose your attacks wisely. Let's begin!";

        this->screen.setText(text);
        this->screen.setMenuItems({"Game","Exit"});
        return !(bool)this->screen.drawMenu();
    }

    int displayAttackMenu(Enemy enemy, Player player, std::string results){
        std::string text;

        text = results.size() == 0 ? "FIGHT!\n" : results;
        text += player.getStatStr() + std::string(20, ' ') + enemy.getStatStr() + "\n";
        text += combineImages(player.img, enemy.img);
        text += "What to attack?";  
        this->screen.setText(text);
        this->screen.setMenuItems(enemy.options);
        return this->screen.drawMenu();
    }

    int displayDefenceMenu(Enemy enemy, Player player){
        std::string text; 

        text = "Attack target "  + enemy.options[player.attack] + "\n";
        text += player.getStatStr() + std::string(20, ' ') + enemy.getStatStr() + "\n"; 
        text += combineImages(player.img, enemy.img);
        text += "What to defence?";
        this->screen.setText(text);
        this->screen.setMenuItems(enemy.options);
        return this->screen.drawMenu();
    }


    bool displayExitMenu(bool win){
        std::string text = win ? "You win!!!\n" : "You Loose...\n";

        text += win ? winImage : ripImage;
        this->screen.setText(text);
        this->screen.setMenuItems({"New Game","Exit"});
        return !(bool)this->screen.drawMenu();
    }

};

class Battle {
public:
    Player& player;
    Enemy& enemy;
    int count;

    Battle(Enemy& enemy, Player& player) : enemy(enemy), player(player){
        this->player = player;
        this->enemy = enemy;
        this->count = 0;
        this->player.resetHp();
    }

    int calculateDamage(Entity attacker, Entity defender){
        return attacker.attack == defender.defence ? 1 : 5; 
    }

    bool isActive(){
        return  this->enemy.isAlive() && this->player.isAlive();
    }

    void fight(){
        this->player.setDamage( calculateDamage(this->enemy, this->player));

        this->enemy.setDamage(calculateDamage(this->player, this->enemy));

        this->player.adjustHp();

        this->enemy.adjustHp();

        this->count++;
    }    

    std::string getResults(){

        if(this->count < 1){
            return "";
        }

        return "Attack target --> " + enemy.options[player.attack] + " = " + to_string(enemy.receivedDamage) + " damage = " + enemy.options[enemy.defence] +" <-- Defence target\n"
         "Defence target -->  " + enemy.options[player.defence] + " = " + to_string(player.receivedDamage) + " damage = " + enemy.options[enemy.attack] +
          " <-- Attack target\n";
    }

};

class Game{
public:
    Player player;    
    std::vector<Enemy> enemies = {Orc(), Goblin(), Dragon()}; 
    bool active;// active - переменная хранящая состояние игры

    Game(){ 
        this->active = true;
    }   

    void init(){
        player = Player();

        enemies = {Orc(), Goblin(), Dragon()};
    } 

    void setState(bool state) {
        this->active = state;
    }

    bool isActive(){
        return this->active;
    }

};


int main() {

    Game game;

    Menu menu;

    game.setState(menu.displayMainMenu());

    while(game.isActive()){

        game.init();

        for(Enemy enemy : game.enemies){

            Battle battle(enemy, game.player);

            while (battle.isActive()){

                        
                game.player.setAttack(menu.displayAttackMenu(enemy, game.player, battle.getResults()));

                game.player.setDefence(menu.displayDefenceMenu(enemy, game.player));

                enemy.setAttack();

                enemy.setDefence();

                battle.fight();

            }

            if(game.player.isDead()){
                break;
            } 
        }

        game.setState(menu.displayExitMenu(game.player.isAlive()));
    }

    return 1;

}


// || i + 1 == img1.size() - 1
// || i + 1 == img2.size() - 2
//        finalImg += "\n"; - 3
