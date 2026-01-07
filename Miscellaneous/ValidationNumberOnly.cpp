#include <iostream>
#include <limits>
using namespace std;

int readNumber()
{
    int number;
    cout << "Enter Number please\n";
    //when the cin object read from the screen anything rather than numbers it will fail
    cin >> number;
   
    while (cin.fail())
    {
        cin.clear();
        //it will ignore the input at any size until it found \n
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Enter a valid number please\n";
        cin >> number;
    }

    return number;
}

int main() {    

      int validatedNumber = readNumber();
    cout << "Your Number is: " << validatedNumber << endl;
    
}