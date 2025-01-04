// Static vs Dynamic Allocation

/*

Code runes on two stages: Compile, Runtime.

Static: allocates at compile time
example: int arr[5];

Dynamic: allocates memory at runtime
vector <int> vec;           {initialy creates vector of size (0) zero at compile time}
vec.push_back(25);          {and at runtime push_back() execute and element is push back in vector,
                            hence at runtime the size of vector increases}.


So, Arrays size is fixed, and vector size and resizable which is automatic.

Types of Memory: 
Stack: In this Static Allocation is Done.
Heep: In this Dynamic Allocation is Done.
*/

/*
Concept and Working of Vectors

vector <int> vec;                       { creates vector of 0 size, means nothing}
vec.push_back(0);                       { creates vector of size 1 with value 0}

vec.push_back(1);                       { now this time vector capacity doubles means 1 * 2 = capacity of 2 with values 0 and 1}

vec.push_back(2);                       {vec size is 2, values 0 & 1, from this line vector capacity again double which 2*2 = 4 and stores the value of 2 at index 2}

We have 2 properties of vectors: 1) Size Property: Number of Elements. 2) Capacity Property: Space to store the values {capacity}

from the last code: we have vector of "SIZE: 3" but "CAPACITY: 4".
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    // Verification of code
    vector <int> vec;
    vec.push_back(0);    
    vec.push_back(1);    
    vec.push_back(2);    
    cout << "Size: " << vec.size() << endl;             // 3
    cout << "Capacity: " << vec.capacity() << endl;     // 4
    vec.push_back(3);
    vec.push_back(4);    
    cout << "Size: " << vec.size() << endl;             // 5
    cout << "Capacity: " << vec.capacity() << endl;     // 8
    return 0;
}