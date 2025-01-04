/*
Maximum Subarray Sum
arr[1,2,3,4,5]
Subarray: Continuous Part of a Given Array.
example: {1},{2},{3},{4},{5},
        {1,2},{2,3},{3,4},{4,5},
        {1,2,3},{2,3,4},
        {1,2,3,4},{2,3,4,5},
        {1,2,3,4,5}
subarray = n *(n+1) / 2  --> 5*6/2 = 15

start           end
0;              0,1,2,3,4;
1;              1,2,3,4;
2;              2,3,4;
....
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5}, n = 5;
    
    for(int st=0; st<n; st++){
        for(int end = st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    cout << endl;
    
    // Brute force Approach for Maximum SubArray Sum.
    int subarray[7] = {3, -4, 5, 4, -1, 7, -8};
    
    for(int st=0; st<n; st++){
        for(int end = st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout << subarray[i] <<  "  ";
            }
            cout << "|";
        }
        cout << endl;
    }
    
    int maxSum = INT8_MIN;
    for(int st=0; st<n; st++){
        int currSum = 0;
        for(int end = st; end<n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Maximum SubArray Sum: " << maxSum << endl;

    // Kadane's Algorithm {most optimized}
    // Intution: {small +ve number} + {large -ve number} = -ve number

    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += subarray[i];
        maxSum = max(currSum, maxSum);
        if(currSum > 0){
            currSum = 0;
        }
    }
    cout << "Maximum SubArray Sum: " << maxSum << endl;

    return 0;
}