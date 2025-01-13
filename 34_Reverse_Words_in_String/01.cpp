/* Reverse Words in String
s = "the sky is blue"       ,s = " hello world "
We have AlphaNumeric Characters and lot of spaces, we have to create another string
which contains reverse order words of main string and Remove Extra Spaces.
E.g: "blue is sky the"      ,s = "world hello"

/*Approach and Logic: We can reverse whole string:
s = "the pen"
s = "nep eht"
-> Now We Can reverse Individual Words in String
s = "nep eht"
s = "pen the"   --> Final Answer

How:    1. We can use reverse() to reverse whole string.
        2. Identify Single Word     { 1 Words exists till the space} {i should be valid value}.
        3. Reverse The Single Word and Store it in Empty String. {ans}
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string reverseWords(string s){
    int n = s.length();                 // Take size of the String.
    string ans = "";                    // Initialize Empty String to Store Ans;

    reverse(s.begin(), s.end());        // Reverse the Whole String.

    for(int i=0; i<n; i++){             // Loop to Reverse Individual Word
        string word = "";
        while(i<n && s[i] != ' '){
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());          // Reverse that Individual Word
        if(word.length() > 0){                      // Check that Word Contains Characters
            ans += " " + word;                      // Add Word in Ans with One Space.
        }
    }
    return ans.substr(1);                           // Return ans by removing 1 Space from Starting.
}

int main(){
    string s = " hello world ";
    cout << reverseWords(s) << endl;
    
    return 0;
}