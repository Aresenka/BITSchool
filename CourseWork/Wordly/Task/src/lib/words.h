#pragma once
#include <iostream>
#include <fstream>
using namespace std;

ifstream openFileForWordsWithLenght(int word_lenght);

int countLinesInFile(ifstream file);

string* readWords(int word_length);