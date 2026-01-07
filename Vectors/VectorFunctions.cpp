#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vNumbers;
    // here the stack it's fulilled with those values
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    cout << "First Element: " << vNumbers.front() << endl; // first element in the stack
    cout << "Last Element: " << vNumbers.back() << endl;   // last element in the stack

    cout << "size: " << vNumbers.size() << endl;         // return the current size of the vector
    cout << "Capacity: " << vNumbers.capacity() << endl; // return the overall size of the vector

    cout << "Last Element: " << vNumbers.empty() << endl; // return true if the vector is empty and return false if the vector has data

    vNumbers.clear(); // it clears (deletes) all the elements in the vector
    return 0;
}