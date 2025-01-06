// WAF to print intersection of 2 Arrays

#include <iostream>
using namespace std;

// Function to print the intersection of two arrays
void printIntersection(int a1[], int sz1, int a2[], int sz2) {
    cout << "Intersection of the arrays: ";

    for (int i = 0; i < sz1; i++) { // Outer loop for a1
        for (int j = 0; j < sz2; j++) { // Inner loop for a2
            if (a1[i] == a2[j]) { // Check if a1[i] exists in a2
                // Check if it's already printed
                bool alreadyPrinted = false;
                for (int k = 0; k < i; k++) {
                    if (a1[k] == a1[i]) {
                        alreadyPrinted = true;
                        break;
                    }
                }
                if (!alreadyPrinted) { // If not already printed, print it
                    cout << a1[i] << " ";
                }
                break;
            }
        }
    }
    cout << endl;
}

int main() {
    int a1[] = {45, 2, 59, 74, 1, 36, 56, 7, 10};
    int sz1 = 9;

    int a2[] = {2, 100, 89, 3, 1, 89, 7};
    int sz2 = 7;

    printIntersection(a1, sz1, a2, sz2);

    return 0;
}
