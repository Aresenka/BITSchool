// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "lib/words.h"
#include <string>

using namespace std;

const int startRange = 4;
const int endRange = 7;
const int numberOfAttempts = 3;

class Words{
public:
    int numberOfLetters; 

};

class HiddenWord: public Words{
public:

    int numberOfLetters(){
        int numberOfLetters;
        while(true){
            cout << "Enter the number of letters from " << startRange << " to " << endRange  << endl;
            cin >> numberOfLetters;
            if((numberOfLetters >= startRange) && (numberOfLetters <= endRange)){
                break;
            }
            cin.clear();
            fflush(stdin);
        }
        return numberOfLetters;
    }

};

class EnterWord: public Words{
public:

};

int main(){
    HiddenWord hiddenWord;
    hiddenWord.numberOfLetters();
    

    return 0;
}

