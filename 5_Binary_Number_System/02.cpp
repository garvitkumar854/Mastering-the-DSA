/*
Binary to Decimal Number
*/

#include <iostream>
using namespace std;

int binToDec(int binN){
    int ans = 0, pow = 1;
    
    while(binN > 0){
    int rem = binN % 2;
    ans += rem * pow;
    binN /= 10;
    pow *= 2;
    }
    return ans;
}

int main(){
    int Bin;
    cout << "Enter the Binary Number: ";
    cin >> Bin;
    cout << "Decimal Number: " << binToDec(Bin) << endl;
    return 0;

}