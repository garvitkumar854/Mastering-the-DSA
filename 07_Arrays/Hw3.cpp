// WAF to swap the max & min number of an Array
#include <iostream>
using namespace std;
void swapMaxMin(int arr[], int size) {
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main(){
    int arr[] = {26,63,10,-45,59,20};
    int size = 6;
    cout << "Array before swapping:" << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    swapMaxMin(arr, size);
    cout << "\nArray after swapping: " << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}