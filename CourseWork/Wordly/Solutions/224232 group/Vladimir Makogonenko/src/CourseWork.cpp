// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <fstream>
#include "lib/words.h"
#include <iostream>     // Ввод/Вывода
#include <vector>       // Динамический массив
#include <string>       // Строка
#include <algorithm>    // Алгоритмы 
#include <cctype>       // 
using namespace std;

const int START_RANGE = 4;   // Мин значение  
const int END_RANGE = 7;
const int WORD_LENGTH = 5;
const int NOT_MATCHED = 0;
const int PARITAL_MATCHED = 1;
const int MATCHED = 2;
const int NUMBER_OF_GUESSES = 5;

void toUpperCase(string input)
{
    transform(input.begin(), input.end(), input.begin(), [](unsigned char c) { return toupper(c); });
}

string getRandomWord(int wordLength)
{
    string* rangeSecretWord = readWords(wordLength);
    srand(unsigned(time(NULL)));
    int length = countLinesInFile(openFileForWordsWithLenght(wordLength));
    int numberOfWord = rand()%length;

    string targetWord = rangeSecretWord[numberOfWord-1];
    cout << targetWord << endl;
    return targetWord;
}

bool isValidWord(string word, int wordLength)
{
    return word.length() == wordLength && word.find_first_not_of("abcdefghijklmnopqrstuvwxyz") == string::npos;
}

void markMatches(vector<vector<int>> &matches, int currentTry, string targetWord, string guessWord)
{
    for (int i = 0; i < guessWord.length(); i++){
        matches[currentTry][i] == NOT_MATCHED;
    }

    for (int i = 0; i < guessWord.length(); i++){
        for (int j = 0; j < targetWord.length(); j++){
            if(guessWord[i] == targetWord[j]){
                if (i == j){
                    matches[currentTry][i] = MATCHED;
                    break;
                } else {
                    matches[currentTry][i] = PARITAL_MATCHED;
                }
            }
        }
    }
}

bool isAllMatched(string targetWord, string input)
{
    for (int i = 0; i < input.length(); i++){
            if (targetWord[i] != input[i]) {
            return false; 
        }
            // if (targetWord[i] = input[i]) {
            // return true; 
        }   
    return true;
}

void print(vector<vector<int>> matches, vector<string> guesses, int currentGuessIndex)
{
    for (int i = 0; i <= currentGuessIndex && i < guesses.size(); i++){
        string separator = "-";
        string padding = "|";
        string text = "|";

        for (int j = 0; j < guesses[i].length(); j++){
            separator += "------";
            padding += "     |";
            char value = toupper(guesses[i][j]);
            text += "   ";
            // cout << matches[i][j] << endl;
            if (matches[i][j] == PARITAL_MATCHED){
                text += "\033[33m";
            } else if (matches[i][j] == MATCHED) {
                text += "\033[32m";
            }

            text += value;

            if (matches[i][j] == PARITAL_MATCHED || matches[i][j] == MATCHED) {
                text += "\033[0m";
            }

            text += " |";
        }

        if (i == 0) {
            cout  << separator << endl;
        }

        cout << padding << endl;
        cout << text << endl;
        cout << padding << endl;
        cout << separator << endl;
    }
}

int main()
{
    int wordLength;   
    cout << "Введите длину слова (от " << START_RANGE << " до " <<  END_RANGE <<") " <<endl;
    cin >> wordLength;

    while (wordLength < START_RANGE || wordLength > END_RANGE){
        cout << " Ты дурак ? Введи от " << START_RANGE << " до " << END_RANGE << endl;
        cin >> wordLength;
        cout << endl; 
    }

    vector<string> guesses(NUMBER_OF_GUESSES);
    vector<vector<int>> matches(NUMBER_OF_GUESSES, vector<int>(wordLength));
    string targetWord = getRandomWord(wordLength);
    
    string input;
    
    // print(matches, guesses, -1);

    int currentTry = 0;

    while (currentTry < NUMBER_OF_GUESSES)
    {
        string chekInput = input;
        do
        {
            cout << "Введи предроложение (слово должно быть из " + to_string(wordLength) + " букв) или жми 'q' для выхода: ";
            // getline(cin, input);
            cin >> input;

        } while (input != "q" && !isValidWord(input ,wordLength));

        if (input == "q")
        {
            cout << "Слабак )" << endl;
            break;
        }
        
        guesses[currentTry] = input;

        markMatches(matches, currentTry, targetWord, input);

        print(matches, guesses, currentTry);

        if (isAllMatched(targetWord, input)) {
            cout << "Скинь данные кредитки , хочу денюжку за победу скинуть!" << endl;
            break;
        }
        
        if (chekInput != input){
            currentTry ++;
        }

        if (currentTry == NUMBER_OF_GUESSES){
            cout << " Ты не отгадал слово : " << targetWord << endl;
        }
        // currentTry ++;
    }
    
}
