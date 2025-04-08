#include <iostream>
#include "task1.h"
#include "task2.h"

#include "file1.h"
#include "file2.h"
#include "StatisticFile.h"


using namespace std;


/*

Задание 3
Шифр Цезаря — один из древнейших шифров. При шифровании каждый символ заменяется другим, отстоящим от него в алфавите на фиксированное число позиций.

Пример

Шифрование с использованием ключа: 3
Оригинальный текст: Съешь же ещё этих мягких французских булок, да выпей чаю.
Шифрованный текст: Фэзыя йз зьи ахлш пвёнлш чугрщцкфнлш дцосн, жг еютзм ъгб.

//
Дан текстовый файл. Зашифровать его, используя шифр Цезаря. Результат записать в другой файл.

*/



int main()
{
#ifdef task1
	cout << "Task 1" << endl;
	file1 file1_t1;
	file2 file2_t1;

	CompareFiles(file1_t1, file2_t1);

#endif
#ifdef task2
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
#ifdef task3












#endif
}
