#pragma once
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
#define TASK3
#include "file3.h"


struct Encripted {
	char shift = 3;
	char* bufffile = nullptr;
	const char* Savefile = "Caesar.txt";
	FILE* caesar_file = nullptr;



void CaesarEncryptFile(file3&f);
void SaveInFile()const;

~Encripted();
};


