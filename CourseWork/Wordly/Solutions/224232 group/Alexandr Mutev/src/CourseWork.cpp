// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include "lib/words.h"
#include <ctime>
#include <vector>

using namespace std;

const int startRange = 4;
const int endRange = 7;
const int numberOfAttempts = 3;

int startGame(){ //функция проверяет количество символов. Если данные не те, запускается с начала  
    int numberOfHiddenSymbols;

    cout << "Enter the number of letters (from " << startRange << " to " << endRange  << ") " << endl; 

    while (true) {
        while (!(cin >> numberOfHiddenSymbols)) { 
            cout << "Enter the number of letters (from " << startRange << " to " << endRange  << ") " << endl; 
            cin.clear();
            fflush(stdin);
        }
        if (numberOfHiddenSymbols < 4 || numberOfHiddenSymbols > 7) {
            cout << "Enter the number of letters (from " << startRange << " to " << endRange  << ") " << endl; 
        }
        else {
            break;
        }
    }
    return numberOfHiddenSymbols; 
}
string randomWord(int numberOfHiddenSymbols){ //функция выбирает случайное слово из словаря
    string* rangeHiddenWord = readWords(numberOfHiddenSymbols);
    srand(unsigned(time(NULL)));
    int length = countLinesInFile(openFileForWordsWithLenght(numberOfHiddenSymbols));
    int numberOfWord = rand()%length;
    string hiddenWord = rangeHiddenWord[numberOfWord];
    return hiddenWord;
}
void question(int numberOfHiddenSymbols){ //предложение ввести слово + нижние черточки по количеству букв
    cout << "Type a " << numberOfHiddenSymbols << " letter word" << endl;
    for (int i = 0; i < numberOfHiddenSymbols; i++){
            cout << "*";
        }
}
vector <char> dashesInWord(string hiddenWord, string word){//сравнение слов. Если буква совпадает, пишем ее, если нет:
    //1. ставим "*"
    //2. сохраняем несовпадения в вектор
    vector <char> wrongWords; 
    for(int i = 0; i < hiddenWord.length(); i++){
        if(hiddenWord[i] == word[i]){
            cout << word[i];
        }
        else{
            cout << "*";
            wrongWords.push_back(word[i]);
        } 
    }
    return wrongWords;
}
void wordsOutOfPlace(vector <char> wrongWords, string hiddenWord, string word){ //ищем буквы не на своем месте. 
    cout << endl << "The letters are out of place" << endl;
    //ишем совп-я из вектора в загаданном слове
    char falsePlace[endRange];
    for (int i = 0; i < wrongWords.size(); i++){
        for (int y = 0; y < hiddenWord.length(); y++){
            if(wrongWords[i] != wrongWords[y]){
                falsePlace[i] = wrongWords[i];
            }
        }
    }
    //убираем задвойки букв не на своем месте
    for (int i = 0; i < size(falsePlace) - 1; i++){
        for (int y = 0; y < size(falsePlace); y++){
            if (falsePlace[i] == falsePlace[y]){
                falsePlace[y] = falsePlace[y + 1];
            }
        }
    }
    for (int i = 0; i < size(falsePlace); i++)
    {
        cout << falsePlace[i];
    }
}

int main()
{
    int numberOfHiddenSymbols = startGame();
    string hiddenWord = randomWord(numberOfHiddenSymbols);
    string word;
    
    hiddenWord.pop_back();
    for (int i = 0; i <= numberOfAttempts; i++){
        question(numberOfHiddenSymbols);
        cout << endl << hiddenWord;
        cout << endl;
        cin >> word;
        if(hiddenWord == word){
            cout << "You win!!!" << endl;
            break;
        }
        dashesInWord(hiddenWord, word);
        cout << endl;
        wordsOutOfPlace(dashesInWord(hiddenWord, word), hiddenWord, word);
        cout << endl << endl;
        if(hiddenWord != word && i == numberOfAttempts){
            cout << "You lose:(" << endl;
        }
    }
    return 0;
}   