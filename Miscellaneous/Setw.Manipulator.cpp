#include <iostream>
#include <iomanip> //the library that stored the std::setw
using namespace std;
//setw it's look like a function but it's not, it' a manipulator to manipulate the output
int main()
{
    cout << "---------|--------------------------------|---------|" << endl;
    cout << "  Code   |               Name             |  Mark   |" << endl;
    cout << "---------|--------------------------------|---------|" << endl;
    cout << setw(9) << left <<"C101" << "|" << setw(32) << left << "introduction to Programming 1" << "|" << setw(9) << right << "95" << "|" << endl;
    cout << setw(9) << left <<"C102" << "|" << setw(32) << left << "Computer Hardware" << "|" << setw(9) << right << "88" << "|" << endl;
    cout << setw(9) << left << "C1035"  << "|" << setw(32) << left << "Network" << "|" << setw(9) << right << "75" << "|" << endl;
    cout << "---------|--------------------------------|---------|" << endl;

    return 0;
}