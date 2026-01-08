#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myFile;

    myFile.open("MyFile.txt", ios::out);//write mode

    if (myFile.is_open())
    {
        myFile << "Jawad\n";
        myFile << "Eyad\n";
        myFile << "D7moni\n";

        myFile.close();
    }

    return 0;
}