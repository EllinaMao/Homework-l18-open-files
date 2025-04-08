#include "task2.h"

void Statistic::CountSimbols(const file1& f)
{
    if (!f.bufffile) {
        return;
    }
    size_t size = strlen(f.bufffile);

    for (size_t i = 0; i < size; i++) {

        if (__isascii(f.bufffile[i])) {

            simbols++;
        }
    }
}


void Statistic::CountStrings(const file1& f)
{
    if (!f.bufffile) {
        return;
    }
    const char* seps = "\n.;!?";
    char* token1;
    char* next_token1 = nullptr;
    char* tempBuffFile1 = _strdup(f.bufffile);

    // creating tokens!
    token1 = strtok_s(tempBuffFile1, seps, &next_token1);

    while (token1 != nullptr) {
        strings++;
        token1 = strtok_s(nullptr, seps, &next_token1);
    }
}
void Statistic::CountNumbers(file1& f)
{
    size_t size = strlen(f.bufffile);
    for (int i = 0; i < size; i++) {
        if (isdigit(f.bufffile[i])) {
            digit++;
        }
    }

}

void Statistic::CountVowelsAndConsonats(const file1& f)
{    if (!f.bufffile) {
        return;
    }
const char* Vowels = "aoieyuAOIEUY";
size_t size = strlen(f.bufffile);
for (int i = 0; i < size; i++) {
    if (!isalpha(f.bufffile[i])) {
        continue;
    }
    else if (strchr(Vowels, f.bufffile[i])) {
        vowels++;
    }
    else {
        consonants++;
    }
}

}

void Statistic::CountVowels(const file1& f)
{
    const char* Vowels = "aoieyuAOIEUY";
    size_t size = strlen(f.bufffile);
    for (int i = 0; i < size; i++) {
        if (!isalpha(f.bufffile[i])) {
            continue;
        }
        else if (strchr(Vowels, f.bufffile[i])) {
            vowels++;
        }
    }
}

void Statistic::CountConsonats(const file1& f)
{
    const char* Vowels = "aoieyuAOIEUY";
    size_t size = strlen(f.bufffile);
    for (int i = 0; i < size; i++) {
        if (!isalpha(f.bufffile[i])) {
            continue;
        }
        else if (!strchr(Vowels, f.bufffile[i])) {
            consonants++;
        }
    }
}

void Statistic::GetAllCounts() const
{
    cout << "Simbols in file: " << simbols << endl;
    cout << "Strings in file: " << strings << endl;
    cout << "Vowels in file: " << vowels << endl;
    cout << "Consonants in file: " << consonants << endl;
    cout << "Digits in file: " << digit << endl;
}



