// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <list>
#include <cmath>
#include <ctime>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>
#include <cstdlib>
//#include <conio.h>
//#include "wtypes.h"
#include <limits.h>
#include <iostream>
#include <iostream>
#include <algorithm>
#include <filesystem>

#include <iostream>
#include <fstream>
#include "lib/words.h"

using namespace std;

HANDLE  hConsole;

int step = 11;
const int numCols = 3;
const int numRows = 10;
const int colWidth = 15;
const int NUM_COLUMNS = 3;
const int resusltStart = 62;
const int COLUMN_WIDTH = 15;
const int usedWordStart = 20;

int level = 0;
int wordLenght = 0;

const int titleCoord[2] = {0,  20};
const int answerCoord[2] = { 0,  21 };
const int usedWordTitleCoordinates[2] = { usedWordStart , step - 1 };

const string green = "\033[32m"; // ANSI escape code for green text
const string reset = "\033[0m"; // ANSI escape code to reset formatting
const string magenta = "\033[45m"; // ANSI escape code for magenta background
const string blue = "\033[1;44m";





string fileName;
string secretWord = "";
string answerWord = "";
string badSymbols = "";
int matchedSymbols[2] = { 0, 0 };

bool win = false;
bool gameOver = false;
bool autoChooseWordLenght = true;

int remainingMoves = level;

int answerResultTitleCoordinates[2] = { resusltStart, step - 1 };


void ClearRows(int end = 50)
{
    system("clear");
    system("cls");
    cout << "\n\r";

    int coutCursorPoint[2] = {0, 0};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coutCursorPoint);
}

void ClearOneRow(int row)
{
    int CursorPoint[2] = {0, row};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPoint);
    printf("\33[2K\r");
    int newCursorPoint[2] = {0, row};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), newCursorPoint);
}

void SelectLevel() {

    int userLevelAnswer = 0;
    int coutCursorPoint[2] = {0, 0};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coutCursorPoint);
    cout << green << "SELECT GAME LEVEL:   1 - easy, 2 - medium, 3 - hard, for exit: type any symbol" << "\n\r";
    cin >> userLevelAnswer;
    ClearRows(5);
    switch (userLevelAnswer)
    {
    case 1: level = 7; remainingMoves = level; break;
    case 2: level = 6; remainingMoves = level;  break;
    case 3: level = 5; remainingMoves = level;  break;
    default:
        gameOver = true; break;
    }
}

void WhoChooseWordLenght()
{
    int userAnswer = 0;
    int cursorPoint[2] = {0, 0};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPoint);
    cout << "We must decide who will choose the words. \n\ryou yourself will choose the complexity of the words \n" <<
        "or the program will randomly select the words.\n\r";
    cout << "1 - User chooses the length of the words. \n\r2 - The program selects words randomly. \n\r";
    cin >> userAnswer;

    ClearRows(5);

    switch (userAnswer)
    {
    case 1: autoChooseWordLenght = false; break;
    default:
        autoChooseWordLenght = true;  break;
    }
}

void Desctop() {
    // Print column names
    cout << green << blue << "Answer" << string(COLUMN_WIDTH + 1, ' ') << green << '|';
    cout << blue << "Result" << string(COLUMN_WIDTH - 0, ' ') << green << '|';
    cout << blue << "Bad Letters" << string(COLUMN_WIDTH - 7, ' ') << green << reset << '|' << "\n\r";

    for (int i = 0; i < level; i++) {
        // Print separator row
        cout << green << string(COLUMN_WIDTH + 7, '-') << '|';
        cout << string(COLUMN_WIDTH + 6, '-') << '|';
        cout << string(COLUMN_WIDTH + 5, '-') << "\n\r";
        cout << reset;

        // Print data rows
        cout << magenta << string(COLUMN_WIDTH + 7, ' ') << reset << '|';
        cout << magenta << string(COLUMN_WIDTH + 6, ' ') << reset << '|';
        cout << magenta << string(COLUMN_WIDTH + 4, ' ') << reset << '|' << "\n\r";
    }
    // Print separator row
    cout << green;
    cout << string(COLUMN_WIDTH + 7, '-') << '|';
    cout << string(COLUMN_WIDTH + 6, '-') << '|';
    cout << string(COLUMN_WIDTH + 5, '-') << "\n\r";
    cout << reset;

    /*cout << "|" << "Answer" << string(colWidth - 4, ' ') << "| Result" << string(colWidth - 5, ' ') << "| Incorrect Symbols" << "|" << "\n\r";
    for (int i = 0; i < numRows; i++) {
        cout << "|" << string(colWidth + 2, '-') << "|" << string(colWidth + 2, '-') << "|" << string(colWidth + 3, '-') << "|" << "\n\r";
        cout << "|" << string(colWidth + 2, ' ') << "|" << string(colWidth + 2, ' ') << "|" << string(colWidth + 3, ' ') << "|" << "\n\r";
    }*/
}

