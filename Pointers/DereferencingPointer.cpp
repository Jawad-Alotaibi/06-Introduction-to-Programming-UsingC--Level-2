#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    cout << "a value    = " << a << endl;
    cout << "a address    = " << &a << endl;

    int *p = &a; //p hold a address
    cout << "Pointer Value  = " << p << endl;
    cout << "Value of the address that p is pointing to is  = " << *p << endl;

    *p = 511;
    cout << "a Value    = " << a << endl;
    cout << "Value of the address that p is pointing to is  = " << *p << endl;

    return 0;
}