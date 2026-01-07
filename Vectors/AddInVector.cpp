#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // declaration
    vector<int> vNumbers; // vector use stack data structure

    vNumbers.push_back(10); // bottom of the stack
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50); // top of the stack

    cout << "Numbers Vector: \n\n";

    // ranged loop
    for (int &number : vNumbers)
    {
        cout << number << endl;
    }
    cout << endl
         << endl;

    vNumbers.pop_back();
    vNumbers.pop_back();

    cout << "Numbers Vector after pop \n\n";
    for (int &number : vNumbers)
    {
        cout << number << endl;
    }
    cout << endl;
    return 0;
}