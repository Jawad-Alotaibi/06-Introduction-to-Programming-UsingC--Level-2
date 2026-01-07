#include <iostream>
using namespace std;

void swap(int *p1, int *p2)
{
    //This is the logic to swap two elements
    // int temp;
    // temp = n1;
    // n1 = n2;
    // n2 = temp;

    //using pointers
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}
int main()
{
    int n1 = 1 , n2 = 2;
    cout << "Before swapping" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    swap(&n1,&n2);

    cout << "\nAfter swapping" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    return 0;
}