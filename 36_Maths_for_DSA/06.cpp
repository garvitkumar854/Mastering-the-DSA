// Check Palindrome
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int reverseNumber(int n){
    int revNum = 0;

    while(n != 0){
        int dig = n % 10;                                              
        if(revNum > INT_MAX/10 || revNum < INT_MIN/10){               
            return 0;
        }
        revNum = (revNum * 10) + dig;                                 
        n = n / 10;                                                   
    }
    return revNum;
}

string isPalindrome(int n){
    if(n < 0) return "Not !";

    int revNum = reverseNumber(n);
    if(n == revNum){
        return "Yes, Palindrome";
    }
}

int main(){
    int n = 353;
    cout << isPalindrome(n) << endl;
    return 0;
}