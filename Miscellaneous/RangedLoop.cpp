#include <iostream>
#include "HeaderFiles/MyInputLibrary.h"

using namespace MyInputLibrary;
using namespace std;

int main()
{
    
    //Used with collections or sets of items ...
    for(int n : {1,2,3,4,5,6,7,8,9,10,20,304,505,60,6070,403,34})
    {
        cout << n << endl;
    }
    return 0;
}