/*
*
*   *
*   *   *
*   *   *   *
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << '*' << " ";
        }
        cout << endl;
    }
    cout << endl;
/*
1
2 2
3 3 3
4 4 4 4
*/

    for(int i=0; i<n; i++){
       for(int j=0; j<i+1; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
    cout << endl;

/*
A
B B
C C C
D D D D
*/
    for(int i=0; i<n; i++){
        char ch='A'+i;
        for(int j=0; j<i+1; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;

/*
1
1 2
1 2 3
1 2 3 4
*/
    
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    
/*
1
2 1
3 2 1
4 3 2 1
*/
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

/*
A
B A
C B A
D C B A
*/
    
    for (int i = 0; i < n; i++){
        char ch = 'A' + i; 
        for (int j = i; j >= 0; j--){
            cout << ch << " "; 
            ch--; 
            }
            cout << endl; 
    }
    cout << endl;

    return 0;
}

