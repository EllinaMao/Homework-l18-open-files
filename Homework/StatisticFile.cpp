#include "StatisticFile.h"

StatsFile::StatsFile()
{
    f = nullptr;

    bufffile = new char[200];
    memset(bufffile, 0, 256);
}

StatsFile::~StatsFile()
{
    // Clean up allocated resources
    if (bufffile)
    {
        delete[] bufffile;
        bufffile = nullptr;
    }

    if (f)
    {
        fclose(f);
        f = nullptr;
    }
}

StatsFile::StatsFile(Statistic& s)
{
    if (fopen_s(&f, filename, "wb") != 0) { 
        perror("error writing task");
        return;
    }

    if (fwrite(&s, sizeof(Statistic), 1, f) != 1) {
        perror("Error writing to file");
    }

    fclose(f);
}


void ReadableFile(Statistic& s, StatsFile& f)
{
    const char* filename = "StatisticReadable.txt";

    if (fopen_s(&f.f, filename, "w") != 0) {
        perror("error writing task");
        return;
    }

    fprintf(f.f, "Simbols: %d\n", s.simbols);
    fprintf(f.f, "Strings: %d\n", s.strings);
    fprintf(f.f, "Vowels: %d\n", s.vowels);
    fprintf(f.f, "Consonants: %d\n", s.consonants);
    fprintf(f.f, "Digits: %d\n", s.digit);

    fclose(f.f);
}
