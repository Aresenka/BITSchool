// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "lib/words.h"
#include <ctime>
#include <vector>

using namespace std;

const int startOne = 4;
const int endOne = 7;
const int attempts = 5;

string getRandomWord(int wordLength)
{
    string* rangeSecretWord = readWords(wordLength);
    srand(unsigned(time(NULL)));
    int length = countLinesInFile(openFileForWordsWithLenght(wordLength));
    int numberOfWord = rand() % length;
    cout<< "RandomWordIndex: " << numberOfWord << endl;
    string secWord = "";
    secWord = rangeSecretWord[numberOfWord];
    if (secWord.length() > wordLength)
    {
        secWord = secWord.substr(0, secWord.length() -1);
    }
    cout << "Secret word is: " << secWord << endl;
    return secWord;
}



int enterWordLength()
{
    bool isNumberCorrect = false;
    int number = 0;
    while (isNumberCorrect == false) {
        cout << "Введите количество букв от " << startOne << " до "
            << endOne << endl;
        cin >> number;
        if (number >= startOne && number <= endOne) {
            cout << "Продолжаем играть" << endl;
            isNumberCorrect = true;
        }
        else {
            cout << "Введенно неверное количество букв" << endl;
        }
    }
    return number;
}

void start_game()
{
    int number = 0;
    number = enterWordLength();
    string hiddenWord = ""; 
    hiddenWord = getRandomWord(number);
    string word;
    for (int i = 0; i < attempts; i++)
    {
        cout << "Введите слово из " << number << "букв" << endl;
        cin >> word;

        if (hiddenWord == word)
        {
            cout << "ТЫ ЧЕМПИОН !!!";
            break;
        }

        if (word.length() != hiddenWord.length()) {
            cout << "Длина слов не совпадают. Повторите попытку." << endl;
            continue;
        }
        int correctPoint = 0;

        for (int j = 0; j < hiddenWord.length(); j++) {
            
            if (hiddenWord[j] == word[j]) {
                cout << word[j];
                correctPoint++;
            }
            else {
                cout << "*";
            }
        }
        cout << " буквы на правильном месте в слове: " << correctPoint << endl;

        int incorrectPoint = 0;
        string incorrectPositionSymbols = "";
        for (int j = 0; j < word.length(); j++) {
            size_t found = hiddenWord.find(word[j]);
            if (found != std::string::npos)
            {
                incorrectPoint++;
                incorrectPositionSymbols += word[j];
            }
        }
        cout << " буквы, которые есть в слове: " << incorrectPositionSymbols << endl;
        cout << " Количество букв, которые есть в слове: " << incorrectPoint << endl;
    }
}

int main()
{
    /*int number = enterWordLength();*/
    start_game();

    return 0;
}
