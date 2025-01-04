// Check if a number is prime or not.
#include <iostream>
using namespace std;
int main(){
    int n;
    bool isPrime = true;
    cout << "Enter a Number: ";
    cin >> n;
    for (int i = 2; i <= n - 1; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Prime Number" << endl; 
    } else {
        cout << "Not! a Prime Number" << endl;
    }

// Better Approach
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Prime Number" << endl;
    } else {
        cout << "Not! a Prime Number" << endl;
    }
    return 0;
}