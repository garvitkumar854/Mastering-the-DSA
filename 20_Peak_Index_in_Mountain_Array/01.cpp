/* Peak Index in Mountain Array
arr = [0,3,8,9,5,2]
in this peak index is = 9 , firstly till the 9 elements are in increment order and then in decrement just like as mountain peak.
another example: arr [1,2,1]

arr[Peak-1] < arr[Peak] > arr[Peak+1]
idex = 0, n-1 never will be Peak Element
in this question we have Constraint: arr is guaranteed to be a mountain array.
*/

#include <iostream>
#include <vector>
using namespace std;

// Linear Search Approach {Do Self}
int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    
    // Check Peak Index from 2 element to end last element because of i-1 and i+1
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return i; // Return the index of the peak
        }
    }
    
    return -1; // No peak found (invalid mountain array)
}

// Binary Search Approach
/* 
case 1: Mid/index i == peak
case 2: Mid/index i lies in increasing slope, So Peak always exists in right side then we call Right Half Binary Search
case 3: Mid/index i lies in decreasing slope, So Peak alwats exists in left side then we call Left Half Binary Search
*/

int peakIndex(vector<int>& A){
    int st = 0, end = A.size()-2;   // index, n-1 never will be the peak element.
    
    while(st <= end){
        int mid = st + (end-st)/2;

        if(A[mid-1] < A[mid] && A[mid] > A[mid+1]){
            return mid;
        } else if(A[mid-1] < A[mid]){   // increasing slope {peak exists in right}
            st = mid + 1;
        } else{                         // decreasing slope {peak exists in left}
            end = mid - 1;
        }
    }

    // return -1;   {peak element always exists}
}


int main(){
    vector<int> arr = {0,3,8,9,5,2};
    cout << peakIndex(arr) << endl;
    return 0;
}