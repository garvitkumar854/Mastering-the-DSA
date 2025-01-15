// Maximum Row And Column Sum
/*
    1   2   3
    4   5   6
    7   8   9
Row 1: 6                Clm 1: 12
Row 2: 15               Clm 2: 15               
Row 3: 24               Clm 3: 18
Ans:   24               Ans:   18
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Maximum Row Sum
int getMaxRowSum(int mat[][3], int rows, int clms){
    int maxRowSum = INT_MIN;                           

    for(int i=0; i<rows; i++){                          
        int i_RowSum = 0;                                
        for(int j=0; j<clms; j++){
            i_RowSum += mat[i][j];
        }
        maxRowSum = max(maxRowSum, i_RowSum);
    }
    return maxRowSum;
}

// Maximum Column Sum
int getMaxClmSum(int mat[][3], int rows, int clms){
    int maxClmSum = INT_MIN;

    for(int i=0; i<rows; i++){
        int j_ClmSum = 0;
        for(int j=0; j<clms; j++){
            j_ClmSum += mat[j][i];
        }
        maxClmSum = max(maxClmSum, j_ClmSum);
    }
    return maxClmSum;
}
int main(){
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int r = 3, c = 3;
    cout << getMaxRowSum(matrix, r, c) << endl;
    cout << getMaxClmSum(matrix, r, c) << endl;

    return 0;
}
