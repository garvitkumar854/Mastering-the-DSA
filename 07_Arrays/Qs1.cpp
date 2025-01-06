// Find smallest/largest In Array

/*
to check smallest value in array we have to compare the value from another
Here we make a variable and initialize it with + infinity {largest possible value}.
in C++ Programming, + infinity = INT_MAX
*/

#include <iostream>
using namespace std;
int main(){
    int nums[] = {5,15,22,1,-15,24};
    int size = 6;
    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    // smallest
    for(int i=0; i<size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    // largest
    for(int i=0; i<size; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }

    cout << "Array is: ";
    for(int i=0; i<size; i++){
        cout << nums[i] << " ";
    }
    
    cout << "\nSmallest Number: " << smallest << endl;
    cout << "Largest Number: " << largest << endl;

    // In C++, We have functions like min,max etc;    
    cout << "Minimum Between 5 & 10 is: " << min(5,100) << endl;
    cout << "Maximum Between 5 & 10 is: " << max(5,100) << endl;

    // So we can use min function in the loop for Better Programming, and same for Largest Number.
    for(int i=0; i<size; i++){
        smallest = min(nums[i], smallest);
    }

    return 0;
}