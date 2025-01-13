// Prime Logic & Sieve of Eratosthenes

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Prime Number
string isPrime(int n){
    if(n <= 1){                         // 1 is not prime.
        return "Non Prime";
    }
    for(int i=2; i*i <= n; i++){
        if(n % i == 0){
            return "Non Prime";
        }
    }
    return "Prime Number";
}

// Sieve of Eratosthenes
int countPrimes(int n){
    vector<bool> isPrimes(n+1, true);            // vector to store prime {true} and non-prime {false} values.
    int count = 0;
    for(int i=2; i<n; i++){             // Run Loop from 2 to N
        if(isPrimes[i]){                // Take the position {i.e: True}
            count++;                    // Update the Count for Prime Number.

            for(int j=i*2; j<n; j = j+i){           // Run Loop from 1st Multiple {E.g = 4 {2*2}}
                isPrimes[j] = false;            // Discarding Multiples of that Number {i} by updating values = false; 
            }
        }
    }
    return count;
}


int main(){
    int n = 50;
    cout << n << " is: " << isPrime(n) << endl; 
    cout << "Total Prime Numbers to 50: " << countPrimes(n) << endl;

    return 0;
}