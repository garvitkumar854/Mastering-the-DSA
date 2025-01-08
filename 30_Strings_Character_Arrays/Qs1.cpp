// Reverse a String

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // in Character Array
    char str[6] = "Hello";
    int st = 0, end = 6-1;

    while(st < end){
        swap(str[st++], str[end--]);
    }

    // in String Case
    string s = "olleH";
    reverse(s.begin(), s.end());            // Returns the Iterators and Reverse the String.
    cout << "Reverse String: " << s << endl;;
    return 0;
}