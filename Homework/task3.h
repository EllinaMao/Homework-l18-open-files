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
#ifndef TASK3
#define TASK3
#include "file3.h"

struct Encripted {
    int shift = 3;
    char* bufffile = nullptr;
    const char* Savefile = "Caesar.txt";
    FILE* caesar_file = nullptr;


    void CaesarEncryptFile(file3& f);
    void SaveInFile() const;

    ~Encripted();
};

#endif // TASK3