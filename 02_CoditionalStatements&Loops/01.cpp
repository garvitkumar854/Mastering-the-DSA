// Coditional Statements
#include <iostream>
using namespace std;

int main(){

    // if - elseif - else

    int n;
    cout << "Enter your Number: ";
    cin >> n;
    if(n > 0){
        cout << "Positive Number" << endl; 
    } else if(n < 0){
        cout << "Negative Number" << endl;
    } else{
        cout << "Number is Equal to 0" << endl;
    }
    return 0;

}