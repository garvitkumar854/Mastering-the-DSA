// Reverse a Number
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>          // For INT_MAX And INT_MIN
using namespace std;

// Reverse Number
int reverseNumber(int n){
    int revNum = 0;

    while(n != 0){
        int dig = n % 10;                                               // Take out Last Digit
        if(revNum > INT_MAX/10 || revNum < INT_MIN/10){               // Check of reverse number outside bound.
            return 0;
        }
        revNum = (revNum * 10) + dig;                                     // Multiply the Reverse Number by 10 and add Digit
        n = n / 10;                                                       // Reset the Number
    }
    return revNum;
}

int main(){
    int n = 4537;
    cout << reverseNumber(n) << endl;
    return 0;
}