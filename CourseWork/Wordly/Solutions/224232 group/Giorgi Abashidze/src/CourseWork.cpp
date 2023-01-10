// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <list>
#include <cmath>
#include <ctime>
#include <vector>
#include <cctype>
#include <fstream>
//#include <conio.h>
//#include "wtypes.h"
#include <limits.h>
#include <algorithm>
#include <filesystem>

#include <string>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include "lib/words.h"

using namespace std;

//HANDLE  hConsole;

int step = 11;
const int numCols = 3;
const int numRows = 10;
const int colWidth = 15;
const int NUM_COLUMNS = 3;
const int resusltStart = 62;
const int COLUMN_WIDTH = 15;
const int usedWordStart = 20;

string* words;
string level = "0";
int wordLenght = 6;

const int titleCoord[2] = {0,  20};
const int answerCoord[2] = { 0,  21 };
const int usedWordTitleCoordinates[2] = { usedWordStart , step - 1 };

const string reset = "\033[0m"; // ANSI escape code to reset formatting
const string green = "\033[32m"; // ANSI escape code for green text
const string yellow = "\033[33m"; // ANSI escape code for yellow text
const string magenta = "\033[45m"; // ANSI escape code for magenta background

const string red = "\033[1;41m";
const string Blue = "\033[1;34m";
const string blue = "\033[1;44m";
const string cyan = "\033[1;36m";
const string white = "\033[1;37m";
const string black = "\033[1;40m";
const string Green = "\033[1;42m";
const string Yellow = "\033[1;43m";
const string Magenta = "\033[1;45m";

string fileName;
string secretWord = "";
string answerWord = "";
string badSymbols = "";
int matchedSymbols[2] = { 0, 0 };

bool win = false;
bool gameOver = false;
bool autoChooseWordLenght = true;
int moves;
int remainingMoves;
int answerResultTitleCoordinates[2] = { resusltStart, step - 1 };



void ClearRows()
{
    system("clear");
}

void ClearOneRow(int row)
{
    printf("\33[2K\r");
}

void WriteSelectedOptions() 
{
    cout << "Selected Level: " << level << endl;
    if (autoChooseWordLenght == true) {
        cout << "Program choose word length." << endl;
    }
    else
    {
        cout << "Player choose word length." << endl;
    }
    cout << "Secret Word: " << wordLenght << " sym. " << " Moves left : " << remainingMoves  << endl;
    cout << endl;
    if (gameOver == false)
    {
        for (int i = 0; i < secretWord.length(); i++)
        {
            cout << " * ";
        }
    }
    cout << endl;
}

void SelectLevel() 
{
    ClearRows();
    int userLevelAnswer;
    cout << reset << "SELECT GAME LEVEL:\n\rEasy - 1\n\rMedium - 2\n\rHard - 3\n\rFor exit - any other symbol" << endl;
    cin >> userLevelAnswer;

    if (userLevelAnswer == 1)
    {
        level = "Easy";
        moves = 7;
    }
    else if (userLevelAnswer == 2)
    {
        level = "Medium";
        moves = 6;
    }
    else if (userLevelAnswer == 3)
    {
        level = "Hard";
        moves = 5;
    }
    else
    {
        exit(0);
    }
    remainingMoves = moves;
    ClearRows();
}

void WhoChooseWordLenght()
{
    ClearRows();
    int userAnswer;
    cout << "Who will choose the length of the words?\n\rplayer - 1\n\rprogram (random choice of word length) - 2\n\rFor exit - any other symbol" << endl;
    cin >> userAnswer;
    if (userAnswer == 1)
    {
        autoChooseWordLenght = false;
    }
    else if(userAnswer == 2)
    {
        autoChooseWordLenght = true;
    }
    else
    {
        exit(0);
    }
    ClearRows();
}

void Desctop() {

    // Print column names
    cout << green << "Answer" << string(COLUMN_WIDTH + 1, ' ')  << '|';
    cout  << "Result" << string(COLUMN_WIDTH - 0, ' ')  << '|';
    cout  << "Bad symbols" << string(COLUMN_WIDTH - 7, ' ')  << '|' << endl;

    for (int i = 0; i < wordLenght; i++) {
        // Print separator row
        cout << string(COLUMN_WIDTH + 7, '-') << '|';
        cout << string(COLUMN_WIDTH + 6, '-') << '|';
        cout << string(COLUMN_WIDTH + 5, '-') << endl;


        // Print data rows
        cout << string(COLUMN_WIDTH + 7, ' ') << '|';
        cout << string(COLUMN_WIDTH + 6, ' ') << '|';
        cout << string(COLUMN_WIDTH + 4, ' ') << '|' << endl;
    }
    // Print separator row

    cout << string(COLUMN_WIDTH + 7, '-') << '|';
    cout << string(COLUMN_WIDTH + 6, '-') << '|';
    cout << string(COLUMN_WIDTH + 5, '-') << "\n\r";


    /*cout << "|" << "Answer" << string(colWidth - 4, ' ') << "| Result" << string(colWidth - 5, ' ') << "| Incorrect Symbols" << "|" << "\n\r";
    for (int i = 0; i < numRows; i++) {
        cout << "|" << string(colWidth + 2, '-') << "|" << string(colWidth + 2, '-') << "|" << string(colWidth + 3, '-') << "|" << "\n\r";
        cout << "|" << string(colWidth + 2, ' ') << "|" << string(colWidth + 2, ' ') << "|" << string(colWidth + 3, ' ') << "|" << "\n\r";
    }
    */
}

