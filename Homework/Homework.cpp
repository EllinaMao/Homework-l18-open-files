#include <iostream>
#include "task1.h"
#include "task2.h"

#include "file1.h"
#include "file2.h"



using namespace std;


/*

������� 3
���� ������ � ���� �� ���������� ������. ��� ���������� ������ ������ ���������� ������, ��������� �� ���� � �������� �� ������������� ����� �������.

������

���������� � �������������� �����: 3
������������ �����: ����� �� ��� ���� ������ ����������� �����, �� ����� ���.
����������� �����: ����� �� ��� ���� ����� ����������� �����, �� ����� ���.

//
��� ��������� ����. ����������� ���, ��������� ���� ������. ��������� �������� � ������ ����.

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

#endif
#ifdef task3












#endif
}
