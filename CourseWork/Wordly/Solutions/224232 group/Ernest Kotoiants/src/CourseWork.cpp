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

int enterCountOfLetters() {
    int countOfLetters;

    do {
        cout << "\t\t\t\t\t  \033[1;34m   Lets play the game 'HANGMAN'!\033[0m" << endl;
        cout << " \t\t\t\t\t \033[1;34m Choose, how many letters in the word(4-7): \033[0m" << endl;
        cin >> countOfLetters;
    }
        while (countOfLetters < 4 || countOfLetters > 7);
       
     return countOfLetters;          
    }


bool ifWordIsValid(int length, string* words, string enterWord, int countOfLetters)
{
    bool validWord = false;
    length = countLinesInFile(openFileForWordsWithLenght(countOfLetters));

    for (int i = 0; i < length; i++)
    {
        if (enterWord == words[i].substr(0, words[i].size() - 1))
        {
            validWord = true;
        }
    }
    return validWord;
}

string getRandomWord(int countOfLetters) {
    string randomWord;
    srand(time(0));
    int length = countLinesInFile(openFileForWordsWithLenght(countOfLetters));
    int indexOfWord = rand() % length;
    string* words = readWords(countOfLetters);
    randomWord = words[indexOfWord];
    
    for (int i = 0; i < countOfLetters; i++)
    {
        cout << " _ ";
    }
    cout << endl;
    return randomWord;
}

string enterTheWord(string randomWord, int countOfLetters) {
    string enterWord;
    int length = countLinesInFile(openFileForWordsWithLenght(countOfLetters));
    string* words = readWords(countOfLetters);

    while (true) {
        cin >> enterWord;
        if (ifWordIsValid(length, words, enterWord, countOfLetters))
        {
            break;
        }
        else {
            cout << "This Word is not in directory" << endl;
        }
    }
    return enterWord;
}

void checkLetterInTheWord(string enterWord, string randomWord, int countOfLetters) {
    for (int i = 0; i < countOfLetters; i++) {
        for (int j = 0; j < countOfLetters; j++)
        {
            if (i != j && randomWord[j] == enterWord[i]) {
                cout << endl << "\033[1;31m" << enterWord[i] << "\033[0m" << "\033[1;30m in the word on another place!\033[0m" ;
                break;
            }

        }
    }
}


void game()
{   
    int countOfLetters = enterCountOfLetters();
    string randomWord = getRandomWord(countOfLetters);
    cout << "\t\t\t\t\t     \033[1;30m    You have 10 attempts\033[0m " << endl;

    string enterWord;
    for (int chance = 9; chance >= 0; chance--) {
        enterWord = enterTheWord(randomWord, countOfLetters);
        int  rightChars = 0;
        for (int i = 0; i < countOfLetters; i++)
        {
            if (randomWord[i] == enterWord[i]) {
                cout << "\033[1;32m" << enterWord[i] << "\033[0m";
                rightChars++;
            }
            else {
                cout << " _ ";
            }
        }
        if (rightChars == countOfLetters) {
            cout << "\t\t\t\t\t \033[1;32m   You won the Game! Congrats!\033[0m" << endl;
            break;
        }
            checkLetterInTheWord(enterWord, randomWord, countOfLetters);

        
        

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