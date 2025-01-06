// Sum of odd numbers from 1 to n;
#include <iostream>
using namespace std;
int main(){
    int n, oddSum = 0;
    cout << "Enter a Number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            oddSum+=i;
        }
    }
    cout << "Sum of 1 to " << n << " is: " << oddSum << endl;
    return 0;
}
