//
//  main.cpp
//  jon
//
//  Created by Mark Maistrenko on 10.01.23.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <array>
#include <iterator>
#include <vector>

using namespace std;

void clearing();
void nachalo (int av);

void seredina (string i);
void konec (int kl);

int main(int argc, const char *argv[])
{
    int endStart = 0;
    do
    {
        int numberOfLetter;
        int schetchikPomenishe = 0;
        do
        {
            cout << "How many letters? You can enter 4 / 7" << endl;
            cin >> numberOfLetter;
            if (numberOfLetter >= 4 && numberOfLetter <= 7)
            {
                schetchikPomenishe++;
            }
            else
            {
                clearing();
            }
        } while (schetchikPomenishe < 1);

        string nameTXT;

        switch (numberOfLetter)
        {
        case 4:
            nameTXT = "4.txt";
            break;
        case 5:
            nameTXT = "5.txt";
            break;
        case 6:
            nameTXT = "6.txt";
            break;
        case 7:
            nameTXT = "7.txt";
            break;
        }

        const string fileName = nameTXT;
        ifstream inFile(nameTXT);
        if (!inFile.is_open())
        {

            cout << "Can't open the file " << fileName << '\n';
        }
        else
        {

            // сколько строк
            int i = 0;
            char *str = new char[numberOfLetter];

            while (!inFile.eof())
            {
                inFile.getline(str, numberOfLetter + 1, '\n');
                i++;
            }
            inFile.close();
            delete[] str;

            // рандомная строка в файле

            int randomNum = 1 + rand() % i;

            // нахождение этой строки
            ifstream inFile(nameTXT);
            char *randStr = new char[numberOfLetter];
            int b = 0;
            while (b < randomNum - 1)
            {
                inFile.getline(randStr, numberOfLetter + 1, '\n');
                b++;
            }
            inFile.close();

            string s = randStr;
            
            //преобразование строки в массив

            string normalChar[numberOfLetter];
            char *chars = new char[s.length() + 1];
            s.copy(chars, s.length());
            chars[s.length()] = '\0';
            for (int g = 0; g < s.length(); g++)
            {
                char o1 = chars[g];
                string o2;
                o2.push_back(o1);
                normalChar[g] = o2;
            }

            //вступление

            int schetchik = 0;
            int chance = numberOfLetter + 3;
            string dest[numberOfLetter];
            for (int qw = 0; qw < numberOfLetter; qw++)
            {
                dest[qw] = "_";
            }
            
            // массив с уже введенными словами
            
            string allWords[numberOfLetter + 4];
            string normalWord;

            do
            {
                int firstSchetchik = 0;
                do
                {
                    cout << '\n'
                         << "Your word. you have: " << chance << " chance/s" << endl;
                    
                    // выводит подчеркивания по одному на экран
                    
                    for (string &i : dest)
                    {
                        cout << i << ' ';
                    };
                    
                    // запрос слова
                    
                    cout << '\n'
                         << '\n'
                         << "Write your world here" << endl;
                    string newWord;
                    cin >> newWord;

                    // механизм поиска в файле необходимого слова
                    
                    ifstream inFile(nameTXT);
                    using input_it = istream_iterator<string>;
                    bool g = (find(input_it(inFile), input_it(), newWord) != input_it());

                    // преобразование и сверка
                    
                    if (newWord.length() != numberOfLetter)
                    {
                        cout << "Lenth of your word sould be equal: " << numberOfLetter << endl;
                        clearing();
                    }
                    else if (g != true)
                    {
                        cout << "This word didnt included in our dictionary" << endl;
                        clearing();
                    }
                    else
                    {
                        normalWord = newWord;
                        firstSchetchik++;
                    };
                } while (firstSchetchik < 1);
                
                // проверки закончены
                
                int check = 0;
                for (int st = 0; st < numberOfLetter + 4; st++)
                {
                    if (allWords[st] == normalWord)
                    {
                        check++;
                    }
                }

                if (normalWord == s)
                {
                    cout << "You win! You chances: " << chance << endl;
                    schetchik++;
                    break;
                }
                else
                {
                    if (check > 0)
                    {
                        cout << "This word u writed erlier " << endl;
                        continue;
                    }
                    else
                    {

                        string normalWordArr[numberOfLetter];
                        char *yourWordArr = new char[normalWord.length() + 1];
                        normalWord.copy(yourWordArr, normalWord.length());
                        yourWordArr[normalWord.length()] = '\0';
                        for (int g = 0; g < normalWord.length(); g++)
                        {
                            char i1 = yourWordArr[g];
                            string i2;
                            i2.push_back(i1);
                            normalWordArr[g] = i2;
                        }

                        // массивы на все три случая

                        string goodExp[numberOfLetter];
                        string normalExp[numberOfLetter];
                        string badExp[numberOfLetter];
                        for (int bn = 0; bn < numberOfLetter; bn++)
                        {
                            badExp[bn] = normalWordArr[bn];
                        };

                        int schetchikKletok = 0; // нужен для рисования

                        // распихиваем строки букв по массивам
                        
                        for (int v = 0; v < numberOfLetter; v++)
                        {
                            for (int x = 0; x < numberOfLetter; x++)
                            {
                                if (normalWordArr[v] == normalChar[x] && v == x)
                                {
                                    goodExp[v] = normalChar[x];
                                    badExp[v] = "";
                                    dest[v] = normalWord[x];
                                }
                                else if (normalWordArr[v] == normalChar[x])
                                {
                                    int schetchikArr = 0;
                                    for (int jk = 0; jk < numberOfLetter; jk++)
                                    {
                                        if (normalExp[jk] == normalWordArr[v])
                                        {
                                            schetchikArr++;
                                        }
                                    };
                                    if (schetchikArr == 0)
                                    {
                                        schetchikKletok++;
                                        for (int ki = 0; ki < numberOfLetter; ki++)
                                        {
                                            if (normalExp[ki] == "")
                                            {
                                                normalExp[ki] = normalChar[x];
                                                break;
                                            }
                                        };
                                    };

                                    badExp[v] = "";
                                }
                            }
                        }

                        //                         _ _ _ _
                        //                        | | |i|j|
                        //                         - - - -
                        //

                        cout << '\n' << "right char and place: " << endl;
                        
                        
                        
                        nachalo(numberOfLetter);
                        for (auto i : goodExp)
                        {
                            if (i == "")
                            {
                                cout << i << " |";
                            }
                            else
                            {
                                cout << i << "|";
                            }
                        }
 
                        konec (numberOfLetter);

                        
                        cout << '\n' << "right char: " << endl;
                        nachalo(schetchikKletok);
                    
                      
                        for (auto i : normalExp)
                        {
                            seredina(i);
                            
                        }
                        
                        konec (schetchikKletok);

                        cout << '\n' << "wrong char and place: " << endl;
                        int schetchikWrongChar = 0;
                        for (int hu = 0; hu < numberOfLetter; hu++)
                        {
                            if (badExp[hu] != "")
                            {
                                schetchikWrongChar++;
                            }
                        };
                        
                        nachalo(schetchikWrongChar);
                        for (auto i : badExp)
                       {
                           seredina(i);

                        }
                        konec (schetchikWrongChar);

                        allWords[(numberOfLetter + 4) - chance - 1] = normalWord;
                        chance--;
                    }
                }
            } while (schetchik < 1 && chance > 0);

            if (chance == 0)
            {
                cout << '\n' << "You died" << endl;
                cout << '\n' << "You word was: " << s << endl;
            }

            cout << "Zapros na sled igru: 1-stop, 0-start new " << endl;
            cin >> endStart;
        }

    } while (endStart != 1);
    cin.get();
    return 0;
};

void clearing()
{
    cin.clear();
    fflush(stdin);
}

void nachalo (int av){
    for (int ty = 0; ty <av ; ty++)
    {
        cout << " _";
    };
    cout << '\n' << "|";

    
};

void seredina (string i){ if (i == "")
{
    cout << i << "";
}
else
{
    cout << i << "|";
}};

void konec (int kl){
    cout << '\n';
    for (int ty = 0; ty < kl; ty++)
    {
        cout << " -";
    };
    
};

