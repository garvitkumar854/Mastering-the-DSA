// Pointer Arithmetic

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;
    cout << (int)ptr << endl;
    // Increment/ Decrement
    ptr++;          // Size of Datatype is Add in Address of Pointer.
    cout << (int)ptr << endl;
    
    ptr--;          // Size of Datatype is Decreases in Address of Pointer.
    cout << (int)ptr << endl;
    
    // Add / Subtract Number
    cout << (int)(ptr+3) << endl << endl; // Add by 3 integer means 4*3 =  12 Bytes
    

    int arr[] = {1,2,3,4};
    cout << *arr << " ";
    cout << *(arr+1) << " ";
    cout << *(arr+2) << " ";
    cout << *(arr+3) << endl;
    
    // Subtract Ptr: Number of blocks of datatypes(int)
    int x = 10;
    int y = 20;
    int* j = &y;
    int* i = &x+2;
    cout << (int)i << endl;
    cout << (int)j << endl;
    cout << (int)(i-j) << endl;     // 3 means 3 Integer values (12 Bytes Difference in Addresses)

    // Compare (<,<=,>,>=,==,!=)
    int* A;
    int* B = A;
    cout << (int)A << endl;
    cout << (int)B << endl;

    cout << (A == B) << endl;   // 1 {True}
    return 0;
}