int random_int(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void GetDesktopResolution(int& horizontal, int& vertical)
{
    RECT desktop;
    // Get a handle to the desktop window
    const HWND hDesktop = GetDesktopWindow();
    // Get the size of screen to the variable desktop
    GetWindowRect(hDesktop, &desktop);
    // The top left corner will have coordinates (0,0)
    // and the bottom right corner will have coordinates
    // (horizontal, vertical)
    horizontal = round(desktop.right);
    vertical = round(desktop.bottom);
}

void ResetCoordinates() {
    remainingMoves = level;
    step = 11;
    win = false;
    gameOver = false;
    secretWord = "";
    answerWord = "";
}

void GetScreenSize()
{
    string cc;
    cin >> cc;
    int horizontal = 0;
    int vertical = 0;
    GetDesktopResolution(horizontal, vertical);
}

void WriteSecretWordToDesctop(string secretWord)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), titleCoord);
    cout << " Secret Word:       Moves left: " << remainingMoves;
    cout << "\n\r" << "\n\r";
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), answerCoord);
    for (int i = 0; i < secretWord.length(); i++)
    {
        cout << " * ";
    }
}

void SetGameStatus()
{
    if (remainingMoves == 0 && win != true)
    {
        string answer = "";
        gameOver = true;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), answerCoord);
        cout << secretWord << "                " << "YOU LOSE !!!";
    }

    else if (win == true)
    {
        gameOver = true;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), answerCoord);
        cout << secretWord << "           CONGRATS !!!" << "YOU WIN !!!";
    }
}

void PaintAnswerResult(int rightCount, int includeCount, string notInclude)
{

}

bool PlayAgain()
{
    bool playAgain = false;
    string answer = "";
    ClearOneRow(25);
    cout << "Play Again? 'y' OR 'n':  \n\r";
    cin >> answer;
    return answer == "y" ? true : false;
}

void GetWordLenghtFromUser()
{
    bool isNumeric = false;
    while (isNumeric == false)
    {
        int userAnswer = 0;

        ClearRows(20);

        cout << green << "Select a number from 4 inclusive 7." << "\n\r";
        cin >> userAnswer;

        if (cin.fail()) {
            ClearRows();
            break;
        }
        else if (userAnswer >= 4 && userAnswer <= 7)
        {
            wordLenght = userAnswer;
            isNumeric = true;
            ClearRows();
        }
    }
}

void ExactMatchedComparisson()
{
    int lenght = secretWord.size();

    string tempSecretWord1 = secretWord;
    string tempAnswerWord1 = answerWord;



    for (int i = lenght - 1; i >= 0; i--)
    {
        if (secretWord[i] == answerWord[i])
        {
            tempSecretWord1 = tempSecretWord1.erase(i, 1);
            tempAnswerWord1 = tempAnswerWord1.erase(i, 1);
            matchedSymbols[0] ++;
        }
    }
    int remainingLenght = tempSecretWord1.size();
    for (int i = remainingLenght - 1; i >= 0; i--)
    {
        for (int x = tempAnswerWord1.size() - 1; x >= 0; x--)
        {
            if (tempAnswerWord1[x] == tempSecretWord1[i])
            {
                tempAnswerWord1 = tempAnswerWord1.erase(x, 1);
                tempSecretWord1 = tempSecretWord1.erase(i, 1);

                matchedSymbols[1]++;
                break;
            }
        }
    }
    badSymbols = tempAnswerWord1;
}

void WordComparison()
{
    ExactMatchedComparisson();
}

void CheckAnswer()
{
    if (answerWord == "0") {
        gameOver = true;
    }
    else if (answerWord == secretWord)
    {
        win = true;
    }
    else
    {
        WordComparison();
    }
    SetGameStatus();
}

void FakeWord()
{
    for (int i = 0; i <= level; i++)
    {
        if (i < 2)
        {
            secretWord += "a";
        }
        else if (i < 3)
        {
            secretWord += "s";
        }
        else if (i < 5)
        {
            secretWord += "e";
        }
        else if (i < 7)
        {
            secretWord += "b";
        }
        else
        {
            secretWord += "n";
        }
    }
}

void GetSecretWord() {
    if (autoChooseWordLenght == true)
    {
        wordLenght = random_int(4, 7);
    }
    else
    {
        GetWordLenghtFromUser();
    }
    string* words = readWords(wordLenght);
    //FakeWord();
    int randomWord = 0;
    randomWord = random_int(1, words->size());
    secretWord = words[randomWord];
}


void PaintGame()
{
    while (gameOver == false)
    {
        if (remainingMoves == level)
        {
            GetSecretWord();

            Desctop();
        }

        WriteSecretWordToDesctop(secretWord);

        ClearOneRow(25);

        cout << "Enter the Word:  \n\r";
        cin >> answerWord;
        step++;
        remainingMoves--;

        CheckAnswer();

        ClearOneRow(26);

        if (gameOver == true)
        {
            bool answer = PlayAgain();
            if (answer == true)
            {
                ClearRows(50);
                ResetCoordinates();
            }
        }
    }
}

int main()
{
    SelectLevel();
    WhoChooseWordLenght();
    PaintGame();
//Пример использования функции
    //string* words = readWords(7);
    //cout << words[0] << endl;
}