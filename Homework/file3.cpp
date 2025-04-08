#include "file3.h"

file3::file3()
{
    fopen_s(&f, filename, "r");
    if (f == nullptr) {
        perror("error opening task");
        return;
    }

    //cout << "descriptor: " << _fileno(t.f) << endl;
    int length = _filelength(_fileno(f));

    bufffile = new char[length + 1]; // +1 for null terminator
    fread(bufffile, sizeof(char), length, f);
    bufffile[length] = '\0'; // Null-terminate the buffer

    fclose(f);
}
file3::~file3() {
    if (bufffile) {
        delete[] bufffile;
        bufffile = nullptr;
    }
}