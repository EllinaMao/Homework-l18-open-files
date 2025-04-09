#include "task3.h"
#include "windows.h"
#include <iostream>
using namespace std;


void Encripted::CaesarEncryptFile(file3& f)
{
    f.filename.open("task3.txt");
    // Read the file content into a string
    string fileContent((istreambuf_iterator<char>(f.filename)), istreambuf_iterator<char>());

    if (fileContent.size() <= 1) {
        cerr << "Error: File content is too small to encrypt!" << endl;
        f.filename.close();
        return;
    }
    // Allocate memory for the encrypted content
    bufffile = new char[fileContent.size() + 1];
    setlocale(LC_ALL, "ru_RU.UTF-8");

    for (size_t i = 0; i < fileContent.size(); ++i) {
        char c = fileContent[i];
        if ((c >= 'À' && c <= 'ß') || (c >= 'à' && c <= 'ÿ')) {
 
            char base = (c >= 'À' && c <= 'ß') ? 'À' : 'à';


            bufffile[i] = (c - base + shift) % 32 + base;
        }
        else {

            bufffile[i] = c;
        }
    }


    // Null-terminate the encrypted content
    bufffile[fileContent.size()] = '\0';

    // Close the input file
    f.filename.close();
}

void Encripted::SaveInFile() const
{
    if (!bufffile) {
        cerr << "Error: No encrypted content to save!" << endl;
        return;
    }

    // Open the output file
    ofstream outFile(Savefile);
    if (!outFile.is_open()) {
        cerr << "Error: Could not open file for saving!" << endl;
        return;
    }

    // Write the encrypted content to the file
    outFile << bufffile;

    // Close the output file
    outFile.close();

    cout << "Encrypted content saved to " << Savefile << endl;
}


Encripted::~Encripted()
{
    if (bufffile) {
        delete[]bufffile;
}
}

