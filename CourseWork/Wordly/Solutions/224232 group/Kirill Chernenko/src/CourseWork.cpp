#include <iostream>
#include <fstream>
#include <cmath>
#include "lib/words.h"

using namespace std;

const int MIN_WORD_LENGTH_ASCII = 52;
const int MAX_WORD_LENGTH_ASCII = 55;
const int ALPHABET_START_UPPER = 65;
const int ALPHABET_END_UPPER = 90;
const int ALPHABET_START_LOWER = 97;
const int ALPHABET_END_LOWER = 122;
const float MAX_TRIES_COEFF = 1.5;
const char PLACEHOLDER = '_';

int wordsCount;
int wordLength;

int charToInt(char charToConvert) {
    if (charToConvert >= MIN_WORD_LENGTH_ASCII && charToConvert <= MAX_WORD_LENGTH_ASCII)
        return int(charToConvert) - 48;
    else
        return int(charToConvert);
}

void getWordLength() {
    string input;
    cout << "    Enter the word length in range 4-7..." << endl;

    while (true) {
        getline(cin,input);

        if (input.length() > 1 || input[0] > MAX_WORD_LENGTH_ASCII || input[0] < MIN_WORD_LENGTH_ASCII)
            cout << "    Wrong value! Enter the number in range from 4 to 7" << endl;
        else
        {
            wordLength = charToInt(input[0]);
            break;
        }
    }
}

string getRandomWord(string* allWords) {
    srand(time(0));
    int randomIndex = rand() % wordsCount;

    return allWords[randomIndex];
}

bool validateGuess(string userWord) {
    if (userWord.length() != wordLength)
        return false;

    for (int i = 0; i < userWord.length(); i++) {
        char mustBeLetter = userWord[i];
        if((mustBeLetter < ALPHABET_START_UPPER || mustBeLetter > ALPHABET_END_UPPER) &&
           (mustBeLetter < ALPHABET_START_LOWER || mustBeLetter > ALPHABET_END_LOWER))
            return false;
    }

    return true;
}

bool wordInDictionary(string userWord, string* allWords) {
    for (int i = 0; i <= wordsCount; i++) {
        if (allWords[i] == userWord)
            return true;
    }

    return false;
}

string stringToLower(string stringToChange) {
    for (int i = 0; i < stringToChange.length(); i++) {
        char letter = stringToChange[i];
        if (letter >= ALPHABET_START_UPPER && letter <= ALPHABET_END_UPPER)
            stringToChange[i] = letter + 32;
    }

    return stringToChange;
}

string getGuess(string* allWords) {
    string userGuess;
    while (true) {
        cout << "    Enter your guess..." << endl;
        getline(cin,userGuess);

        if (!validateGuess(userGuess))
            cout << "    You entered a wrong word! Word must be " << wordLength << " letters long and contain letters only!" << endl;
        else if (!wordInDictionary(userGuess, allWords))
            cout << "    You entered a nonexistent word! Don't cheat!" << endl;
        else
            return stringToLower(userGuess);
    }
}

bool isCharWrong(char charToFilter, char (&charsToGuess)[]) {
    for (int j = 0; j < wordLength; j++) {
        char charToCompare = charsToGuess[j];

        if (charToFilter == charToCompare) {
            charsToGuess[j] = PLACEHOLDER;

            return false;
        }
    }

    return true;
}

void filterWrongPlacedChars(char (&wrongPlacedChars)[], char (&charsToGuess)[]) {
    for (int i = 0; i < wordLength; i++) {
        char charToFilter = wrongPlacedChars[i];

        if (charToFilter != PLACEHOLDER && isCharWrong(charToFilter, charsToGuess))
            wrongPlacedChars[i] = PLACEHOLDER;
    }
}

string getHiddenWord(char guessedCharsArray[]) {
    string hiddenWord;

    for (int i = 0; i < wordLength; i++) {
        hiddenWord += guessedCharsArray[i];
        hiddenWord += ' ';
    }

    return hiddenWord;
}
bool wrongPlacedCharsFound(char chars[]) {
    for (int i = 0; i < wordLength; i++) {
        if (chars[i] != PLACEHOLDER)
            return true;
    }

    return false;
}

string formatWrongPlacedLetters(char chars[]) {
    string result;

    for(int i = 0; i < wordLength; i++) {
        if (chars[i] != PLACEHOLDER) {
            result += chars[i];
            result += ", ";
        }
    }

    return result.substr(0,result.length() - 2);
}

bool checkGuess(string guess, string randomWord) {
    int guessedCharsCount = 0;
    char charsToGuess[wordLength];
    char guessedChars[wordLength];
    char wrongPlacedChars[wordLength];

    strcpy(charsToGuess, randomWord.c_str());

    for (int i = 0; i < wordLength; i++) {
        if (randomWord[i] == guess[i]) {
            guessedChars[i] = randomWord[i];
            charsToGuess[i] = PLACEHOLDER;
            wrongPlacedChars[i] = PLACEHOLDER;
            guessedCharsCount++;
        } else {
            guessedChars[i] = PLACEHOLDER;
            wrongPlacedChars[i] = guess[i];
        }
    }

    if (guessedCharsCount == wordLength)
        return true;

    filterWrongPlacedChars(wrongPlacedChars, charsToGuess);

    cout << "    You guessed " << guessedCharsCount << " letters: " << getHiddenWord(guessedChars) << endl;

    if (wrongPlacedCharsFound(wrongPlacedChars))
        cout << "    These letters are in word but on the other places: " << formatWrongPlacedLetters(wrongPlacedChars) << endl;

    return false;
}

void playGame() {
    string* allWords = readWords(wordLength);
    string randomWord = getRandomWord(allWords);
    int tries = ceil(wordLength * MAX_TRIES_COEFF);

    cout << "    I am thinking about... " << wordLength << " letters long word! Guess what word I riddled?" << endl;

    for (tries; tries > 0; tries--) {
        string guess = getGuess(allWords);
        bool wordGuessed = checkGuess(guess, randomWord);

        if (wordGuessed) {
            cout << "    YOU WON! The word was: " << randomWord << endl;
            return;
        }
    }

    cout << "    YOU LOSE! Word was: " << randomWord << endl;
}

int main()
{
    getWordLength();
    wordsCount = countLinesInFile(openFileForWordsWithLength(wordLength)) - 1;
    playGame();
}
