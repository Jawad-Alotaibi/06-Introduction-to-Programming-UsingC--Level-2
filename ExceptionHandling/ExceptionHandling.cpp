#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // declaration        0 1 2 3 4
    vector<int> vNumbers {1,2,3,4,5}; // vector use stack data structure

    try{    
         int num = vNumbers.at(20);
         cout << "i am the accessed element: " << num << endl;

    } catch (...)
    {
        cout << "There are error in accessing the vector" << endl;
    }
   
   cout << "I am the line of code after the exception" << endl;
    return 0;
}