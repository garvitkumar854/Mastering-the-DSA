// WAF to check if a number is prime or not.
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

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (n < 0) {
        cout << "Invalid Number!";
    } else if (checkPrime(n) == 1) {
        cout << "Prime Number!";
    } else {
        cout << "Not a Prime Number!";
    }
    return 0;
}