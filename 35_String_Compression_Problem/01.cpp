/* String Compression:
Given an Array of characters *chars*, compress it:
Begin with an empty string *s*, For each group of consecutive repeating characters in *chars*.
-> If the group's length is 1, append the characters to s.
-> Otherwise, append the character followed by the group's length.
The compressed string *s* should not be returned separately, but instead, be stored in the input character array *chars*.
Note that group lengths that are 10 or longer will be split into multiple characters in *chars*.
chars = ["a", "a", "b", "b", "c", "c", "c"]
ans = ["a", "2", "b", "2", "c", "3"];
E.g 2: ['a', 'b', 'b', 'a', 'a']
ans = ['a', 'b', '2', 'a', '2']
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Approach:*/
int compress(vector<char>& chars){              // O(n) {because we uses the Single Iterator on Array}
    int n = chars.size();                       // Count the size of Array
    int idx = 0;

    for(int i=0; i<n; i++){                     // Loop on Array
        char ch = chars[i];                     // Store the First Character in ch
        int count = 0;                          // Initialize count = 0 in Starting

        while(i < n && chars[i] == ch){         // Run Loop to check characters count.
            count++; i++;                       // Update Count
        }

        if(count == 1){                         // If count = 1, Store only that Character in ans Array
            chars[idx++] = ch;                  
        } else{                                 // count > 1, Store that Character that count of that character in array
            chars[idx++] = ch;                  // Update Character in Array
            string str = to_string(count);      // Convert Count to String {E.g: 2 --> '2'}
            for(char dig : str){                // Count Digits in Count String. {E.g: 12 --> '12' = 2}
                chars[idx++] = dig;             // Update the Index with Last Digit of Count {E.g: '12' --> 2}
            }
        }
         
        i--;                // Counter the i index;
    }

    chars.resize(idx);                      // Resize the Array till the idx;
    return idx;
}

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};     // Ans: 6 {a2b2c3} = 6 characters / length
    cout << compress(chars) << endl;                
    return 0;
}