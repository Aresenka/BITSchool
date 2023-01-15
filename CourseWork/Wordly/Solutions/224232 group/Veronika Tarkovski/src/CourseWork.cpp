#include <iostream>
#include <string>
#include <vector>
#include <set>

int main(){
   std::string aWord= "name";
   
   int userLives=5;

while(true){

   for(int i=0;i<aWord.size();++i){
      std::cout << " * ";
   }
   std::cout << "\n";

   std::string userInput;
   std::cout<< "Enter the word: ";
   std::cin >> userInput;
   std::cout << "\n";

   if(aWord == userInput){
      std::cout << "You won! The word was: "<< aWord;
      break;
   }

   if(aWord.size()!= userInput.size()){
      std::cout << "ERROR: The word should be exactly " << aWord.size() << " chars! \n";
   }
   std::vector<char> currectIndex;
   std::vector<char> currectLetters;
   std::vector<char> wrongLetters;
   std::set<int> usedIndexes;

   for(int i=0;i<userInput.size();++i){
      if(aWord[i]== userInput[i]){

         currectIndex.push_back(userInput[i]);
         usedIndexes.insert(i);

      }else{

         size_t index = aWord.find(userInput[i]);
         if(index == std::string::npos){
            wrongLetters.push_back(userInput[i]); 
         }else{
            if(usedIndexes.find(index) == usedIndexes.end()){
               currectLetters.push_back(userInput[i]);
               usedIndexes.insert(index);

            }else{
               index = aWord.find(userInput[i], index+1);
               while(index != std::string::npos){
                  currectLetters.push_back(userInput[i]);
                  usedIndexes.insert(index);
                   index = aWord.find(userInput[i], index+1);


               }
            }

         }
      }
   }

   
   if(currectIndex.size() != 0){
      for(int i=0; i < currectIndex.size(); ++i){
         std::cout << currectIndex[i] << ", "; 
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

   if(--userLives < 1){
      std::cout << "You loose! The word was: " << aWord;
      break;
   }
}
   return 0;
}
