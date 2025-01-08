#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Algorithms

bool comparator(pair<int,  int> p1, pair<int, int> p2){     // Custom Comparator for Sort Pair on Second Values.
    if(p1.second < p2.second){
        return true;
    }
    if(p1.second > p2.second){
        return false;
    }
    // Condition if Both Values Are Same, then sort on first value basis.
    if(p1.first < p2.first){
        return true;
    } else{
        return false;
    }
}

int main(){
    // Sorting
    int arr[] = {1,5,3,6,-9,4,78};
    int n = 7;
    sort(arr, arr+n);               // Default Ascending Order
    sort(arr,arr+n, greater<int>());            // For Reverse Order Sorting, use { greater<int>() } {Functor/Comparator}
    for(auto val: arr){
        cout << val << " ";
    }
    cout << endl;
    
    vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {5, 3}, {5, 2}};
    sort(vec.begin(), vec.end());               // Sort the vector of pair on first values.
    cout << "Sort Pair on First Values Basis: \n";
    for(auto val: vec){
        cout << val.first << " " << val.second << endl;
    }
    cout << "Sort Pair on Second Values Basis: " <<endl;
    vector<pair<int, int>> vec2 = {{4, 2}, {2, 2}, {3, 3}, {1, 4}};
    sort(vec2.begin(), vec2.end(), comparator);           // To Sort Pair on Second Values. {By Using Custom Comparator}
    for(auto val: vec2){
        cout << val.first << " " << val.second << endl;
    }
    
    // Reverse
    cout << "Reverse Vector:\n";
    vector<int> vec3 = {1, 2, 3, 4, 5};
    reverse(vec3.begin(), vec3.end());
    for(auto val: vec3){
        cout << val << " ";
    }
    cout << "\nReverse Vector in a Range:\n";
    reverse(vec3.begin()+1, vec3.end()-1);         // Reverse values from index 1 to 3 only;
    for(auto val: vec3){
        cout << val << " ";
    }
    cout << endl;
    // Next Permutation
    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << "Next Permutation of *abc*: " << s << endl;
    prev_permutation(s.begin(), s.end());
    cout << "Prev Permutation of *acb*: " << s << endl;

    // Swap, Min, Max
    cout << "Max(4,5): " << max(4, 5) << "\nMin(4,5): " << min(4, 5) << endl;
    int a = 5, b = 10;
    swap(a,b);
    cout << "Value of a: " << a << "\nValue of b: " << b << endl;

    // Max & Min Element
    cout << *(max_element(vec3.begin(), vec3.end())) << endl;           // Return the Iterator {use * to derefrence}

    // Binary Search
    vec3 = {2,7,8,12,25,67};
    cout << binary_search(vec3.begin(), vec3.end(), 12) << endl;        // Returns 1 if Target Exists

    // Count Set Bits
    int ni = 15;            // 4 Bytes
    cout << __builtin_popcount(ni) << endl;
    long int k = 15;
    cout << __builtin_popcountl(k) << endl;             // Used for *long int
    long long int ki = 15;
    cout << __builtin_popcountll(ki) << endl;           // Used for *long long int

    return 0;
}
