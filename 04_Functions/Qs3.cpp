// Calculate sum of digits of a number
// Ex: 145 --> 1 + 4 + 5 = 10

#include <iostream>
using namespace std;

int calSumOfDig(int n){
    int sum = 0, rem;
    while(n>0){
        rem = n%10; // take out the last digit to rem
        n/=10;      // reset the number by pop the last digit
        sum+=rem;   // add each rem to the sum
    }
    return sum;
} 

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << "Sum of Digits: " << calSumOfDig(n) << endl;
    return 0;
}

/*
---------------------Logic---------------------
1. take out the individual digits from the user
    take the modulo of a number from 10
    145 % 10 ---> 5 (remainder = digit)
2. wipe out the last digit from the number
    145 ---> 14 (5 is taked out by modulo)
    So divide 145 from 10
    145/10 = 14.5 means 14(int)
3. now add the each remainder in the sum
4. return the sum value.
*/