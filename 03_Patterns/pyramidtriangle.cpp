#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    /*
    _ _ _ 1 _ _ _
    _ _ 1 2 1 _ _
    _ 1 2 3 2 1 _
    1 2 3 4 3 2 1   
    */
    for(int i=0; i<n; i++){
        // print spaces
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        } 
        // print number set 1
        for(int j=1; j<=i+1; j++){
            cout << j << " ";
        }
        // print number set 2
        for(int j=i; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
   return 0;
}