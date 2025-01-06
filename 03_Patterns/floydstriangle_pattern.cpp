#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    /*
    1
    2 3
    4 5 6
    7 8 9 10 
    */

    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;


    /*
    A
    B C
    D E F
    G H I J    
    */

    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}