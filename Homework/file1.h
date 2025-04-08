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





//Задание 1
//Дано два текстовых файла.Выяснить, совпадают ли их строки.Если нет, то вывести несовпадающую строку из каждого файла.

void Openfiles(file1&t);


