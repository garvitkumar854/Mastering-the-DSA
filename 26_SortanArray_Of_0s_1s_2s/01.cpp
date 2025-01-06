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
vector<int> sortColors2(vector<int>& nums){            // TC = O(n) {ignore constants}, 2 Passes
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
    return nums;
}

// Optimal Approach {Dutch National Flag Algorithm},    Solution in Single Pass
/* Objective: We divide array like this in such we receive all 0s and then all 1s and then 2s
We, Use 3 pointers (like pointers {low,mid,high)
Store all 0s = 0 to l-1
Store all 1s = l to m-1
Store all 2s = h+1 to n-1
Unsorted Part = (mid to high) {We try to minimize this part to 0}
In this we See a Range remaining from m to h, So Here our Unsorted Elements Stored.
Our algorithm starts from mid = 0, high = n-1, low = 0

if mid == 0, swap low and mid, and then mid++, low++
if mid == 1, then mid++, {skip it}
if mid == 2, then swap mid and high, and then high--

Dry Run: arr = {2,0,2,1,1,0}, low=0, mid=0, high = n-1;
mid = 2{value}, low = 2{value}
[0,0,2,1,1,2]
mid = 0{value}, swap 0 with 0; then mid++,low++;
mid = 0 again same,
mid = 2, low = 2, swap high and mid, high--;
[0,0,1,1,2,2]           ---> Sorted
mid = 1, mid++
mid = high loop exits
*/

vector<int> sortColors3(vector<int>& nums){
    int n = nums.size();
    int mid = 0, high = n-1;
    int low = 0;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low],nums[mid]);
            mid++; low++;
        } else if(nums[mid] == 1){
            mid++;
        } else{
            swap(nums[high], nums[mid]);
            high--;
        }
    }
    return nums;
}


int main(){
    vector<int> nums = {2,0,2,1,1,0,1,2,0,0};
    
    for(int val: sortColors2(nums)){
        cout << val << ", ";
    }
    cout << endl;
    for(int val: sortColors3(nums)){
        cout << val << ", ";
    }
    return 0;
}