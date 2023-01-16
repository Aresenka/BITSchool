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
    cout << "Введите количество букв (от " << startRange << " до " << endRange  << ") " << endl;
    cin >> numberOfHiddenSymbols;

    if(numberOfHiddenSymbols < startRange || numberOfHiddenSymbols > endRange){
        startGame();
        cout << endl;
    }   
    
    return numberOfHiddenSymbols;
}
string randomWord(int numberOfHiddenSymbols){
    string* rangeHiddenWord = readWords(numberOfHiddenSymbols);
    srand(unsigned(time(NULL)));
    int length = countLinesInFile(openFileForWordsWithLenght(numberOfHiddenSymbols));
    int numberOfWord = rand()%length;
    string hiddenWord = rangeHiddenWord[numberOfWord];
    return hiddenWord;
}
void question(int numberOfHiddenSymbols){ //предложение ввести слово + нижние черточки по количеству букв
    cout << "Введите слово из " << numberOfHiddenSymbols << " букв" << endl;
    for (int i = 0; i < numberOfHiddenSymbols; i++)
        {
            cout << "*";
        }
}
void wrongNumberOfSymbols(string word, int numberOfHiddenSymbols){
    //если введено неверное количество символов, запускаем функцию question()
    if(word.length() > numberOfHiddenSymbols || word.length() < numberOfHiddenSymbols){
            question(numberOfHiddenSymbols);
            cout << endl;
            cin >> word;
        }
}
vector <char> dashesInWord(string hiddenWord, string word){//сравнение слов. Если буква совпадает, пишем ее, если нет:
    //1. ставим "*"
    //2. сохраняем несовпадения в вектор
    vector <char> wrongWords; 
    for(int i = 0; i < hiddenWord.length() - 1; i++){
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
void wordsOutOfPlace(vector <char> wrongWords, string hiddenWord, string word){ //ищем буквы не на своем месте. Циклом ишем совп-я из вектора в загаданном слове
    cout << endl << "The letters are out of place" << endl;
    
    for(int i = 0; i <= wrongWords.size(); i++){
        for(int y = 0; y <= hiddenWord.length(); y++){
            if(wrongWords[i] == hiddenWord[y]){
                cout<< wrongWords[i];
            }
        }
    }
}

int main()
{
    int numberOfHiddenSymbols = startGame();
    string hiddenWord = randomWord(numberOfHiddenSymbols);
    string word;
    
    
    for (int i = 0; i <= numberOfAttempts; i++){
        question(numberOfHiddenSymbols);
        cout << endl << hiddenWord;
        cout << endl;
        cin >> word;
        if(hiddenWord == word){
            cout << "Вы выйграли!!!" << endl;
            break;
        }
        wrongNumberOfSymbols(word, numberOfHiddenSymbols);
        dashesInWord(hiddenWord, word);
        cout << endl;
        wordsOutOfPlace(dashesInWord(hiddenWord, word), hiddenWord, word);
        cout << endl << endl;
        if(hiddenWord != word && i == numberOfAttempts){
            cout << "Вы проиграли:(" << endl;
        }
    }

    return 0;
    }   