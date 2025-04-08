#pragma once
//Задание 1
//Дано два текстовых файла.Выяснить, совпадают ли их строки.Если нет, то вывести несовпадающую строку из каждого файла.

#ifndef TASK1
#define TASK1

#include "file1.h"
#include "file2.h"
 
#include <iostream>
#include <stdio.h>
#include <io.h>



void CompareFiles(file1& f1, file2& f2);


#endif // !task1
