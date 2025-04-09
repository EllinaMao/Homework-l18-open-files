#include "file3.h"  
#include <iostream> 

file3::file3()  
{  
  filename.open("task3.txt");  
  if (filename.is_open())  
  {
	  SetConsoleCP(1251);
	  SetConsoleOutputCP(1251);
      getline(filename, s);  
	  filename.close();
  }  
}  

file3::~file3()  
{  
if (filename.is_open())  
{  
	filename.close();  
}  
}