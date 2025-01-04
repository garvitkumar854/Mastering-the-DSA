// Operator Precedence

/*

Operators                               Precedence
!,+,-(unary operators)                  1, R to L
*,/,%                                   2, L to R
+,-                                     3, L to R
<,<=,>=,>                               4, L to R
==, !=                                  5, L to R
&&                                      6, L to R
||                                      7, L to R
=                                       8, R to L

*/
#include <iostream>
using namespace std;
int main(){
    cout << 5 - (2 * 6) << endl;   
    return 0;
}