// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "lib/words.h"

class Example {
    string* words;

    public:
        Example(int wordLength) {
            setWordLength(wordLength);
        }

        void setWordLength(int length) {
            words = readWords(length);
        }

        string getWord(int index) {
            return words[index];
        }

        void shoutOutWord(int index) {
            cout << getWord(index) << endl;
        }
};

using namespace std;

int main()
{
//Пример использования класса
    Example library = Example(4);

    library.shoutOutWord(0);
    library.shoutOutWord(10);

    cout << endl;

    library.setWordLength(7);
    library.shoutOutWord(0);
    library.shoutOutWord(10);
}

