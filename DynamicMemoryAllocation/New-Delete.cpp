#include <iostream>
using namespace std;
//Without pointers we cannot do dynamic memory allocation! we need dynamic memory allocation to make our programmes faster and use a little chunks of the memory
/*
Dynamic Memory Allocation :
Instead of declaring variables in memory before compilation (like int x or float y), we use pointers and allocate memory for them at runtime. The keyword 'new' requests memory from the heap and returns its address to the pointer. We can then assign a value to the memory location that the pointer points to. Finally, we free the allocated memory using 'delete'.
All of this occurs during program execution (runtime).
*/
int main()
{
    //declare an int pointer
    int *ptrX;
    //declare a float pointer
    float *ptrY;

    //dynamically allocate memory
    ptrX = new int;
    ptrY = new float;

    //assign values to the memory
    *ptrX = 45;
    *ptrY = 58.99f;
    
    cout << *ptrX <<endl;
    cout << *ptrY <<endl;

    //deallocate the memory and return it to the operating system to use it for another programmes
    delete ptrX;
    delete ptrY;


    return 0;
}