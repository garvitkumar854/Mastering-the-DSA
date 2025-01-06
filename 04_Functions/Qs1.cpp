// Calculate sum of numbers from 1 to N
#include <iostream>
using namespace std;

int calSumtoN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    cout << "Sum of 1 to "<< num << " are: " << calSumtoN(num) << endl;

    return 0;
}