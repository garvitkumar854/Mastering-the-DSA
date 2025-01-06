/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << '*' << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    
    cout << endl;

    // Continuous Pattern
    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    cout << endl;

    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }




}