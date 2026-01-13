#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>

using namespace std;
void saveDataFromVectorToFile(string fileName, vector<string> vFileContent);



void loadDataFromFileToVector(string fileName, vector<string> &vFileContent)
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

//src means any string user wanna update and the dest is the value in which replace the src value
void updateVectorRecord(string fileName , string record, string updatedRecord)
{
    vector<string> vFileContent;
    loadDataFromFileToVector("MyFile.txt", vFileContent);
    for (string &line : vFileContent)
    {
        if (line == record)
        {
            line = updatedRecord;
        }
    }
    saveDataFromVectorToFile(fileName, vFileContent);
}
void saveDataFromVectorToFile(string fileName, vector<string> vFileContent)
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

void printFileContent(string FileName)
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

    cout << "File Content Before Delete.\n";
    printFileContent("MyFile.txt");

    updateVectorRecord("MyFile.txt", "D7moni", "Ghadah AlQahtani");

    cout << "\n\nFile Content After Delete.\n";
    printFileContent("MyFile.txt");

    return 0;
}