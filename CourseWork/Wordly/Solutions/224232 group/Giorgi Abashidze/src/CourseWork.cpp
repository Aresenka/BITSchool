// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <list>
#include <cmath>
#include <ctime>
#include <vector>
#include <cctype>
#include <limits.h>
#include <algorithm>
#include <filesystem>

#include <string>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include "lib/words.h"

using namespace std;

int step = 0;
const int numCols = 3;
const int numRows = 10;
const int colWidth = 15;
const int NUM_COLUMNS = 3;
const int resusltStart = 62;
const int COLUMN_WIDTH = 15;
const int usedWordStart = 20;

string pause = "";
string* words;
string level = "0";
int wordLenght = 6;

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

bool win = false;
bool gameOver = false;
bool autoChooseWordLenght = true;
int moves;
int remainingMoves;

string enteredWords[7] = {};
int correctPosition[7] = {};
int incorrectPosition[7] = {};
string badSymbols[7] = {};
int matchedSymbols[2] = { 0, 0 };

void ClearRows()
{
    system("clear");
}

void ClearOneRow()
{
    printf("\33[2K\r");
}

void Desctop() {
    // Print column names
    cout << green << "Answer" << string(COLUMN_WIDTH + 1, ' ') << '|';
    cout << "Result" << string(COLUMN_WIDTH - 0, ' ') << '|';
    cout << "Bad symbols" << string(COLUMN_WIDTH - 7, ' ') << '|' << endl;

    for (int i = 0; i < moves; i++) {
        // Print separator row
        cout << string(COLUMN_WIDTH + 7, '-') << '|';
        cout << string(COLUMN_WIDTH + 6, '-') << '|';
        cout << string(COLUMN_WIDTH + 5, '-') << endl;

        //int index = 0;
        // Print data rows
        if (enteredWords[i].size() > 3)
        {
            /*cout << correctPosition[index] << ":    " << incorrectPosition[index] << ":    " << badSymbols[index] << endl;
            cin >> index;*/

            cout << enteredWords[i] << string(COLUMN_WIDTH + 7 - enteredWords[i].size(), ' ') << '|';
            cout << correctPosition[i] << "/" << incorrectPosition[i] << string(COLUMN_WIDTH + 3, ' ') << '|';
            cout << badSymbols[i] << string(COLUMN_WIDTH + 4 - badSymbols[i].size(), ' ') << '|' << endl;
        }
        else
        {
            cout << string(COLUMN_WIDTH + 7, ' ') << '|';
            cout << string(COLUMN_WIDTH + 6, ' ') << '|';
            cout << string(COLUMN_WIDTH + 4, ' ') << '|' << endl;
        }
    }

    // Print separator row
    cout << string(COLUMN_WIDTH + 7, '-') << '|';
    cout << string(COLUMN_WIDTH + 6, '-') << '|';
    cout << string(COLUMN_WIDTH + 5, '-') << "\n\r" << reset;
}

void ResetGameParameters() {
    remainingMoves = moves;
    step = 0;
    win = false;
    gameOver = false;
    secretWord = "";
    answerWord = "";

    for (int i = 0; i < moves; i++)
    {
        enteredWords[i] = "";
        badSymbols[i] = "";
        correctPosition[i] = 0;
        incorrectPosition[i] = 0;
    }
}

bool PlayAgain()
{
    bool playAgain = false;
    string answer = "";
    ClearOneRow();
    cout << "Play Again? \n\rYes - y\n\rNo - any other symbol\n\r";
    cin >> answer;
    return answer == "y" ? true : false;
}

