// Type Casting

// Note: Typecasting (it is explicit) way to convert one datatype to another (generally big to small).

#include <iostream>
using namespace std;

int main(){
    char grade = 'A';
    int value = grade; 
    cout << value << endl; // Print the ASCII Value of "A" i.e 65.

    double price = 100.58;
    int newPrice = (int)price;
    cout << newPrice << endl;
    cout << "size of newPrice: " << sizeof(newPrice) << endl; // size = 4 i.e of integer.
    return 0;
}