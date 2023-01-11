// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "lib/words.h"
#include <ctime>
#include <vector>

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
		cout << "попробуй снова" << endl; //тут хочу написать все варианты неправильного ввода 
		return numberOne();
	}
	else {
		number >= firstNumb || number <= lastNumb;
		cout << "продолжаем игру" << endl;
		return number;
	}
}
//второй метод хз пока  реализовать лучше в мейне или до, а в мейне просто сослаться
// 
//
//void game (int number) {
//	string* rangeHiddenWord = readWords(number);
//	srand(unsigned(time(NULL)));
//	int length = countLinesInFile(openFileForWordsWithLenght(number));
//	int numberOfWord = rand() % length;
//
//	string hiddenWord = rangeHiddenWord[numberOfWord - 1];
//	string word;
//
//	for (int i = 0; i < attempts; i++)



int main()
{
	int number = numberOne();

	void game(int number) { // ругается на эту скобку 
		string* rangeHiddenWord = readWords(number); // до конца не понял как эти ваши Астериксы работают, но вроде как так можно
		srand(unsigned(time(NULL)));
		int length = countLinesInFile(openFileForWordsWithLenght(number));
		int numberOfWord = rand() % length;

		string hiddenWord = rangeHiddenWord[numberOfWord - 1];
		string word;

		for (int i = 0; i < attempts; i++)
		{
			cout << "Введите слово из " << number << "букв" << endl;
			for (int i = 0; i < attempts; i++)
			{
				cout << "*";
			}
			cin >> word;
			for (i = 0; i < hiddenWord.lenght(); i++) {
				if (hiddenWord[i] = word[i]) {
					cout << word[i];
				}
				else { cout << "*"; }
				cout << endl;
			}
			if (hiddenWord == word)
			{
				cout << "YOU ARE WINNER!";
				break;
			}
		} // подскажите поджаста, почему не работает)))))00)


	}
}
	return 0;
