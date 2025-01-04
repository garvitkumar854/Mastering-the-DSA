/* Bubble Sort: we compare adjacent elements by running n-1 time loop
pushing largest element at last

Example: arr[4,1,5,2,3], n = 5
    1st             2nd             3rd             4th         <--- Iterations
[4,1,5,2,3]     [1,4,2,3,5]     [1,2,3,4,5]     [1,2,3,4,5]     
[1,4,5,2,3]     [1,4,2,3,5]     [1,2,3,4,5]     [1,2,3,4,5]
[1,4,5,2,3]     [1,2,4,3,5]     [1,2,3,4,5]    
[1,4,2,5,3]     [1,2,3,4,5]     
[1,4,2,3,5]
    i=0             i=1             i=2             i=3
total comparisons:
i=0     =>  4       n-i-1
i=1     =>  3       n-i-1    
i=2     =>  2       n-i-1
i=3     =>  1       n-i-1
Note: If your array sort before the all iterations completed But Our Bubble Sort Loop is still runs. 
*/                  

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int n){      // TC = O(n²)    
    
    bool isSwap = false;    // Optimization for Loop {Checking if Any Swapping is done on array or Not} Don't affect the O(n²)
    
    for(int i=0; i<n-1; i++){       // 1*n
        for(int j=0; j<n-i-1; j++){     // n*n
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
    }
    if(isSwap){     // Array is already sorted
        return;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}
