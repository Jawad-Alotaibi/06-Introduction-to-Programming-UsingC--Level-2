#include <iostream>
using namespace std;
// pointer is just an variable that's stores an address for another variable, it's allows me to store address for variable , function ,object etc...
int main()
{
    int a = 10;
    int b = 50;

    cout << "a value    = "<< a << endl;
    cout << "a address = " << &a << endl;

    int *p ; //pointer is a variable that contain address for another variable, the type of the pointer must match the type of the value of the stored address
    p = &a; //it stores address only
    
    p = &b;
    cout << "Pointer value  = " << p << endl;// here the star means derefrencing means print the value of the address stored in the pointer
    return 0;
}