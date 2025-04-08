#pragma once
#ifdef TASK2
#include <iostream>
#include <stdio.h>
#include <io.h>
#include "task2.h"

using namespace std;

struct StatsFile {  
   const char* filename = "Statistic.txt";  

   FILE* f = nullptr;  

   char* bufffile = nullptr;  

   StatsFile();
   StatsFile(Statistic& s);
   ~StatsFile();
};


void ReadableFile(Statistic&s, StatsFile&f);
#endif // DEBUG