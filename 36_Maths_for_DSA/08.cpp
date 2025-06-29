#include <iostream>
using namespace std;

// Binary Exponentiation - Iterative Method (a^b)
long long fastExpo(int a, int b) {
    long long result = 1;
    long long base = a;

    while (b > 0) {
        if (b & 1) {
            result *= base;  // If bit is set, multiply result with base
        }
        base *= base;        // Square the base
        b >>= 1;             // Shift right (b = b / 2)
    }

    return result;
}

// Binary Exponentiation - Recursive Method
long long fastExpoRecursive(int a, int b) {
    if (b == 0) return 1;
    long long half = fastExpoRecursive(a, b / 2);
    if (b % 2 == 0) return half * half;
    else return a * half * half;
}

int main() {
    int a = 2, b = 10;

    cout << "Fast Exponentiation (Iterative): " << fastExpo(a, b) << endl;
    cout << "Fast Exponentiation (Recursive): " << fastExpoRecursive(a, b) << endl;

    return 0;
}
