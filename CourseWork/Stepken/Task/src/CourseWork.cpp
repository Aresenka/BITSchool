﻿// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <ncurses.h>
#include "lib/screen.h"

using namespace std;
int main()
{
    string testText = "Hello! I am the text for the menu!\nSecond line"; //Текст может быть с любым количеством строк
    vector<string> testOptions = {"first", "second", "third"};//Пунктов меню может и не быть вовсе!
    Screen test(testOptions, 30);//Инициализируем экран для отрисовки игры

    test.setText(testText);//Добавляем в него текст (если требуется)
    test.addMenuItem("I am test item!");//Можно добавлять пункты меню в любое время!
    test.setMenuPointer(" >> ");//По умолчанию указатель на текущий пункт меню - символ ">", но можно установить свой!

    //После отрисовки меню, экран будет ждать, пока игрок выберет один из пунктов меню и нажмёт Enter
    int selectedMenuItem = test.drawMenu(); //После этого будет возвращён индекс выбранного пункта меню


    test.setText("Hello! I am a new text, no menu items, see?");//Меняем текст на новый
    test.setMenuItems({});//Можно поменять сразу все пункты меню! А удалять по одному - нельзя.
    test.setEnterPlaceholder("Press the Enter button when you brave enough!");//Если меню пустое - вместо него будет выведена заглушка с указанным текстом

    int valueEmptyMenu = test.drawMenu();//Всё ещё ждём, пока игрок нажмёт Enter и возвращается -1, так как в меню нет ни одного пункта

    test.clearScreen();//Можно очистить экран!
    printf("First screen menu selected item index: %3d;\nSecond screen returned value after enter: %3d\n", selectedMenuItem, valueEmptyMenu);//Вывод отформатированной строки, ничего необычного
}

