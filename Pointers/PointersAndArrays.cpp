#include <iostream>
using namespace std;

int main()
{
                //each element has it's own address in memory 
    int arr[4] = {10,20,30,40};
    int *ptr;
    //ptr will point to the first element
    ptr = arr;

    //the pointer will point to the first element of the array, ptr = &arr[0]
    //ptr + 1 is equivalent to &arr[1]
    //ptr + 2 is equivalent to &arr[2]
    //ptr + 3 is equivalent to &arr[3]

    cout << "Addresses are:" << endl;
    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << ptr + 2 << endl;
    cout << ptr + 3 << endl;

    cout << "\nValues are:" << endl;
    // cout << *(ptr) << endl;
    // cout << *(ptr + 1) << endl;
    // cout << *(ptr + 2) << endl;
    // cout << *(ptr + 3) << endl;

    for(int i = 0; i < 4; i++)
    {
        cout << *(ptr + i) << endl;
    }
    return 0;
}