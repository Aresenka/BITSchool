#include <iostream>
#include <string>
#include "lib/words.h"
#include <ctime>
#include <algorithm>

struct msgs{

   std::string welcomeMsg = "\tWelcome to WORDY! Get ready to flex your brain muscles and\n"
   "\tput your vacabulary to the test.\n";
   
   std::string helpMsg =
        "\n\tIn this game, your goal is to guess the secret word.\n"
        "\tYou will have several tries. Each time you enter\n"
        "\ta word, you will be informed how your word perfomed.\n"
        "\tIf you fail to guess the word within the allowed number\n"
        "\tof tries, the game will end and you will lose. So be\n"
        "\tcareful! Also, make sure that the word you enter has\n"
        "\texactly same number of letters as a secret word! Good luck!\n";

   std::string lifeMsg = "\n\tYou have 5 lives left!";                  

   std::string promptMsg = "\n\tEnter the word: ";

   std::string winMsg = "\n\tYou won! The word was: " ;

   std::string notInArrayMsg =  "\tERROR: Your word should be a real word!!! \n";

   std::string loseMsg = "\n\tYou loose! The word was: " ;

   std::string invalidStrLenMsg = "\tERROR: The word should be exactly %i chars! \n";

   std::string livesLeftMsg =  "\n\tYou have %i lives left!"; 

   void printWelcomeMsg(){
      #ifdef _WIN32
         system("cls");
      #else 
         std::cout << "\033c";
      #endif
      std::cout << welcomeMsg;
   }

   void printHelpMsg(){
      std::cout << helpMsg;
   }

   void printLifeMsg(){
      std::cout << lifeMsg;
   }

   void printPromptMsg(){
      std::cout << promptMsg;
   }

   void printWinMsg(std::string str){
      std::cout << winMsg << str << "\n";
   }

   void printNotInArrayMsg(){
      std::cout << notInArrayMsg;
   }

   void printLoseMsg(std::string str){
      std::cout << loseMsg << str <<"\n";
   }

   void printInvalidStrLenMsg(int wordLength){
      printf(invalidStrLenMsg.c_str(), wordLength);  
   }

   void printLivesLeftMsg(int userLives){
      printf(livesLeftMsg.c_str(), userLives);
   }
};


void checkUserInput(std::string aWord, std::string userInput);

std::string getRandFromDictWithLength(int wordLength);

bool stingInArray(std::string str, int wordLength);



int main(){
   std::string aWord= getRandFromDictWithLength(4);

   int wordSize = 4;
   
   int userLives=5;

   msgs msg;

   msg.printWelcomeMsg();

   msg.printHelpMsg();

   msg.printLifeMsg();



   
while(true){

   std::cout << "\n\n\t";
   for(int i=0;i<aWord.size();++i){
      std::cout << " * ";
   }
   std::cout << "\n";

   std::string userInput;
   msg.printPromptMsg();
   std::cin >> userInput;
   std::cout << "\n";

   if(aWord == userInput){
      msg.printWinMsg(aWord);
      break;
   }

   if(aWord.size() != userInput.size()){
      msg.printInvalidStrLenMsg(aWord.size());
      continue;
   }

   if(stingInArray(userInput, wordSize) != true){
      msg.printNotInArrayMsg();
      continue;
   } 
   
   checkUserInput(aWord,userInput);

   

   if(--userLives < 1){
      msg.printLoseMsg(aWord);
      break;
   }

   msg.printLivesLeftMsg(userLives);

}
   return 0;
}


void checkUserInput(std::string aWord, std::string userInput){
   std::string currectIndex;
   std::string wrongLetters;
   std::string currectLetters;

   for(int i=0;i<userInput.size();++i){

      if(aWord[i] == userInput[i]){

         currectIndex.push_back(userInput[i]);
         aWord[i] = '*';

        
         continue;
      }

      size_t index = aWord.find(userInput[i]);

      if(index == std::string::npos){
         wrongLetters.push_back(userInput[i]); 
         continue;
      }

      currectLetters.push_back(userInput[i]);
      aWord[index] = '*';
   }

   if(currectIndex.size() != 0){
      for(int i=0; i < currectIndex.size(); ++i){
         std::cout << currectIndex[i] << ", " ; 
      }
      std::cout << "right letter(s) in right position.\n";
   }
   
   if(currectLetters.size() != 0){
      for(int i=0; i < currectLetters.size(); ++i){
         std::cout << currectLetters[i] << ", "; 
      }
      std::cout << "right letter(s) in wrong position.\n";
   }

   if(wrongLetters.size() != 0){
      for(int i=0; i < wrongLetters.size(); ++i){
         std::cout << wrongLetters[i] << ", "; 
      }
      std::cout << "wrong letter(s).\n";
   }
}


std::string getRandFromDictWithLength(int wordLength){

      std::string *words = readWords(wordLength);

      int max = countLinesInFile(openFileForWordsWithLenght(wordLength));

      srand(time(0));

      int randomIndex = rand() % max ;
      
   return words[randomIndex].erase(wordLength);
}

bool stingInArray(std::string str, int wordLength){
   std::string* words = readWords(wordLength);

   int max = countLinesInFile(openFileForWordsWithLenght(wordLength));
   std::string* last = words + max;

    return (find(words, last, str) != last);


}
