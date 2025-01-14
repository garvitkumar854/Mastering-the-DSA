// Armstrong Number
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isArmstrong(int n){
    int copyN = n;                                  // Make a Copy of Number.
    int sumOfCubes = 0;

    while( n != 0){
        int dig = n % 10;                           // Take out the Last Digit
        sumOfCubes += (dig * dig * dig);            // Add the Cube of Each Digit in Sum.

        n /= 10;
    }
    return sumOfCubes == copyN;                     // If Sum == N return it.
}

int main(){
    int n = 153;

    if(isArmstrong(n)){
        cout << n << " is an Armstrong Number.";
    } else{
        cout << n << " Not a Armstrong !";
    }

    return 0;
}