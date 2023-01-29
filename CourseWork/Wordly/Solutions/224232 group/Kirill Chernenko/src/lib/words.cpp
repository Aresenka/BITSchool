#include <fstream>
#include "words.h"
#include <string> 
#include <iostream>
using namespace std;

ifstream openFileForWordsWithLength(int word_length) {

	ifstream fin("lib/words_" + to_string(word_length) + "_letters.csv");
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
    int linesCount = countLinesInFile(openFileForWordsWithLength(word_length));
    ifstream fin = openFileForWordsWithLength(word_length);
    string line;
    string* lines = new string[linesCount];
    for (int i = 0; i < linesCount; i++) {
        getline(fin, lines[i]);
//        cout << lines[i] << "\n";
    }

    return lines;
}