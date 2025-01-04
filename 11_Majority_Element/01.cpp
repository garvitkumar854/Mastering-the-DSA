/*
Majority Element: element that appears more than [n/2] times. you may assume that the mjr element always exists in the array.
given an array nums of size n, return the majority element
arr[] = {1,2,2,1,1}
*/

#include <iostream>
#include <vector>
#include <algorithm> // for sorting the vector/array
using namespace std;

// Brute force approach: find frequency/occurence of each element in array and max frequency of that element is = Majority Element
int majorityElement(vector<int>& nums){
    int n = nums.size();
    for(int val: nums){
        int freq = 0;
        for(int el: nums){
            if(el == val){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }
}

// optimized algorithm: firstly sort the array in ascending order, and then fing freq if freq < n/2 then reset freq to 1;
int mjrElement2(vector<int> & nums){
    int n = nums.size();
    // sort the vector
    sort(nums.begin(),nums.end());
    int freq = 1, ans = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        } else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
    return ans;
}

/* Moore's Algorithm {most optimized}: don't needed to sort the array, 
count the freq if same element occurs -> freq++, otherwise -> freq--;
*/ 
int mooreAlgorithm(vector<int>& nums){
    int n = nums.size();
    int freq = 0, ans = 0;
    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        } else{
            freq--;
        }
    }
    return ans;
}

// Variation in Moore's Algorithm
int mooreAlgorithm2(vector<int>& nums){
    int n = nums.size();
    int freq = 0, ans = 0;
    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        } else{
            freq--;
        }
    }
    
    // Variation: return -1 if no majority Element Exists
    int count = 0;
    for(int val: nums){
        if(val == ans){
            count++;
        }
    }
    if(count > n/2){
        return ans;
    } else{
        return -1;
    }
}
int main(){
    vector<int> nums = {1,2,2,1,1,1};
    vector<int> nums2 = {1,1,2,2,3};

    cout << "Majority Element: " << majorityElement(nums) << endl;
    cout << "Majority Element: " << mjrElement2(nums) << endl;
    cout << "Majority Element: " << mooreAlgorithm(nums) << endl;
    cout << "Majority Element(Variation): " << mooreAlgorithm2(nums2) << endl;
    return 0;
}
