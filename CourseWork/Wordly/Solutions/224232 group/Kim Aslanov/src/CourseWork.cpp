// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "lib/words.h"
#include <stdio.h> 

int enterNumber() {
    int n;
    cout << "\t\t\t\tChoose the number of letters in the guessed word (from 4 to 7)" << endl;
    while (true) {
        while (!(cin >> n)) {        //пока не будет введено нормальное число, выполняем цикл
            cout << "\t\t\t\t\tEnter the NUMBER from 4 to 7 " << endl;         //сообщаем об ошибке ввода
            cin.clear();                //сбрасываем коматозное состояние cin
            fflush(stdin);              //очищаем поток ввода
        }
        if (n < 4 || n > 7) {
            cout << " \t\t\t\t\tWrong number of letters" << endl;
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

string userWord(int number) {
    cout << " \t\t\t\t\tEnter the word" << endl;
    string userW;
    while (true) {
        cin >> userW;
            if (userW.length() != number) 
                {
                cout << "\t\t\t\t\t\t   Word is too short or too long" << endl;
                }
            else {
                break;
            }
    }
  return userW;
}

//bool fromDictionary(int number, string userW)
//{
//    int length = countLinesInFile(openFileForWordsWithLenght(number)) - 1;
//    string* words = readWords(number);
//    cout << length << endl;
//    for (int i = 0; i <= length; i++)
//    {
//        if (userW == words[i].substr(0, number))
//        {
//            return true;
//        }
//    }
//  return false;
//}

int startGame() {
    // Start Game
    int num = enterNumber();
    string randomW = randomWord(num);
    int ok = 0;  
    for (int chance = 5; chance >= 0; chance--)
    {       
        cout << "You have " << chance << " attempts" << endl;
            string userW = userWord(num);
            for (int i = 0; i < randomW.length() - 1; i++)
            {
                if (randomW[i] == userW[i]) {
                    cout << " " << userW[i] << " ";
                    ok++;
                }
                else {
                    cout << " * ";
                }
            }
            for (int i = 0; i < randomW.length() - 1; i++) {
                for (int j = 0; j < userW.length() - 1; j++) {
                    if (i != j && randomW[i] == userW[j]) {
                        cout << " \t\t\t\t\tThe letter <<" << userW[j] << ">> is in the wrong place" << endl;
                    }
                }
            }
            if (ok == num) {
                cout << "\t\t\t\t\t\t   Exellent, you WON!" << endl;
                break;
            }
            else {
                ok = 0;
            }
            cout << endl;
    }
    return 0;
}

void vonaPlay() {
    char vona;
    while (true) {
        cout << "\t\t\t\t\tDo you like to play againe? Y or N" << endl;
        cin >> vona;
        if (vona == 'y' || vona == 'Y') {
            cout << "\t\t\t     - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
            cout << "\t\t\t\t\t\t   Great! Lets play again =)" << endl;
            cout << endl;
            startGame();
        }
        if (vona == 'n' || vona == 'N') {
            cout << "\t\t\t\t\tWhat a pity. See you soon!" << endl;
            break;
        }
        else
            vonaPlay();
    }
}

int main() {
    cout << "\t\t\t     - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
    cout << "\t\t\t\t\t\t   WELCOME to HANGMAN!" << endl;
    startGame();
    vonaPlay();
    return 0;
}