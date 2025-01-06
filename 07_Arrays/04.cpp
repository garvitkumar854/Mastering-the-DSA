// Reverse an Array (in original array)
/*
arr[] = {4,2,7,8,1,2,5} ----> {5,2,1,8,7,2,4}

Argorithm: 2 pointers approach.
swapping first and last element, 2 and 2 last and so on.
We have swap() function in C++ to swap the values.
*/
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0, end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    cout << "Original Array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    reverseArray(arr, size);

    cout << "\nReverse Array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;

}
