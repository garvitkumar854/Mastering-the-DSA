/* Search in a 2D Matrix:

m*n {rows, columns}

1   3   5   7
10  11  16  20
23  30  34  60
target = 34

• Each Row is sorted in non-decreasing order.
• The first integer of each row is greater than the last integer of the previous row.
E.g: 7 > 10, 20 > 23
• Return True if Target found otherwise false.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute Force Approach: Linear Search O(n)

// Optimized: {Binary Search Algorithm} (TC = O(log(m*n)) <-- O(logm + logn))
/* target must lies at one row of data.
row: range[start, end]              
* There is only one unique row exists for the target. {Non-Overlapping}
*/

bool searchInRow(vector<vector<int>>& matrix, int target, int row){
    // Total No.of Columns
    int n = matrix[0].size();
    int st = 0, end = n-1;

    while(st <= end){
        int mid = st + (end - st)/2;
        if(target == matrix[row][mid]){
            return true;
        } else if(target > matrix[row][mid]){
            // Go Right
            st = mid + 1;
        } else{
            // Go Left
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target){
    // Binary Search on Total No.of Rows
    int m = matrix.size(), n = matrix[0].size();

    int startRow = 0, endRow = m-1;
    while(startRow <= endRow){
        int midRow = startRow + (endRow - startRow)/2;

        if(target >=  matrix[midRow][0] && target <= matrix[midRow][n-1]){

            // found the Row -> Search on this Row
            return searchInRow(matrix, target, midRow);

        } else if(target >= matrix[midRow][n-1]){

            // Go Right / Downward
            startRow = midRow + 1;

        } else{

            // Go Left / Upward
            endRow = midRow - 1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 34;

    cout << searchMatrix(matrix, target);

    return 0;
}