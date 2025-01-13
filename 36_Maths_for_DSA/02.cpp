// Digits in a Number

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>               // Library to use (log)
using namespace std;

// Take out Digits from Number.{Time Complexity: O(log₁₀n)}
void printDigits(int n){            
    while(n != 0){
        int digit = n % 10;         // Take out the last digit from number.
        cout << digit << " ";      // Print the Digit.

        n = n / 10;                 // Reset the Number.
    }
}

int countDigits(int n){
    int count = 0;
    while(n != 0){
        int digit = n % 10;
        count++;

        n /= 10;
    }
    return count;
}

int sumDigits(int n){
    int sum = 0;
    while(n != 0){
        int digit = n % 10;
        sum += digit;

        n /= 10;
    }
    return sum;
}

// Shortcut to Find Count of Digits:
void shortcut(int n){
    cout << (int)(log10(n) + 1) << endl;
}
int main(){
    int n = 3568;
    printDigits(n);
    cout << "\nDigits in " << n << " are: " << countDigits(n) << endl;
    cout << "Sum of Digits of " << n << " are: " << sumDigits(n) << endl;
    cout << "Count of Digits from Log: ";
    shortcut(n);

    return 0;
}