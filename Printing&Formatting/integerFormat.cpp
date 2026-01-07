#include <iostream>
using namespace std;


int main()
{

   //printf used to format inthger numbers

   int page = 3, totalPages = 10;

   //print string and int variable 
   printf("The Page Number = %d \n", page); // %d it serve as a templeate for the second argument
   printf("You are in Page %d of %d\n", page, totalPages);

   //width specification
    printf("The Page Number = %0*d \n", 1,page);
    printf("The Page Number = %0*d \n", 2,page);
    printf("The Page Number = %0*d \n", 3,page);
    printf("The Page Number = %0*d \n", 4,page);
    printf("The Page Number = %0*d \n", 5,page);

     int number1 = 20, number2 = 30;
     printf("The Result of %d + %d = %d \n", number1, number2, number1 + number2);
    return 0;
}