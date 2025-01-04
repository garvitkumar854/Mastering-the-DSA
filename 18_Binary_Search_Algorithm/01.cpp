/* Binary Search Algorithm
arr = [-1,0,3,4,5,9,12],    target = 12
1. find the mid
2. if mid>target, then find the element in second half of array.
3. if mid<target, then find the element in first half of array.
*/

#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach {Iterative}
int binarySearch(vector<int> arr, int tar){     
    int st = 0, end = arr.size()-1;
    while(st <= end){
        int mid = (st+end)/2;

        if(tar > arr[mid]){
            st = mid + 1;
        } else if(tar < arr[mid]){
            end = mid - 1;
        } else{
            cout << "Target Fount at Index: ";
            return mid;
        }
    }
    return -1;  // Target not found 
}

// In Mid Calculation Step; In Worst Case Scenario, st & end are integer values So it can be INT_MAX So when we add INT_MAX + INT_MAX so limit of integer overflow.
// Alternative formula of Mid = st + [ (end-st) / 2 ]
int binarySearch1(vector<int> arr, int tar){     
    int st = 0, end = arr.size()-1;
    while(st <= end){
        int mid = st + (end-st)/2;  // Optimization in Code

        if(tar > arr[mid]){
            st = mid + 1;
        } else if(tar < arr[mid]){
            end = mid - 1;
        } else{
            cout << "Target Fount at Index: ";
            return mid;
        }
    }
    return -1;  // Target not found 
}

// Time Complexity
/* if n = 10, so we half the array so in worst case we have 4 operations
Time Copx = in how many operations the n value equals to 1

    n       --->            n/2⁰
    n/2     --->            n/2¹         
    n/4     --->            n/2²
    n/8     --->            n/2³
    ..          
    ..
    1       --->            n/2^k   = n = 2^k = log2n = k   = O(logn)

*/

int main(){
    vector<int> arr = {-1,0,3,4,5,9,12};
    int tar = 4;
    cout << binarySearch(arr,tar);

    return 0;
}