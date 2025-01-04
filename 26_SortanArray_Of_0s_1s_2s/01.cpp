// Sort an Array of 0s, 1s, 2s / Sort Colors
// arr = [2,0,2,1,1,0,1,2,0,0]  To      [0,0,0,0,1,1,1,2,2,2]

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute Force Approach {Simply Sort {can use Merge Sort, Inbuild Sort function of C++}}

void sortColors(vector<int>& nums){         // TC = O(nlogn), SC = O(1)
    sort(nums.begin(), nums.end());
}

/* Slightly More Optimized (TC = O(n))
store count of 0s, 1s, 2s in loop,  ex 0s = 4, 1s = 3, 2s = 3
overwrite elements:     replace first 4 elements with 0s,   then replace 3 elements with 1s,    and then 2s
*/
void sortColors2(vector<int>& nums){            // TC = O(n) {ignore constants}, 2 Passes
    int n = nums.size();
    int count0 = 0, count1 = 0, count2 = 0;
    
    // TC = O(n) {counting the 0s, 1s, 2s}
    for(int i=0; i<n; i++){
        if(nums[i] == 0){
            count0++;
        } else if(nums[i] == 1){
            count1++;
        } else{
            count2++;
        }
    }
    // O(n)
    int idx = 0;
    for(int i=0; i<count0; i++){
        nums[idx++] = 0;
    }
    for(int i=0; i<count1; i++){
        nums[idx++] = 1;
    }
    for(int i=0; i<count2; i++){
        nums[idx++] = 2;
    }
}

// Optimal Approach {Dutch National Flag Algorithm},    Solution in Single Pass
/* Objective: We divide array like this in such we receive all 0s and then all 1s and then 2s
We, Use 3 pointers (like pointers {low,mid,high)
Store all 0s = 0 to l-1
Store all 1s = l to m-1
Store all 2s = h+1 to n-1
Unsorted Part = (mid to high) {We try to minimize this part to 0}
In this we See a Range remaining from m to h, So Here our Unsorted Elements Stored.
Our algorithm starts from mid = 0, high = n-1
*/
void sortColors3(vector<int>& nums){
    


}


int main(){
    vector<int> nums = {2,0,2,1,1,0,1,2,0,0};

    return 0;
}