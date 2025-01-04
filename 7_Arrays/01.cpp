/*
Arrays (Data Structures - used to store data)
Algorithms = Efficient Ways to make Operations on the Data Structures.
Arrays contains same type of data, it is contiguous in memeory and linear also
*/

#include <iostream>
using namespace std;
int main(){ 
    int marks[5] = {95,65,75,83,60};
    double price[3]; 

    // Calculate size of Array
    int size1 = sizeof(marks) / sizeof(int);
    int size2 = sizeof(price) / sizeof(double);

    // Loops on Arrays
    for(int i=0; i<size1; i++){
        cout << marks[i] << endl;
    }

    cout << "Enter Value for Array {price}:" << endl;
    for(int i=0; i<size2; i++){
        cin >> price[i];
    }
    for(int j=0; j<size2; j++){
        cout << price[j] << endl;
    }
    
    return 0;
}