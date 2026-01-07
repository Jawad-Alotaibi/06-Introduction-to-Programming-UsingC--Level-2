#include <iostream>

using namespace std;

int mySum(int a, int b, int c, int d = 0);

int main() 
{
    cout << "First call without give the optional parameter: " << mySum(10,20,30) << endl;
    cout << "Second call with give the optional parameter: " << mySum(10,20,30,40) << endl;

    return 0;
}

int mySum(int a, int b, int c, int d)
{
    cout << "\ndefault value " << d << endl;
    return (a + b + c + d);
}