void WriteSelectedOptions()
{
    ClearRows();

    cout << "Selected Level: " << level << endl;
    if (autoChooseWordLenght == true) {
        cout << "Program choose word length." << endl;
    }
    else
    {
        cout << "Player choose word length." << endl;
    }
    cout << "Secret Word: " << wordLenght << " sym. " << " Moves left : " << remainingMoves << endl;
    cout << endl;



    if (gameOver == false)
    {
        for (int i = 0; i < secretWord.size() - 1; i++)
        {
            cout << " * ";
        }
    }
    else
    {
        cout << secretWord;
    }
    cout << endl;

    Desctop();

    if (remainingMoves == 0 && win != true)
    {
        string answer = "";
        gameOver = true;
        cout << "YOU LOSE !!!" << endl;
        cout << "Secret word is: " << secretWord;
    }
    else if (win == true)
    {
        gameOver = true;
        cout << "CONGRATS !!!" << "YOU WIN !!!" << endl;
        cout << "Secret word is: " << secretWord;
    }
}

void SelectLevel()
{
    ClearRows();
    int userLevelAnswer;
    cout << reset << "SELECT GAME LEVEL:\n\rEasy (7 turn) - 1\n\rMedium (6 turn)- 2\n\rHard (5 turn)- 3\n\rFor exit - any other symbol" << endl;
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
    else if (userAnswer == 2)
    {
        autoChooseWordLenght = true;
    }
    else
    {
        exit(0);
    }
    ClearRows();
}

int random_int(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void GetWordLenghtFromUser()
{
    bool isNumeric = false;
    int userAnswer = 1;
    int numberRead = 0;
    do
    {
        ClearRows();
        cout << "enter a number from 4 inclusive 7." << "\n\r";
        numberRead = scanf("%d", &userAnswer);
        while (numberRead != 1)
        {
            cout << "That is not a number!!!" << endl;
            scanf("%*[^\n]");
            cout << "enter a number from 4 inclusive 7." << "\n\r";
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
            }
        }
    }

    correctPosition[step] = matchedSymbols[0];
    incorrectPosition[step] = matchedSymbols[1];
    badSymbols[step] = tempAnswerWord1;

    matchedSymbols[0] = 0;
    matchedSymbols[1] = 0;
}

void WordComparison()
{
    ExactMatchedComparisson();
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
    words = readWords(wordLenght);
    int randomWordIndex = 0;
    int length = countLinesInFile(openFileForWordsWithLenght(wordLenght));
    randomWordIndex = random_int(0, length - 1);
    secretWord = words[randomWordIndex];
    

    // this code need to know what is *words lenght, what is randomWordIndex and what is SecretWord. uncoment it, if you need to kwno it.

    /*
    cout << length << endl;
    cin >> pause;

    cout << randomWordIndex << endl;
    cin >> pause;

    cout << secretWord << endl;
    cin >> pause;
    */
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
    int length = countLinesInFile(openFileForWordsWithLenght(wordLenght));
    for (int i = 0; i < length; i++)
    {
        //cout << words[i] << endl;
        if (answerWord == words[i].substr(0, words[i].size() - 1))
        {
            isValidForLibrary = true;
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
            cout << "Invalid word." << endl;
            //cout << "your word: " << answerWord << endl;
        }
    }
    else
    {
        cout << "Incorrect length of word" << endl;
        //cout << "your word length: " << answerWord.size() << ". secret word length: " << secretWord.size()-1  << endl;
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
        }

        bool wordIsValid = false;
        do
        {
            cout << "Enter the Word:  \n\r";
            cin >> answerWord;
            //cout << "You Enter - " << answerWord << ", Word length: " << answerWord.size() << endl;
            //cout << "Secret Word length: " << secretWord.size()-1 << endl;
            wordIsValid = ValidateWord();
            if (wordIsValid == true)
            {
                enteredWords[step] = answerWord;
                remainingMoves--;
                WordComparison();
                int index = moves - remainingMoves;
                step++;
                if (answerWord == secretWord.substr(0, secretWord.size() - 1))
                {
                    gameOver = true;
                    win = true;
                    WriteSelectedOptions();
                }
                else if (remainingMoves == 0)
                {
                    gameOver = true;
                    win = false;
                    WriteSelectedOptions();
                }
                else
                {
                    WriteSelectedOptions();
                }
                if (gameOver == true)
                {
                    bool answer = PlayAgain();
                    if (answer == true)
                    {
                        ClearRows();
                        ResetGameParameters();
                        gameOver = false;
                    }
                }
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
}
