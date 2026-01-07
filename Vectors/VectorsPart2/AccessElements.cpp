#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //We can Access vector elements using .at(index) or the bracket [] like the normal array
    vector<int> vNum{1,2,3,4,5};

    cout << "\n\n Using .at(i) \n";
    cout << "Element at Index 0: " << vNum.at(0) << endl;
    cout << "Element at Index 2: " << vNum.at(2) << endl;
    cout << "Element at Index 4: " << vNum.at(4) << endl;

    cout << "\n\n Using [i] \n";
    cout << "Element at Index 0: " << vNum[0] << endl;
    cout << "Element at Index 2: " << vNum[2] << endl;
    cout << "Element at Index 4: " << vNum[5] << endl;
    return 0;
}