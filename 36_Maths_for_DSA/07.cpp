#include <iostream>
#define MOD 1000000007  // 10^9 + 7
using namespace std;

// Modular Addition
int modAdd(int a, int b) {
    return ((a % MOD) + (b % MOD)) % MOD;
}

// Modular Subtraction
int modSub(int a, int b) {
    return ((a % MOD) - (b % MOD) + MOD) % MOD;  // +MOD to handle negative results
}

// Modular Multiplication
int modMul(int a, int b) {
    return ((1LL * (a % MOD) * (b % MOD)) % MOD);
}

// Modular Exponentiation (a^b % MOD)
int modExp(int base, int exp) {
    int result = 1;
    base = base % MOD;
    while (exp > 0) {
        if (exp & 1) result = modMul(result, base);
        base = modMul(base, base);
        exp >>= 1;
    }
    return result;
}

int main() {
    int a = 1e9 + 3;
    int b = 15;

    cout << "Modular Addition: " << modAdd(a, b) << endl;
    cout << "Modular Subtraction: " << modSub(a, b) << endl;
    cout << "Modular Multiplication: " << modMul(a, b) << endl;
    cout << "Modular Exponentiation (a^b): " << modExp(a, b) << endl;

    return 0;
}
