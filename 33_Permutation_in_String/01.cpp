/* Permutation In String:
We have given two Strings;
s1 = "ab", s2 = "eidbaooo";
We have to find s1 Any Permutation in s2, return true if exits.
In Permutations: No. Of Characters & Frequency of Characters are Always Same.
Constaints: s1 & s2 consist of lowercase English letters.
1. Store the Freq of Characters in S1.
2. Search S1 Permutation in S2  {Used Window Based Approach}.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]){                  // O(1)
    for(int i=0; i<26; i++){
        if(freq1[i] != freq2[i]){                           // Compare the s1 Freq to Window Frequency
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2){
    int freq[26] = {0};
    for(int i=0; i<s1.length(); i++){                       // Count the Frequency of Characters in S1 
        // int idx = s1[i] - 'a'; 
        freq[s1[i] - 'a']++;                                // Store the Frequency of the Character on Its Correct Idx. {e.g: g = 6}
    }

    int winSize = s1.length();                              // WinSize = Length of S1 {e.g "ab" = 2}

    for(int i=0; i<s2.length(); i++){
        int winIdx = 0, idx = i;                            // Windows Idx, Original Idx.
        int windFreq[26] = {0};                             // Store the Frequency of Window.
        while(winIdx < winSize && idx < s2.length()){
            windFreq[s2[idx] - 'a']++;
            winIdx++; idx++;
        }

        if(isFreqSame(freq, windFreq)){                     // Check if Both Frequencies are Same.
            return true;
        }
    }   
    return false;
}

int main(){
    string s1 = "ab";
    string s2 = "eidabooo";
    if(checkInclusion(s1, s2)){
        cout << "Permutation Found !";
    } else{
        cout << "Not Found !";
    }

    return 0;
}