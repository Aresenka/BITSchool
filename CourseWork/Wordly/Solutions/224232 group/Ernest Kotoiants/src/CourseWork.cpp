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



void game()
{
    cout << "\t\t\t\t\t  \033[1;34m   Lets play the game 'HANGMAN'!\033[0m" << endl;
    cout << " \t\t\t\t\t \033[1;34m Choose, how much char in word(4-7): \033[0m" << endl;
    int nChar, i;
    string randomWord;

    while (true) {

        cin >> nChar;
        if (nChar < 4  && nChar > 7) {
            cout << "\t\t\t\t\t \033[1;31m    Fail, choose from 4 to 7\033[0m" << endl;

        }
        else {
            break;
        }
    }
    cout << "\t\t\t\t\t     \033[1;30m    You have 10 attempts\033[0m " << endl;
    
        srand(time(0));
        int length = countLinesInFile(openFileForWordsWithLenght(nChar));
        i = rand() % length;
        string* words = readWords(nChar);
        //cout << words[i] << endl;
        randomWord = words[i];
    

    for (int i = 0; i < nChar; i++)
    {
        cout << " _ ";
    }
    cout << endl;
    string enterWord;
    int rightChars = 0;
    for (int chance = 9; chance >= 0; chance--) {
        while (true) {
            cin >> enterWord;
            if (enterWord.length() > nChar) {
                cout << " \033[1;31mWord is too long\033[0m" << endl;
            }

            if (enterWord.length() < nChar) {
                cout << "\033[1;31mWord is too short\033[0m" << endl;
            }
            else {
                break;
            }
        }
        for (int i = 0; i < randomWord.length() - 1; i++) {
            for (int j = 0; j < randomWord.length() - 1; j++)
            {
                if (i != j && randomWord[i] == enterWord[j]) {
                    cout << "\033[1;31m" << enterWord[j] << "\033[0m" << "\033[1;30m in the word on another place!\033[0m" << endl;
                    break;  //возможно удалить!
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
            cout << "\t\t\t\t\t \033[1;32m   You won the Game! Congrats!\033[0m" << endl;
            break;
        }
        else {
            rightChars = 0;
        }

        cout << endl << "\t\t\t\t\t    \033[1;30m        Attempts - \033[0m" << "\033[1;31m" << chance << "\033[0m" << endl;
        if (chance == 0) {
            cout << "\t\t\t\t\t     \033[1;31m      GAME OVER!\033[0m" << endl;
            cout << "\t\t\t\t\t\t \033[1;31m Word was - \033[0m" << "\033[1; 30m" << randomWord << "\033[0m" << endl;
        }
    }
}

void startGame() {

    char a;
    while (true) {
        cout << "\t\t\t\t\t  \033[1;34m  Do u want to play again?\033[0m" << endl;
        cout << "\t\t\t\t\t  \033[1;34m     Enter Y/y if u want.\033[0m" << endl;
        cin >> a;
        if (a == 'y' || a == 'Y') {

            game();

        }
        else {
            cout << "\t\t\t\t\t\033[1;34m           Good buy!\033[0m" << endl;
            break;
        }
    }
}

int main()
{
    game();
    startGame();

    return 0;
}