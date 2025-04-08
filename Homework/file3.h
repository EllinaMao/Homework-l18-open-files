#pragma once
#include <iostream>
#include <stdio.h>
#include <io.h>
using namespace std;

struct file3
{
	const char* filename = "Fairytale.txt";

	FILE* f = nullptr;

	char* bufffile = nullptr;



	file3();
	~file3();
};