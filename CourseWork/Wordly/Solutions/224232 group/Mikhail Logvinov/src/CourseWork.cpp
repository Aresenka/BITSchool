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
		number >= firstNumb || number <= lastNumb;
		cout << "продолжаем игру" << endl;
		return number;
	}
}

bool charInWord() {

}

bool charInRightPosition() {

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
			if (charInWord()) { // проверка вхождения символа в загаданное слово
				if (charInRightPosition()) { // проверка того, стоит ли символ на прпавильной позиции
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
void wrongNumberOfSymbols(string word, int number) {
	if (word.length() > number || word.length() < number) {
		game(number); //  могу ли я так вызывать функцию
		cout << endl;
		cin >> word;
	}
}

//void dashesInWord(string hiddenWord, string word) {   //функция сравнения слов 
//	
//	vector <char> wrongWords;
//	for (int i = 0; i < hiddenWord.length(); i++) {
//		if (hiddenWord[i] == word[i]) {
//			cout << word[i];
//		}
//		else {
//			cout << "_";
//			wrongWords.push_back(word[i]);
//		}
//	}
//	cout << endl << "БУКВЫ НЕ НА СВОЕМ МЕСТЕ" << endl;
//
//	for (int i = 0; i <= wrongWords.size(); i++) {
//		for (int y = 0; y <= hiddenWord.length(); y++) {
//			if (wrongWords[i] == hiddenWord[y]) {
//				cout << wrongWords[i];
//			}
//		}
//	}
//}


//*string enterWord(string hiddenWord, int number) {   // другая функция сравнения длинны слова
//	string enterWord;
//	while (true) {
//		cin >> enterWord;
//		if (enterWord.length() > number || enterWord.length() < number) {
//			cout << " неправельная длинна слова " << endl;
//		}
//		else {
//			break;
//		}
//	}
//	return enterWord;
//}



int main()
{
	int number = numberOne();
	game(number);

	return 0;
}
	
