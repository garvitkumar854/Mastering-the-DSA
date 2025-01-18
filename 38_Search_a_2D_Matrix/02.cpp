/* Search in a 2D Matrix II

target = 5

1   4   7   11  15
2   5   8   12  19
3   6   9   16  22
10  13  14  17  24
18  21  23  26  30

• Integers in each row are sorted in ascending from left to right.
• Integers in each column are sorted in ascending from top to column.
• This is different form Variation 1 of Search In 2D Matrix.
• Rows ---> Overlapping.
*/

/* Approach:
• Lowest Value = [0][0], Highest Value = [n-1][n-1]
• Assume either Top Rightmost Corner Value or Bottom Leftmost Corner Value as a MID.
• Let Top Rightmost Corner, Here We have only 2 possible direction where tar can exits.
• If target < mid --> Discard the Entire Column and Go to Left {Next Column}
• If target > mid --> Update the row {go bottom}.

Time Complexity: O(n + m)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int searchMatrix(vector<vector<int>>& mat, int target){
    int m = mat.size(), n = mat[0].size();

    int r = 0, c = n-1;
    while(r < m && c >= 0){
        if(target == mat[r][c]){
            return true;
        } else if(target < mat[r][c]){
            c--;
        } else{
            r++;
        }
    }
    return false;
}


int main(){
    vector<vector<int>> matrix ={
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target = 5;
    cout << searchMatrix(matrix, target) << endl;
    return 0;
}