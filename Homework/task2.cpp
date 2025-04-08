#include "task2.h"

void Statistic::CountStrings(file1& f)
{
    const char* seps = "\n.;!?";
    char* token1;
    char* next_token1 = nullptr;

    // creating tokens!
    token1 = strtok_s(f.bufffile, seps, &next_token1);

    while (token1 != nullptr) {
        strings++;
        token1 = strtok_s(nullptr, seps, &next_token1);
    }
}
