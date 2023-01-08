// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <fstream>
#include "lib/words.h"



#include <iostream>     // Ввод/Вывода
#include <vector>       // Динамический массив
#include <string>       // Строка
#include <algorithm>    // Алгоритмы 
#include <cctype>       // 
#include <Windows.h>    //
// Подключил библиотеки


const int WORD_LENGTH = 5;      // Длина слова
const int NOT_MATCH = 0;        // Кол-во совпадений
const int PARITAL_MATCH = 1;    // Частичное совпадение
const int MATCH = 2;            // Совпадение


void toUpperCase(std::string &input)    // Функция верхнего регистра
{
    std::transform(input.begin(), input.end(), input.begin(), [](unsigned char c) { return std::toupper; });
}


void printWordle(std::vector<std::string> tries, std::vector<std::vector<int>> matches, int currentTry)
    // Функция вывода "Wordle"
{
    system("cls");      // Чистка консоли

    std::cout << "$$\      $$\                           $$\ $$\           " << std::endl;
    std::cout << "$$ | $\  $$ |                          $$ |$$ |          " << std::endl;
    std::cout << "$$ |$$$\ $$ | $$$$$$\   $$$$$$\   $$$$$$$ |$$ | $$$$$$\  " << std::endl;
    std::cout << "$$ $$ $$\$$ |$$  __$$\ $$  __$$\ $$  __$$ |$$ |$$  __$$\ " << std::endl;
    std::cout << "$$$$  _$$$$ |$$ /  $$ |$$ |  \__|$$ /  $$ |$$ |$$$$$$$$ |" << std::endl;
    std::cout << "$$$  / \$$$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |$$   ____|" << std::endl;
    std::cout << "$$  /   \$$ |\$$$$$$  |$$ |      \$$$$$$$ |$$ |\$$$$$$$\ " << std::endl;
    std::cout << "\__/     \__| \______/ \__|       \_______|\__| \_______|" << std::endl;

    for (int i = 0; i <= currentTry && i < tries.size(); i++){
        std::string separator = "-";
        std::string padding = "  |";
        std::string text = "  |";

        for (int j = 0; j < tries[i].length(); j++){
            separator += "------";                // Разделитель
            padding += "     |";                  // Набивка
            char value = toupper(tries[i][j]);
            text += "  ";

            if (matches[i][j] == PARITAL_MATCH){
                text += "\033[33m";
            } else if (matches[i][j] == MATCH){
                text += "\033[032m";
            }

            text += value;

            if (matches [i][j] == PARITAL_MATCH || matches[i][j] == MATCH){
                text += "\033[0m";
            }

            text += "  |";
        }

        if (i == 0){
            std::cout << separator << std::endl;
        }

        std::cout << padding << std::endl;
        std::cout << text << std::endl;
        std::cout << padding << std::endl;
        std::cout << separator << std::endl;
    }
}



void markMatch(std::vector<std::vector<int>> &matches, int tryIndex, std::string target, std::string guess)
    // Совпадения ввода со целевым словом
{
    for (int i = 0; i < guess.length(); i++){
        matches[tryIndex][i] = NOT_MATCH;
    }

    for (int j = 0; j < guess.length(); j++){
        for (int i = 0; i < target.length(); i++){
            if (guess[j] == target[i]){
                if (i == j){
                    matches[tryIndex][j] = MATCH;
                    break;
                } else {
                    matches[tryIndex][j] = PARITAL_MATCH;
                }
            }
        }
    }
}


bool isValid(std::string word)
{
    // Проверка слова из словоря
    return word.length() == WORD_LENGTH && word.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos;
}



std::string getRandomWord()         // Функция для генерации слова
{
    // (Получить случайное слово из словоря) 
    return "ready";
}



bool isAllMatch(std::string target, std::string guess)
    // Проверка на совпадение слова
{
    for (int i = 0; i < guess.length(); i++){
        if (guess[i] != target[i])
        return false;
    }
    return true;
} 

int main(int, char **)
{
    int numberOfTries = 6;      // Число попыток
    std::vector<std::string> tries(numberOfTries);
    std::vector<std::vector<int>> matches(numberOfTries, std::vector<int>(WORD_LENGTH));
    std::string targetWord = getRandomWord();

    toUpperCase(targetWord);    // Используем функию верхнего регистра

    std::string input;
    int currentTry = 0;

    while (currentTry < numberOfTries)
    {
        do
        {
            std::cout << "Please enter your guess (word length must be " + std::to_string(WORD_LENGTH) + ") or typr Q to quit :";
            std::getline(std::cin, input);
            toUpperCase(input);
        }
        while (input != "Q" && !isValid(input));

        if (input == "Q")
        {
            std::cout << "Quit game" << std::endl;
            break;
        }
        
        tries[currentTry] = input;
        currentTry++;
    }

    markMatch(matches, currentTry, targetWord, input);

    printWordle(tries, matches, currentTry);

    if (isAllMatch(targetWord, input))
    {
        std::cout << "Found the word" << std::endl;
        
    } else if (currentTry == numberOfTries){
        std::cout << "You didn`t find the word" << std::endl;
    }
    

    return 0;
}
