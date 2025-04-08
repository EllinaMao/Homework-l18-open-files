#include "task1.h"
#include <iostream>  
//Дано два текстовых файла.Выяснить, совпадают ли их строки.Если нет, то вывести несовпадающую строку из каждого файла.

using namespace std;  

void CompareFiles(file1& f1, file2& f2) {  
   const char* seps = "\n.";  
   char* token1;  
   char* token2;  
   char* next_token1 = nullptr;  
   char* next_token2 = nullptr;  

   char* tempBuffFile1 = _strdup(f1.bufffile);
   char* tempBuffFile2 = _strdup(f2.bufffile);

   // creating tokens!
   token1 = strtok_s(tempBuffFile1, seps, &next_token1);
   token2 = strtok_s(tempBuffFile2, seps, &next_token2);
   while (token1 != nullptr && token2 != nullptr) {  
       if (strcmp(token1, token2) != 0) {  
           cout << "Mismatch found:" << endl;  
           cout << "Line in file1: " << token1 << endl;  
           cout << "Line in file2: " << token2 << endl;  
       }  
       token1 = strtok_s(nullptr, seps, &next_token1);  
       token2 = strtok_s(nullptr, seps, &next_token2);  
   }  

   //if file1 or file 2 have more lines then other fine
   while (token1 != nullptr) {  
       cout << "Extra line in File1: " << token1 << endl;  
       token1 = strtok_s(nullptr, seps, &next_token1);  
   }  

   while (token2 != nullptr) {  
       cout << "Extra line in File2: " << token2 << endl;  
       token2 = strtok_s(nullptr, seps, &next_token2);  
   }  

   cout << endl;
}

