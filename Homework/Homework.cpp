#include <iostream>

#include "windows.h"

//#include "task1.h"
//#include "task2.h"
#include "task3.h"

#include "file1.h"
#include "file2.h"
#include "StatisticFile.h"
#include "file3.h"


using namespace std;



int main()
{
#ifdef TASK1
	cout << "Task 1" << endl;
	file1 file1_t1;
	file2 file2_t1;

	CompareFiles(file1_t1, file2_t1);

#endif
#ifdef TASK2
	cout << "Task 2" << endl;
	file1 file_t2;

	Statistic stats;

	stats.CountSimbols(file_t2);
	stats.CountStrings(file_t2);
	stats.CountNumbers(file_t2);
	stats.CountVowelsAndConsonats(file_t2);

	stats.GetAllCounts();
	cout << "Creating a binary file" << endl;
	StatsFile stats_file(stats);

	cout << "Creating a txt file" << endl;
	ReadableFile(stats, stats_file);

#endif
#ifdef TASK3
	cout << "Task 3" << endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	file3 file_t3;
	Encripted task3;


	task3.CaesarEncryptFile(file_t3);
	task3.SaveInFile();




#endif
}
