#pragma once
#ifndef TASK2
#define TASK2

#include "file1.h"
#include "ctype.h"
/*
������� 2
��� ��������� ����.���������� ������� ����� ���� � �������� � ���� ��������� ���������� �� ��������� ����� :

���������� ��������;
���������� �����;
���������� ������� ����;
���������� ��������� ����;
���������� ����.
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