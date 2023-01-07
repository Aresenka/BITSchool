// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "lib/words.h"

using namespace std;

void text()                                                 // Вывод текста
{
    count()
    cout << "Введите Цифру От Четырех До Семи" << endl;
    
}      


//int num()
//{
//    int userNumber;
//    cin >> userNumber;
//    return userNumber;
//}



string UserWord() {
    cout << "Введите Слово Из " << endl;
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



/* int number()

        }
        
        
        
        if (s == u)
            cout << " Угадал!" << endl;
        else
            cout << " Не угадал" << endl;

    }
    return 0;

}*/



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
 
int main()

{
        text();
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
            for (int i = 0; i < s.length() - 1; i++) {
                for (int j = 0; j < s.length() - 1; j++)
                {
                    if (i != j && s[i] == u[j]) {
                        cout << u[j] << endl;
                    }
                }
            }
        }
    

    return 0;
}


