// Single Number
/*
Question is from LeetCode Platform.
vector = {4,1,2,1,2}
so answer will be = 4.
*/ 

#include <iostream>
#include <vector>
using namespace std;

    // Solve this with Linear Runtime complexity {means use only one loop}
    // class Solution {
    //     public:
            int singleNumber(vector<int>& nums){
                /*
                We can Use Bitwise XOR to find the single unique element.
                4 ^ 1 ^ 2 ^ 1 ^ 2
                */
                int ans = 0;
                for(int val: nums){
                    ans = ans ^ val;
                }
                return ans;
            }
  
int main(){
    return 0;
}