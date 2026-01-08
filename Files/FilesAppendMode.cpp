#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myFile;

    //use out or app because if it's not exsist the wrtie mode "out" will create it , and the app for appending the data not overwrite it
    myFile.open("MyFile.txt", ios::out | ios::app);//write mode

    if (myFile.is_open())
    {
        myFile << "Ahmed\n";
        myFile << "Mohammed\n";
        myFile << "Dodi\n";
        myFile << "Jawad Alotaibi\n";

        myFile.close();
    }

    return 0;
}