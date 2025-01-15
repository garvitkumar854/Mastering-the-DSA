// Linear Search in 2D Arrays
/*  1 2 3
    4 5 6
    7 8 9
key = 8
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool linearSearch(int mat[][3], int rows, int cols, int key){    // We must specify the column as compiler needs this info to access the elements of 2d array correctly.
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(mat[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

// Quiz: Return a Pair of Rows & Column of the Key Element.
pair<int, int> linear(int mat[][3], int key){
    pair<int, int> ans = {-1, -1};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(mat[i][j] == key){
                ans = {i,j};
                return ans;
            } 
        }
    }
    return ans;
}
int main(){
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int rows = 3;
    int cols = 3;
    int key = 8;
    pair<int, int> ans = linear(matrix, key);
    if (ans.first != -1) {
        cout << "Key found at row " << ans.first << " and column " << ans.second << endl;
    } else {
        cout << "Key not found in the matrix" << endl;
    }
    return 0;
}
