#include "task3.h"
///*
//    char shift = 3;
//    char* bufffile = nullptr;
//    const char* Savefile = "Caesar.txt";
//    FILE* caesar_file = nullptr;
//*/

void Encripted::CaesarEncryptFile(file3&f)
{  
    


}

void Encripted::SaveInFile()const
{
    // Ensure the buffer is valid
    if (!bufffile) {
        perror("Buffer is null");
        return;
    }

    // Open the file for writing
    FILE* file = nullptr;
    if (fopen_s(&file, Savefile, "w") != 0) {
        perror("Error opening file for writing");
        return;
    }

    // Write the encrypted buffer to the file
    if (file) {
        fputs(bufffile, file);
        fclose(file);
    }
}


Encripted::~Encripted()
{
    if (bufffile) {
        delete[]bufffile;
}
}

