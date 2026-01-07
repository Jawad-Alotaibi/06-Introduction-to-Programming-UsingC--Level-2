#include <iostream>
using namespace std;
void function1(int &x) //call by reference
{
    x++; // 11
}
int main()
{
    int a = 10;
     cout << a << endl;
     cout << &a << endl;
    
    return 0;
}