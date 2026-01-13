#include <iostream>
#include <ctime>

using namespace std;

/*
int tm_sec; // seconds of minutes from 0 to 61
int tm_min; // minutes of hour from 0 to 59
int tm_hour; // hours of day from 0 to 24
int tm_mday; // day of month from 1 to 31
int tm_mon; // month of year from 0 to 11
int tm_year; // year since 1900
int tm_wday; // days since sunday
int tm_yday; // days since January 1st
int tm_isdst; // hours of daylight savings time
*/

int main()
{
    time_t t = time(0); //get time now
    tm* now = localtime(&t);

    cout << "Year: " << now->tm_year + 1900<< endl;
    cout << "Month: " << now->tm_mon + 1 << endl;
    cout << "Day: " << now->tm_mday << endl;
    cout << "Hour: " << now->tm_hour << endl;
    cout << "Min: " << now->tm_min << endl;
    cout << "Sec: " << now->tm_sec << endl;
    cout << "Week Day: " << now->tm_wday << endl;
    cout << "Year Day: " << now->tm_yday << endl;
    cout << "Hours og daylight savings time: " << now->tm_isdst << endl;

    return 0;
}