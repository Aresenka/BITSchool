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


bool charInWord(string hiddenWord, char symb) { // функция проверки вхождения символа в загаданное слово
	for (int i = 0; i < hiddenWord.length() - 1; i++) {
		if (hiddenWord[i] == symb) return true;
	}
	return false;
}

//charInRightPosition(string hiddenWord,string word, char symb) { ---- изучить потом, потому что не логично
//	for (int i = 0; i < word.length(); i++) {
//		int wordIdx = charInWord( hiddenWord, symb);
//		if (wordIdx == -1) {
//			cout << "совпадений не выявлено, попробуй снова" << endl;
//		}
//		else if (wordIdx == i) {
//			cout << word[i];
//		} 
//		else { 
//			int position = -1;
//			for (int i = 0; i < hiddenWord.length(); i++) {
//				if (hiddenWord[i] == symb);
//				position = i;
//				break;
//			}
//			return position;
//		}
//	}
//	return -1;
//	
//}

bool charInRightPosition(string hiddenWord, string word, int pos) { //
	for (int i = 0; i < hiddenWord.length() - 1; i++) {
		if (hiddenWord[i] == word[pos] && i == pos) return true;
	}
	return false;
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
		guessedWord += "*";
	}


	for (int i = 1; i <= attempts; i++)
	{
		cout << endl << guessedWord << endl;
		cout << "Введите слово из " << number << " букв " << endl;
		
		cin >> word;
		int h;
		char symb;
		for (h = 0; h < number; h++) {
			if (charInWord(hiddenWord, word[h])) { // проверка вхождения символа в загаданное слово

				if (charInRightPosition( hiddenWord, word, h)) { // проверка того, стоит ли символ на прпавильной позиции
					cout << hiddenWord[h];
					guessedWord[h] = hiddenWord[h];
				}
				else {
					cout << "*";
				}
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
		for (int i = 0; i < hiddenWord.length() - 1; i++) {
			for (int j = 0; j < hiddenWord.length() - 1; j++)
			{
				if (i != j && hiddenWord[i] == word[j]) {
					cout << "\033[1;31m" << word[j] << "\033[0m" << "\033[1;30m in the word on another place!\033[0m" << endl;
					break;
				}

			}
		}
		// Вывод букв с неправильной позицией

		if (hiddenWord.substr(0, number) == word)
			
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
	
