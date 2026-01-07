#include <iostream>
#include <cctype> 
#include <string>
using namespace std;



int main()
{
    char x;
    char y;

    x = toupper('a');
    y = tolower('A');

    cout << "Converting a to A: " << x << endl;
    cout << "Converting A to a: " << y << endl;

    //Digits(A to Z)
    //returns 1 if it is upper, and return 0 if it is not
    cout << "isupper('A'): " << isupper('A') << endl;

     //Digits(A to Z)
    //returns 1 if it is lower, and return 0 if it is not
    cout << "islower('a'): " << islower('a') << endl;
  
    return 0;
}