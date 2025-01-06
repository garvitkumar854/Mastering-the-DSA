// Linear Search {Algorithm}
/*
arr[] = {4,2,7,8,1,2,5}     target = 8
returns = index of 8 if exists otherwise -1 {invalid index}
*/

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1; // Value not found
}

#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,2,7,8,1,2,3};
    int size = 7;
    int target = 8;
    cout << linearSearch(arr,size,target) << endl;
    return 0;
}