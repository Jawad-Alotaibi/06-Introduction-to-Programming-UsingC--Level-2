#include <iostream>
using namespace std;

//Function OverLoading is the ability to create multiple functions with the 
// same name but different signature (different number, type, or order of parameters) within the same scope
//This allows a single function name to perform similar but distinct tasks based on the arguments provided when the function is called.
// The compiler determines which specific function to execute based on the arguments provided in the function call. 
//مثال: الشخص ابو وجهين فعليا هو نفس الشخص "نفس اسم الفنكشن" ولكن له افعال مختلفه او امبلنتيشن مختلف قدامك يمدحك وفي ظهرك يسبك


double mySum(double n1, double n2);
int mySum(int n1, int n2);
int mySum(int n1, int n2, int n3);
int mySum(int n1, int n2, int n4, int n3);

int main()
{
    cout << mySum(10, 20) << endl;
    cout << mySum(10.1 , 20.1) << endl;
    cout << mySum(10, 20, 30) << endl;
    cout << mySum(10, 20, 30 ,40) << endl;
    
    return 0;
}

double mySum(double n1, double n2) {
    return (n1 + n2);
}

int mySum(int n1, int n2) {
    return (n1 + n2);
}

int mySum(int n1, int n2, int n3) {
    return (n1 + n2 + n3);
}

int mySum(int n1, int n2, int n3, int n4) {
    return (n1 + n2 + n3 + n4);
}