#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //int x[ROWS][COULMNS]
    //Rows * Coulmns = total elements
    // int x[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };
    // //number of rows
    // int numberOfRows = sizeof(x) / sizeof(x[0]);
    //  //number of coulmns
    // int numberOfCoulmns = sizeof(x[0]) / sizeof(x[0][0]);
    // // loop around the two dimensional array, i will use two for loops one for the rows and the nested for the coulmns
    // for (int i = 0; i < numberOfRows; i++)
    // {
    //     for (int j = 0; j < numberOfCoulmns; j++)
    //     {
    //         cout << x[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //HomeWork store the multiplycaiton of 10x10 table result and print 0 before each result
    int arr[10][10];
    //number of rows
    int numberOfRows = sizeof(arr) / sizeof(arr[0]);
    //  //number of coulmns
    int numberOfCoulmns = sizeof(arr[0]) / sizeof(arr[0][0]);

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCoulmns; j++)
        {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }

     for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCoulmns; j++)
        {
            printf("%0*d ",2,arr[i][j]);
        }
        cout << endl;
    }
    return 0;
}