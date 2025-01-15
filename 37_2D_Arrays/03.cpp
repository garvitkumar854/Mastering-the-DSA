// 2D Vectors

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};
    // rows = mat.size();
    // cols = 1 row me kitne element.
    // cols = mat[i].size
    for(int i=0; i < mat.size(); i++){
        for(int j=0; j < mat[i].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    /* We have advantage to store extra elements in any row
    i = 0 → size = 3
    i = 1 → size = 5    {Extra Elements 10,11}
    */

    vector<vector<int>> vec = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    /* Iterate using range-based for loop
    Using & (a reference) in the loop ensures that we avoid making unnecessary copies of the elements or rows. 
    Beacause:   Each row is a copy of the actual row in the vector.
                Each element is a copy of the actual element in the row.
    */
    cout << endl;
    for (auto & row : vec) {                   
        for (auto & element : row) {           
            cout << element << " ";
        }
        cout << endl; 
    }
    return 0;
}