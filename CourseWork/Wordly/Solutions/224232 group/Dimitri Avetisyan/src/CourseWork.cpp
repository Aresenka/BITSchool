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


// ошибка при вводе буквы вместо цифры
// ошибка, если в слове две одинаковые буквы


const int attempts = 10;



bool ifWordIsValid(int length, string* words, string enterWord, int countOfChars)
{
    bool validWord = false;
    length = countLinesInFile(openFileForWordsWithLenght(countOfChars));
    for (int i = 0; i < length; i++)
    {
        if (enterWord == words[i].substr(0, words[i].size() - 1))
        {
            validWord = true;
        }
    }
    return validWord;
}

void game(int attempts)
{
    cout << "\t\t\t\t\t  \033[1;34m   Lets play the game 'HANGMAN'!\033[0m" << endl;
    cout << " \t\t\t\t\t \033[1;34m Choose, how much char in word(4-7): \033[0m" << endl;
    int countOfChars;
    
    while (true) {

        cin >> countOfChars;
        if (countOfChars < 4 || countOfChars > 7) {
            cout << "\t\t\t\t\t \033[1;31m    Fail, choose from 4 to 7\033[0m" << endl;

        }
        else {
            break;
        }
    }
    cout << "\t\t\t\t\t     \033[1;30m    You have " << "\033[1;31m" << attempts << "\033[0m" << "\033[1;30m attempts\033[0m " << endl;

    srand(time(0));
    int length = countLinesInFile(openFileForWordsWithLenght(countOfChars));
    int i = rand() % length;
    string* words = readWords(countOfChars);
    cout << words[i] << endl;
    string randomWord;
    randomWord = words[i];


    for (int i = 0; i < countOfChars; i++)
    {
        cout << " _ ";
    }
    cout << endl;

    string enterWord;
    int rightChars = 0;
    for ( attempts = 9; attempts >= 0; attempts--) {
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
        for (int i = 0; i < randomWord.length() - 1; i++) {
            for (int j = 0; j < randomWord.length() - 1; j++)
            {
                if (i != j && randomWord[i] == enterWord[j]) {
                    cout << "\033[1;31m" << enterWord[j] << "\033[0m" << "\033[1;30m in the word on another place!\033[0m" << endl;
                    break;
                }

            }
        }
        for (int i = 0; i < randomWord.length() - 1; i++)
        {
            if (randomWord[i] == enterWord[i]) {
                cout << "\033[1;32m" << enterWord[i] << "\033[0m";
                rightChars++;
            }
            else {
                cout << " _ ";
            }
        }
        if (rightChars == randomWord.length() - 1) {
            cout << "\t\t\t\t\t \033[1;32m     You won the Game! Congrats!\033[0m" << endl;
            break;
        }
        else {
            rightChars = 0;
        }

        cout << endl << "\t\t\t\t\t    \033[1;30m        Attempts - \033[0m" << "\033[1;31m" << attempts << "\033[0m" << endl;
        if (attempts == 0) {
            cout << "\t\t\t\t\t     \033[1;31m      GAME OVER!\033[0m" << endl;
            cout << "\t\t\t\t\t\t \033[1;31m Word was - \033[0m" << "\033[1;30m" << randomWord << "\033[0m" << endl;
        }
    }
}

void startGame() {

    char a;
    while (true) {
        cout << "\t\t\t\t\t  \033[1;34m      Do u want to play again?\033[0m" << endl;
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