int random_int(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void ResetGameParameters() {
    remainingMoves = moves;
    step = 11;
    win = false;
    gameOver = false;
    secretWord = "";
    answerWord = "";
}

void WriteSecretWordToDesctop(string secretWord)
{
    
}

/*
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
*/
void GetWordLenghtFromUser()
{
    bool isNumeric = false;
    int userAnswer = 1;
    int numberRead = 0;
    do
    {
        ClearRows();
        cout  << "enter a number from 4 inclusive 7." << "\n\r";
        numberRead = scanf("%d", &userAnswer);
        while (numberRead != 1)
        {
            cout << "That is not a number!!!" << endl;
            scanf("%*[^\n]");
            cout  << "enter a number from 4 inclusive 7." << "\n\r";
            numberRead = scanf("%d", &userAnswer);
        }
        if (userAnswer >= 4 && userAnswer <= 7)
        {
            wordLenght = userAnswer;
            isNumeric = true;
        }
        
    } while (isNumeric == false);
    ClearRows();
}
/*
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
*/
/*
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
*/

void GetSecretWord() {
    if (autoChooseWordLenght == true)
    {
        wordLenght = random_int(4, 7);
    }
    else
    {
        GetWordLenghtFromUser();
    }
    words = readWords(6);
    int randomWord = 0;
    randomWord = random_int(0, words->size()-1);
    secretWord = words[randomWord];

    for (int i = 0; i < words->size(); i++)
    {
        cout << words[i] << endl;
    }
    cin >> wordLenght;
}

bool CheckWordLength()
{
    bool isValidLength = false;
    if (answerWord.size() == wordLenght)
    {
        isValidLength = true;
    }
    return isValidLength;
}

bool CheckLibraryForWord()
{
    bool isValidForLibrary = false;
    for (int i = 0; i < words->size(); i++) 
    {
        cout << words[i] << endl;
        if (answerWord == words[i])
        {
            isValidForLibrary = true;
            break;
        }
    }
    return isValidForLibrary;
}


bool ValidateWord()
{
    bool isValid = false;
    bool isValidLength = false;
    bool isValidForLibrary = false;
    isValidLength = CheckWordLength();
    if (isValidLength == true) {
        isValidForLibrary = CheckLibraryForWord();
        if (isValidForLibrary == true)
        {
            isValid = true;
        }
        else
        {
            cout << "No word in library" << endl;
            cout << "your word: " << answerWord << ".    secret word: " << secretWord << endl;
        }
    }
    else
    {
        cout << "Incorrect length of word" << endl;
        cout << "your word length: " << answerWord.size() << ".    secret word length: " << secretWord.size() << endl;
    }
    return isValid;
}

void PaintGame()
{
    while (gameOver == false)
    {
        if (remainingMoves == moves)
        {
            GetSecretWord();
            WriteSelectedOptions();
            Desctop();
        }
        /*
        WriteSecretWordToDesctop(secretWord);

        ClearOneRow();
        */

       
        bool wordIsValid = false;
        do
        {
            cout << "Enter the Word:  \n\r";
            cin >> answerWord;
            wordIsValid = ValidateWord();
            if (wordIsValid == true)
            {
                step++;
                remainingMoves--;
                /*
                CheckAnswer();

                ClearOneRow(26);

                if (gameOver == true)
                {
                    bool answer = PlayAgain();
                    if (answer == true)
                    {
                        ClearRows();
                        ResetCoordinates();
                    }
                }
                */
            }
            else
            {
                cout << "Enter valid word. \n\r";
            }
        } while (wordIsValid != true);
       

       
    }
}

void ChoosedAction() 
{
    SelectLevel();
    WhoChooseWordLenght();
}

int main()
{
    ChoosedAction();
    PaintGame();
//Пример использования функции
    //string* words = readWords(7);
    //cout << words[0] << endl;
    
}