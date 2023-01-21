// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <fstream>
#include "lib/words.h"
#include <ctime>
#include <vector>

using namespace std;

const int START_ONE = 4;
const int END_ONE = 7;
const int ATTEMPTS = 5;


bool ifWordIsValid(int length, string* rangeHiddenWord, string word, int number)
{
    bool validWord = false;
    for (int i = 0; i < length; i++)
    {
        if (word == rangeHiddenWord[i].substr(0, number))
        {
            validWord = true;
        }
    }
    return validWord;
}


int numberOne()
{
    int number;
    cout << "Выберите количество букв от " << START_ONE << " до " << END_ONE << endl; // пользователь вводит буквы
    cin >> number;
    if (number >= START_ONE && number <= END_ONE) {
        cout << "Продолжаем играть" << endl; // игра продолжаеться если вели вверное количество букв
    }
    else {
        cout << "Выбранно неверное количество букв" << endl; // от глупого пользователя (который вводит неверное количество букв) 
        return numberOne();
    }
    return number;
}

void game(int number) {
    string* rangeHiddenWord = readWords(number);
    srand(unsigned(time(NULL)));
    int length = countLinesInFile(openFileForWordsWithLenght(number));
    int numberOfWord = rand() % length;

    string hiddenWord = rangeHiddenWord[numberOfWord - 1];
    cout << hiddenWord << endl;
    string word;

    int currentTry = 0;
    while (currentTry < ATTEMPTS) {
        cout << "Введите слово из " << number << " букв " << endl;
        for (int i = 0; i < number; i++)
        {
            cout << " _ ";
        }
        while (true)
        {
            int a = 0;
            cin >> word;
            if (ifWordIsValid(length, rangeHiddenWord, word, number))
                for (int j = 0; j < number; j++)
                {
                    if (hiddenWord[j] == word[j])
                    {
                        cout << word[j];
                        a++;
                    }
                    else
                    {
                        cout << " * ";
                    }
                    cout << endl;
                }
            else
            {
                cout << " Вбей слово из списка чел !!!" << endl;
            }
            if (a == number)
            {
                cout << "ТЫ ЧЕМПИОН !!!" << endl;
                  
            }
            currentTry++;
            if (currentTry == ATTEMPTS)
            {
                cout << "ТЫ НЕ ЧЕМПИОН, ЛУЗЕР !!!"<< endl;
                cout << "Загаданое слово было :   " << hiddenWord << endl;
                break;
            }
        }  
    }
}


int main()
{
    int number = numberOne();
    game(number);

    return 0;
}