// Valid Palindrome
// Palindrome Example: racecar 
// Consider only the AlphaNumeric Characters in the String. {Can match the lower and uppercase a = A}
// s = "Ac3?e3c&a"  {Valid Palindrome (Remove Other Characters)}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

bool isAlphaNum(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    return false;
}

// Note: You can use Standard Library Function for AlphaNumeric "isalnum()" from the <cctype> header {Character Type}. 

bool isPalindrome(string s){
    int st = 0, end = s.length()-1;
    while(st < end){
        if(!isAlphaNum(s[st])){                     // Check the st is AlphaNumeric
            st++; continue;                                   // used beacause characters occur many times. {Not AlphaNumeric's}
        }
        if(!isAlphaNum(s[end])){                    // Check the end is AlphaNumeric
            end--; continue;   
        }                   
        if(tolower(s[st]) != tolower(s[end])){      // Compare the lowercase of st and end if not equal return false
            return false;       
        }
        st++; end--;                                // Update the both pointers on each iteration.
    }
    return true;                                    // String is Palindrome.
}

int main(){
    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    if(isPalindrome(s) == true){
        cout << "Palindrome";
    } else{
        cout << "Not!";
    }
    return 0;
}