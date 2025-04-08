#pragma once
#ifndef TASK2
#define TASK2

#include "file1.h"
#include "ctype.h"
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
	int digit = 0;


	void CountSimbols(const file1&f);
	void CountStrings(const file1& f);
	void CountNumbers(file1& f);
	void CountVowelsAndConsonats(const file1& f);

	void CountVowels(const file1& f);
	void CountConsonats(const file1& f);


	void GetAllCounts()const;

};


#endif // !task2