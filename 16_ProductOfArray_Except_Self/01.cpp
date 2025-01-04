// Product of Array Except Self
/*
nums = [1,2,3,4]
ans = [24,12,8,6]
Note: we are not allowed to use division operator.
*/

#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach (Time Complexity = O(n²)
vector<int> productExceptSelf(vector<int>& nums){
    vector<int> ans(nums.size(),1);
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(i != j){
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

/* Optimal Approach (Time Complexity = O(n), Space Complexity = O(n)): Find Prefix {Left Product} and Suffix {Right Product} of the array
means example we on index 2, value = 3 = so prefix = 1*2 = 2
*/
vector<int> productExceptSelf1(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);

    //prefix
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    //suffix
    for(int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    
    // ans
    for(int i=0; i<n; i++){
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;
}

// Improve Space Complexity from O(n) to O(1) {Final Optimal Solution}
vector<int> productExceptSelf2(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,1);

    //prefix directly without vector
    for(int i=1; i<n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    //suffix
    int suffix = 1;
    for(int i=n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4};
    // Brute Force Approach
    for(int val: productExceptSelf(nums)){
        cout << val << " ";
    }
    cout << endl;
    // Optimal Approach with O(n) Time & Space Complexity
    for(int val: productExceptSelf1(nums)){
        cout << val << " ";
    }
    cout << endl;
    // Final Optimal Solution after improving Space Complexity
    for(int val: productExceptSelf2(nums)){
        cout << val << " ";
    }

    return 0;
}