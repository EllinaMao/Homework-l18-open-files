#include "file2.h"

void Openfiles(file2& t)
{
    fopen_s(&t.f, t.filename, "r");
    if (t.f == nullptr) {
        perror("error opening task");
        return;
    }

    //cout << "descriptor: " << _fileno(t.f) << endl;
    int length = _filelength(_fileno(t.f));

    t.bufffile = new char[length + 1]; // +1 for null terminator
    fread(t.bufffile, sizeof(char), length, t.f);
    t.bufffile[length] = '\0'; // Null-terminate the buffer

    fclose(t.f);
}