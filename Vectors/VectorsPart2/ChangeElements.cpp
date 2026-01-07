#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vNum{1, 2, 3, 4, 5};
    cout << "Initial Vector: ";
    for (const int &i : vNum)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    cout << "Updated Vector: ";
    for (int &i : vNum)
    {
        i = 20;
        cout << i << " ";
    }

    cout << endl;

    vNum[0] = 511;
    vNum.at(4) = 400;
    vNum.at(3) = 120;

    cout << endl;

    cout << "Updated Vector ";
    for (const int &i : vNum)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}