#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //std::vector<T> vector_name;
    //Initialization
    vector <int> vNumbers = {1,2,3,4,5,6,7,8,9,10};
    cout << "Vector Elemenets = ";

    //ranged loop to iterate through the list
    /*
        Each iteration, C++ copies the element into number
        number is a separate box with its own value
        Changes to number don't affect the original vector
    */
    for (int &number : vNumbers)
    {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}