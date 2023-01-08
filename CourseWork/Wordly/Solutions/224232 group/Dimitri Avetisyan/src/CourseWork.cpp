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

int main()

{
    cout << "\t\t\t\t\t  \033[1;34m  Lets play the Game GALLOWS!\033[0m" << endl;
    cout << " \t\t\t\t\t \033[1;34mChoose, how much char in word(4-7): \033[0m" << endl;
    int nChar, i;
    string randomWord;
    


    while (true) {
        cin >> nChar;
        if (nChar < 4 || nChar > 7) {
            cout << "\033[1;31mFail, choose from 4 to 7\033[0m" << endl;
        }
        else {
            break;
        }
        }
    cout << "\t\t\t\t\t     \033[1;30m    You have 10 attempts\033[0m " << endl;
    if (nChar >= 4 || nChar <= 7) {
        srand(time(0));
        int length = countLinesInFile(openFileForWordsWithLenght(nChar));
        i = rand() % length;
        string* words = readWords(nChar);
        //cout << words[i] << endl;
        randomWord = words[i];

    }

    for (int i = 0; i < nChar; i++)
    {
        cout << "_ ";
    }
    cout << endl;
    string enterWord;
    int rightChars = 0;
    for (int chance = 9; chance >= 0; chance--) {
        while (true) {
            cin >> enterWord;
            if (enterWord.length() > nChar) {
                cout << "\033[1;31mWord is too long\033[0m" << endl;
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
                    cout << enterWord[j] << "\033[1;31m in the word on another place!\033[0m" << endl;
                }

            }
        }
        for (int i = 0; i < randomWord.length() - 1; i++)
        {
            if (randomWord[i] == enterWord[i]) {
                cout << enterWord[i] ;
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

        cout << endl << "\t\t\t\t\t    \033[1;30m      Attempts -  \033[0m" << chance << endl;
        if (chance == 0) {
            cout << "\t\t\t\t\t     \033[1;31m      GAME OVER!\033[0m" << endl;
            cout << "\t\t\t\t\t\t \033[1;31m Word was - \033[0m"<<randomWord << endl;
        }
    }
    return 0;
}