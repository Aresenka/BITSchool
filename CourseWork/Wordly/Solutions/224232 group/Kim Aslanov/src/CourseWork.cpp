// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <array>
#include "lib/words.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <stdio.h> 




int enterNumber() {
    int n;
    cout << " \t\t\t\t\tВыберите колличество букв в угадываемом слове (от 4 до 7)" << endl;
    while (true) {
        cin >> n;
        if (n < 4 || n > 7) {
            cout << " \t\t\t\t\tНеверное колличество букв" << endl;
        }
        else {
            break;
        }
    }
       return n;
    
    }

int randomWordIndex(int m) {
    
    int number = m;
    srand(time(0));
    int indexCount = countLinesInFile(openFileForWordsWithLenght(number)) - 1;
    return rand() % indexCount;
}

string randomWord(int n) {
    string* words = readWords(n);
    int i = randomWordIndex(n);
    string word = words[i];
    cout << word << endl;
    return word;
}

string userWord() {
    cout << " \t\t\t\t\tВведите cлово" << endl;
    string w;
    cin >> w;
    return w;
}
/*string comparision(string randomWord, string userWord) {
        for (int i = 0; i < randomWord.length() - 1; i++) {
            for (int j = 0; j < userWord.length() - 1; j++) {
                if (i != j && randomWord[i] == userWord[j]) {
                  cout << randomWord[j] << "Буква не на том месте";
                }
                else {
                    cout << " ok";
                }
            }
        }
        return 0;
}*/
void sravnit() {
    
    
    
    int length = countLinesInFile(openFileForWordsWithLenght(4)) - 1;
    string* words = readWords(length);
    string userW = userWord();
    for (int j = 0; j <= length; j++) {
        words[j] = words[j].substr(0, 4);
        if (userW != words[j]) {
            cout << " \t\t\t\t\tНет в словаре" << endl;
        }
        else {
            cout << " \t\t\t\t\tЕсть в словаре" << endl;
        }

    }
}

int startGame() {
    // Start Game
    int num = enterNumber();
    string randomW = randomWord(num);
    
    int ok=0;
    for (int chance = 5; chance >= 0; chance--)
    {    
        string userW = userWord();
        cout << "У вас " << chance << " попыток(а)" << endl; 

        for (int i = 0; i < randomW.length() - 1; i++)
        {
            int ok = 0;
            if (randomW[i] == userW[i]) {
                cout << " " << userW[i] << " ";
                ok++;
            }
            else {
                cout << " * ";
            }
        }
        cout << endl;

        if (ok == randomW.length() - 1) {
            cout << "\t\t\t\t\t\t   Супер! Вы выиграли!" << endl;
            break;
        }
        else {
             ok = 0; 
        }

        for (int i = 0; i < randomW.length() - 1; i++) {
            for (int j = 0; j < userW.length() - 1; j++) {
                if (i != j && randomW[i] == userW[j]) {
                    cout << " \t\t\t\t\tБуква <<" << userW[j] << ">> не на том месте" << endl;
                }

            }
        }
    }
            return 0;
}
    
void vonaPlay() {
    char vona;
    while (true) {
        cout << "\t\t\t\t\tЖелаете сыграть еще раз? Y or N" << endl;
        cin >> vona;
        if (vona == 'y' || vona == 'Y') {
            cout << "\t\t\t     - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
            cout << "\t\t\t\t\t\t   Супер! Давайте сыграем еще раз =)" << endl;
            cout << endl;
            startGame();
        }
        if (vona == 'n' || vona == 'N') {
            cout << "\t\t\t\t\tЖаль, до скорых встреч!" << endl;
            break;
        }   
        else
            vonaPlay();
    }   
}

int main() {
    cout << "\t\t\t     - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
    cout << "\t\t\t\t\t\t   Добро пожаловать в игру ВИСЕЛИЦА" << endl;
    startGame();
    vonaPlay();
    //sravnit();
    return 0;
}


