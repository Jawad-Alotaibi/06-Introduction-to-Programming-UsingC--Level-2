#include <iostream>
using namespace std;

int main()
{
    
    //Recap To pointers: Pointeres are variables contain address for another variable,and the difference between pointer and refernece is 
    //that in the runtime i can change the pointer to point to whatever variable i want, but it must be point to the same type the pointer declared with example int *p; this in rutime
    //only can has an address for an integer variable other than that will throw runtime error
    //ptr → address of x
    // *ptr → value inside that address → 10

    // Think of it like:
    // Pointer = house address
    // *pointer = what’s inside the house 🏠
    
    //If i need to break the condition for the pointer that i need to point to variable of the same type of pointer type, here i can point to void see example below

    //this pointer is genric,, can point to any type ! we use void if we don't know the type of the variable the pointer will point to in runtime..has a lot advance usages
    void *ptr;

    int x = 10;
    float f1 = 10.5;
    //And you asked:
    // Why doesn’t the compiler know that ptr points to a float, even though I gave it the address of a float?

    // Short answer:
    // Because the type of a pointer is decided by its declaration, not by the value stored inside it.
    
    ptr = &f1;
    cout << ptr << endl;    
    //void* means: “I point to something, but I don’t know what”
    // C++ cannot dereference void*, So we must tell C++ the type.
    cout << *(static_cast<float*>(ptr)) << endl;
    
    ptr = &x;
    cout << *(static_cast<int*>(ptr));
    cout << ptr << endl;
    cout << endl;

    
    return 0;
}