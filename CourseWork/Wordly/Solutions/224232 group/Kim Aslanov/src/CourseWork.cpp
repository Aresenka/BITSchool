// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "lib/words.h"

using namespace std;

int enterNumber() {
    int n;
    cout << " \t\t\t\t\tВыберите колличество букв в угадываемом слове (от 4 до 7)" << endl;
    cin >> n;
    if (n < 4 || n > 7) {
        cout << " \t\t\t\t\tWrong number, try again" << endl;
            return enterNumber();
    }
    return n;
}      



int randomWordIndex(int m) {
    
   int number = enterNumber();
    srand(time(0));
    int indexCount = countLinesInFile(openFileForWordsWithLenght(number)) - 1;
    
    return rand() % indexCount;
}

string randomWord(int n) {
    string* words = readWords(n);
    int i = randomWordIndex(n);
    string word = words[i];

    return word;
}

string userWord() {
    cout << " \t\t\t\t\tВведите cлово" << endl;
    string w;
    cin >> w;
    
   /* int pos = s.read(readWords(7)); // поиск

   
    if (pos->find(w) == -1)
    {
        cout << "Нет слова в базе";
    }*/
        return w;
}
/*string comparision(string randomWord, string userWord) {
        for (int i = 0; i < randomWord.length() - 1; i++) {
            for (int j = 0; j < userWord.length() - 1; j++) {
                if (i != j && randomWord[i] == userWord[j]) {
                  cout << randomWord[j] << "Буква не на том месте";
                }
                else {
                    cout << " ok";
                }
            }
        }
        return 0;
}*/



//void check() {
//   int n = enterNumber();
//    readWords[n].find(UserWord());
//
//}
// 
int startGame() {
    // Start Game

    string randomW = randomWord(enterNumber());
       
    
    for (int i = 5; i >= 0; i--)
    {
        cout << "У вас " << i << " попыток(а)" << endl;
        string userW = userWord();



        //comparision(random, UserWord());

        for (int i = 0; i < randomW.length() - 1; i++)
        {
            if (randomW[i] == userW[i]) {
                cout << " " << userW[i] << " ";

            }
            else {
                cout << " * ";
            }

        }
        cout << endl;
        for (int i = 0; i < randomW.length() - 1; i++) {
            for (int j = 0; j < userW.length() - 1; j++) {
                if (i != j && randomW[i] == userW[j]) {
                    cout << " \t\t\t\t\tБуква <<" << userW[j] << ">> не на том месте" << endl;
                }

            }
        }

    }
    cout << "Спасибо за игру" << endl;
    return -1;
}void vonaPlay() {
    int vona;
    if (startGame() = -1) {
        cout << " Желаете сыграть еще раз? Y or N" << endl;
        cin >> vona;
        if (vona == 'y' || vona == 'Y') {
            startGame();
        }
        if (vona == 'n' || vona == 'N') {
            return;
        }
        else
            vonaPlay();
    }
}
    int main() {
        startGame();
        vonaPlay();
    return 0;
}


