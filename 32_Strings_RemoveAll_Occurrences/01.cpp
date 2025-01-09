/* Remove All Occurrences of a String 
We have given a String *s* and a SubPart *part* of the String.
Find the Leftmost occurrence of the substring *part* and remove it from s, and return the s.
e.g: s = "daabcbaabcbc"    ,part = "abc"
"daabcbaabcbc"
"dabaabcbc"     ,{Count: 1}
"dababc"        ,{Count: 2}
"dab"           ,{Count: 3}

Hint: We've some STL Strings Functions which are going to be Rarely usefull.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

string removeOccurrences(string s, string part){
    while(s.length()> 0 && s.find(part) < s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    string s, part;
    cout << "Enter a String: ";
    cin >> s;
    cout << "Enter Subpart: ";
    cin >> part;
    cout << removeOccurrences(s, part) << endl;
    return 0;
}