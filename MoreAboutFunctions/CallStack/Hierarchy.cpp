#include <iostream>
using namespace std;

void function2();

void function4()
{
    cout << "Hey i am function 4 " << endl;
}
void function3()
{
    function4();
}
void function2()
{
    function3();
}
void function1()
{
    function2();
    function3();
}
int main()
{
    function1();
    return 0;
}