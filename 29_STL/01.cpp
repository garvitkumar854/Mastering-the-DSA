#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // Vector
    vector<int> vec = {1,2};
    cout << "Size of Vector: " << vec.size() << endl;
    // Function of Vector
    vec.push_back(3);        
    vec.pop_back();         
    vec.capacity();
    vec.at(0);
    for(int val: vec){
        cout << val << " ";
    }
    vec.erase(vec.begin()+1);                           // example to erase 2 element of vector using Iterator.
    cout << endl;
    for(int val: vec){
        cout << val << " ";
    }
    vector<int> arr = {1,2,3,4,5,6};
    arr.erase(arr.begin()+1, arr.begin()+3);            // Erasing 2,3 Elements from vectors.
    cout << endl;
    for(int val: arr){
        cout << val << " ";
    }
    arr.insert(arr.begin()+1,{2,3});                    // Inserting again 2,3 after 1 in vector.
    cout << endl;
    for(int val: arr){
        cout << val << " ";
    }
    cout << endl;
    arr.clear();                                        // Erase all elements from vectors.
    cout << arr.empty() << endl;                        // Check if the vector is empty or not. returns 1 if true.
    
    
    
    return 0;
}