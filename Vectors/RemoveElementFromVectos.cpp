#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vNumbers;
    //here the stack it's fulilled with those values 
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    cout << "Stack size= "  << vNumbers.size() << endl;

    //note the stack is LIFO Data structure means the last element inside the stack it's the first one comes out from it
    // vNumbers.pop_back(); //delete the last element added to the stack 40
    // vNumbers.pop_back();
    // vNumbers.pop_back();
    // vNumbers.pop_back();
    // vNumbers.pop_back();
    // cout << "Stack size= "  << vNumbers.size() << endl;
    // if(! vNumbers.empty())
    // {
    //     vNumbers.pop_back();
    // }
    vNumbers.clear();
    cout << "\nVector Numbers after deleting the elements: \n\n";

    //ranged loop
    for (int &number :  vNumbers)
    {
        cout << number << endl;
    }
    cout << endl;
    return 0;
}
