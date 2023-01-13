// CourseWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "lib/words.h"
using namespace std;
#include <chrono>
#include <thread>

void wait(float seconds)
{
	clock_t endwait;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait) {}
}
int main()
{
	const int word_length[] = { 7186,15920,29874,41998 };
	int letters_count, words_count;
	string entered_word, initial_word;
	string a1, b1, c1, d1, e1, f1, g1;
	string a2, b2, c2, d2, e2, f2, g2;
	string a3, b3, c3, d3, e3, f3, g3;
	string a4, b4, c4, d4, e4, f4, g4;
	string a5, b5, c5, d5, e5, f5, g5;
	string a6, b6, c6, d6, e6, f6, g6;
	string a7, b7, c7, d7, e7, f7, g7;
	string a8, b8, c8, d8, e8, f8, g8;
	string a9, b9, c9, d9, e9, f9, g9;
	string a10, b10, c10, d10, e10, f10, g10;
	int l1, l2, l3, l4, l1_2, l1_3, l1_4, l2_3, l2_4, l3_4, l1_2_3, l2_3_4, l1_2_3_4, l1_2_3_4w;
	const string red("\033[0;31m");
	const string cyan("\033[0;36m");
	const string yellow("\033[1;33m");
	const string reset("\033[0m");
	srand(time(0));
	

 	wait(1);
 	cout << "\t\t\t\t\t" << string(32, '=') << endl;
 	//cout << "\t\t\t\t\t|| Giorgi Lomtatidze Presents ||" << endl;
 	cout << "\t\t\t\t\t |" << flush;
 	wait(0.1);
 	cout << "|" << flush;
 	wait(0.1);
 	cout << "G" << flush;
 	wait(0.1);
 	cout << "i" << flush;
 	wait(0.1);
 	cout << "o" << flush;
 	wait(0.1);
 	cout << "r" << flush;
 	wait(0.1);
 	cout << "g" << flush;
 	wait(0.1);
 	cout << "i" << flush;
 	wait(0.1);
 	cout << " " << flush;
 	wait(0.1);
 	cout << "L" << flush;
 	wait(0.1);
 	cout << "o" << flush;
 	wait(0.1);
 	cout << "m" << flush;
 	wait(0.1);
 	cout << "t" << flush;
 	wait(0.1);
 	cout << "a" << flush;
 	wait(0.1);
 	cout << "t" << flush;
 	wait(0.1);
 	cout << "i" << flush;
 	wait(0.1);
 	cout << "d" << flush;
 	wait(0.1);
 	cout << "z" << flush;
 	wait(0.1);
 	cout << "e" << flush;
 	wait(0.1);
 	cout << " " << flush;
 	wait(0.1);
 	cout << "P" << flush;
 	wait(0.1);
 	cout << "r" << flush;
 	wait(0.1);
 	cout << "e" << flush;
 	wait(0.1);
 	cout << "s" << flush;
 	wait(0.1);
 	cout << "e" << flush;
 	wait(0.1);
 	cout << "n" << flush;
 	wait(0.1);
 	cout << "t" << flush;
 	wait(0.1);
 	cout << "s" << flush;
 	wait(0.1);
 	cout << "|" << flush;
 	wait(0.1);
 	cout << "|" << flush;
 	wait(0.1);


 	cout << "\n\t\t\t\t\t" << string(32, '=') << endl;
 	wait(1.5);

 	cout << "\t\t\t\t     << In " << flush;
 	wait(0.5);
 	cout << "Colloboration " << flush;
 	wait(0.5);
 	cout << "With " << flush;
 	wait(0.5);
 	cout << "BITSchool >>" << flush;
 	wait(0.5);

 	cout << "\n\t\t\t\t       " << string(34, '=') << endl;
 	wait(3);
 	cout << " " << endl;
 	this_thread::sleep_for(chrono::milliseconds(2000) );
 	cout << "\t\t      **       **    *******    *******    *******    **        ********" << endl;
 	wait(0.1);
 	cout << "\t\t     /**      /**   **/////**  /**////**  /**////**  /**       /**///// " << endl;
 	wait(0.1);
 	cout << "\t\t     /**   *  /**  **     //** /**   /**  /**    /** /**       /**      " << endl;
 	wait(0.1);
 	cout << "\t\t     /**  *** /** /**      /** /*******   /**    /** /**       /******* " << endl;
 	wait(0.1);
 	cout << "\t\t     /** **/**/** /**      /** /**///**   /**    /** /**       /**////  " << endl;
 	wait(0.1);
 	cout << "\t\t     /**** //**** //**     **  /**  //**  /**    **  /**       /**      " << endl;
 	wait(0.1);
 	cout << "\t\t     /**/   ///**  //*******   /**   //** /*******   /******** /********" << endl;
 	wait(0.1);
 	cout << "\t\t     //       //    ///////    //     //  ///////    ////////  //////// " << endl;
 	wait(2);

	cout << " " << endl;

start:
	cout << "+=======================================================================================================+\n";
	cout << "|    Game Rules       |    You must guess the word from the number of letters you choose from 4 to 7    |\n";
	cout << "+=======================================================================================================+\n";
	cout << "|    Game Commands    |  Press 0 - Exit Game  |  1 - Restart Session  |  2 - Restart Game  |  9 - Hint  | \n";
	cout << "+=======================================================================================================+\n";




	 	wait(1);
	 	cout << "L" << flush;
	 	wait(0.1);
	 	cout << "o" << flush;
	 	wait(0.1);
	 	cout << "a" << flush;
	 	wait(0.1);
	 	cout << "d" << flush;
	 	wait(0.1);
	 	cout << "i" << flush;
	 	wait(0.1);
	 	cout << "n" << flush;
	 	wait(0.1);
	 	cout << "g" << flush;
	 	wait(0.1);
	 	cout << " " << flush;
	 	wait(0.1);
	 	cout << "G" << flush;
	 	wait(0.1);
	 	cout << "a" << flush;
	 	wait(0.1);
	 	cout << "m" << flush;
	 	wait(0.1);
	 	cout << "e" << flush;
	 	wait(2);
	 	cout << ("\r");
	 	cout << "Loading Gam " << flush;
	 	wait(0.1);
	 	cout << ("\r");
	 	cout << "Loading Ga  " << flush;
	 	wait(0.1);
	 	cout << ("\r");
	 	cout << "Loading G   " << flush;
	 	wait(0.1);
	 	cout << ("\r");
	 	cout << "Loading     " << flush;
	 	wait(0.1);
	 	cout << ("\r");
	 	cout << "Loadin      " << flush;
	 	wait(0.1);
	 	cout << ("\r");
	 	cout << "Loadi       " << flush;
	 	wait(0.1);
	 	cout << ("\r");
	 	cout << "Load        " << flush;
	 	wait(0.1);
	 	cout << ("\r");
	 	cout << "Loa         " << flush;
	 	wait(0.1);
	 	cout << ("\r");
	 	cout << "Lo          " << flush;
	 	wait(0.1);
	 	cout << ("\r");
	 	cout << "L           " << flush;
	 	wait(0.1);
	 	cout << ("\r");


	cout << string(82, '-') << endl;
	cout << "|| Choose the number of letters in the word (from 4 to 7) that you will guess : ||" << endl;
	cout << string(82, '-') << endl;
	cin >> letters_count;

	while (letters_count < 4 || letters_count > 7)
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			cout << "+" << string(42, '-') << "+" << endl;
			cout << "| Enter correct letters number from 4 to 7 |" << endl;
			cout << "+" << string(42, '-') << "+" << endl;
			cin >> letters_count;
			system("clear");
		}
	}


	string* words = readWords(letters_count);
	words_count = (letters_count - 4);
	initial_word = (words[rand() % word_length[words_count]]);
	initial_word.resize(letters_count);
	system("clear");

	for (int life = 10; life > 0;)
	{

		if (life >= 10)
		{
			cout << "+" << string(33, '-') << "+" << endl;
			cout << "| ***You have " << life << " attempts left*** |" << endl;
			cout << "| ---Enter your " << letters_count << " digits word---  |" << endl;
			cout << "+" << string(33, '-') << "+" << endl;
			cin >> entered_word;
		}
		else
		{
			cout << "+" << string(33, '-') << "+" << endl;
			cout << "| ***You have 0" << life << " attempts left*** |" << endl;
			cout << "| ---Enter your " << letters_count << " digits word---  |" << endl;
			cout << "+" << string(33, '-') << "+" << endl;
			cin >> entered_word;
		}



		if (entered_word[0] == '2')
		{
			cout << "\r" << flush;
			cout << "Restarting The Game" << flush;
			this_thread::sleep_for(chrono::milliseconds(300));
			cout << ("\r");
			cout << "                   " << flush;
			this_thread::sleep_for(chrono::milliseconds(300));
			cout << ("\r");
			cout << "Restarting The Game" << flush;
			this_thread::sleep_for(chrono::milliseconds(300));
			cout << ("\r");
			cout << "                   " << flush;
			this_thread::sleep_for(chrono::milliseconds(300));
			cout << ("\r");
			cout << "Restarting The Game\r" << flush;
			cout << "                   " << flush << "\r";
			system("clear");
			goto start;
		}



		if (entered_word[0] == '0')
		{
			cout << "Quitting The Game" << flush;
			wait(0.7);
			cout << ("\r");
			cout << "                 " << flush;
			wait(0.7);
			cout << ("\r");
			cout << "Quitting The Game" << flush;
			wait(0.7);
			cout << ("\r");
			cout << "                 " << flush;
			wait(0.7);
			cout << ("\r");
			cout << "Quitting The Game" << flush;
			wait(0.7);
			cout << ("\r");
			cout << "                 " << flush;
			cout << ("\r");
			return 0;
		}


		if (entered_word[0] == '1')
		{
			cout << "\r" << flush;
			cout << "Restarting The Game Session" << flush;
			wait(0.3);
			cout << ("\r");
			cout << "                           " << flush;
			wait(0.3);
			cout << ("\r");
			cout << "Restarting The Game Session" << flush;
			wait(0.3);
			cout << ("\r");
			cout << "                           " << flush;
			wait(0.3);
			cout << ("\r");
			cout << "Restarting The Game Session\r" << flush;
			cout << "                           " << flush << "\r";

			cout << "+" << string(33, '-') << "+" << endl;
			cout << "|\tNew Word Generated!\t  |" << endl;
			cout << "+" << string(33, '-') << "+" << endl;
			initial_word = (words[rand() % word_length[words_count]]);
		
			life = 10;
		}


		int initialresize = initial_word.length();
		for (int r = 0; r < initialresize; r++)
		{
			if (initial_word[r] >= 97 && initial_word[r] <= 122)
				initial_word[r] = toupper(initial_word[r]);
		}


		int len = entered_word.length();
		for (int x = 0; x < len; x++)
		{
			if (entered_word[x] >= 97 && entered_word[x] <= 122)
				entered_word[x] = toupper(entered_word[x]);
		}


		if (entered_word[0] == '9')
		{
			cout << R"(Do you want to use hint? Press "9" again to use hint or any key for cancel)" << '\n';
			cin >> entered_word;
			while (entered_word[0] != '9')
			{
				cout << R"(Press "9" for Yes or any for No)" << '\n';
				cin >> entered_word;
			}
		}
		else
		{
			int dif = entered_word.length();
			for (int k = 0; k < dif; k++)
				if (entered_word[0] != '1')
					if (entered_word[k] < 65 || entered_word[k] >122)
					{
						cout << "You entered incorrect symbol, please use only English alphabet" << endl;
						break;
					}
		}

		

		if (entered_word[0] != '1')
			if (entered_word[0] != '9')
			if (((entered_word.length() != initial_word.length())))
			{
				cout << "You entered incorrect number of letters, " << entered_word.length() << " instead of " << letters_count << endl;
			}

		

		if ((isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])))
			if (entered_word.length() == letters_count)
				if (letters_count == 4)
				{
					system("clear");

					if (entered_word[0] == initial_word[0])  // letter 1
						l1 = 1;

					if (entered_word[1] == initial_word[1])  // letter 2
						l2 = 1;

					if (entered_word[2] == initial_word[2])  // letter 3
						l3 = 1;

					if (entered_word[3] == initial_word[3])  // letter 4
						l4 = 1;


					if ((l1 == 1) && (l2 != 1) && (l3 != 1) && (l4 != 1)) // Letter 1 print
					{
						cout << red << " _" << reset << "   _   _   _" << endl;
						cout << red << "|" << initial_word[0] << "|" << reset << "-|" << "?" << "|-|" << "?" << "|-|" << "?" << "|" << endl;
						cout << red << " ¯" << reset << "   ¯   ¯   ¯" << endl;
					}

					if ((l2 == 1) && (l1 != 1) && (l3 != 1) && (l4 != 1))  // Letter 2 print
					{
						cout << " _   " << red << "_" << reset << "   _   _" << endl;
						cout << "|" << "?" << "|-" << red << "|" << initial_word[1] << "|" << reset << "-|" << "?" << "|-|" << "?" << "|" << endl;
						cout << " ¯" << red << "   ¯" << reset << "   ¯   ¯" << endl;
					}

					if ((l1 != 1) && (l2 != 1) && (l3 == 1) && (l4 != 1)) // Letter 3 print
					{
						cout << " _   _   " << red << "_" << reset << "   _" << endl;
						cout << "|" << "?" << "|-|" << "?" << "|-" << red << "|" << initial_word[2] << "|" << reset << "-|" << "?" << "|" << endl;
						cout << " ¯   ¯   " << red << "¯" << reset << "   ¯" << endl;
					}

					if ((l1 != 1) && (l2 != 1) && (l3 != 1) && (l4 == 1)) // Letter 4 print
					{
						cout << " _   _   _   " << red << "_" << reset << endl;
						cout << "|" << "?" << "|-|" << "?" << "|-|" << "?" << "|-" << red << "|" << initial_word[3] << "|" << reset << endl;
						cout << " ¯   ¯   ¯   " << red << "¯" << reset << endl;
					}


					if ((l1 == 1) && (l2 == 1) && (l3 != 1) && (l4 != 1)) // Letter 1;2 print
					{
						cout << red << " _   _" << reset << "   _   _" << endl;
						cout << red << "|" << initial_word[0] << "|-|" << initial_word[1] << "|" << reset << "-|" << "?" << "|-|" << "?" << "|" << endl;
						cout << red << " ¯   ¯" << reset << "   ¯   ¯" << endl;
					}

					if ((l1 == 1) && (l2 != 1) && (l3 == 1) && (l4 != 1))  // Letter 1;3 print
					{
						cout << red << " _" << reset << "   _   " << red << "_" << reset << "   _" << endl;
						cout << red << "|" << initial_word[0] << "|" << reset << "-|" << "?" << "|-" << red << "|" << initial_word[2] << "|" << reset << "-|" << "?" << "|" << endl;
						cout << red << " ¯" << reset << "   ¯   " << red << "¯" << reset << "   ¯" << endl;
					}

					if ((l1 == 1) && (l2 != 1) && (l3 != 1) && (l4 == 1))  // Letter 1;4 print
					{
						cout << red << " _" << reset << "   _   _   " << red << "_" << reset << endl;
						cout << red << "|" << initial_word[0] << "|" << reset << "-|" << "?" << "|-|" << "?" << "|-" << red << "|" << initial_word[3] << "|" << reset << endl;
						cout << red << " ¯" << reset << "   ¯   ¯   " << red << "¯" << reset << endl;
					}


					if ((l1 == 1) && (l2 == 1) && (l3 == 1) && (l4 != 1))  // Letter 1;2;3 print
					{
						cout << red << " _   _   _" << reset << "   _" << endl;
						cout << red << "|" << initial_word[0] << "|-|" << initial_word[1] << "|-|" << initial_word[2] << "|" << reset << "-|" << "?" << "|" << endl;
						cout << red << " ¯   ¯   ¯" << reset << "   ¯" << endl;
					}


					if ((l1 == 1) && (l2 == 1) && (l3 != 1) && (l4 == 1))  // Letter 1;2;4 print
					{
						cout << red << " _   _" << reset << "   _   " << red << "_" << reset << endl;
						cout << red << "|" << initial_word[0] << "|-|" << initial_word[1] << "|" << reset << "-|" << "?" << "|-" << red << "|" << initial_word[3] << "|" << reset << endl;
						cout << red << " ¯   ¯" << reset << "   ¯   " << red << "¯" << reset << endl;
					}


					if ((l1 == 1) && (l2 == 1) && (l3 == 1) && (l4 == 1)) // Letter 1;2;3;4 print
					{
						cout << red << " _   _   _   _" << reset << endl;
						cout << red << "|" << initial_word[0] << "|-|" << initial_word[1] << "|-|" << initial_word[2] << "|-|" << initial_word[3] << "|" << reset << endl;
						cout << red << " ¯   ¯   ¯   ¯" << reset << endl;
					}

					if ((l1 != 1) && (l2 == 1) && (l3 == 1) && (l4 != 1)) // Letter 2;3 print
					{
						cout << " _   " << red << "_   _" << reset << "   _" << endl;
						cout << "|" << "?" << "|-" << red << "|" << initial_word[1] << "|-|" << initial_word[2] << "|" << reset << "-|" << "?" << "|" << endl;
						cout << " ¯   " << red << "¯   ¯" << reset << "   ¯" << endl;
					}

					if ((l1 != 1) && (l2 == 1) && (l3 != 1) && (l4 == 1))  // Letter 2;4 print
					{
						cout << " _   " << red << "_" << reset << "   _   " << red << "_" << reset << endl;
						cout << "|" << "?" << "|-" << red << "|" << initial_word[1] << "|" << reset << "-|" << "?" << "|-" << red << "|" << initial_word[3] << "|" << reset << endl;
						cout << " ¯   " << red << "¯" << reset << "   ¯   " << red << "¯" << reset << endl;
					}

					if ((l1 != 1) && (l2 != 1) && (l3 == 1) && (l4 == 1))  // Letter 3;4 print
					{
						cout << " _   _   " << red << "_   _" << reset << endl;
						cout << "|" << "?" << "|-|" << "?" << "|-" << red << "|" << initial_word[2] << "|-|" << initial_word[3] << "|" << reset << endl;
						cout << " ¯   ¯   " << red << "¯   ¯" << reset << endl;
					}

					if ((l1 != 1) && (l2 != 1) && (l3 != 1) && (l4 != 1)) // Letter 1;2;3;4 Incorrect print
					{
						cout << " _   _   _   _" << endl;
						cout << "|" << "?" << "|-|" << "?" << "|-|" << "?" << "|-|" << "?" << "|" << endl;
						cout << " ¯   ¯   ¯   ¯" << endl;
					}



					if (entered_word[0] != initial_word[0])
						cout << "1st letter (" << entered_word[0] << ") is not correct" << endl;

					if (entered_word[1] != initial_word[1])
						cout << "2nd letter (" << entered_word[1] << ") is not correct" << endl;

					if (entered_word[2] != initial_word[2])
						cout << "3rd letter (" << entered_word[2] << ") is not correct" << endl;

					if (entered_word[3] != initial_word[3])
						cout << "4th letter (" << entered_word[3] << ") is not correct" << endl;

					life--;
				}

		if ((isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])))
			if (entered_word.length() == letters_count)
				if (letters_count == 5)
				{
					system("clear");
					if (entered_word[0] == initial_word[0])
						cout << "1-я буква (" << entered_word[0] << ") в слове на своём месте" << endl;
					else
						cout << "1-я буква (" << entered_word[0] << ") в слове не на своём месте" << endl;


					if (entered_word[1] == initial_word[1])
						cout << "2-я буква (" << entered_word[1] << ") в слове на своём месте" << endl;
					else
						cout << "2-я буква (" << entered_word[1] << ") в слове не на своём месте" << endl;


					if (entered_word[2] == initial_word[2])
						cout << "3-я буква (" << entered_word[2] << ") в слове на своём месте" << endl;
					else
						cout << "3-я буква (" << entered_word[2] << ") в слове не на своём месте" << endl;


					if (entered_word[3] == initial_word[3])
						cout << "4-я буква (" << entered_word[3] << ") в слове на своём месте" << endl;
					else
						cout << "4-я буква (" << entered_word[3] << ") в слове не на своём месте" << endl;


					if (entered_word[4] == initial_word[4])
						cout << "5-я буква (" << entered_word[4] << ") в слове на своём месте" << endl;
					else
						cout << "5-я буква (" << entered_word[4] << ") в слове не на своём месте" << endl;
					life--;
				}


		if ((isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])))
			if (entered_word.length() == letters_count)
				if (letters_count == 6)
				{
					system("clear");
					if (entered_word[0] == initial_word[0])
						cout << "1-я буква (" << entered_word[0] << ") в слове на своём месте" << endl;
					else
						cout << "1-я буква (" << entered_word[0] << ") в слове не на своём месте" << endl;


					if (entered_word[1] == initial_word[1])
						cout << "2-я буква (" << entered_word[1] << ") в слове на своём месте" << endl;
					else
						cout << "2-я буква (" << entered_word[1] << ") в слове не на своём месте" << endl;


					if (entered_word[2] == initial_word[2])
						cout << "3-я буква (" << entered_word[2] << ") в слове на своём месте" << endl;
					else
						cout << "3-я буква (" << entered_word[2] << ") в слове не на своём месте" << endl;


					if (entered_word[3] == initial_word[3])
						cout << "4-я буква (" << entered_word[3] << ") в слове на своём месте" << endl;
					else
						cout << "4-я буква (" << entered_word[3] << ") в слове не на своём месте" << endl;


					if (entered_word[4] == initial_word[4])
						cout << "5-я буква (" << entered_word[4] << ") в слове на своём месте" << endl;
					else
						cout << "5-я буква (" << entered_word[4] << ") в слове не на своём месте" << endl;


					if (entered_word[5] == initial_word[5])
						cout << "6-я буква (" << entered_word[5] << ") в слове на своём месте" << endl;
					else
						cout << "6-я буква (" << entered_word[5] << ") в слове не на своём месте" << endl;
					life--;
				}


		if ((isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])) && (isalpha(entered_word[6])))
			if (entered_word.length() == letters_count)
				if (letters_count == 7)
				{
					system("clear");
					if ((entered_word[6] == initial_word[6]))
						cout << "1-я буква (" << entered_word[0] << ") в слове на своём месте" << endl;
					else
						cout << "1-я буква (" << entered_word[0] << ") в слове не на своём месте" << endl;


					if (entered_word[1] == initial_word[1])
						cout << "2-я буква (" << entered_word[1] << ") в слове на своём месте" << endl;
					else
						cout << "2-я буква (" << entered_word[1] << ") в слове не на своём месте" << endl;


					if (entered_word[2] == initial_word[2])
						cout << "3-я буква (" << entered_word[2] << ") в слове на своём месте" << endl;
					else
						cout << "3-я буква (" << entered_word[2] << ") в слове не на своём месте" << endl;


					if (entered_word[3] == initial_word[3])
						cout << "4-я буква (" << entered_word[3] << ") в слове на своём месте" << endl;
					else
						cout << "4-я буква (" << entered_word[3] << ") в слове не на своём месте" << endl;


					if (entered_word[4] == initial_word[4])
						cout << "5-я буква (" << entered_word[4] << ") в слове на своём месте" << endl;
					else
						cout << "5-я буква (" << entered_word[4] << ") в слове не на своём месте" << endl;


					if (entered_word[5] == initial_word[5])
						cout << "6-я буква (" << entered_word[5] << ") в слове на своём месте" << endl;
					else
						cout << "6-я буква (" << entered_word[5] << ") в слове не на своём месте" << endl;

					if (entered_word[6] == initial_word[6])
						cout << "7-я буква (" << entered_word[6] << ") в слове на своём месте" << endl;
					else
						cout << "7-я буква (" << entered_word[6] << ") в слове не на своём месте" << endl;

					life--;

				}

		if ((life == 9) && (entered_word.length() == 7) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])) && (isalpha(entered_word[6])))
		{ {a1 = entered_word[0]; b1 = entered_word[1]; c1 = entered_word[2]; d1 = entered_word[3]; e1 = entered_word[4]; f1 = entered_word[5]; g1 = entered_word[6]; }
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|-|" << g1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 9) && (entered_word.length() == 6) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])))
		{ {a1 = entered_word[0]; b1 = entered_word[1]; c1 = entered_word[2]; d1 = entered_word[3]; e1 = entered_word[4]; f1 = entered_word[5]; }
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 9) && (entered_word.length() == 5) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])))
		{ {a1 = entered_word[0]; b1 = entered_word[1]; c1 = entered_word[2]; d1 = entered_word[3]; e1 = entered_word[4]; }
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 9) && (entered_word.length() == 4) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])))
		{ {a1 = entered_word[0]; b1 = entered_word[1]; c1 = entered_word[2]; d1 = entered_word[3]; }
		cout << " _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		}



		if ((life == 8) && (entered_word.length() == 7) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])) && (isalpha(entered_word[6])))
		{ {a2 = entered_word[0]; b2 = entered_word[1]; c2 = entered_word[2]; d2 = entered_word[3]; e2 = entered_word[4]; f2 = entered_word[5]; g2 = entered_word[6]; }
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|-|" << g1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|-|" << g2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 8) && (entered_word.length() == 6) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])))
		{ {a2 = entered_word[0]; b2 = entered_word[1]; c2 = entered_word[2]; d2 = entered_word[3]; e2 = entered_word[4]; f2 = entered_word[5]; }
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 8) && (entered_word.length() == 5) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])))
		{ {a2 = entered_word[0]; b2 = entered_word[1]; c2 = entered_word[2]; d2 = entered_word[3]; e2 = entered_word[4]; }
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 8) && (entered_word.length() == 4) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])))
		{ {a2 = entered_word[0]; b2 = entered_word[1]; c2 = entered_word[2]; d2 = entered_word[3]; }
		cout << " _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		}


		if ((life == 7) && (entered_word.length() == 7) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])) && (isalpha(entered_word[6])))
		{ {a3 = entered_word[0]; b3 = entered_word[1]; c3 = entered_word[2]; d3 = entered_word[3]; e3 = entered_word[4]; f3 = entered_word[5]; g3 = entered_word[6]; }
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|-|" << g1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|-|" << g2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|-|" << g3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 7) && (entered_word.length() == 6) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])))
		{ {a3 = entered_word[0]; b3 = entered_word[1]; c3 = entered_word[2]; d3 = entered_word[3]; e3 = entered_word[4]; f3 = entered_word[5]; }
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 7) && (entered_word.length() == 5) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])))
		{ {a3 = entered_word[0]; b3 = entered_word[1]; c3 = entered_word[2]; d3 = entered_word[3]; e3 = entered_word[4]; }
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 7) && (entered_word.length() == 4) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])))
		{ {a3 = entered_word[0]; b3 = entered_word[1]; c3 = entered_word[2]; d3 = entered_word[3]; }
		cout << " _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 6) && (entered_word.length() == 7) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])) && (isalpha(entered_word[6])))
		{ {a4 = entered_word[0]; b4 = entered_word[1]; c4 = entered_word[2]; d4 = entered_word[3]; e4 = entered_word[4]; f4 = entered_word[5]; g4 = entered_word[6]; }
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|-|" << g1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|-|" << g2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|-|" << g3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|-|" << g4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 6) && (entered_word.length() == 6) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])))
		{ {a4 = entered_word[0]; b4 = entered_word[1]; c4 = entered_word[2]; d4 = entered_word[3]; e4 = entered_word[4]; f4 = entered_word[5]; }
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 6) && (entered_word.length() == 5) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])))
		{ {a4 = entered_word[0]; b4 = entered_word[1]; c4 = entered_word[2]; d4 = entered_word[3]; e4 = entered_word[4]; }
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 6) && (entered_word.length() == 4) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])))
		{ {a4 = entered_word[0]; b4 = entered_word[1]; c4 = entered_word[2]; d4 = entered_word[3]; }
		cout << " _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 5) && (entered_word.length() == 7) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])) && (isalpha(entered_word[6])))
		{ {a5 = entered_word[0]; b5 = entered_word[1]; c5 = entered_word[2]; d5 = entered_word[3]; e5 = entered_word[4]; f5 = entered_word[5]; g5 = entered_word[6]; }
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|-|" << g1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|-|" << g2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|-|" << g3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|-|" << g4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|-|" << g5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 5) && (entered_word.length() == 6) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])))
		{ {a5 = entered_word[0]; b5 = entered_word[1]; c5 = entered_word[2]; d5 = entered_word[3]; e5 = entered_word[4]; f5 = entered_word[5]; }
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 5) && (entered_word.length() == 5) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])))
		{ {a5 = entered_word[0]; b5 = entered_word[1]; c5 = entered_word[2]; d5 = entered_word[3]; e5 = entered_word[4]; }
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 5) && (entered_word.length() == 4) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])))
		{ {a5 = entered_word[0]; b5 = entered_word[1]; c5 = entered_word[2]; d5 = entered_word[3]; }
		cout << " _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 4) && (entered_word.length() == 7) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])) && (isalpha(entered_word[6])))
		{ {a6 = entered_word[0]; b6 = entered_word[1]; c6 = entered_word[2]; d6 = entered_word[3]; e6 = entered_word[4]; f6 = entered_word[5]; g6 = entered_word[6]; }
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|-|" << g1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|-|" << g2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|-|" << g3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|-|" << g4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|-|" << g5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|-|" << f6 << "|-|" << g6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 4) && (entered_word.length() == 6) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])))
		{ {a6 = entered_word[0]; b6 = entered_word[1]; c6 = entered_word[2]; d6 = entered_word[3]; e6 = entered_word[4]; f6 = entered_word[5]; }
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|-|" << f6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 4) && (entered_word.length() == 5) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])))
		{ {a6 = entered_word[0]; b6 = entered_word[1]; c6 = entered_word[2]; d6 = entered_word[3]; e6 = entered_word[4]; }
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 4) && (entered_word.length() == 4) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])))
		{ {a6 = entered_word[0]; b6 = entered_word[1]; c6 = entered_word[2]; d6 = entered_word[3]; }
		cout << " _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 3) && (entered_word.length() == 7) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])) && (isalpha(entered_word[6])))
		{ {a7 = entered_word[0]; b7 = entered_word[1]; c7 = entered_word[2]; d7 = entered_word[3]; e7 = entered_word[4]; f7 = entered_word[5]; g7 = entered_word[6]; }
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|-|" << g1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|-|" << g2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|-|" << g3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|-|" << g4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|-|" << g5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|-|" << f6 << "|-|" << g6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|-|" << f7 << "|-|" << g7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 3) && (entered_word.length() == 6) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])))
		{ {a7 = entered_word[0]; b7 = entered_word[1]; c7 = entered_word[2]; d7 = entered_word[3]; e7 = entered_word[4]; f7 = entered_word[5]; }
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|-|" << f6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|-|" << f7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 3) && (entered_word.length() == 5) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])))
		{ {a7 = entered_word[0]; b7 = entered_word[1]; c7 = entered_word[2]; d7 = entered_word[3]; e7 = entered_word[4]; }
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 3) && (entered_word.length() == 4) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])))
		{ {a7 = entered_word[0]; b7 = entered_word[1]; c7 = entered_word[2]; d7 = entered_word[3]; }
		cout << " _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 2) && (entered_word.length() == 7) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])) && (isalpha(entered_word[6])))
		{ {a8 = entered_word[0]; b8 = entered_word[1]; c8 = entered_word[2]; d8 = entered_word[3]; e8 = entered_word[4]; f8 = entered_word[5]; g8 = entered_word[6]; }
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|-|" << g1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|-|" << g2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|-|" << g3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|-|" << g4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|-|" << g5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|-|" << f6 << "|-|" << g6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|-|" << f7 << "|-|" << g7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|-|" << e8 << "|-|" << f8 << "|-|" << g8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 2) && (entered_word.length() == 6) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])))
		{ {a8 = entered_word[0]; b8 = entered_word[1]; c8 = entered_word[2]; d8 = entered_word[3]; e8 = entered_word[4]; f8 = entered_word[5]; }
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|-|" << f6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|-|" << f7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|-|" << e8 << "|-|" << f8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 2) && (entered_word.length() == 5) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])))
		{ {a8 = entered_word[0]; b8 = entered_word[1]; c8 = entered_word[2]; d8 = entered_word[3]; e8 = entered_word[4]; }
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|-|" << e8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 2) && (entered_word.length() == 4) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])))
		{ {a8 = entered_word[0]; b8 = entered_word[1]; c8 = entered_word[2]; d8 = entered_word[3]; }
		cout << " _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 1) && (entered_word.length() == 7) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])) && (isalpha(entered_word[6])))
		{ {a9 = entered_word[0]; b9 = entered_word[1]; c9 = entered_word[2]; d9 = entered_word[3]; e9 = entered_word[4]; f9 = entered_word[5]; g9 = entered_word[6]; }
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|-|" << g1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|-|" << g2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|-|" << g3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|-|" << g4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|-|" << g5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|-|" << f6 << "|-|" << g6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|-|" << f7 << "|-|" << g7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|-|" << e8 << "|-|" << f8 << "|-|" << g8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a9 << "|-|" << b9 << "|-|" << c9 << "|-|" << d9 << "|-|" << e9 << "|-|" << f9 << "|-|" << g9 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 1) && (entered_word.length() == 6) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])))
		{ {a9 = entered_word[0]; b9 = entered_word[1]; c9 = entered_word[2]; d9 = entered_word[3]; e9 = entered_word[4]; f9 = entered_word[5]; }
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|-|" << f6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|-|" << f7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|-|" << e8 << "|-|" << f8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a9 << "|-|" << b9 << "|-|" << c9 << "|-|" << d9 << "|-|" << e9 << "|-|" << f9 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 1) && (entered_word.length() == 5) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])))
		{ {a9 = entered_word[0]; b9 = entered_word[1]; c9 = entered_word[2]; d9 = entered_word[3]; e9 = entered_word[4]; }
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|-|" << e8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a9 << "|-|" << b9 << "|-|" << c9 << "|-|" << d9 << "|-|" << e9 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 1) && (entered_word.length() == 4) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])))
		{ {a9 = entered_word[0]; b9 = entered_word[1]; c9 = entered_word[2]; d9 = entered_word[3]; }
		cout << " _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a9 << "|-|" << b9 << "|-|" << c9 << "|-|" << d9 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 0) && (entered_word.length() == 7) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])) && (isalpha(entered_word[6])))
		{ {a10 = entered_word[0]; b10 = entered_word[1]; c10 = entered_word[2]; d10 = entered_word[3]; e10 = entered_word[4]; f10 = entered_word[5]; g10 = entered_word[6]; }
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|-|" << g1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|-|" << g2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|-|" << g3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|-|" << g4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|-|" << g5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|-|" << f6 << "|-|" << g6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|-|" << f7 << "|-|" << g7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|-|" << e8 << "|-|" << f8 << "|-|" << g8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a9 << "|-|" << b9 << "|-|" << c9 << "|-|" << d9 << "|-|" << e9 << "|-|" << f9 << "|-|" << g9 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _   _" << endl;
		cout << "|" << a10 << "|-|" << b10 << "|-|" << c10 << "|-|" << d10 << "|-|" << e10 << "|-|" << f10 << "|-|" << g10 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 0) && (entered_word.length() == 6) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])) && (isalpha(entered_word[5])))
		{ {a10 = entered_word[0]; b10 = entered_word[1]; c10 = entered_word[2]; d10 = entered_word[3]; e10 = entered_word[4]; f10 = entered_word[5]; }
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|-|" << f1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|-|" << f2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|-|" << f3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|-|" << f4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|-|" << f5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|-|" << f6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|-|" << f7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|-|" << e8 << "|-|" << f8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a9 << "|-|" << b9 << "|-|" << c9 << "|-|" << d9 << "|-|" << e9 << "|-|" << f9 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _   _" << endl;
		cout << "|" << a10 << "|-|" << b10 << "|-|" << c10 << "|-|" << d10 << "|-|" << e10 << "|-|" << f10 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 0) && (entered_word.length() == 5) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])) && (isalpha(entered_word[4])))
		{ {a10 = entered_word[0]; b10 = entered_word[1]; c10 = entered_word[2]; d10 = entered_word[3]; e10 = entered_word[4]; }
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|-|" << e1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|-|" << e2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|-|" << e3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|-|" << e4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|-|" << e5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|-|" << e6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|-|" << e7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|-|" << e8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a9 << "|-|" << b9 << "|-|" << c9 << "|-|" << d9 << "|-|" << e9 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _   _" << endl;
		cout << "|" << a10 << "|-|" << b10 << "|-|" << c10 << "|-|" << d10 << "|-|" << e10 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅   ˅" << endl;
		}

		if ((life == 0) && (entered_word.length() == 4) && (letters_count == entered_word.length()) && (isalpha(entered_word[0])) && (isalpha(entered_word[1])) && (isalpha(entered_word[2])) && (isalpha(entered_word[3])))
		{ {a10 = entered_word[0]; b10 = entered_word[1]; c10 = entered_word[2]; d10 = entered_word[3]; }
		cout << " _   _   _   _" << endl;
		cout << "|" << a1 << "|-|" << b1 << "|-|" << c1 << "|-|" << d1 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a2 << "|-|" << b2 << "|-|" << c2 << "|-|" << d2 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a3 << "|-|" << b3 << "|-|" << c3 << "|-|" << d3 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a4 << "|-|" << b4 << "|-|" << c4 << "|-|" << d4 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a5 << "|-|" << b5 << "|-|" << c5 << "|-|" << d5 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a6 << "|-|" << b6 << "|-|" << c6 << "|-|" << d6 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a7 << "|-|" << b7 << "|-|" << c7 << "|-|" << d7 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a8 << "|-|" << b8 << "|-|" << c8 << "|-|" << d8 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a9 << "|-|" << b9 << "|-|" << c9 << "|-|" << d9 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		cout << " _   _   _   _" << endl;
		cout << "|" << a10 << "|-|" << b10 << "|-|" << c10 << "|-|" << d10 << "|" << endl;
		cout << " ¯   ¯   ¯   ¯" << endl;
		cout << " ˅   ˅   ˅   ˅" << endl;
		}

		if (entered_word == initial_word)

		{
			system("clear");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\t\t\tY88b   d88P  .d88888b.  888     888      888       888  .d88888b.  888b    888" << endl;
			this_thread::sleep_for(chrono::milliseconds(300));
			cout << "\t\t\t Y88b d88P  d88P   Y88b 888     888      888   o   888 d88P   Y88b 8888b   888" << endl;
			this_thread::sleep_for(chrono::milliseconds(300));
			cout << "\t\t\t  Y88o88P   888     888 888     888      888  d8b  888 888     888 88888b  888" << endl;
			this_thread::sleep_for(chrono::milliseconds(300));
			cout << "\t\t\t   Y888P    888     888 888     888      888 d888b 888 888     888 888Y88b 888" << endl;
			this_thread::sleep_for(chrono::milliseconds(300));
			cout << "\t\t\t    888     888     888 888     888      888d88888b888 888     888 888 Y88b888" << endl;
			this_thread::sleep_for(chrono::milliseconds(300));
			cout << "\t\t\t    888     888     888 888     888      88888P Y88888 888     888 888  Y88888" << endl;
			this_thread::sleep_for(chrono::milliseconds(300));
			cout << "\t\t\t    888     Y88b. .d88P Y88b. .d88P      8888P   Y8888 Y88b. .d88P 888   Y8888" << endl;
			this_thread::sleep_for(chrono::milliseconds(300));
			cout << "\t\t\t    888       Y88888P     Y88888P        888P     Y888   Y88888P   888    Y888" << endl;
			this_thread::sleep_for(chrono::milliseconds(300));
			
			return 0;
		}


	}
	return 0;
}