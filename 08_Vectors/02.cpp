// Vector Functions
#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector <char> vec = {'A','B','C','D','E'};
    
    // size
    cout << "Size of Vector: " << vec.size() << endl;

    // push_back {append the element in vector}
    vec.push_back('F');
    for(char val : vec){
        cout << val << ", ";
    }

    cout << endl; 

    // pop_back {delete the last element from vector}
    vec.pop_back();
    for(char val : vec){
        cout << val << ", ";
    }

    // front {give starting value of vector}
    cout << "\nFront: " << vec.front() << endl;

    // back {give last value of vector}
    cout << "Back: " << vec.back() << endl;

    // at {give value of index which is given}
    cout << "Value at Index 3: " << vec.at(3) << endl;

    return 0;
}