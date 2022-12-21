#include <fstream>
#include "words.h"
#include <string> 
#include <iostream>
using namespace std;

ifstream openFileForWordsWithLenght(int word_lenght) {
	ifstream fin("words_" + to_string(word_lenght) + "_letters.csv");
    return fin;
}

int countLinesInFile(ifstream file) {
    int number_of_lines = 0;
    string line;

    while (getline(file, line))
        ++number_of_lines;

    return number_of_lines;
}

string* readWords(int word_length) {
    int linesCount = countLinesInFile(openFileForWordsWithLenght(word_length));
    ifstream fin = openFileForWordsWithLenght(word_length);
    string line;
    string* lines = new string[linesCount];
    for (int i = 0; i < linesCount; i++) {
        getline(fin, lines[i]);
    }

    return lines;
}