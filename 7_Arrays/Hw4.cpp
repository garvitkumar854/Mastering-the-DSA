// WAF to print all the unique values in an Array

#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int size) {
    int isUnique;

    printf("Unique values in the array are:\n");
    for (int i = 0; i < size; i++) {
        isUnique = 1; // Assume the current element is unique

        // Check if the element appears elsewhere in the array
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; // Element is not unique
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int arr[] = {1,2,5,1,6,8,1,2,7,3};
    int size = 10;
    printUniqueValues(arr, size);
    return 0;
}