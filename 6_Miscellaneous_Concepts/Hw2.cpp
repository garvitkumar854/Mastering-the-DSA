// WAF to reverse an Integer n.
#include <iostream>
using namespace std;

int reverse(int num){
    int rev = 0;

    while(num != 0){
        int rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}

