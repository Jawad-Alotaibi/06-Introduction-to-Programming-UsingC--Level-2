#include <iostream>

using namespace std;
//Declaration vs Defenition

//Function Declaration
void add(int, int); // tell the compiler this funciton exsit after the main don't worry 

int main() {

    add(20 , 30);
    return 0;
}
//Function defenition or body
void add(int n1, int n2)
{
    cout << n1 + n2 << endl;
}