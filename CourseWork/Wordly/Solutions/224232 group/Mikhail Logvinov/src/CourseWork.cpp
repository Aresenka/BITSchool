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
//второй метод, вы
void getRandomWord(int number)
{
	
		string s1;
		ifstream in ("C:\\Users\\demo\\Pupsik\\BITSchool\\CourseWork\\Wordly\\Solutions\\224232 group\\Mikhail Logvinov\\src\\lib\\words_4_letters.csv");
		getline(in, s1);
		in.close();
		cout << s1 << endl;
	

}

int main()
{
	int number = numberOne();
	getRandomWord(number);

	
	
	return 0;
}