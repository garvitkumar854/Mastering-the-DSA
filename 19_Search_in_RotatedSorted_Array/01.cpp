// Search in Rotated Sorted Array.
/*
we have given an array which is sorted in ascending order, distinct values
means original = arr = [0,1,2,3,4,5,6,7],
rotated = arr = [3,4,5,6,7,0,1,2],      tar = 0
*/

#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach (Linear Search Approach {TC = O(n)})

/* In this we apply Binary Search on Sorted part of the Array either Left or Right. in this case we know our left part is sorted = {3,4,5} 
Important: We have to check Sorted Area in Array, by checking mid is > or < than start or end.
*/

int search(vector<int>& arr, int target){
    int st=0, end = arr.size()-1;

    while(st <= end){
        int mid = st + (end-st)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[st] <= arr[mid]){    // left part sorted
            if(arr[st] <= target && target <= arr[mid]){    // go on left
                end = mid - 1;
            } else{
                st = mid + 1;                               // go on right (update start)
            }
        } else{                     // right part sorted
            if(arr[mid] <= target && target <= arr[end]){   // go on right
                st = mid + 1;
            } else{                     
                end = mid - 1;                              // go on left {update end}
            }
        }
    }
    return -1;
    // Time Complexity = O(logn)
}

int main(){
    vector<int> arr = {3,4,5,6,7,0,1,2};
    int target = 0;
    cout << search(arr,target) << endl;

    return 0;
}