#include <iostream>

using namespace std;
//The difference between the normal variable and the static that the normal variable it's lifecycle is within the function lifecycle and it will be destroyed, 
//but the static it's declared in the function but it lifecycle is all the program

void myFunction()
{
    static int number = 1; // Local variable, will be destroyed with the end of the function.
    cout << number << endl;
    number++;
}

int main()
{   
    myFunction();
    myFunction();
    myFunction();
    
}