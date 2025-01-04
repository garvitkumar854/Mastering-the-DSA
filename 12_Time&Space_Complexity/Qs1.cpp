/*
Solve:
Prime Number - Time Complexity
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            cout << "Non Prime" << endl;
            break;
        }
    }

    /* i=2 to i² <= n
        i² = n
        i = √n
        0(√n)   --> Time Complexity
    */
    return 0;
}