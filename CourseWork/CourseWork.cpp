// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "words.h"

using namespace std;
int main()
{
    string* words = readWords(7);
    cout << "Hello World!\n" << words[0];
}

