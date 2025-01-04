// Compute x^n      {Binary Exponential}

/* x^n = 3^5 = 3*3*3*3*3/n times
n(decimal) = log2n+1 (Binary Form not more than this)

n=8 = 1000 (4 digits)
logn8+1 = 3+1 = 4

we put loops on binary form of n
*/
#include <iostream>
#include <vector>
using namespace std;

double myPow(double x, int n){
    long binForm = n;

    // Some Corners Cases for the Problem
    // code if our n value equal to 0
    if(n == 0) return 1.0;
    // code if our x value equal to 0
    if(x == 0) return 0.0;
    // code if our x value equal to 1
    if(x == 1) return 1.0;
    // code if our x value equal to -1 And  pow(n) = even return 1.0
    if(x == -1 && n%2 == 0) return 1.0;
    // code if our x value equal to -1 And  pow(n) = odd return -1.0
    if(x == -1 && n%2 != 0) return 1.0;

    // code if n value is in negative
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }

    double ans = 1;
    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;

    // Overall loop time complexity equal to O(logn)
}

int main(){
    double x = 3, n = -5;
    cout << myPow(x,n) << endl;

    return 0;
}