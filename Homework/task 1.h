#pragma once

#ifndef task1
#define task1
#include <iostream>
#include <stdio.h>
#include <io.h>
using namespace std;

struct Task1 {
	const char* filename = "LoremIpsum.txt";
	const char* filename2 = "LoremIpsumAltered.txt";

	FILE* f1 = nullptr;
	FILE* f2 = nullptr;

};
//Задание 1
//Дано два текстовых файла.Выяснить, совпадают ли их строки.Если нет, то вывести несовпадающую строку из каждого файла.

void OpenFiles(Task1);









#endif // !task1
