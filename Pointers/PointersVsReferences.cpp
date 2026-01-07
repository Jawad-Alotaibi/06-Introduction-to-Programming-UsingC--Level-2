#include <iostream>
using namespace std;

// Reference is just an alias for a variable it dosen't have it;s own slot in memory it's just an alias for exsisted slot
//Pointer it a place to store an address for another variable, pointer has it's own slot and store address for another variable.

/*
        ✅ Key Takeaways (Golden Rules)

    Reference assignment (r = value) changes value of aliased variable, never the alias itself.

    Pointer reassignment (p = &something) changes where it points, not the value.

    Pointer dereference (*p = value) changes the value of the variable it points to.
*/
int main()
{
    int x[] = { 1,2,3 };
    for (int& y : x)
    {
        cout << y << endl;
        cout << &y << endl << endl;
    }

    // int a = 10;
    // int &x = a;

    // cout << &a <<endl;
    // cout << &x <<endl;

    // cout << a <<endl;
    // cout << x <<endl;

    // int* p = &a;

    // cout << p << endl;
    // cout << *p << endl;

    // int b = 20;
    // p = &b;

    // cout << p << endl;
    // cout << *p << endl;

    // x = b;
   
    // cout << "Address of a: " << &a << endl;
    // cout << "Address of b: " << &b << endl;
    // cout << "Address of x: " << &x << endl;

    // cout << "Value of a: " << a << endl;
    // cout << "Value of x: " << x << endl;
    return 0;
}