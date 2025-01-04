// Container with most Water Problem
/* You're given an integer array of length n. There are n vertical lines drawn suct that the two endpoints of 1st line are (i,0) and (i,height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Note: that you may not slant the container.
height = [1,8,6,2,5,4,8,3,7]
return max amount of water container can store
imagine height array in vertical bar graph
*/

#include <iostream>
#include <vector>
using namespace std;

/* Brute Approach: find all possible containers height and weight , find area and compare the area, return max area = answer
pick 2 lines
i = left (boundry)
j = range: i+1 to n
width = j-i
height = minimum of 2 lines height, {i and j}
area = width * height

it takes O(n²) Time Complexity which give TLE (Time Limit Exceed)
*/

int maxArea(vector<int>& height){
    int maxWater = 0; // ans
    for(int i=0; i<height.size(); i++){
        for(int j = i+1; j<height.size(); j++){
            int w = j - i;
            int ht = min(height[i], height[j]);
            int currWater = w * ht;
            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}

/* Optimal Approach (2 Pointer)
width = right-left, height = min(ht[left],ht[right])
left pointer, right pointer
if we update the pointer of max height we always take minimum water which we don't want, So
we update small height pointer value to find the MaxWater.
*/
int maxArea2(vector<int>& height){
    int maxWater = 0; // ans
    int lp = 0, rp = height.size() - 1; // {n-1}
    while(lp < rp){
        int w = rp-lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;
        maxWater = max(maxWater, currWater);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height) << endl;
    cout << maxArea2(height) << endl;
    return 0;
}