#pragma once
//#ifndef task2
//#define task2

#include "file1.h"
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
	int numbers = 0;


	//void CountSimbols(file1&f);
	void CountStrings(file1& f);
	//void CountVowelsAndConsonats(file1& f);
	//void CountNumbers(file1& f);

};




















//#endif // !task2