#include <iostream>
#include <fstream>
using namespace std;

void printFileContent(string fileName)
{
    fstream myFile;
    myFile.open(fileName, ios::in); //read mode

    if(myFile.is_open())
    {
        string line;

        while(getline(myFile, line)) // means read the first line in myFile file then put it in the line variable
        {
            cout << line << endl;
        }

        myFile.close();
    }
}

int main()
{
    
    printFileContent("MyFile.txt");
    return 0;
}