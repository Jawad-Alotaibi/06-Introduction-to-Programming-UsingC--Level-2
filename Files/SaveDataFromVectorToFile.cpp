#include <iostream>
#include <fstream>
#include <string> 
#include <vector>

using namespace std;


void saveDataFromVectorToFile(string fileName, vector<string> vFileContent)
{
    fstream myFile;
    myFile.open(fileName, ios::out); //write mode

    if(myFile.is_open())
    {
        for(string &line : vFileContent)
        {
            if (line != "")
            {
                myFile << line << endl;
            }
        }
    }
    myFile.close();
}   
int main()
{
    vector<string> vFileContent {"Eyad" , "Turki", "Jawad", "Enad", "D7moni"};
    saveDataFromVectorToFile("MyFile.txt", vFileContent);
    

    return 0;
}
