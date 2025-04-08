#pragma once
//#ifndef task2
//#define task2

#include "file1.h"
/*
Задание 2
Дан текстовый файл.Необходимо создать новый файл и записать в него следующую статистику по исходному файлу :

Количество символов;
Количество строк;
Количество гласных букв;
Количество согласных букв;
Количество цифр.
*/

struct Statistic {
	int simbols = 0;
	int strings = 0;
	int vowels = 0;
	int consonants = 0;
	int numbers = 0;


	//void CountSimbols(file1&f);
	void CountStrings(file1& f);
	//void CountVowelsAndConsonats(file1& f);
	//void CountNumbers(file1& f);

};




















//#endif // !task2