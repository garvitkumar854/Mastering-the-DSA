/* Insertion Sort: Comes from the Idea of Playing Cards.
Assume Sorted and Unsorted Parts of Array
[4,1,5,2,3], curr = 1
[1,4,5,2,3], curr = 5
[1,2,4,5,3], curr = 2
[1,2,3,4,5], curr = 3
[1,2,3,4,5] = sorted
Total iterations = 4                                */

#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n){       // TC = O(n²)
    for(int i=1; i<n; i++){         // Assuming i as first Element Unsorted Element 
        int curr = arr[i];
        int previous = i-1;

        while(previous>=0 && arr[previous] > curr){
            arr[previous+1] = arr[previous];
            previous--;
        }
    arr[previous+1] = curr;     // placing the currect element on its correct position
    }
}

int main(){
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}