#include <iostream>
#include <vector>
#include <cctype>

using namespace std;
vector<int> readNumbersInVector(vector<int> &vNumbers)
{
    int number;
    char readMore = 'y';

    while (tolower(readMore) == 'y' || toupper(readMore) == 'Y')
    {
        cout << "Please enter a number?\n";
        cin >> number;
        vNumbers.push_back(number);
        cout << "Do You want add more Numbers? Y/N ?";
        cin >> readMore;
    }

    return vNumbers;
}

void printNumbersInVector(vector<int> &vNumbers) //if i dont pass it by ref c++ will create local copy and iterate through it, this will take long time and decrease the performance if the vector contain huge data
{
    cout << "Vector Numbers: " << endl
         << endl;
    for (int &number : vNumbers)
    {
        cout << number << endl;
    }
    cout << endl;
}
int main()
{
    // read numbers
    // push to the vector
    // ask if the user want to add if yes push the value to the vector until he say no
    // return the vector
    //  pass the fullfiled vector into printVector function and loop ad print out the values

    /// @brief Declares a vector container to store integer values
    ///
    /// Memory allocation:
    /// - Creates an empty std::vector<int> object on the stack
    /// - The vector object itself contains three pointers (data pointer, size, capacity)
    /// - No dynamic memory is allocated for elements yet (capacity = 0, size = 0)
    /// - Dynamic allocation occurs only when the first element is added via push_back()
    /// - The actual integer elements will be stored in heap memory
    vector<int> vNumbers;
    readNumbersInVector(vNumbers);
    printNumbersInVector(vNumbers);
    return 0;
}