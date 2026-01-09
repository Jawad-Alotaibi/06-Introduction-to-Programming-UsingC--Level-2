#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>

using namespace std;
void LoadDataFromFileToVector(string fileName, vector<string> &vFileContent)
{
    fstream myFile;
    myFile.open(fileName, ios::in); // read mode

    string line;
    while (getline(myFile, line))
    {
        vFileContent.push_back(line);
    }

    myFile.close();
}

void DeleteVectorRecord(vector<string> &vFileContent, string DeletedElement)
{
    for (string &line : vFileContent)
    {
        if (line == DeletedElement)
        {
            line = "";
        }
    }
}
void SaveDataFromVectorToFile(string fileName, vector<string> vFileContent)
{
    fstream myFile;
    myFile.open(fileName, ios::out); // write mode

    if (myFile.is_open())
    {
        for (string &line : vFileContent)
        {
            if (line != "")
            {
                myFile << line << endl;
            }
        }
    }

    myFile.close();
}

void PrintFileContent(string FileName)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in); // read Mode
    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }
        MyFile.close();
    }
}
int main()
{

    // TODO LOAD DATA FROM FILE TO VECTOR
    // TODO Delete ANY RECORD IN THE VECOTR
    // TODO SAVE THE UPDATED VECTOR TO THE FILE
    vector<string> vFileContent;

    cout << "File Content Before Delete.\n";
    PrintFileContent("MyFile.txt");
    LoadDataFromFileToVector("MyFile.txt", vFileContent);
    DeleteVectorRecord(vFileContent, "D7moni");
    SaveDataFromVectorToFile("MyFile.txt", vFileContent);
    cout << "\n\nFile Content After Delete.\n";
    PrintFileContent("MyFile.txt");

    return 0;
}