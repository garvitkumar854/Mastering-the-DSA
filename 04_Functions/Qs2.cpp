// Calculate N factorial
#include <iostream>
using namespace std;

int fac(int n){
    int fac = 1;
    for(int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}

int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << fac(num) << endl;
    return 0;
}

