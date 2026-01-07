#include <iostream>
#include <vector>

using namespace std;
struct stEmployee 
{
  string firstName;
  string lastName;
  float salary;
};
vector<stEmployee> readEmployeeVector(vector<stEmployee> &vEmployees)
{
    stEmployee employee;
    char readMore = 'y';

    while(tolower(readMore) == 'y' || toupper(readMore) == 'Y')
    {
        cout << "Enter FirstName? ";
        cin >> employee.firstName;
        
        cout << "Enter LastName? ";
        cin >> employee.lastName;

        cout << "Enter salary? ";
        cin >> employee.salary;
        
        vEmployees.push_back(employee);

        cout << "Do you want to read more employees? Y/N ?";
        cin >> readMore;
    }
    cout << endl;
    return vEmployees;
}

void printEmployeeVector(vector<stEmployee> & vEmployees)
{
     for (stEmployee &employee : vEmployees) {
        cout << "FirstName: " << employee.firstName << endl;
        cout << "LastName: " << employee.lastName << endl;
        cout << "Salary: " << employee.salary << endl << endl;
    }
}
int main()
{

    vector<stEmployee> vEmployees;
    readEmployeeVector(vEmployees);
    printEmployeeVector(vEmployees);
    return 0;
}