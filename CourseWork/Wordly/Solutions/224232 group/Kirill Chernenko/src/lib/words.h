#pragma once
#include <iostream>
#include <fstream>
using namespace std;

ifstream openFileForWordsWithLength(int word_length);

int countLinesInFile(ifstream file);

string* readWords(int word_length);