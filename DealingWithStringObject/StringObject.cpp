#include <iostream>
#include <string> 
using namespace std;

// C++ String Methods:

// .length() → Returns the total number of characters in the string.

// .at(i) → Returns the character at position i.

// .append(text) → Adds text to the end of the string.

// .insert(pos, text) → Inserts text starting at position pos.

// .substr(pos, len) → Extracts a substring of length len starting at pos.

// .push_back(char) → Adds one character at the end.

// .pop_back() → Removes the last character.

// .find(text) → Finds the position of the first occurrence of text.

// .clear() → Deletes all characters from the string.

// .npos → Returned when the substring is not found.

int main()
{
    string s1 = "My Name is Jawad Khalid Alotaibi, I Love Programming.";

    //gets the length of the string
    cout << s1.length() << endl;

    //gets the charachter of the determined position passed in the parameter
    cout << s1.at(11) << endl;

     //add the string passed in the parameter to the end of the string
    cout << s1.append(" I like to be software engineer") << endl;

    //insert the string at the position passed to the function
    cout << s1.insert(84, ". Intent to be web applications developer and be one of the best there inshallah") << endl;

    //it will cut the next 8 letters starting from position 84
    cout << s1.substr(84, 80) << endl;
    
   s1.push_back('X');
   cout << s1 << endl;

   s1.pop_back();
   cout << s1 << endl;

    //finds software in string and return it's position
   cout << s1.find("software") << endl;

   cout << s1.find("Software") << endl;

   if(s1.find("Software") == s1.npos)
   {
        cout << "Softwarre is not found" << endl;
   }

   //clears all the charachters, it will empty tthe string
   s1.clear();
   cout << s1 << endl;
    return 0;
}