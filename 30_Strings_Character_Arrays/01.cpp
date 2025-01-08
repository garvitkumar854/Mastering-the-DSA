// Character Arrays
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>                             // For Strings Functions
using namespace std;
int main(){
    char str[] = {'a', 'b', 'c', '\0'};         // Used Null Character to convert into String
    // Null Character takes 1 Bytes in Memory
    cout << str << endl;
    cout << "Length of String: " << strlen(str) << endl;
    
    char str2[] = "Hello";                       // String Literals
    /*  |H|e|l|l|o|\0|   --->    Internally String is Array  */

    char str3[100];
    cout << "Enter Character Array: ";
    cin >> str3;
    cout << "Output: " << str3 << endl;
    
    // Input Strings With Spaces
    char str4[10];
    cout << "Enter Character Array: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');            // To Empty the Buffer
    cin.getline(str4, 20 /*delimiter*/);             // Delimiter used to break input of string when that character is input
    cout << "Output: " << str4 << endl;
    for(char ch: str4){
        cout << ch << " ";
    } 
    cout << endl;
    int len = 0;
    char str5[] = "ABC";
    for(char i=0; i<str5[i] != '\0'; i++){
        len++;
    }
    cout << "Length of *ABC*: " << len << endl;

    // Strings in C++
    string a = "Hello Guys!";                       // Dynamic In Nature, Resize at Runtime.
    cout << a << endl;
    string b = " I'm Garvit";
    cout << a+b << endl;                            // Concatenation of Strings
    cout << (a == b) << endl;                       // Compare two Strings, Return 1 if true.
    cout << "Length: " << b.length() << endl;
    string c;
    cout << "Enter a String: ";
    cin >> c;                                       // Exclude Characters after spaces.
    cout << c << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');            // To Empty the Buffer
    cout << "Enter a String: ";
    getline(cin, c);                                
    cout << "Output: " << c << endl;
    cout << "Output By Iterator: ";             
    for(char i=0; i<c.length(); i++){                               // We Can also Use For Each Loop
        cout << c[i];
    } cout << endl;
    
    return 0;
}