#include "task3.h"
#include "windows.h"


void Encripted::CaesarEncryptFile(file3& f)
{
    if (!f.bufffile) {
        perror("Input buffer is null");
        return;
    }

    size_t size = strlen(f.bufffile) + 1;
    bufffile = new char[size];
    for (size_t i = 0; i < size; i++) {
        bufffile[i] = f.bufffile[i] + shift;
        cout << f.bufffile[i];
    }
    bufffile[size - 1] = '\0';
    cout << bufffile << endl;
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

