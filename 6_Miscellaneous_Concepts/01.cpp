/*
Bitwise Operators (Work on Binary Number System)
*/

/* Bitwise & (AND)
0 & 0 --> 0             Example: a = 4, b = 8
0 & 1 --> 0             a & 8
1 & 0 --> 0             a =     0 1 0 0   < Binary Form >
1 & 1 --> 1             b =     1 0 0 0   
                                -------
                        Ans =   0 0 0 0   0 (of Decimal)
*/

/* Bitwise | (OR)
0 & 0 --> 0             Example: a = 4, b = 8
0 & 1 --> 1             a | 8
1 & 0 --> 1             a =     0 1 0 0   < Binary Form >
1 & 1 --> 1             b =     1 0 0 0   
                                -------
                        Ans =   1 1 0 0   = 12 (of Decimal)
*/

/* Bitwise XOR (^)
0 & 0 --> 0             Example: a = 4, b = 8
0 & 1 --> 1             a ^ 8
1 & 0 --> 1             a =     0 1 0 0   < Binary Form >
1 & 1 --> 0             b =     1 0 0 0   
                                -------
                        Ans =   1 1 0 0   = 12 (of Decimal)
*/

/* Bitwise Left Shift (<<)                  
n = 4       --> 1 0 0     < Binary Form >
n << 1      --> 1 0 0 0   < After Left Shift >

Formula :   ans = a * pow(2,b)
*/

/* Bitwise Right Shift (<<)
n = 4       --> 1 0 0     < Binary Form >
n >> 1      --> 0 1 0     < After Right Shift >
Formula :   ans = a / pow(2,b)
*/

#include <iostream>
using namespace std;
int main(){
    // Bitwise AND
    int a = 4, b = 8;
    cout << "Bitwise AND (&): " << (a & b) << endl;   
    cout << "Bitwise OR (|): " << (a | b) << endl;   
    cout << "Bitwise XOR (^): " << (a ^ b) << endl;   
    cout << "Bitwise Left Shift (<<): " << (a << 1) << endl;  
    cout << "Bitwise Right Shift (>>): " << (a >> 1) << endl;   
    return 0;
}
