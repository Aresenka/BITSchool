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


//int num()
//{
//    int userNumber;
//    cin >> userNumber;
//    return userNumber;
//}



string UserWord() {
    cout << "Введите Слово Из Букв" << endl;
    string w;
    cin >> w;
    return w;
}



string howmany(int n)
{
    int i;
    string word;
    srand(time(0));
    int length = countLinesInFile(openFileForWordsWithLenght(n));
    i = rand() % length;
    string* words = readWords(n);
 
    word = words[i];
   
    
    return word;
}

void x() {
    cout << howmany(6) << endl;
   /* s = slovo();
    h = howmany();

    if (s =+ h)
        cout << " Угадал! " << endl;
    else
        cout << " Не угадал" << endl;*/


}

int number()
{
    int n;
    cin >> n;
    if (n < 4 || n > 7)
    { 
        text();
    }
    else {
        
        howmany(n);
        UserWord();
        string s = howmany(n);
        string u = UserWord();
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == u[i])
                cout << u[i] <<endl;
       }
        
        
        
        /* if (s == u)
            cout << " Угадал!" << endl;
        else
            cout << " Не угадал" << endl;*/

    }
    return 0;

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
    number();
   
    

    return 0;


}