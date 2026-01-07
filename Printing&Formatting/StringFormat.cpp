#include <iostream>
using namespace std;

int main()
{

    //remember strings is just array of charachters, 
    //with the eveloution of c++ they create the string object and the printf dosent support it. we're dealing with strings indirectly.
    char name[] = "Jawad Khalid Alotaibi";
    char schoolName[] = "Alenjaz";
    //note printf cannot deal with strings it deals with chars
    //proof-of-conecept
    // string n = "Jawad";
    // printf("Hey %s", n);

    //print string and string;
    printf("Dear %s How are you? I hope you're fine\n\n", name);
    printf("Welcome to %s Alenjaz\n\n", schoolName);

    char k = 'S';
    printf("Setting the width of c :%*c \n", 1,k);
    printf("Setting the width of c :%*c \n", 2,k);
    printf("Setting the width of c :%*c \n", 3,k);
    printf("Setting the width of c :%*c \n", 4,k);
    printf("Setting the width of c :%*c \n", 5,k);
    return 0;
}