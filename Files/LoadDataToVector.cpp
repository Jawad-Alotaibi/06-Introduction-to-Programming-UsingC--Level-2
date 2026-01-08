#include <iostream>
#include <fstream>
#include <string> 
#include <vector>

using namespace std;


void loadDataFromFileToVector(string fileName, vector<string> &vFileContent)
{
    //open the file in the read mode
    //read the data and put it into the vector

    fstream myFile;
    string line;
    myFile.open(fileName, ios::in); //read mode

    while(getline(myFile, line))
    {
        vFileContent.push_back(line);
    }

    myFile.close();
}   
int main()
{
    vector<string> vFileContent;
    loadDataFromFileToVector("MyFile.txt", vFileContent);

    for (string &line : vFileContent)
    {
        cout << line << endl;
    }

    return 0;
}
