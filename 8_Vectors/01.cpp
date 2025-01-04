/*
Vectors like as Arrays, Vectors have Dynamic memory Allocation
STL -->  Standard Template Library {vector tool}
*/

#include <iostream>
#include <vector> // Vector Header File
using namespace std;
int main(){

    vector <int> vec; // by default size is 0
    vector <int> vec1 = {1,2,3};
    vector <int> vec2(3,2); // size of vector, value at each index;

    cout << vec1[0] << endl;

    // Special Loop for vector called "for each loop"
    // for(iterator name_of_vector)    *here iterator stored the value of that index.
    for(int val : vec2){
        cout << val << " ";
    }

    return 0;
}
