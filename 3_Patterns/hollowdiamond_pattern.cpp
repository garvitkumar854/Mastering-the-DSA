#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    /*  
    this is for n = 4  
          *
        * - *
      * - - - * 
    * - - - - - *
      * - - - *
        * - *
          *
    */
    // note : for easy to understand and print break the pattern in two parts (Top and Bottom {dividing from the middle})
    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << "*";

        if(i !=0 ){
            // spaces
            for(int j=0; j<2*i-1; j++){
                cout << " ";
            }
            cout << "*";       
        }
        cout << endl;
    }

    for(int i=0; i<(n-1); i++){
        // spaces
        for(int j=0; j<i+1; j++){
            cout << " ";
        }
        cout << "*";    
        if(i != n-2){
            // spaces
            for(int j=0; j<2*(n-i)-5; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}