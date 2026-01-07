#include <iostream>

using namespace std;


//Recursion is danger we need to deal with it carefully because with each call it use stack as a storage and the stack is limited
//HomeWork1 
void printNumbersFromMToN(int n, int m)
{
    //Base Case
    if(m >= n)
    {
        cout << m << endl;
        printNumbersFromMToN(n , m - 1);
    }
}

//HomeWork2
int myPower(int base, int power)
{
    
    if(power == 0) // the base case base ^ 0 = base = 1;
    {
        return 1;
    }
        // Recursive case: base^power = base * base^(m-1)
   return base * myPower(base, power - 1); 
}

int main()
{

    cout << myPower(2, 4) << endl;
    return 0;
}

