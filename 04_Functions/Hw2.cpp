// WAF to print all prime numbers from 2 to N
#include <iostream>
using namespace std;

int checkPrime(int n){
    if(n<=1){
        return 0;
    } else if(n>0){
        for(int i=2; i<=n/2; i++){
            if(n%i==0){
                return 0;
            }
        }
    } else{
        cout << "Invalid Number !";
        return 0;
    }
    return 1;
}
int printPrimes(int n){
    for(int i=2; i<=n; i++){
        if(checkPrime(i) == 1){
            cout << i << ", ";
        }
    }
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    printPrimes(n);
    return 0;
}