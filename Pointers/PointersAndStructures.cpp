#include <iostream>
using namespace std;

struct stEmployee
{
    string name;
    float salary;
};

int main()
{
    stEmployee emp, *ptr;

    emp.name = "Jawad";
    emp.salary = 5000.0;

    cout << emp.name << endl;
    cout << emp.salary << endl;

    ptr = &emp;

    cout << "\nUsing Pointer:\n";
    cout << ptr->name << endl;
    cout << ptr->salary << endl;

    cout << endl;
    return 0;
}