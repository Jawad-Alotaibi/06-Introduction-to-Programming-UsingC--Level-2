#include <iostream>
#include <vector>
using namespace std;

/*
Concept Explanation:
- Iterators: special pointers provided by the vector that allow you to traverse it.
        An iterator is like a pointer that “points” to an element inside a container (like vector, list, map, etc.). You can move it forward or backward depending on the container.
        vNum.begin() → returns an iterator pointing to the first element of the vector.
        vNum.end() → returns an iterator pointing just past the last element (not the last element itself!).
        You can dereference an iterator with *iter to get the value it points to.

Why It Matters:
    Iterators give flexible traversal across any container (vector, list, map, etc.).
    They decouple your code from indexing, making it easier to work with containers that don’t support direct indexing.
    Using iterators is considered modern C++ style in many situations.
*/

// vNum.end() points past the last element
// You’re right, it points just past the last element.
// Why? This is by design in C++ so loops like for(iter = begin(); iter != end(); ++iter) work safely.
// Think of it like a “stop marker” — it tells the loop: “don’t go beyond here”.
int main()
{
    //declare vector
    vector<int> vNum {1,2,3,4,5};

    //use iterator with for loop
    for(vector<int>::iterator iter = vNum.begin(); iter != vNum.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}