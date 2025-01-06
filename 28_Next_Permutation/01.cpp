/* Next Permutation:
Permutation : Arrangement / Orders
A = {1,2,3}     Return lexicographically next

[1,2,3],        
[1,3,2],    --> Next Lexicographic Permutation of [1,2,3]
[2,1,3],
[2,3,1],
[3,1,2],
[3,2,1]     --> This is a lexicographic arrangement
means the value which is smallest comes first and large value comes then.

// Brute Force Approach: Find All Permutations and then search our array and then return the Next Permutation {Recursion, TC = O(n! * n) + next Pmtion} */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Optimal Approach {TC = O(n), SC = O(1)}: 
Taking Example: [1,2,3,5,4]     ->  [1,2,4,3,5]      
                [1,2,3,6,5,4]   ->  [1,2,4,3,5,6] 
                [1,2,5,4,3]     ->  [1,3,2,4,5]
Notice the Element {Backward Travels}:
4<5 but {5>3} in 1st E.g(Qs),     4<5,5<6, but {6>3} (first element that we are encountering)
similarly 3<4,4<5, but {2>5} called pivotot in Permutation      
Characterstic of pivotot: A[i] < A[i+1] {if Backward Travels}
Step 1: Find the pivotot
Step 2: Find the righmost element > pivotot element
Step 3: Swap pivotot with rightmost element.
Step 4: Reverse elements from (pivotot+1) to n-1.

If in a Situation that pivotot not exits so we will arrange array in ascending order {Question Says}
{5,4,3,2,1} (Next Permutation Never exits) --> {1,2,3,4,5}
*/

vector<int> nextPermutation(vector<int> &arr){          // {TC = O(n), SC = O(1)}
    int n = arr.size();

    // Code to find the pivotot {TC = O(n)}
    int pivot = -1;
    for(int i=n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            pivot = i; break;
        }
    }
    // Check If Array is in Maximum Permutation Stage or Not.
    if(pivot == -1){
        // reverse array
        reverse(arr.begin(), arr.end());        // in place changes
        return arr;
    }

    // Find Rightmost Element which is > pivotot.
    for(int i = n-1; i>pivot; i--){
        if(arr[i] > arr[pivot]){
            swap(arr[i], arr[pivot]);     // swap the element with pivotot
            break;
        }
    }

    // Reverse the Part after pivotot to n-1.
    // reverse(arr.begin() + pivot+1, arr.end())        --> Alternative
    int i = pivot + 1, j = n-1;
    while(i <= j){
        swap(arr[i], arr[j]);
        i++; j--;
    }
    return arr;
}

int main(){
    vector<int> arr = {1,2,3,6,5,4};
    cout << "Array: ";
    for(int val: arr){
        cout << val << ",";
    }
    cout << "\nNext Permutation: ";
    for(int val: nextPermutation(arr)){
        cout << val << ",";
    }
    return 0;
}