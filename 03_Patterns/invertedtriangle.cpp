#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    /*
    1 1 1 1
      2 2 2
        3 3
          4
    */
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j<n-i; j++){
            cout << i+1;
        }
        cout << endl;
    }
    cout << endl;

    /*
    A A A A
      B B B
        C C 
          D
    */
   
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j<n-i; j++){
            cout << ch;
        }
        ch++;
        cout << endl;
    }
    cout << endl;



    return 0;
}