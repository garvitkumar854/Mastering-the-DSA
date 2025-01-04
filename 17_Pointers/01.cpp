/* Pointers : Special variables that stores address of other variables.
Memory Addresses: address of a variable stored in hexadecimal(6*10 = 16) format
& : used to store address of a variable also.
* : used to access value at pointer.

Pointer to Pointer: Special Variables that stores address of Another pointer.
Dereference Operator --> {*} --> *(&a) --> *(ptr)

NULL Pointer: A pointer that does not point to any location
int* ptr = NULL;
We can't deference Null Pointers because it does'nt point any valid memory location
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;
    cout << "Address of A: " << &a << endl;
    cout << "Value of Pointer: " << ptr << endl;        
    cout << "Value at Pointer: " << *ptr << endl;       // *(&a)
    cout << "Address of Pointer: " << &ptr << endl;     

    // Pointer to Pointer
    int** ptr2 = &ptr;
    cout << "Value of Pointer to Pointer: " << ptr2 << endl;
    cout << "Address of Pointer to Pointer: " << &ptr2 << endl;
    cout << "Value at Pointer to Pointer: " << **ptr2 << endl;       // **(&ptr2)

    // NULL Pointer
    int* null_ptr = NULL;
    cout << "Value at NUll Pointer: " << null_ptr << endl;

    return 0;
}