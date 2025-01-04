/*
Data Type Modifiers
change meaning of data types
*/

/* Example: int x   { 4 Bytes --> 32 Bits }
Left Most Bit = Most Significant Bit (MSB)
0 {+ve} / 1 {-ve} 
= 32 - 1
= 31
pow(2,31)

So, 
Positive numbers can be stored to: 0 to pow(2,31) - 1 {beacause MSB is 0}
Negative numbers can be stored to: 0 to pow(-2,31)
*/

/*
long >= 4 Bytes
signed int: +ve, -ve
unsigned int: +ve only {ex: account number}, range = 0 to pow(2,32) - 1 (because here MSB is used to stored the data {bit})
*/

#include <iostream>
using namespace std;
int main(){
    cout << "Size of Int: " <<sizeof(int) << endl;
    cout << "Size of Long Int: " << sizeof(long int) << endl;  // 4 + 4 = 8 Bytes
    cout << "Size of Short Int: " << sizeof(short int) << endl;
    cout << "Size of Long Long Int: " << sizeof(long long) << endl; // 8 Bytes {by default: long long int}
    unsigned int x = -10;
    cout << "Unsigned Int x = -10: " << x << endl;
    x = 10;
    cout << "Unsigned Int x = 10: " << x << endl;

    return 0;
}