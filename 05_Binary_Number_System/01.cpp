/*
Binary Number System
Base/Radix = 2
Numbers = 0,1
*/

// Decimal to Binary
#include <iostream>
using namespace std;

int decToBin(int n){
    int ans = 0, pow = 1;
    while(n>0){
        int rem = n%2; // take out remainder
        n /= 2; // reset the decimal number
        ans = ans + (rem*pow);  // add remainder * power in answer
        pow *= 10; // update the power
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter a Decimal Number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << decToBin(i) << endl;
    }
    return 0;
}
