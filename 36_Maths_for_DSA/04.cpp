// GCD with Euclid's Algorithm & LCM
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// GCD {Brute Force Approach}
int gcd(int a, int b){
    int ans = 1;
    for(int i=1; i <= min(a, b); i++){
        if(a % i == 0 && b % i == 0){
            ans = i;
        }
    }
    return ans;
}

// Euclid's Algorithm   {GCD Optimal Approach}
int euclidAlgo(int a, int b){
    while(a > 0 && b > 0){
        if(a>b){
            a = a % b;
        } else{
            b = b % a;
        }
    }
    if(a == 0){
        return b;
    }
    return a;
}
/*Note: GCD Optimized Approach use % in Euclid's Algorithm */


// LCM
int lcm(int a, int b){
    int gcd = euclidAlgo(a, b);
    return a*b / gcd;
}

int main(){
    int a = 20, b = 28;
    cout << gcd(a, b) << endl;
    cout << euclidAlgo(a, b) << endl;
    cout << lcm(a, b) << endl;
    return 0;
}