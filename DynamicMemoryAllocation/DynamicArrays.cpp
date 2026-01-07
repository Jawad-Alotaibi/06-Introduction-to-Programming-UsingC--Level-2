#include <iostream>
using namespace std;

int main()
{
    

    int num;
    cout << "Please Enter How many students you want: ";
    cin >> num;
    int arr[num];
    float *pStudentsArr;
   
    pStudentsArr = new float[num]; // every new need delete 

    cout << "Enter Grades of students." << endl;
    //the loop to get the students grades
    for(int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << ":"; 
        cin >> *(pStudentsArr + i);// the same of pStudentsArr[i]
        cout << endl;
    }

    for(int i = 0; i < num; i++)
    {
        cout << pStudentsArr[i] << endl;
    }

    delete[] pStudentsArr; // ptr memory is released
    
    return 0;
}