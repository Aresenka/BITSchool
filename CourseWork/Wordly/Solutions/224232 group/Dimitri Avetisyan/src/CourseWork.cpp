#include <iostream>
#include <fstream>
#include <array>
#include "lib/words.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <stdio.h> 
using namespace std;






const int attempts = 7;



bool ifWordIsValid(int length, string* words, string enterWord, int countOfChars)
{
    bool validWord = false;
    for (int i = 0; i < length; i++)
    {
        if (enterWord == words[i].substr(0, countOfChars))
        {
            validWord = true;
        }
    }
    return validWord;
}

void game(int attempts)
{
    cout << "\t\t\t\t\t  \033[1;34m   Lets play the game 'HANGMAN'!\033[0m" << endl;
    cout << "\t\t\t\t  \033[1;34m  Try to guess the word by entering other english words\033[0m" << endl;
    cout << " \t\t\t\t\t \033[1;34m            Choose level\033[0m" << endl;
    cout << " \t\t\t\t\t \033[1;34mEnter how much letters in word do u want:\033[0m" << endl;
    cout << " \t\t\t\t\t \033[1;34m            4,5,6 or 7?\033[0m" << endl;

    int countOfChars;

    while (true) {
        while (!(cin >> countOfChars)) {        //пока не будет введено нормальное число, выполняем цикл 
            cout << "\t\t\t\t\t  \033[1;31m    Enter NUMBER from 4 to 7\033[0m " << endl;
            cin.clear();                //сбрасываем коматозное состояние cin
            fflush(stdin);              //очищаем поток ввода
        }
        if (countOfChars < 4 || countOfChars > 7) {
            cout << "\t\t\t\t\t \033[1;31m    Fail, choose from 4 to 7\033[0m" << endl;

        }
        else {
            break;
        }
    }

    srand(time(0));
    int length = countLinesInFile(openFileForWordsWithLenght(countOfChars));
    int i = rand() % length;
    string* words = readWords(countOfChars);
    string randomWord;
    randomWord = words[i];


    for (int i = 0; i < countOfChars; i++)
    {
        cout << "_ ";
    }
    cout << endl;
    cout << "\t\t\t\t\t     \033[1;30m    You have " << "\033[1;31m" << attempts << "\033[0m" << "\033[1;30m attempts\033[0m " << endl;
    cout << "\t\t\t\t\t     \033[1;30m           +---+\033[0m " << endl;
    cout << "\t\t\t\t\t     \033[1;30m           |   |\033[0m " << endl;
    cout << "\t\t\t\t\t     \033[1;30m           O   |\033[0m " << endl;
    cout << "\t\t\t\t\t     \033[1;30m   o/          |\033[0m " << endl;
    cout << "\t\t\t\t\t     \033[1;30m  /0           |\033[0m " << endl;
    cout << "\t\t\t\t\t     \033[1;30m   Л       П  ====\033[0m " << endl;

    string enterWord;
    int rightChars = 0;
    for (attempts = attempts - 1; attempts >= 0; attempts--) {

        while (true) {
            cin >> enterWord;
            if (ifWordIsValid(length, words, enterWord, countOfChars))
            {
                break;
            }
            else {
                cout << "\033[1;31mWord \033[0m" << "\033[1;34m " << enterWord << "\033[0m " << "\033[1;31m is not in list!\033[0m" << endl;
            }
        }
        string clonRandomWord = randomWord;
        for (int i = 0; i < enterWord.length(); i++)
        {
            if (clonRandomWord[i] == enterWord[i]) {
                cout << "\033[1;32m" << enterWord[i] << " \033[0m";
                clonRandomWord[i] = 1;
                enterWord[i] = 0;
                rightChars++;
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
        cout << endl;
        for (int i = 0; i < enterWord.length(); i++)
        {
            for (int j = 0; j < clonRandomWord.length(); j++)
            {
                if (i != j && clonRandomWord[i] == enterWord[j]) {
                    cout << "\033[1;31m" << enterWord[j] << " \033[0m" << "\033[1;30m- In word on another place!\033[0m" << endl;
                    clonRandomWord[i] = 1;
                    enterWord[i] = 0;
                }
            }
        }



        if (rightChars == countOfChars) {
            cout << endl;
            cout << endl;
            cout << "\t\t\t\t\t \033[1;32m     You won the Game! Congrats!\033[0m" << endl;
            cout << "\t\t\t\t\t     \033[1;30m           +---+\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           |   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           O   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m   o/          |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m  /0           |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m   Л       П  ====\033[0m " << endl;
            break;
        }
        else {
            rightChars = 0;
        }

        cout << endl << "\t\t\t\t\t    \033[1;30m         Attempts - \033[0m" << "\033[1;31m" << attempts << "\033[0m" << endl;
        if (attempts == 0) {
            cout << "\t\t\t\t\t     \033[1;30m           +---+\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           |   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m          o|   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m         //0   | \033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m          //   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m      u      ====\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;31m          GAME OVER!\033[0m" << endl;
            cout << "\t\t\t\t\t     \033[1;31m     You were HANGED! Loser!\033[0m" << endl;
            cout << "\t\t\t\t\t\t \033[1;31m   Word was - \033[0m" << "\033[1;30m" << randomWord << "\033[0m" << endl;
        }
        if (attempts == 1) {
            cout << "\t\t\t\t\t     \033[1;30m           +---+\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           |   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m          o|   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m         /0\\   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m          ||   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           П ====\033[0m " << endl;

        }
        if (attempts == 2) {
            cout << "\t\t\t\t\t     \033[1;30m           +---+\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           |   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m          o|   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m         /0\\   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           |   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           П ====\033[0m " << endl;

        }
        if (attempts == 3) {
            cout << "\t\t\t\t\t     \033[1;30m           +---+\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           |   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m          o|   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m         /0\\   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m               |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           П  ====\033[0m " << endl;

        }
        if (attempts == 4) {
            cout << "\t\t\t\t\t     \033[1;30m           +---+\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           |   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m          o|   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m         / \\   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m               |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           П  ====\033[0m " << endl;

        }
        if (attempts == 5) {
            cout << "\t\t\t\t\t     \033[1;30m           +---+\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           |   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m          o|   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m         /     |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m               |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           П  ====\033[0m " << endl;

        }
        if (attempts == 6) {
            cout << "\t\t\t\t\t     \033[1;30m           +---+\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           |   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m          o|   |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m               |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m               |\033[0m " << endl;
            cout << "\t\t\t\t\t     \033[1;30m           П  ====\033[0m " << endl;

        }
    }
}

void startGame() {

    char a;
    while (true)
    {
        cout << endl;
        cout << endl;
        cout << "\033[1; 30m=========================================================================================================================================================\033[0m " << endl;
        cout << "\t\t\t\t\t  \033[1;34m      Do u want to play again?\033[0m" << endl;
        cout << "\t\t\t\t\t     \033[1;30m           +---+\033[0m " << endl;
        cout << "\t\t\t\t\t     \033[1;30m           |   |\033[0m " << endl;
        cout << "\t\t\t\t\t     \033[1;30m           O   |\033[0m " << endl;
        cout << "\t\t\t\t\t     \033[1;30m   o/          |\033[0m " << endl;
        cout << "\t\t\t\t\t     \033[1;30m  /0           |\033[0m " << endl;
        cout << "\t\t\t\t\t     \033[1;30m   Л         ====\033[0m " << endl;
        cout << endl;
        cout << endl;

        cout << "\t\t\t\t\t  \033[1;34m        Enter Y/y if u want.\033[0m" << endl;
        cin >> a;
        if (a == 'y' || a == 'Y') {

            game(attempts);

        }
        else {
            cout << "\t\t\t\t\t\033[1;34m           Good buy!\033[0m" << endl;
            break;
        }
    }
}

int main()
{

    game(attempts);
    startGame();

    return 0;
}