// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <ncurses.h>

#include "lib/screen.h"

#include "lib/character.h"
#include "lib/enemy.h"
#include "lib/joker.h"
#include "lib/fantomas.h"
#include "lib/freddie.h"
#include "lib/hero.h"

#include "lib/extremity.h"
#include "lib/head.h"
#include "lib/body.h"
#include "lib/legs.h"

#include "lib/weapon.h"
#include "lib/knife.h"
#include "lib/gun.h"
#include "lib/automat.h"
#include "lib/bazooka.h"

#include "lib/game.h"

using namespace std;
int main()
{
    string testText = "Stepken\nAlexander Mutev's production"; //Текст может быть с любым количеством строк
    vector<string> testOptions = {"New game", "Exit"};//Пунктов меню может и не быть вовсе!
    Screen test(testOptions, 30);//Инициализируем экран для отрисовки игры

    test.setText(testText);//Добавляем в него текст (если требуется)
    test.addMenuItem("I am test item!");//Можно добавлять пункты меню в любое время!
    test.setMenuPointer(" >> ");//По умолчанию указатель на текущий пункт меню - символ ">", но можно установить свой!

    //После отрисовки меню, экран будет ждать, пока игрок выберет один из пунктов меню и нажмёт Enter
    int selectedMenuItem = test.drawMenu(); //После этого будет возвращён индекс выбранного пункта меню


    test.setText("I am a new text, no menu items, see?");//Меняем текст на новый
    test.setMenuItems({});//Можно поменять сразу все пункты меню! А удалять по одному - нельзя.
    test.setEnterPlaceholder("Press the Enter button when you brave enough!");//Если меню пустое - вместо него будет выведена заглушка с указанным текстом

    int valueEmptyMenu = test.drawMenu();//Всё ещё ждём, пока игрок нажмёт Enter и возвращается -1, так как в меню нет ни одного пункта

    test.clear();//Можно очистить экран!
    printf("First screen menu selected item index: %3d;\nSecond screen returned value after enter: %3d\n", selectedMenuItem, valueEmptyMenu);//Вывод отформатированной строки, ничего необычного

    Hero hero;
    Fantomas fantomas_1;

    Knife knife;
    Bazooka bazooka;

    Extremity extremity;
    Head head;
    Body body;
    Legs legs;

    hero.attack(&knife);
    hero.defense(&head);

    cout << fantomas_1.get_health() << endl;
    cout << hero.get_health() << endl;

    

}

