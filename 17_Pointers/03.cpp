// Array Pointers
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    // Address of arr = address of arr[0], arr is already a pointer
    cout << *arr << endl;   // value at arr means value of arr[0]

    int a = 15;
    int* ptr = &a;
    // ptr = &b         {we can store another variable address in pointer, but not in Array}
    // arr = &a;           {Error, Constant Pointer}
    return 0;
}