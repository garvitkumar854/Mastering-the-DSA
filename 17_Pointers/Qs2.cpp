// Predict Output
/*
int arr[] = {10, 20, 30, 40};
int *ptr = arr;

cout << *(ptr + 1) << endl;
cout << *(ptr + 3) << endl;
ptr++;
cout << *ptr << endl;
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    cout << *(ptr + 1) << endl;     // 20
    cout << *(ptr + 3) << endl;     // 40
    ptr++;
    cout << *ptr << endl;           // 20
    
    return 0;
}