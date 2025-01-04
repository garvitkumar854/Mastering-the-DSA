/* Selection Sort: Kind of the Opposite of Bubble Sort
Here We Image our array in two parts: Sorted And UnSorted.
We try to Move Our Smallest Element from Unsorted Part to Sorted Part.
n-1 times{loop} -> (n-1) {push Smallest Element}
We Assume Our Array Unsorted, find the smallest element and place it to its position by swapping.
Here We don't touch sorted part of the array.
[4,1,5,2,3] ->  [1,4,5,2,3]  ->   [1,2,5,4,3]   ->   [1,2,3,4,5]    ->  [1,2,3,4,5]

*/

#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n){           // TC = O(n²)
    for(int i=0; i<n-1; i++){
        int smallestIdx = i;        // unsorted part starting index
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

int main(){
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}