// 2D Arrays / Matrixes: Table Like Format include Rows and Columns.
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>                  // For printf() of C 
using namespace std;
int main(){
    int matrix[4][3];               // Datatype Array_name[Row][Column];
    int rows = 4;
    int cols = 3;
    int matrix2[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Loops on 2D Arrays
    for(int i=0; i<3; i++){                                 // For Rows
        for(int j=0; j<3; j++){                             // For Columns
            cout << matrix2[i][j] << " ";       
        }
        cout << endl;                           // Next Line After Each Row.
    }

    // Input
    cout << "Enter Values for Matrix 1: \n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("Enter [%d][%d] Value: ",i,j);
            cin >> matrix[i][j];
        }
    }
    // Output
    cout << "\nMatrix is:" << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    // 2D Arrays in Memory: • Row Major, • Column Major     {Implicitly}
    /* 1,2,3,4,5,6,7,8,9 {Row Major}, 1,4,7,2,5,8,3,6,9 {Column Major }*/
    return 0;
}
