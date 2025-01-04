// Aggressive Cows Problem  {Variation of Book Allocation}
/* Assign C cows to N stalls such that min distance between them is largest possible.
Return Largest Minimum Distance.

N = 5,  arr = [1,2,8,4,9] {positions},      C = 3
Image the arr values on Graph X Axis;

Case1: If we assign:        Case2: If we assign:        Case3: If we assign:
C1 -> 1                     C1 -> 2                     C1 -> 1
C2 -> 2                     C2 -> 4                     C2 -> 4
C3 -> 4                     C3 -> 8                     C3 -> 8    
Distance1 = C1-C2 = 1       Distance1 = C1-C2 = 2       Distance1 = C1-C2 = 3
Distance2 = C2-C3 = 2       Distance2 = C2-C3 = 4       Distance2 = C2-C3 = 4
-Minimum Distance = 1       -Minimum Distance = 2       -Minimum Distance = 3

Now There is No Other Answer of Largest Minimum Distance.
1. Find Minimum Distance {lowest minimum distance, highest minimum distance}
highest possible minimum distance = largest in array - smallest in array
and lowest possible minimum distance = 1
So we here finded the range.

to find if Mid is Possible or Not.
1. Sort the array
2. Start Placing the Cows.
3. If Cows Minimum Distance is lower then Mid so it is not possible to place the cows to the minimum distance {Mid}
*/

#include <iostream>
#include <vector>
#include <algorithm>    // for sorting the Array.
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDistance){        // O(n)
    int cows = 1, lastStallPos = arr[0];

    for(int i=1; i<N; i++){     // i=1 {because we placed 1 cow in starting already}
        if(arr[i]-lastStallPos >= minAllowedDistance){
            cows++;
            lastStallPos = arr[i];
        }
        if(cows == C){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C){
    sort(arr.begin(),arr.end());        // {NlogN} Sort the Array {we Sorting in this function instead of again and again in isPossible function}    

    int st = 1, end = arr[N-1]-arr[0], ans = -1;
    while(st <= end){                   // O(log(Range) * N)
        int mid = st + (end - st)/2;

        if(isPossible(arr, N, C, mid)){         // right
            ans = mid;
            st = mid + 1;        
        } else{                                 // left
            end = mid - 1;
        }
    }
    return ans;
}
int main(){
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};
    
    cout << getDistance(arr, N, C) << endl;
    return 0;
}