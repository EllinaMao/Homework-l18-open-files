#pragma once


#include <iostream>
#include <stdio.h>
#include <io.h>
using namespace std;

struct file1 {
	const char* filename = "LoremIpsum.txt";

	FILE* f = nullptr;

	char* bufffile = nullptr;
};





//������� 1
//���� ��� ��������� �����.��������, ��������� �� �� ������.���� ���, �� ������� ������������� ������ �� ������� �����.

void Openfiles(file1&t);


