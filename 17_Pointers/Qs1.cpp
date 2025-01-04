// Predict Output
/*
int a = 5;
int *p = &a;
int **q = &p;

cout << *p << endl;
cout << **q << endl;
cout << p << endl;
cout << *q << endl;
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;         // Value at Pointer means value of a
    cout << **q << endl;        // Value at Pointer to Pointer means value of a
    cout << p << endl;          // Value of Pointer means Address of a
    cout << *q << endl;         // Value at Pointer to Pointer means Value at Pointer means Address of a
    
    return 0;
}