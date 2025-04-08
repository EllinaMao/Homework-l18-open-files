#pragma once


#include <iostream>
#include <stdio.h>
#include <io.h>
using namespace std;

struct file1 {
	const char* filename = "Fairytale.txt";

	FILE* f = nullptr;

	char* bufffile = nullptr;
};



void Openfiles(file1&t);


