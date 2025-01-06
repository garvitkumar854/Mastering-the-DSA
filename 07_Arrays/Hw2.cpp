// WAF to calculate sum & product of all numbers in an array
#include <iostream>
using namespace std;

int sumArray(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}
int productArray(int arr[], int size){
    int product = 1;
    for(int i=0; i<size; i++){
        product *= arr[i];
    }
    return product;
}

int main(){
    int arr[] = {5,10,12,7};
    int size = 4;
    cout << "Array is: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << "\nSum of Array: " << sumArray(arr, size) << endl;
    cout << "Product of Array: " << productArray(arr, size) << endl;
    return 0;
}