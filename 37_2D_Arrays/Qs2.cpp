/* Diagonal Sum:
Given an 2D-Array Where Rows = Columns 
n = 4
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16

Primary Diagonal: First Leftmost Corner to Last Righmost Corner. {\}
Secondary Diagonal: First Rightmost Corner to Last Leftmost Corner. {/}
Ans = PD: 1+6+11+16 = 34, SD: 4+7+10+13 = 34
Final Answer: PD + BD = 68
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Approach:    PD: {00,11,22,33}
                PD: i = j
                SD: {03,12,21,30}
                i ↑  j ↓
                first row last element: (0, n-i)
                j = n - i - 1
*/

int diagonalSum(int mat[][4], int n){           // TC: O(n²)
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){                         // Primary Diagonal Sum
                sum += mat[i][j];
            } else if(j == n-i-1){              // Secondary Diagonal Sum
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

/* Optimization for Time Complexity
    pd : j = i
    sd : j = n-i-1 
    Here, We are getting i value already, So we don't need to run loop again.
*/

int digSum(int mat[][4], int n){        // O(n)
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += mat[i][i];               // Calculate Primary Diagonal Values.

        if(i != n-i-1){                 // Avoid Common Values
            sum += mat[i][n-i-1]; 
        }
    }
    return sum;
}


int main(){
    int matrix[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int n = 4;
    cout << "Diagonal Sum is: " << diagonalSum(matrix, n) << endl;
    cout << "Diagonal Sum is: " << digSum(matrix, n) << endl;
    return 0;
}