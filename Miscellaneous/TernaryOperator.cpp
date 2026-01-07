#include <iostream>
#include "HeaderFiles/MyInputLibrary.h"

using namespace MyInputLibrary;
using namespace std;

int main()
{
    //Ternary operator is a shorthand for the traditional if 
    //it start with condition ? expression if true : expression if false
    int mark = 44;

    //Traditional if 
    // if (mark >= 50) 
    // {
    //     cout << "PASS\n";
    // }
    // else cout << "FAIL\n";

    //ternary operator
   
//    cout << (mark >= 50 ? "PASS" :  "FAIL") << endl;

    //Homework1 check if the number positive or negative using ternary operator 
    // int number = MyInputLibrary::ReadNumber();
    // number > 0 ? cout << "It's Positive number\n" : cout << "It's Neagtive number\n";

    //Homework2 check if the number positive or negative or zero using nested ternary operator 
    int number = MyInputLibrary::readNumber();
    number > 0 ? cout << "It's Positive number\n" : number == 0 ? cout << "It's Zero\n" : cout << "It's Neagtive number\n";
    return 0;
}