// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "lib/words.h"
#include <ctime>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <stdio.h> 

using namespace std;
const int firstNumb = 4;
const int lastNumb = 7;
const int attempts = 5;

int numberOne() //рекурсия, чтобы пользователь ввел нужное число
{
	int number;
	cout << "введите число от 4 до 7 " << endl;
	cin >> number;
	if (number < firstNumb || number > lastNumb) {
		cout << "попробуй снова" << endl; 
		return numberOne();
	}
	else {
		number >= firstNumb && number <= lastNumb;
		cout << "Да начнется ирга! " << endl;
		return number;
	}
}

int charInWord( string hiddenWord, char ch) { // функция проверки вхождения символа в загаданное слово
	for (int i = 0; i < hiddenWord.length() - 1; i++) {
	
		if (hiddenWord[i] == ch);
		return i;
	}
	return -1;
}

int charInRightPosition(string hiddenWord,string word, char ch) {
	for (int i = 0; i < word.length(); i++) {
		int wordIdx = charInWord( string hiddenWord, char ch);
		if (wordIdx == -1) {
			cout << "совпадений не выявлено, попробуй снова" << endl;
		}
		else if (wordIdx == i) {
			cout << i;
		} 
		else { 
			int position = -1;
			for (int i = 0; i < hiddenWord.length(); i++) {
				if (hiddenWord[i] == ch);
				position = i;
				break;
			}
			return position;
		}
	}
	
}

void game(int number) { // функция выбора рандомного слова из библиотеки
	string* rangeHiddenWord = readWords(number);
	srand(unsigned(time(NULL)));
	int length = countLinesInFile(openFileForWordsWithLenght(number));
	int numberOfWord = rand() % length;

	string hiddenWord = rangeHiddenWord[numberOfWord]; // убрал от сюда -1
	cout << hiddenWord << endl;
	string word;
	string guessedWord;
	for (int n = 0; n < number; n++)
	{
		guessedWord[n] = '*';
	}

	for (int i = 1; i <= attempts; i++)
	{
		cout << guessedWord << endl;
		cout << "Введите слово из " << number << " букв " << endl;
		
		cin >> word;
		int h;
		for (h = 0; h < hiddenWord.length() -1; h++) {
			if (charInWord(string hiddenWord, char ch)) { // проверка вхождения символа в загаданное слово
				if (charInRightPosition(string hiddenWord, string word, char ch)) { // проверка того, стоит ли символ на прпавильной позиции
					cout << hiddenWord[h];
					guessedWord[h] = hiddenWord[h];
				}
				else {
					// Добавление символа в массив отгаданных на неправильной позиции
					cout << "*";
				}
			}
			else {
				cout << "*";
			}
		}
		// Вывод букв с неправильной позицией
		cout << endl;
		if (hiddenWord == guessedWord)
		{
			cout << "YOU ARE WINNER!";
			break;
		}
		else {
			/*if (word.length() > number || word.length() < number) {
				cout << "неправильная длина слова" << endl;
				cin >> word;
			}*/
			if (hiddenWord != word && i == attempts){
				cout << "YOU ARE Проиграли " << endl;
			}
			
		}
	} 
}


int main()
{
	int number = numberOne();
	game(number);

	return 0;
}
	
