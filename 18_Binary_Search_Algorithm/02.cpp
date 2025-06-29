// Binary Search Algorithm with Recursion
#include <iostream>
using namespace std;

// Recursive Binary Search Function
int binarySearch(int arr[], int start, int end, int key) {
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearch(arr, start, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, end, key);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int index = binarySearch(arr, 0, n - 1, key);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
