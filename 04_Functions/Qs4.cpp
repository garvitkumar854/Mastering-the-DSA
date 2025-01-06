// Calculate nCr bionomail coefficient for n & r
/*
Formula to calulcate nCr is:
    factorial of n
---------------------------
factorial(r) factorial(n-r)

Example: 6C3; n=6, r=3
    6!/3!*3!
*/

#include <iostream>
using namespace std;

int factorial(int n){
    int fac = 1;
    for(int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}

int nCr(int n, int r){
    int fac_n = factorial(n);
    int fac_r = factorial(r);
    int fac_n_minus_r = factorial(n-r);
    return fac_n / (fac_r * fac_n_minus_r);
}

int main(){
    int n = 8, r = 2;
    cout << nCr(n,r) << endl;
    return 0;
}