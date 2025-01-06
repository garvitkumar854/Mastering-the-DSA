// Figure out how to find if a number is power of 2 without any loop.

#include <iostream>
using namespace std;

// By Using Loop
// Function to check if a number is a power of 2 using a loop
int checkPower(int num) {
    if (num <= 0) return 0; // Powers of 2 are always positive

    while (num > 1) {
        if (num % 2 != 0) {
            return 0; // Not a power of 2 if remainder is not zero
        }
        num /= 2; // Divide the number by 2
    }
    return 1; // It's a power of 2
}

// By Don't Using Loop
int isPowerOfTwo(int num) {
    if (num <= 0) return 0; // Powers of 2 are positive
    
    return num == (1 << 0) || num == (1 << 1) || num == (1 << 2) || 
           num == (1 << 3) || num == (1 << 4) || num == (1 << 5) ||
           num == (1 << 6) || num == (1 << 7) || num == (1 << 8) ||
           num == (1 << 9) || num == (1 << 10) || num == (1 << 11) ||
           num == (1 << 12) || num == (1 << 13) || num == (1 << 14) ||
           num == (1 << 15) || num == (1 << 16) || num == (1 << 17) ||
           num == (1 << 18) || num == (1 << 19) || num == (1 << 20) ||
           num == (1 << 21) || num == (1 << 22) || num == (1 << 23) ||
           num == (1 << 24) || num == (1 << 25) || num == (1 << 26) ||
           num == (1 << 27) || num == (1 << 28) || num == (1 << 29) ||
           num == (1 << 30); // Maximum for 32-bit integers
}

int main() {
    int number;
    cout << "Enter a Number: ";
    cin >> number;

    if (checkPower(number)) {
        cout << number << " is a power of 2" << endl;
    } else {
        cout << number << " is not a power of 2." << endl;
    }

    if (isPowerOfTwo(number)) {
        cout << number << " is a power of 2" << endl;
    } else {
        cout << number << " is not a power of 2." << endl;
    }

    return 0;
}
