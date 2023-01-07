// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "lib/words.h"

using namespace std;

void text()                                                 // Вывод текста
{

    cout << "Введите Цифру От Четырех До Семи" << endl;
    
}      

int num()
{
    int n;
    cin >> n;
    return n;
}

int howmany()
{
    int i, n;
    n = num();
    srand(time(0));
    int length = countLinesInFile(openFileForWordsWithLenght(n));
    i = rand() % length;
    string* words = readWords(n);
    cout << words[i] << endl;
    return 0;
}

void number()
{
    int n = num();
    if (n < 4 || n > 7)
    {
        cout << "e" << endl;
        start();
    }
    else {
        howmany();
    }
    
}

void start() {
    text();
    number();
}

int count()
{
    int w;
    cin >> w;
for (int i=0; i<w; i++)
{
    cout << "* ";
    
}

return 0;

}

//void seven()
//{
//    int i;
//    srand(time(0));
//    int length = countLinesInFile(openFileForWordsWithLenght(7));
//    i = rand() % length;
//    string* words = readWords(7);
//    /*cout << words[i] << endl;*/
//
//}


 
int main()

{

    text();
    /*count();
    cout << endl;*/
    howmany();
   
    


    return 0;


}