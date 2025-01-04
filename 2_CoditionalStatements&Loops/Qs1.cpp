// Find character lowercase or uppercase
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a Character: ";
    cin >> ch;
    if(ch >= 'a' && ch <= 'z'){
        cout << "Lowercase" << endl;
    } else if(ch >= 'A' && ch <= 'Z'){
        cout << "Uppercase" << endl;
    } else{
        cout << "Invalid Character" << endl;
    }
    
    // By ASCII VALUE (American Standard Code of Information Interchange)
    if(ch >= 65 && ch <= 90){
        cout << "Uppercase" << endl;
    } else if(ch >= 97 && ch <= 122){
        cout << "Lowercase" << endl;
    } else{
        cout << "Invalid Character" << endl;
    }
}   