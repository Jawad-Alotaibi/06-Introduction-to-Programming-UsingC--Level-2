#include <iostream>
#include <vector>
// the features of vectors is it dynamic size the opposite of the array we need to decide the size at the compile time
using namespace std;
struct stEmployee
{
    string firstName; 
    string lastName;
    float salary;
};

int main()
{
    //Syntax of creating a vector, std::vector<type> vector_name
    vector <stEmployee> vEmployees;
    stEmployee tempEmployee;

    tempEmployee.firstName = "Jawad";
    tempEmployee.lastName = "Alotaibi";
    tempEmployee.salary = 20000;

    vEmployees.push_back(tempEmployee);


    tempEmployee.firstName = "Eyad";
    tempEmployee.lastName = "Maccawy";
    tempEmployee.salary = 40000;

    vEmployees.push_back(tempEmployee);

     
    tempEmployee.firstName = "Enad";
    tempEmployee.lastName = "Alharbi";
    tempEmployee.salary = 80000;

    vEmployees.push_back(tempEmployee);

    cout << "Employees Vector: \n\n";
    /*
        if i don't use the ref into the employee what happend?
        a new instance of stEmployee named employee is created for each iteration.
        Each time, the data from the current vector element is copied into this new instance.
    */
    for (stEmployee employee : vEmployees)
    {
        cout << "FirstName: " << employee.firstName << endl;
        cout << "LastName: " << employee.lastName << endl;
        cout << "Salary: " << employee.salary << endl;

        cout << endl << endl;
    }
    return 0;
}