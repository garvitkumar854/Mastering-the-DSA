// Print the index number from array where smallest and largest values are stored.

#include <iostream>
using namespace std;
int main(){
    int arr[10] = {56,25,74,-58,26,-47,20,26,14,-100};
    int size = 10;
    
    int smallest = INT8_MAX;
    int largest = INT16_MIN;

    cout << "\nArray is: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    int sIndex;
    int lIndex;

    for(int i=0; i<size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            sIndex = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
            lIndex = i;  
            }
    }
    cout << "\nSmallest is: " << smallest << " at index: " << sIndex << endl;
    cout << "Largest is: " << largest << " at index: " << lIndex << endl;
    return 0;
}