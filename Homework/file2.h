#pragma once
#include <iostream>
#include <stdio.h>
#include <io.h>

struct file2 {
	const char* filename = "FairytaleAltered.txt";
	FILE* f = nullptr;

	char* bufffile = nullptr;


	file2();
	~file2();
};





