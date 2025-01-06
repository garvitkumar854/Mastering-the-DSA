// WAF to print Nth Fibonacci.
/*
0 1 1 2 3 5 8 13
4th term is = 3.
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    int a = 0, b = 1, next, i;
    
    if (n == 0) 
        return a;
    if (n == 1) 
        return b;
    
    for (i = 2; i <= n; i++) {
        next = a + b;
        a = b;      
        b = next;     
    }
    
    return b;
}

int main() {
    int n;
    
    printf("Enter the position (n) of the Fibonacci number: ");
    scanf("%d", &n);
    
    int result = fibonacci(n);
    printf("The %dth Fibonacci number is %d\n", n, result);
    
    return 0;
}
