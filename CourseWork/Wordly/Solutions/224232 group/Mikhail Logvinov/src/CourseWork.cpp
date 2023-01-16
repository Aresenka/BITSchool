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

bool charInWord( string hiddenWord, char ch, int number) { // функция проверки вхождения символа в загаданное слово
	for (int i = 0; i < hiddenWord.length() - 1; i++) {
	
		if (hiddenWord[i] == ch);
		return true;// решил вот так попробовать
	}
	return false;
}

bool charInRightPosition(string hiddenWord,char ch, int number) { // функция проверки того, стоит ли символ на прпавильной позиции
	int truePosition = -1;
	for (int i = 0; i < hiddenWord.length() - 1; i++) {
		if (hiddenWord[i] == ch) {
			truePosition = i;
			return true;
		}
		return false;
		//for (int j = 0; j < hiddenWord.length() - 1; i++)
		//{
		//	if (i != j && hiddenWord[i] != hiddenWord[j]) 
		//		return true;// ну как эти булевые функции правильно строить-то ёобана..
		//}
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
			if (charInWord(string hiddenWord, char ch, int number)) { // проверка вхождения символа в загаданное слово
				if (charInRightPosition(string hiddenWord, char ch, int number)) { // проверка того, стоит ли символ на прпавильной позиции
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
	
