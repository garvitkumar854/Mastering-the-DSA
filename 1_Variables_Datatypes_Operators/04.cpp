// Operators in C++
#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 2;
    
    // Arithmetic (+,-,/,*,%)
    cout << "Sum: " << a+b << endl;                 // 5+2 = 7
    cout << "Subtraction: " << a-b << endl;         // 5-2 = 3 
    cout << "Division: " << a/b << endl;            // 5/2 = 2
    cout << "Multiplication: " << a*b << endl;      // 5*2 = 10
    cout << "Modulus: " << a%b << endl;             // 5*2 = 1

    // Relational (<,<=,>,>=)    1 for True, and 0 for False;
    cout << "A is Greater than B: " << (a>b) << endl;
    cout << "A is Greater than Equal to B: " << (a>=b) << endl;
    cout << "A is Less than B: " << (a<b) << endl;
    cout << "A is Less than Equal to B: " << (a<=b) << endl;

    // Logical (AND, OR, NOT)
    /* AND = &&
       OR = ||
       NOT = !
    */
   cout << !(a<b) << endl;      // (5<2) = "False" ---> !(False) ---> True.

    // Unary Operators
    // Increment (++), Decrement (--);
    cout << "Value of a: " << a << endl;
    cout << "a++: " << a++ << endl;   // Post Increment Operator (firstly print and then increment the value of a by 1).
    cout << "Value of a: " << a << endl;
    cout << "a--: " << a-- << endl;  // Post Decrement Operator (firstly print and then decrement the value of a by 1).
    cout << "Value of a: " << a << endl;
    cout << "++a: " << ++a << endl;  // Pre Increment Operator (firstly increment the value of a by 1 and then print the value).
    cout << "Value of a: " << a << endl;
    cout << "--a: " << --a << endl;  // Pre Decrement Operator (firstly decrement the value of a by 1 and then print the value).
    cout << "Value of a: " << a << endl;


}