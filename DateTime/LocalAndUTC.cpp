#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t t = time(0); //get time now
    cout << t << endl;
    char *dt = ctime(&t); //convert it to string 
    cout << dt << endl << endl;

    tm *gmtm = gmtime(&t);// converting now to tm struct for UTC date/time
    dt = asctime(gmtm); //convert the UTC struct to string 
    cout << dt << endl;
    return 0;
}